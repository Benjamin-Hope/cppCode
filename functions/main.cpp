//ther we will look over the functions and try to write DRY code
//DRY == Dont Repeat Yourself

#include<iostream>
//There are some built in functions from some headers:
#include <cmath> //math functions
#include <vector> //vectors

/*The void is a way of calling functionsand it is
THE POINT OF NO RETURN*/

void my_func() {
	std::cout << "soemthing\n";
}

//we can also have function types such as int, bool, string, etc::
bool my_bool() {
	bool value = true;

	return value; //the return has to be the same type as the function
}

//we can also create a vector function
std::vector<int> monVector(int num) {
	std::vector<int> multiples;

	for (int i = 1; i <= 3; i++) {
		multiples.push_back(num * i);
	}

	return multiples;
}

//we can also define a function with an argument or multiple arguments:
void funky(std::string my_string) { 
	/*we use std::strinb because string is not part of
	the C++, but of the standard library*/
	std::cout << my_string;
	/*this is another way to do a continuous subrtraction :
	count -= 1; subtracts 1
	*/
}

int main() {
	// This seeds the random number generator:
	srand(time(NULL));

	int rand_num = rand() % 15; // generates a number between 0 and 15

	std::cout << rand_num << "\n";

	my_func();
}