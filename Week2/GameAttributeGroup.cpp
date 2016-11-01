#include "GameAttributeGroup.hpp"
#include <iostream>

using namespace std;

GameAttributeGroup::GameAttributeGroup()
{
	m_playerGuess = 0;
	m_mistakeCounter = 0;
	m_successCounter = 0;
	
}

void GameAttributeGroup::Debug(void)
{
	std::cout << "The number of mistakes is: " << (int) m_mistakeCounter << std::endl;
	std::cout << "The current guess is:  " << (int) m_playerGuess << std::endl;
	std::cout << "The number of successful guesses are: " << (int) m_successCounter << std::endl;
	std::cout << "The content of the secret word is < " << m_secretWord << ">" << std::endl;
}

void  GameAttributeGroup::SafeIncrementMistakeCounter(void)
{
	if (m_mistakeCounter < 10) {
		m_mistakeCounter++;
	}
	else {
		std::cout << "Sorry, you went over the maximum value " << std::endl;
	}
}

byte_t GameAttributeGroup::GetCurrentMistakeCounter(void)
{
	return m_mistakeCounter;  //a copy
}

void  GameAttributeGroup::SafeIncrementSuccessCounter(void)
{
	//-step 1- store the size of the secret word into variable sizeString for 
	// later use. 
	size_t sizeString = m_secretWord.size();
	//-step2 - check if we can actually increment  

	if (m_successCounter <  sizeString)  {
		m_successCounter++;
	}
	else {
		std::cout << "Error - The number of successful Guesses cannot be greater than the size of the secret word " << std::endl;
	}
}

byte_t GameAttributeGroup::GetCurrentSuccessCounter(void)
{
	return m_successCounter;  //a copy
}

void GameAttributeGroup::SetSecretWord(char* input)
{
	m_secretWord = input;
}

bool GameAttributeGroup::operator<(GameAttributeGroup& rhs)
{
	if (rhs.m_mistakeCounter < m_mistakeCounter)
		return true;
	return false;
}
