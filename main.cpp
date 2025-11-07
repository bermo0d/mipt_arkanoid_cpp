#include <FL/Fl.H>
#include "Graph_lib/Graph.h"
#include "Graph_lib/Window.h"

using namespace Graph_lib;


int main() {
    Graph_lib::Window window(Point{500, 200}, 800,800, "arkanoid");

    gui_main();
}

