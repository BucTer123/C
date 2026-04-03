#include <gtk/gtk.h>
#include <string.h>
#include <stdlib.h>
#include "calculator_button_callback.h"

void calculator_button_callback() {
    calculator_button_callbackz();
}

void leave_button_callback() {
    g_signal_connect(window1, "destroy", G_CALLBACK(gtk_main_quit), NULL)
}

int main(int argc, char* argv[]) {
    char *qwerty = malloc(1000);
    gtk_init(argc, argv);

    GtkWidget *window1, *input1, *input2, *input3, button1, button2;

    window1 = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    gtk_window_set_title(GTK_WINDOW(window1), "Calculator");
    gtk_window_set_default_size(GTK_WINDOW(window1), 800, 600);

    input1 = gtk_entry_new();
    gtk_entry_set_placeholder_text(GTK_ENTRY(input1), ">");

    input2 = gtk_entry_new();
    gtk_entry_set_placeholder_text(GTK_ENTRY(input2), ">");

    input3 = gtk_entry_new();
    gtk_entry_set_placeholder_text(GTK_ENTRY(inpu3), ">");

    button1 = gtk_button_new_with_label("GO");
    g_signal_connect(button1, "clicked", G_CALLBACK(calculator_button_callback));

    button2 = gtk_button_new_with_label("Leave");
    g_signal_connect(button2, "clicked", G_CALLBACK(leave_button_callback), NULL);

    gtk_widget_show_all();
    gtk_main();
}