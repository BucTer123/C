#include <cfltk2/cfl.h>
#include <cfltk2/cfl_window.h>
#include <cfltk2/cfl_output.h>

int main(void) {
    Fl_init_all();
    Fl_Window *win = Fl_Window_new(800, 600, NULL);
    Fl_Output *txt = Fl_Output_new(10, 20, 30, 40, "Welcome!");
    Fl_Window_end(win);
    Fl_Window_show(win);
    return Fl_run();
}
