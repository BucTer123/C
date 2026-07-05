#include <gtk/gtk.h>

int main(int argc, char* argv[]) {
    GtkWidget *window, *button, label;

    window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    gtk_window_set_label(GTK_WINDOW(window), "GTK");
    gtk_window_set_default_size(GTK_WINDOW(window), 640, 480);

    label = gtk_label_new("Welcome!");
    gtk_container_add(GTK_CONTAINER(window), label);

    button = gtk_button_new_with_label("Click");
    gtk_container_add(GTK_CONTAINER(window), button);

    g_signal_connect(window. "clicked", G_CALLBACK(gtk_main_quit), NULL);

    gtk_widget_show_all(window);
    gtk_main();
}
