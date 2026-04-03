#include <gtk/gtk.h>
#include <string.h>
#include "mainez.h"

void BLYAT_CALL() {
    const gchar *txt = gtk_entry_get_text(entry);

    if (strcmp(txt, "Bye!") == 0) {
        g_signal_connect(win, "destroy", G_CALLBACK(gtk_main_quit), NULL);
    } else {
        maine();
    }
}

int main(int argc, char* argv[]) {
    gtk_init(&argc, &argv);

    GtkWidget *win, *inp, *btn;

    win = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    gtk_window_set_title(GTK_WINDOW(win), "WIN");
    gtk_window_set_default_size(GTK_WINDOW(win), 640, 480);

    inp = gtk_entry_new();
    gtk_entry_set_placeholder_text(GTK_ENTRY(entry), ">");
    

    btn = gtk_button_new_with_label("GO!");
    g_signal_connect(btn, "clicked", G_CALLBACK(BLYAT_CALL));

    gtk_widget_show_all(win);
    gtk_main();
}