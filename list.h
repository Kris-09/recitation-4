/*
 * This file contains basic linked list declarations.  Only a forward
 * declaration of the list structure is included, thus preventing users of the
 * list structure from accessing its internals.
 */

#ifndef __LIST_H
#define __LIST_H

struct list;

struct list* list_setup();
int list_next_and_get_value (struct list* list);
int has_next(struct list* list);


#endif
