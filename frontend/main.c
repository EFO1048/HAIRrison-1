#include <gtk/gtk.h>

// compile:
// gcc `pkg-config --cflags gtk+-3.0` -o main main.c `pkg-config --libs gtk+-3.0`

// open window:
// ./main


static void activate (GtkApplication* app, gpointer user_data) {
    GtkWidget *window;
    GtkWidget *button;
    GtkWidget *button_box;

    window = gtk_application_window_new(app);
    gtk_window_set_title (GTK_WINDOW (window), "Window");
    gtk_window_set_default_size (GTK_WINDOW (window), 800, 800);
    // gtk_widget_show_all (window);


    button_box = gtk_button_box_new(GTK_ORIENTATION_HORIZONTAL);
    gtk_container_add (GTK_CONTAINER (window), button_box);

    button = gtk_button_new_with_label ("HAIRrison: The Pony Pal");
    g_signal_connect (button, "clicked", G_CALLBACK )
}

// main single window
int main (int argc, char **argv) {
    GtkApplication *app;
    int status;

    // compilation stuff
    app = gtk_application_new("org.gtk.example", G_APPLICATION_DEFAULT_FLAGS);
    g_signal_connect(app, "activate", G_CALLBACK (activate), NULL);
    status = g_application_run(G_APPLICATION (app), argc, argv);
    g_object_unref (app);

    return status;
}