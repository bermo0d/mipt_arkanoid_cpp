#ifndef ARKANOID_GAMESCREEN_H
#define ARKANOID_GAMESCREEN_H

#include "FL/Fl_Group.H"
#include "Platform.h"
#include "Ball.h"
#include "BlocksMatrix.h"

class ArkanoidWindow;

class GameScreen : public Fl_Group {
public:
    GameScreen(int x, int y, int w, int h, ArkanoidWindow* p);

    void attach(Shape& s) { shapes.push_back(&s); }
    void detach(Shape& s);

    void updateFrame(void* userdata);

protected:
    void draw() override;


private:
    ArkanoidWindow* parent;
    std::vector<Shape*> shapes;

    Platform platform;
    Ball ball;
    BlocksMatrix blocks;

    int handle(int event) override;

    bool collideBallWithPlatform() const;
    bool collideBallWithWalls() const;
    bool collideBallWithRoof() const;
    bool collideBallWithFloor() const;

    bool gameIsStarted = false;
    bool gameIsFinished = false;
};


#endif //ARKANOID_GAMESCREEN_H
