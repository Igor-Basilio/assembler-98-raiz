#ifndef SCREENS_H
#define SCREENS_H

#include <gtk/gtk.h>
#include "architecture.h"
#include "types.h"

void change_to_console(GtkWidget *widget, GtkStack *stack);
void change_to_gui(GtkWidget *widget, GtkStack *stack);
void change_to_main(GtkWidget *widget, GtkStack *stack);

#endif // SCREENS_H
