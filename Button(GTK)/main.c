#include <gtk/gtk.h>

void button_callback() {
    exit(0);
}

int main(int argc, char** argv) {
    gtk_init(&argc, &argv);
    
    GtkWidget *window, *button;

    window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    gtk_window_set_label(GTK_WINDOW(window), "Button");
    gtk_window_set_default_size(GTK_WINDOW(window), 800, 600);

    button = gtk_button_new_with_label("Click");
    gtk_container_add(GTK_CONTAINER(window), button);

    GtkWidget *label = gtk_label_new("Welcome!");
    gtk_container_add(GTK_CONTAINER(window), label);

    GtkWidget *label2 = gtk_label_new("Click button");
    gtk_container_add(GTK_CONTAINER(window), label2);

    GtkWidget *fixed = gtk_fixed_new();

    gtk_fixed_put(GTK_FIXED(fixed), label, 400, 10);
    gtk_fixed_put(GTK_FIXED(fixed), label2, 400, 20);
    gtk_fixed_put(GTK_FIXED(fixed), button, 400, 30);
    g_signal_connect(button, "clicked", button_callback);

    gtk_widget_show_all(window);

    gtk_main();
    return 0;
}
