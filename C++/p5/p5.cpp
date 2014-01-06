//PROBLEM 5: SMALLES MULTIPLE
/*
2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.

What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
*/


#include <iostream>
//Using 2520, there's not need to check for 1-10, 12, 14, 15, 18, and 20.

int main()
{
	long long number = 2520;


	while (!(number % 19 == 0))
	{
		std::cout << "LVL19 - " << number << std::endl;
		if (!(number % 19 == 0) && (number % 17 == 0))
		{
			number += 2520;
		}
		while (!(number % 17 == 0))
		{
			std::cout << "LVL17 - " << number << std::endl;
			if (!(number % 17 == 0) && (number % 16 == 0))
			{
				number += 2520;
			}
			while (!(number % 16 == 0))
			{
				std::cout << "LVL16 - " << number << std::endl;
				if (!(number % 16 == 0) && (number % 13 == 0))
				{
					number += 2520;
				}
				while (!(number % 13 == 0))
				{
					std::cout << "LVL13 - " << number << std::endl;
					if (!(number % 13 == 0) && (number%11==0))
					{
						number += 2520;
					}
					std::cout << "LVL11 - " << number << std::endl;
					while (!(number % 11 == 0))
					{
						number += 2520;
					
					}

				}
			}
		}

	
	}

	std::cout << "ANSWER is " << number << std::endl;

	//CORRECT ANSWER: 232792560
	std::cin.get();
	return 0;
}
