#include <gtk-3.0/gtk/gtk.h>
#include <stdbool.h>

int main(int argc, char **argv)
{
    /* code */
    gtk_init(&argc, &argv);

    GtkWidget *window;
    GtkWidget *box;

    GtkWidget *button1;
    GtkWidget *button2;
    
    window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    box = gtk_box_new(GTK_ORIENTATION_HORIZONTAL, 0);

    button1= gtk_button_new_with_label("button1");
    gtk_widget_set_size_request(GTK_WIDGET(button1), 500, 500);
    button2= gtk_button_new_with_label("button2");

    // gtk_container_add(GTK_CONTAINER(window), button1);
    // gtk_container_add(GTK_CONTAINER(window), button2);

    gtk_container_add(GTK_CONTAINER(window), box);

    gtk_box_pack_start(GTK_BOX(box), button1, TRUE, TRUE, 50);
    gtk_box_pack_start(GTK_BOX(box), button2, TRUE, TRUE, 50);

    bool isHomo = gtk_box_get_homogeneous(GTK_BOX(box));
    printf("Is homogeneous? %d\n", isHomo);
    gtk_widget_show_all(window);

    gtk_box_set_homogeneous(GTK_BOX(box), TRUE);
    printf("Is homogeneous after setter call? %d\n", isHomo);

    gtk_main();
    return 0;
}
