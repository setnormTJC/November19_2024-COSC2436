// Nov 21 - demoing quicksort.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#include"C:/Users/Work/Downloads/quickSort.h"

#include"C:/Users/Work/Desktop/myCppLibrary/algos/bubbleSort.h"

#include<random> 

void printVec(const std::vector<int>& nums)
{
    for (const auto& num : nums)
    {
        std::cout << num << " ";
    }
    std::cout << "\n";
}

int main()
{
    const int N = 10; 
    
    const int BIG_N = 100'000'000; //"big 'un"

    std::mt19937 engine{ (unsigned int)time(0) }; //a preferable alternative to rand()
    std::uniform_int_distribution<int> randomDistribution{ 0, BIG_N };

    vector<int> randomNums; 

    for (int i = 0; i < BIG_N; ++i)
    {
        randomNums.push_back(randomDistribution(engine));
    }

    vector<int> copyOfRandomUnsortedNums = randomNums; 

    //printVec(randomNums); 

    std::cout << "\n\nBegin sorting ...\n";
    std::cin.get(); 

    //using namespace MySpace::Algos; 

    //quickSort
    MySpace::Algos::quickSort(randomNums, 0, N - 1); 


    std::cout << "Was the quick sort algo successful?\n";
    //printVec(randomNums);
    std::cout << "Quick sort finished!\n";


    //how does my quickSort compare to my bubble sort? 
    MySpace::Algos::bubbleSort(copyOfRandomUnsortedNums, N);

    std::cout << "\n\n\Was the BUBBLE sort also successful?\n";
    //printVec(copyOfRandomUnsortedNums);
    std::cout << "Bubble sort finished\n";



}
