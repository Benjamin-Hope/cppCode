#include <iostream>

//we can also define default values in functions

//parameters without default arguments MUST come first

#include "func.h"
//We define the DEFAULT values over the header function

/*In a process known as function overloading, you can give 
multiple C++ functions the same name.Just make sure at least
one of these conditions is true:

Each has different type parameters.
Each has a different number of parameters.*/

int main() {

	// coffee black
	//std::cout << make_coffee(false, false); 
	//fix:
	std::cout << make_coffee(false, false);


	// coffee with milk
	//std::cout << make_coffee(true, false);
	//fix:
	std::cout << make_coffee(true);

	// coffee with milk and sugar
	std::cout << make_coffee(true, true);

	// coffee with sugar
	std::cout << make_coffee(false, true);

}