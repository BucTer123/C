#include <gtk/gtk.h>
#include "note_gui.h"

void note_callbck() {
    nt();
}

int main(int argc, char* argv[]) {
    GtkWidget *wind *butt;

    wind = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    gtk_window_set_title(GTK_WINDOW(wind), "Welcome_Window!");
    gtk_window_set_default_size(GTK_WINDOW(wind), 800, 600);

    butt = gtk_button_new_with_label("Go to note");
    gtk_container_add(GTK_CONTAINER(wind), butt);
    
    g_signal_connect(butt, "clicked", G_CALLBACK(note_callbck));

    gtk_widget_show_all(wind);
    gtk_main();
}