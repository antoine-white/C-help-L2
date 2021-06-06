#ifndef COMMON_H_
#define COMMON_H_

// the goal here is not to have a solution 
// wich have the ability to do multiple type
// container/data structure (like cpp template)
// but to add another level of abstraction that
// will eventually help refactoring 

// if you want ot do genrics anyway 
// use macro preprocessing to compile
// with different value_type alias 
// and then figures out how to call them
// at linking time (Dll maybe)
// just do not do void* casting all 
// over the place

// creating alias so it'll be easier to refactor
typedef int value_type;

// this is far from perfect...
#define VALUE_TYPE_PRINTF_CHAR "%d\n" 

#endif