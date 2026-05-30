#include<iostream>
#include"log.h"

int multiply(int a, int b)
{
	return a * b;
}


int main()
{	

	std::cout<< "Hello World!" << std::endl;

	int result = multiply(20, 7);

	std::cout << result << std::endl;

	//using header file to print message  from a function defined in another file.

	Log("Hello World from Log");
}

// printing the basic hello world message and then making a function to understand the syntax and use of function.