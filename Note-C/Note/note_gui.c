#include <gtk/gtk.h>
#include <stdio.h>
#include <sys/stat.h>
#include "note_gui.h"

void saved_nana() {
    const char *txt2 = gtk_entry_get_text(inp2);

    FILE *file = fopen(inp2, "w");

    wind4 = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    gtk_window_set_default_size(GTK_WINDOW(wind4), 640, 400);
    gtk_window_set_label(GTK_WINDOW(wind4), "WINDOW!");

    GtkWidget *text_from_file = gtk_new_label(&file);
    g_container_add(GTK_CONTAINER(wind4), text_from_file);
    
    gtk_widget_show_all(wind4);
}

void save_note() {
    const char *text = gtk_entry_get_text(inp);

    GtkWidget *wind3 = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    gtk_window_set_default_size(GTK_WINDOW(wind3), 640, 400);
    gtk_window_set_title(GTK_WINDOW(wind3), "WINDOW!");
    
    GtkWidget *inp2 = gtk_entry_new();
    gtk_entry_set_placeholder_text(GTK_ENTRY(inp2), "Name :");
    g_container_add(GTK_CONTAINER(wind3), inp2);

    GtkWidget *butt3 = gtk_button_new_with_label("Go");
    gtk_container_add(GTK_CONTAINER(wind3), butt3);

    g_signal_connect(butt3, "clicked", G_CALLBACK(saved_nana));

    gtk_widget_show_all(wind3);
}

void nt() {
    GtkWidget *wind2, *inp, *butt2;

    wind2 = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    gtk_window_set_default_size(GTK_WINDOW(wind2), 640, 400);
    gtk_window_set_title(GTK_WINDOW(wind2), "Note");

    inp = gtk_entry_new();
    gtk_entry_set_placeholder_text(GTK_ENTRY(inp), "> ");

    butt2 = gtk_button_new_with_label("Save");
    gtk_container_add(GTK_CONTAINER(wind2), butt2);

    g_signal_connect(butt2, "clicked", G_CALLBACK(save_note));

    gtk_widget_show_all(wind2);
    gtk_main();
}
