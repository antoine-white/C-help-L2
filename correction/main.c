#include "tree.h"
#include "list.h"

int main(int argc, char const *argv[])
{
    /*tree t = create_root();
    t = insert_left(t,5);
    t = insert_left(t,2);
    t = insert_right(t,7);
    t = insert(t,10);
    t = insert(t,1);
    t = insert(t,3);
    t = insert(t,6);
    display_prefixe(stdout,t);
    destroy(t);*/
    
    list l = create_list();
    l = insert_back(l,5);
    l = insert_back(l,6);
    l = insert_back(l,7);
    l = insert_front(l,4);
    l = insert_front(l,3);
    l = insert_front(l,2);
    l = insert_front(l,1);
    l = insert_back(l,8);
    display(stdout,l);
    tree t = create_tree_from_list(l);
    display_prefixe(stdout,t);
    destroy_list(l);
    destroy(t);
    return 0;
}
