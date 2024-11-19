// November19_2024-COSC2436.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using std::cout; 

int main()
{
	cout << "Hello world\n";

	main(); //the main function prints "Hello world" and then calls itself (without end)
	//infinite recursion (results in stack overflow error) 
	
}
