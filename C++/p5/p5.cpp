//PROBLEM 5: SMALLES MULTIPLE
/*
2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.

What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
*/


#include <iostream>

int main()
{
	int number = 1;

	while (!(number % 20 == 0)){
		number += 20;
	
	}



	std::cin.get();
	return 0;
}