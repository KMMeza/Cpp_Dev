#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <iostream>
#include <string>
#include <istream>

using namespace std;
/**
*@file HangMan.cpp
**/
////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////

void Hangman(void)
{
	cout << "Game is being called" << endl;
	char* word2Guess = "well damn";			   // char* is a pointer, a string doesnt need a pointer //  char* ends with the number 0 to signfy the end of the string
	size_t	len = strlen(word2Guess);          //size_t aka unsigned long int
	int numberSpace = 0;

	for (unsigned int i = 0; i < len; i++)
	{ 
		if (word2Guess[i] == ' ')
			numberSpace++;
	}
	
	//size_t	len = strlen(word2Guess);          //size_t aka unsigned long int
	
	char* secretWord = new char[len + 1];      // dynamic memory allocation FTW

	int mistakeCounter = 0;
	int successCounter = 0;

	// Initialize out secretWord to fit the size of word2Guess
	for (unsigned int i = 0; i < len; i++)	 //i is your index for the array
	{ 
		secretWord[i] = '*';
	}

	secretWord[len] = 0;     //making sure secretWord ends with a 0.                   

	char userResponse[ 64 ];
	memset(userResponse, 0, 64);
	char playerGuess[100];
	cout << "Would you like to play a game? " << endl;
	cin.getline(userResponse, sizeof(userResponse));
	//cin >> userResponse; 				// alt option//   scanf("%s", userResponse);
	// alt option //(used to verify userResponse) //std::cout << userResponse << std::endl;
		 
	if (0 == strncmp(userResponse, "yes", 3)) 
	{
		cout << "Great! Lets play Hangman! " << endl;
		cout << "My word has" << " " << len << " " << "characters" << endl;
		cout << secretWord << endl;
	}

	else 
	{
		cout << "Maybe another time! Goodbye ";
	}

	int loop_counter = 0;
	while ((successCounter != len) && (mistakeCounter != 10))
	{

		cout << "Enter your guess: " << endl;
		//char input[100];
		cin.getline(playerGuess, sizeof(playerGuess));
		//cin >> playerGuess;  // alt option //scanf("%c", &playerGuess); ==> scan for user input
		cout << "You've entered: " << ' ' << playerGuess << endl; // alt option //printf("You've entered <%c>\r\n", playerGuess );
		
		int numOfMatches = 0;

		for (unsigned int i = 0; i < len; i++)
		{
			if ((word2Guess[i] == playerGuess[ 0 ] ) && (secretWord[i] != playerGuess[0])) // 2nd cond --> NOT been guessed before

			{
				++successCounter;
				++numOfMatches;
				secretWord[i] = playerGuess[ 0 ];
			}
		}

		if (numOfMatches == 0)
		{ 
			++mistakeCounter;
		}

		loop_counter++;

		printf("game loop #%i - successes = %i - mistakes = %i - <%s>\r\n", loop_counter, successCounter, mistakeCounter, secretWord);
	}

		if (successCounter == len) 
		{
			cout << "You have guessed my word! " << word2Guess << endl;
		}
		
		if (mistakeCounter == 10)
		{
			cout << "You have lost the game... :( " << "Answer: "<< word2Guess << endl;
		}
			
	delete[] secretWord;                       //delete dynamic allocation  if you do not delete you will have a segmentation fault,..
	return;										// .. trying to access memory that doesnt exist anymore.
}


