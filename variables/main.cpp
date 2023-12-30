#include<iostream>

int main() {

	int score = 20192; // create integer variable

	/*there are also arithmetic opperations
	+ addition
	. subtraction
	* multiplication
	/ division
	% modulo (remainder of division)
	*/

	score = score / 2; 
	int input; //variable to save input

	//print the value
	std::cout << score << "\n"; // this can perform multiple outs sequentially

	//we can get input with the "cin" which is a character input ">>" shows where the info goes:
	std::cout << "write a number as input integer:\n";
	std::cin >> input; //the variable need to be first defined;
}