#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<iostream>
////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////

#include "GameAttributeGroup.hpp"

using namespace std;

//void SafeIncrementMistakeCounter(byte_t* mistakeCounter)
//{
//	if (*mistakeCounter < 10)
//		*mistakeCounter++;
//}

///////////////////////////////////////
void Hangman(void);

////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////
//int thatFunction(int argc, char* argv[])
//int main(int argc, char* argv[])
//{
//
//}
	//GameAttributeGroup gag;
	//gag.Debug();		//= method,  code that belongs to the object of a class. Debug prints out content of GameAttributeGroup
	//for (int i = 0; i < 15; i++)
	//	gag.SafeIncrementMistakeCounter();

	//gag.Debug();

	//byte_t mistakeCounter = gag.GetCurrentMistakeCounter();
	//std::cout << "Your number of mistakes is: " << (int)mistakeCounter << std::endl;

	//gag.Debug();

	//byte_t successCounter = gag.GetCurrentSuccessCounter();
	//std::cout << "Your number of successful guesses is: " << (int)successCounter << std::endl;

	//
	// gag.SetSecretWord("secret");
	// gag.Debug();

//	 GameAttributeGroup a;
//	 GameAttributeGroup b;
//
//	 bool res = a < b;
//	 a.Debug();
//	 b.Debug();
//
//	 if (false == res) {
//		 std::cout << "A is  NOT less than B" << std::endl;
//	 }
//	 else {
//		 std::cout << "A is less or equal to  than B" << std::endl;
//	 }
//}



//	double a;
//
//	if (argc < 2)
//	{
//		printf(" Please RTFM\r\n");
//		return -1;
//	}
//
//	// we compare our input against the val0u
//
//		int res = strncmp("0.0", argv[1], 3);
//
//	// if our input doesnt match the string"0.0", it means that we have addressed the confusing corner case of 
//	// atof returning 0.0 whe the input is 0.0, and there fore we know that if we now use 
//	// atof and we get back 0.0 and its now and error message and not the result of the conversion 
//	if (0 != res)
//	{
//		double temporary_conversion = atof(argv[1]);
//		if (0.0 != temporary_conversion)
//		{
//			printf("Conversion successful -  continue\r\n");
//			a = temporary_conversion;
//		}
//
//		else {
//			printf("You didn't input a valid number. Aborting\r\n");
//			return -1;
//		}
//
//
//	}
//
//	else {
//		a = 0.0;
//		printf("You actually meant 0.0\r\n");
//	}
//
//
//	/**
//	* if a <= 1, print too low
//	* if a is comprised between 2 and 5 print getting warmer
//	* if a is comprised between 7 and 9 print almost there
//	* else print "you are lost"
//	**/
//
//	if (a <= 1)
//	{
//		printf("too low\r\n");
//	}
//	else if ((a >= 2) && (a <= 5))
//	{
//		printf("Getting Warmer\r\n");
//	}
//	else if ((a >= 7) && (a <= 9))
//	{
//		printf("Almost there\r\n");
//	}
//	else
//	{
//		printf("You're lost");
//	}
//	return 0;
//}
//
int main(int argc, char* argv[])
{	
	Hangman( );
	//thatFunction( argc, argv );
	return 0;
}



////sizeof(int)
//{
//	printf("size of int (for my pc) = %i\r\n", sizeof(int));
//	printf("size of size_t (for my pc) = %i\r\n", sizeof(size_t));
//	printf("size of double (for my pc) = %i\r\n", sizeof(double));
//
//	return 0;