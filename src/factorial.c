// # Name: Chelsea Parlett & Chris Watkins
// # Student ID: 2298930 & 1450263
// # Email: parlett@chapman.edu & watki115@mail.chapman.edu
// # Course: CS510 Fall 2017
// # Assignment: Classwork 9
// ###

/* An include literally copies and pastes the contents of the indicated file.
 * A .h file is called a "header" file for the code.
 * Usually, its primary purpose is to specify type signatures so all code below
 * knows what the correct types of all functions and variables are even before
 * their definitions appear. This prevents ordering issues during compilation.
 */
#include "factorial.h"

/* Definition for "factorial"
 * Note: the type must match the type specified within the header file above
 */
int main(int){
int factorial(int n) {
    /* By convention in C, all local variables must be type-defined at the top
     * of each function. This includes all iteration dummy variables. */
    int fac = n;
    if (fac == 0) {
        return 1;
    }
    while (n > 1) {
        /* Note: The shorthand syntax
         * var-- reads the contents of an integer variable, then decrements
         * --var decrements the contents of an integer variable, then reads it
         */
        n--;
        // a *= b is equivalent to a = a * b
        fac *= n;
    }
    
    /* The type of the returned value must match the type indicated before the
     * function name above (here "int")
     */
    return fac;

}}

