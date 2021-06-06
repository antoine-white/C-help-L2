#ifndef LIST_H_
#define LIST_H_

#include "stdio.h"

#include "common.h"

// opaque pointer
// see https://en.wikipedia.org/wiki/Opaque_pointer
struct list_;

// alias and pointer hidding 
// not necessary but add another level of abstraction
typedef struct list_* list;

/** OPERATIONS **/
list create_list();
void destroy_list(list);
list insert_back(list,value_type);
list insert_front(list,value_type);
_Bool is_empty(list);

/** "GETTERS" **/
list next(list);
value_type value_list(list);

/** Utility fonctions **/
void display(FILE *, list);


#endif ///list.h header guard end