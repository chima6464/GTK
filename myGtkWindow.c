#include <gtk-3.0/gtk/gtk.h>

int main(int argc, char **argv)
{
    gtk_init(&argc, &argv);
    const char* title;
    int width, height;

    //gtk code comes here
    GtkWidget *window;

    window = gtk_window_new(GTK_WINDOW_TOPLEVEL);

    gtk_window_set_title(GTK_WINDOW(window), "HENRY");
    gtk_window_set_default_size(GTK_WINDOW(window), 500, 400);
    gtk_window_set_position(GTK_WINDOW(window), GTK_WIN_POS_CENTER);
    gtk_window_set_resizable(GTK_WINDOW(window), TRUE);
    gtk_window_set_decorated(GTK_WINDOW(window), TRUE);
    gtk_window_maximize(GTK_WINDOW(window));
    //Create a callback
    g_signal_connect(window, "destroy", G_CALLBACK(gtk_main_quit), NULL);

    title = gtk_window_get_title(GTK_WINDOW(window));

    printf("Title name is: %s\n", title);

    gtk_window_get_size(GTK_WINDOW(window), &width, &height);
    printf("Width: %d\tHeight: %d\n", width, height);

    printf("GTK Window Decorated? %d\n", gtk_window_get_decorated(GTK_WINDOW(window)));
    printf("GTK Window Maximized? %d\n", gtk_window_is_maximized(GTK_WINDOW(window)));
    printf("GTK Window Active? %d\n", gtk_window_is_active(GTK_WINDOW(window)));
    gtk_widget_show_all(window);

    gtk_main();
    return 0;
}
