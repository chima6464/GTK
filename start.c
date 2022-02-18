#include <gtk-3.0/gtk/gtk.h>

int main(int argc, char **argv)
{
    gtk_init(&argc, &argv);

    //gtk code comes here
    GtkWidget *window;

    window = gtk_window_new(GTK_WINDOW_TOPLEVEL);

    //Create a callback
    g_signal_connect(window, "destroy", G_CALLBACK(gtk_main_quit), NULL);

    gtk_widget_show_all(window);

    gtk_main();
    return 0;
}
