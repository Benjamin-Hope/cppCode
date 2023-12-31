/*Global variables are defined outside the main fucntion and can
be accessed all the time.
While local variables are defined in functions and cannot be accessed
anywhere besides the function.*/

#include <iostream>
#include "functions.h"

/*To use our fuctions over other files we need to define the at the top*/

int integer(int number); //this imports the functions from another file

//This SHOULD be the function in THE OTHER FILE:
int integer(int number) {
	return number * 2; //This is just an example
}

/*THE CODE SHOULD BE COMPILED WITH :
g++ main.cpp otherfile.cpp
*/

/*
Well, you can take those function declarations and move them all over to a 
header file, another file — usually with the same name as the file with all
of the function definitions — with the extension .hpp or .h. For example,
if your function definitions are in my_functions.cpp, the corresponding header
file would be my_functions.hpp or my_functions.h.
*/

/*
As it turns out, with headers, you can just add #include "my_functions.hpp" 
to the very top of main.cpp.
*/

/*An example of these last 2 comments is performed in this file. Explanation:
Define the function in "functions.cpp" and declare in "functions.h" (or ".hpp")
and then include the header inside the "main.cpp" to access it. NO NEED TO
REDEFINE THE FUNCTIONS.
Remember fot this to work we need to compile the two functions.
*/


int main() {

}