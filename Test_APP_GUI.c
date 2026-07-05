#include <gtk/gtk.h>

int main(int argc, char* argv[]) {
    GtkWidget *window, *button, label, fixed;

    window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    gtk_window_set_label(GTK_WINDOW(window), "GTK");
    gtk_window_set_default_size(GTK_WINDOW(window), 640, 480);

    fixed = gtk_fixed_new();

    label = gtk_label_new("Welcome!");
    gtk_container_add(GTK_CONTAINER(window), label);

    button = gtk_button_new_with_label("Click");
    gtk_container_add(GTK_CONTAINER(window), button);

    gtk_fixed_put(GTK_FIXED(fixed), label, 320, 10);
    gtk_fixed_put(GTK_FIXED(fixed), button, 320, 20);

    g_signal_connect(window. "clicked", G_CALLBACK(gtk_main_quit), NULL);

    gtk_widget_show_all(window);
    gtk_main();
}
