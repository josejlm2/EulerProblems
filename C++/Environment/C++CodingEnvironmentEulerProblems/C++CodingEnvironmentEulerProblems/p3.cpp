//PROBLEM 3: LARGEST PRIME FACTOR
/*
The prime factors of 13195 are 5, 7, 13 and 29.
What is the largest prime factor of the number 600851475143 ?
*/


#include <iostream>
#include "math.h"

bool isPrime(int number)
{
	bool TEMP = true;

	if (number == 2)// 2 is prime but it's left out by the algorithm
	{
		return TEMP;
	}
	else if (!(number % 2)|(number==1)) //if the number is even then is not prime
	{
		TEMP = false;
		return TEMP;
	}
	else
	{
		for (int i = 2; i <= (number / 2); i++)//if the number is divisible then is not prime
		{
			if (!(number%i))
			{
				TEMP = false;
			}

		}

		return TEMP;
	}

}



int main()
{
	/*  TEST FOR PRIME NUMBER FUNCTION
	int a = 1;
	while (a != 0)
	{
		std::cin >> a;
		if (isPrime(a))
		{
			std::cout << "TRUE" << std::endl;
		}
		else{
			std::cout << "FALSE" << std::endl;
		}
	}
	
	
	
	//APPROACH #1
	long double FINAL_NUMBER = 600851475143;
	long double largestPrime = 0;
	
	for (int i = 1; i < FINAL_NUMBER/2; i++)
	{
		if (fmod(FINAL_NUMBER, i) == 0)
		{
			std::cout <<std::endl<< "FACTOR FOUND: " << i << std::endl;
			if (isPrime(i))
			{
				std::cout << "     #prime!" << std::endl;
				largestPrime = i;
			}
			std::cout << "     ...looking for more factors..." << std::endl;
		}
	}


	
	//APPROACH #2
	long double FINAL_NUMBER = 600851475143;
	long double largestPrime = 0;
	long double counter = floor(FINAL_NUMBER/6);
	std::cout << "     ...looking for factors..." << std::endl;

	while (largestPrime <= 0)
	{

		counter--;
		std::cout << counter<<std::endl;
		if (fmod(FINAL_NUMBER, counter) == 0)
		{
			std::cout << std::endl << "FACTOR FOUND: " << counter << std::endl;
			if (isPrime(counter))
			{
				std::cout << "     #prime!" << std::endl;
				largestPrime = counter;
			}
			std::cout << "     ...looking for more factors..." << std::endl;
		}
		
	}
	*/
	
	std::cout << "ANSWER is " << largestPrime << std::endl;
	std::cin.get();
	return 0;
}



