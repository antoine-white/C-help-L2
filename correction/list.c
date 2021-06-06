#include "list.h"

#include "stdlib.h"

struct list_
{
    value_type value;
    struct list_* next;
};

// ============================================== //
// deliberatly hidden from user
static list new_list(value_type v)
{
    list l = (list)malloc(sizeof(struct list_));
    l->value = v;
    l->next = NULL;
    return l;
}

// ============================================== //
list create_list()
{
    return NULL;
}
// ============================================== //
void destroy_list(list l)
{
    if (l != NULL)
    {
        destroy_list(l->next);
        free(l);
    }
}
// ============================================== //
list insert_back(list l, value_type val)
{
    if (l == NULL)
    {
        return new_list(val);
    }
    else
    {
        if (l->next != NULL)
            insert_back(l->next, val);
        else
            l->next = new_list(val);
        return l;
    }
}
// ============================================== //
list insert_front(list l, value_type val)
{
    if (l == NULL)
    {
        return new_list(val);
    }
    else
    {
        list ll = new_list(val);
        ll->next = l;
        return ll;
    }
}
// ============================================== //
_Bool is_empty(list l)
{
    return l == NULL;
}
// ============================================== //
list next(list l)
{
    return l->next;
}
// ============================================== //
value_type value_list(list l)
{
    return l->value;
}

// ============================================== //
void display(FILE *stream, list l)
{
    // you can do it with a while/for 
    // but take care of not loosing 
    // the head of the list ...
    if (l != NULL)
    {
        fprintf(stream,VALUE_TYPE_PRINTF_CHAR,l->value);
        display(stream,l->next);
    }
}
