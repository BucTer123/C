#include <gtk/gtk.h>

void maine() {
    gtk_init(argc, argv);

    GtkWidget *w1 *t1

    w1 = gtk_window_new();
    gtk_window_set_title(GTK_WINDOW(w1), "W!");
    gtk_window_set_default_size(GTK_WINDOW(w1), 640, 480);

    t1 = gtk_label_new("HUI!");

    gtk_widget_show_all(w1);
    gtk_main();
}