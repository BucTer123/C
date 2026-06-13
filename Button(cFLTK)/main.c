#include <cfltk2/cfl.h>
#include <cfltk2/cfl_window.h>
#include <cfltk2/cfl_button.h>

int main(void) {
    Fl_init_all();
    Fl_Window *win = Fl_Window_new(800, 600, NULL);
    Fl_Button *btn = Fl_Button_new(10, 20, 30, 40, "Click");
    Fl_Window_end(win);
    Fl_Window_show(win);
    return Fl_run();
}