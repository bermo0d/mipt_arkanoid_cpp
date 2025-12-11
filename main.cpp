#include <FL/Fl.H>
#include "Graph_lib/Graph.h"
#include "Graph_lib/Window.h"
#include "ArkanoidWindow.h"
#include "Platform.h"
#include <iostream>

using namespace Graph_lib;


int main() {
    ArkanoidWindow window{Point{500, 200}, 800, 800, "arkanoid"};

    return Fl::run();

}

