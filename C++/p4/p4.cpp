//PROBLEM 4: LARGEST PALINDROME PRODUCT
/*
A palindromic number reads the same both ways. The largest palindrome made from the 
product of two 2-digit numbers is 9009 = 91 × 99.

Find the largest palindrome made from the product of two 3-digit numbers.
*/


#include <iostream>
#include "math.h"
#include <vector>

bool isPalindrome(int num)
{
	std::vector<int> tempNumberContainer;
	int original_number = num;
	int backwards_number = 0;

	//Inserts each digit in reverse order inside vector
	while (num > 0)
	{
		tempNumberContainer.insert(tempNumberContainer.begin(), num % 10);
		num = num / 10;
	}

	//Creates the backwards number 
	for (int i = 0; i < tempNumberContainer.size(); i++)
	{
		int digit_place = 1;
		for (int k = 0; k < i; k++){
			digit_place *= 10;
		}
		backwards_number += tempNumberContainer[i] * digit_place;	
	}

	if (original_number == backwards_number){
		return true;
	}
	else return false;
}

int main(){
	
	/*PALINDROME TEST
	int a = 1;
	while (a != 0)
	{
		std::cout << "Enter number: " << std::endl;
		std::cin >> a;
		if (isPalindrome(a))
		{
			std::cout << "Palindrome!" << std::endl;
		}
		else
		{
			std::cout << "Nope!" << std::endl;
		}
	}*/

	int first_number = 999;
	int second_number = 999;
	int palindrome = 0;



	while (first_number>=0)
	{
		while (second_number>=0)
		{
			int temp = first_number*second_number;
			if ((isPalindrome(temp))&(temp>palindrome)){
				palindrome = temp;
			}
			second_number--;
		}

		first_number--;
	}

	std::cout << "The largest palindrome is " << palindrome << std::endl;
	
	std::cin.get();
	return 0;


}