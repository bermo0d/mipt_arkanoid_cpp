#include <FL/Fl.H>
#include "Graph_lib/Window.h"
#include "ArkanoidWindow.h"
#include "backend/Platform.h"
#include "frontend/PlatformShape.h"
#include <iostream>

using namespace Graph_lib;


int main() {

    ArkanoidWindow window{Point{500, 200}, 800, 800, "arkanoid"};

    Platform platform{350, 500, 100, 20};
    PlatformShape platformShape{platform};

    window.platform = &platformShape;
    window.attach(platformShape);

    return Fl::run();

}

