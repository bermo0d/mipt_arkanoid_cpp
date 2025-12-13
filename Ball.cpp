#include "Ball.h"

Ball::Ball(Point xy, int rr) : Circle(xy, rr), prevPos(xy) {

}

int Ball::get_dx() const {
    return dx;
}

int Ball::get_dy() const {
    return dy;
}

void Ball::set_dx(int v) {
    dx = v;
}

void Ball::set_dy(int v) {
    dy = v;
}

void Ball::move(int dx, int dy) {
    prevPos = point(0);
    Shape::move(dx, dy);
}
