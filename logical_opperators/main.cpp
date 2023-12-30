#include <iostream>

int main() {
	
	int hunger = true;
	int anger = true;

	//We can use logic opperators in conditionals:
	//I can use && or || or !
	if (hunger && anger) {
		std::cout << "Both true\n";
	}
}