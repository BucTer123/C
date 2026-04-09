#include <gtk/gtk.h>
#include <time.h>

void exict() {
    g_signal_connect(win, "destroy");
    exit(0);
}

int main(int argc, char* argv[]) {
    gtk_init(argc, argv);

    GtkWidget *win = gtk_new_window(GTK_TOPLEVEL);
    gtk_window_set_title(GTK_WINDOW(win), "Time now");
    gtk_window_resize(GTK_WINDOW(win), 640, 480);

    time_t now;
    time(&now);

    GtkWidget *text = gtk_new_label(ctime(&now));

    GtkWidget *btn = gtk_new_button_with_label("Leave");
    gtk_container_add(GTK_CONTAINER(win), btn);

    g_signal_connect(btn, "clicked", G_CALLBACK(exict));
    gtk_main();
}