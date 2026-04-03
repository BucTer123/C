#include <gtk/gtk.h>
#include <float.h>
#include <time.h>
#include <math.h>
#include <string.h>
#include <stdio.h>

void calculator_button_callbackz() {
    float a = gtk_entry_get_text(input1);
    float b = gtk_entry_get_text(input2);
    const c = gtk_entry_get_text(input3);

    if (strcmp(c, "+") == 0) {
        float plus = a + b;
        GtkWidget *new = gtk_label_new(plus);
    }
    if (strcmp(c, "-") == 0) {
        float minus = a - b;
        GtkWidget *new = gtk_label_new(minus);
    }
    if (strcmp(c, "*") == 0) {
        float multi = a * b;
        GtkWidget *new = gtk_label_new(multi);
    }
    if (strcmp(c, "/") == 0) {
        if (b == 0) {
            GtkWidget *err = gtk_label_new("ERROR!: Divide by zero!");
        } else {
            float divide = a / b;
            GtkWidget *new = gtk_label_new(divide);
        }
    }
    if (strcmp(c, "sn") == 0) {
        float sina = sin(a);
        float sinb = sin(b);

        GtkWidget *sin1 = gtk_label_new(sina);
        GtkWidget *sin2 = gtk_label_new(sinb);
    }
    if (strcmp(c, "cs") == 0) {
        float cosa = cos(a);
        float cosb = cos(b);

        GtkWidget *cos1 = gtk_label_new(cosa);
        GtkWidget *cos2 = gtk_label_new(cosb);
    }
    if (strcmp(c, "time_now") == 0) {
        time_t now;
        time(&now);

        GtkWidget *nwq = gtk_label_new(ctime(&now));
    }
}
