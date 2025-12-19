#include "ArkanoidWindow.h"
#include "Graph_lib/Window.h"
#include "Settings.h"

using namespace Graph_lib;


ArkanoidWindow::ArkanoidWindow(Point xy, int w, int h, const std::string &title) :
        Window{xy, w, h, title} {
    startScreen = new StartScreen{0, 0, w, h, *this};

    add(startScreen);
    init();

    startScreen->show();
}

void ArkanoidWindow::openGameScreen() {
    gameScreen = new GameScreen{0, 0, windowWidth, windowHeight, this};
    add(gameScreen);
    gameScreen->show();
    startScreen->hide();

    Fl::add_timeout(0.016, [](void* userdata) -> void {
        GameScreen* screen = static_cast<GameScreen*>(userdata);
        screen->updateFrame(userdata);
    }, gameScreen);
}

void ArkanoidWindow::openStartScreen() {
    gameScreen->hide();
    remove(gameScreen);
    delete gameScreen;
    gameScreen = nullptr;

    startScreen->show();

}
