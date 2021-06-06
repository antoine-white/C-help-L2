#include "tree.h"
#include "stdlib.h"

struct node_
{
    value_type value;
    struct node_ *left;
    struct node_ *right;
};

// ============================================== //
// deliberatly hidden from user
static tree new_tree(value_type v)
{
    tree t = (tree)malloc(sizeof(struct node_));
    t->value = v;
    t->left = NULL;
    t->right = NULL;
    return t;
}

// ============================================== //
tree create_root()
{
    return NULL;
}

// ============================================== //
void destroy(tree t)
{
    if (t != NULL)
    {
        destroy(t->left);
        destroy(t->right);
        free(t);
    }
}

// ============================================== //
tree insert_left(tree t, value_type val)
{
    if (t == NULL)
    {
        return new_tree(val);
    }
    else
    {
        if (t->left == NULL)
            t->left = new_tree(val);
        else
            insert_left(t->left, val);
        return t;
    }
}

// ============================================== //
tree insert_right(tree t, value_type val)
{
    if (t == NULL)
    {
        return new_tree(val);
    }
    else
    {
        if (t->right == NULL)
            t->right = new_tree(val);
        else
            insert_right(t->right, val);
        return t;
    }
}

// ============================================== //
tree insert(tree t, value_type val)
{
    if (t == NULL)
    {
        return new_tree(val);
    }
    else
    {
        if (t->value > val)
            t->left = insert(t->left, val);
        else
            t->right = insert(t->right, val);
        return t;
    }
}

// ============================================== //
tree left(tree t)
{
    return t->left;
}

// ============================================== //
tree right(tree t)
{
    return t->right;
}

// ============================================== //
value_type value(tree t)
{
    return t->value;
}

// ============================================== //
void display_prefixe(FILE *stream, tree t)
{
    if (t != NULL)
    {
        display_prefixe(stream, t->left);
        fprintf(stream, VALUE_TYPE_PRINTF_CHAR, t->value);
        display_prefixe(stream, t->right);
    }
}

// ============================================== //
tree create_tree_from_list(list l)
{
    if(is_empty(l)){
        return create_root();
    }
    else {
        tree t = new_tree(value_list(l));
        t->left = create_tree_from_list(next(l));
        return t;
    }
}