//Here we will look over buggs

/*There aare 4 types of Buggs:
Compile-Time errors: found by the compiler
Link-time erros: Errors found by the linker when it is trying to combine object files into an executable program.
Run-time errors: Erros found by checks in a running program;
Logic errors: Errors found by the programmer looking for the causes of erroneous results.
*/


/*Here we are going to work with vectors too*/
#include <iostream>
#include <vector> //This is the vector HEADER

int main() {

 //Syntax to CREATE a vector
	//std::vector<type> name;
	std::vector<double> calories_today = {1000, 200, 1928};
	//The vectors are zero indexed
	
	//Lets print index 0:
	
	std::cout << calories_today[0] << "\n";

	//adding and removing elements:
	calories_today.push_back(40); //this adds an element. We need to pay attention to the type
	calories_today.pop_back(); //removes the biggest index value(last value)

	//the .size() returns the size of the vector
	std::cout << calories_today.size() << "\n";


}