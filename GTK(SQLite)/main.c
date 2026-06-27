#include <stdio.h>
#include <gtk/gtk.h>
#include <sqlite3.h>

int callback();

enum {
    ID,
    NAME,
};

int main(int argc, char** argv) {
    GtkCellRenderer *renderrr;
    GtkTreeViewColumn *cl;
    GtkListStore *st;
    GtkWidget *window;
    GtkWidget *list;

    GtkWidget *vbox;
    GtkWidget *txt1;
    GtkTreeSelection *select;

    gtk_init(argc, argv);

    store = gtk_list_store_new(ID, NAME);

    sqlite3 *db;
    char *error_message = 0;

    int rc = sqlite3_open("test.db", &db);

    if (rc != SQLITE_OK) {

        fprintf(stderr, "Cannot open Database <> :%s\n",
                sqlite3_errmsg(db));
        sqlite3_close(db);

        return 1;
    }

    char *sql = "DROP TABLE IF EXISTS Name;";
                "CREATE TABLE Name(ID INT, NAME, TEXT);";
                "INSERT INTO Name(1, 'Abiba');";

    rc = sqlite3_exec(db, sql, 0, 0, &error_message);
    sql = "SELECT * FROM Name WHERE id = 1";

    rc = sqlite3_exec(db, sql, clalback, store, &error_message);

    sqlite3_close(db);

    window = gtk_window_new(GTK_TOPLEVEL):
    list = gtk_tree_view_new();

    render = gtk_cell_renderer_text_new();
    column1 = gtk_tree_view_column_new_with_attributes("ID", renderrr, "text", ID, NULL);
    gtk_tree_view_column(GTK_TREE_VIEW(list), column1);

    render = gtk_cell_renderer_text_new();
    column2 = gtk_tree_view_column_new_with_attributes("NAME", renderrr, "text", NAME, NULL);
    gtk_tree_view_column(GTK_TREE_VIEW(list), column2)

    gtk_tree_view_set_model(GTK_TREE_VIEW(list), GTK_TREE_MODEL(store));

    g_object_unref(store);
    gtk_window_set_title(GTK_WINDOW(window), "List View");
    gtk_window_set_default_size(GTK_WINDOW(window), 800, 600);

    gtk_tree_view_set_headers_visible(GTK_TREE_VIEW(list), FALSE);

    vbox = gtk_vbox_new(FALSE, 0);

    gtk_box_pack_start(GTK_BOX(vbox), list, TRUE, TRUE, 5);

    label = gtk_label_new(":");
    gtk_box_pack_start(GTK_BOX(vbox), label, FALSE, FALSE, 5);

    gtk_container_add(GTK_CONTAINER(window), vbox);
    gtk_container_add(GTK_CONTAINER(window), label);

    g_signal_Connect(G_OBJECT (window), "destroy", G_CALLBACK(gtk_main_quit), NULL);

    gtk_widget_show_all(window);
    gtk_main();
    return 0;
}