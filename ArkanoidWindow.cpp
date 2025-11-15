#include "ArkanoidWindow.h"
#include "Graph_lib/Window.h"
#include "Graph_lib/GUI.h"

using namespace Graph_lib;


ArkanoidWindow::ArkanoidWindow(Point xy, int w, int h, const std::string &title) : Window{xy, w, h, title} {
    init();
}


int ArkanoidWindow::handle(int event) {
    if (event == FL_SHORTCUT) {
        Platform& p = platform->parent();
        switch (Fl::event_key()) {
            case FL_Left:
                  p.setX(p.getX() - 30);
                break;
            case FL_Right:
                p.setX(p.getX() + 30);
                break;
        }
        this->redraw();
        return 1;
    }
    return 0;
}
