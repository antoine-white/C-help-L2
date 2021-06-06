#ifndef TREE_H_
#define TREE_H_

#include "stdio.h"


#include "list.h"
#include "common.h"

// opaque pointer
// see https://en.wikipedia.org/wiki/Opaque_pointer
struct node_;

// alias and pointer hidding 
// not necessary but add another level of abstraction
typedef struct node_* tree;

/** OPERATIONS **/
tree create_root();
void destroy(tree);
tree insert_left(tree,value_type);
tree insert_right(tree,value_type);
// using binary search tree insert mechanism
// witout worring about stability of the tree
tree insert(tree,value_type);

/** "GETTERS" **/
tree left(tree);
tree right(tree);
value_type value(tree);

/** Utility fonctions **/
void display_prefixe(FILE *, tree);

/** cast "static" (in OPP terminology) **/
//the user stil have to free list accordingly
tree create_tree_from_list(list);


#endif ///tree.h header guard end