//PROBLEM 3: LARGEST PRIME FACTOR
/*
The prime factors of 13195 are 5, 7, 13 and 29.
What is the largest prime factor of the number 600851475143 ?
*/


#include <iostream>

bool isPrime(int number)
{
	bool TEMP = true;
	if (number == 2){
		return TEMP;
	}
	else if (!(number % 2)|(number==1)) //if the number is even then is not prime
	{
		TEMP = false;
		return TEMP;
	}
	else
	{
		for (int i = 2; i <= (number / 2); i++)
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
	
	std::cin.get();
	return 0;
}



