//this is actully conditionals
#include <iostream>

int main() {

	int grade = 60;

	if (grade > 50) {
		std::cout << "Pass\n";
	}
	else if (grade <= 50) {
		std::cout << "Failed\n";
	}
	else {
		std::cout << "Impossible case\n";
	}
	
	/*There are multiple opperators such as:
	== equal 
	!= different 
	< smaller
	> greater 
	<= less than or equal to
	>= greater than or equal to
	*/

	//We can also simplify these using a switch starement: 

	int number = 7;

	switch (number) { //The switch condition () has some restrictions
	case 1 :
		std::cout << "this is low\n";
		break;
	case 7:
		std::cout << "this is 7\n";
		break;
	default:
		std::cout << "Not 1 or 7\n";
		break;
	}

	/*There are also some logical opperators such as:
	&& is and
	|| is or
	! is not
	*/
}