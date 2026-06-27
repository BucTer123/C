#include <gtk/gtk.h>

int main(int argc, char** argv) {
    gtk_init(&argc, &argv);
    GtkWidget *window = gtk_new_window(GTK_TOPLEVEL);
    gtk_window_set_label(GTK_WINDOW(window), "Output");
    gtk_window_set_default_size(GTK_WINDOW(window), 800, 600);

    GtkWidget *txt = gtk_new_label("Text");
    gtk_container_add(GTK_CONTAINER(window), txt);

    gtk_widget_show_all(window);
    
    gtk_main();
    
    return 0;
}
