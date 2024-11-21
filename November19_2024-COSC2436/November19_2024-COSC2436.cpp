// November19_2024-COSC2436.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

using std::cout; 

int recursivelyCalculateFactorial(int number)
{
	if (number == 1)
	{
		return 1; 
	}

	else
	{
		return number * recursivelyCalculateFactorial(number - 1);
	}
}

int iterativelyCalculateFactorial(int number) //suppose number == 5
{
	int factorial = 1; 

	for (int i = 1; i <= number; i++)
	{
		factorial = factorial * i; //fact = 1 * 1
	}

	return factorial; 
}

using std::vector; 

int getElementCount(vector<int> nums)
{
	if (nums.empty()) //base case
	{ 
		return 0;  //this is not a recursive call (getElementCount is not calling itself here) 
	}

	else //"recursive case" (not upper case) 
	{
		nums.pop_back(); 
		return 1 + getElementCount(nums);
	}
	//return nums.size(); 
}

int recursiveVectorSum(vector<int> nums)
{
	if (nums.size() == 1) //base case
	{
		return nums.back(); 
	}

	else
	{
		int back = nums.back(); //9 the first time ...
		nums.pop_back(); 
		return back + recursiveVectorSum(nums); //nums will be different than it was on the FIRST call of this function 
	}
}

int main()
{
	///cout << recursivelyCalculateFactorial(5) << "\n";
	//cout << "Iterative factorial of 5 is: " << iterativelyCalculateFactorial(5) << "\n";
	//cout << "Hello world\n";

	//while (true)
	//{
	//	cout << "Hello\n";
	//}
	//main(); //the main function prints "Hello world" and then calls itself (without end)
	//infinite recursion (results in stack overflow error) 

	vector<int> nums = { 1, 2, 3, 4, 5 }; //sum of values = 38 
	//cout << getElementCount(nums) << "\n";

	cout << "Is it 15? " << recursiveVectorSum(nums) << "\n";
}
