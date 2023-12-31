/*
A template is a C++ tool that allows programmers
to add data types as parameters
*/

/*
Unlike regular functions, templates are entirely created in header files.
Note: Using templates will slow down the program’s compile time, but
speed up the execution time.
*/

#include<iostream>
#include "func.h"

int main() {
	std::cout << print_cat_ears("number");
}