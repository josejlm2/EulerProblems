#include <iostream>
#include <vector>

//PROBLEM 1: MULTIPLES OF 3 AND 5
// If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. 
//The sum of these multiples is 23. Find the sum of all the multiples of 3 or 5 below 1000.


int main(){

	int three_total = 0;
	int five_total = 0;

	for (int i = 0; i < 1000; i++)	
	{	
		if (i % 3 == 0)
		{
			three_total += i;
		}
		else if (i % 5 == 0) // the else if statement makes sure the common multiples of 3 & 5 don't get counted twice
		{
			five_total += i;
		}
	}

	std::cout << "Total sum of 3 = " << three_total << std::endl;
	std::cout << "Total sum of 5 = " << five_total << std::endl;
	std::cout << "ANSWER is " << three_total + five_total<< std::endl;
	std::cin.get();
	return 0;
}
