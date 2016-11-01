//#ifndef GAMEATTRIBUTEGROUP_HPP
//#define GAMEATTRIBUTEGROUP_HPP
//
//#include <string>
//
//typedef unsigned char byte_t; // using the smalles element, a byte
//
//class GameAttributeGroup
//{
//public:
//	GameAttributeGroup(); // constructor
//	void Debug(void);
//	void SafeIncrementMistakeCounter(void);
//	byte_t GetCurrentMistakeCounter(void);
//	void SafeIncrementSuccessCounter(void);
//	byte_t GetCurrentSuccessCounter(void);
//	void SetSecretWord(char* input);
//	
//	// we redefine the meaning of A < B when A and B are of type GameAttributeGroup.
//	// We further define the comparison bearing on each objects and mistakeCounter attribute. 
//	bool operator<(GameAttributeGroup& rhs);
//// must take a char* as input// the expected result is to assign the input to the member variable.
////
//private:
//		std::string m_word2Guess; // m = member 
//		std::string m_secretWord;
//		char m_playerGuess;
//		byte_t m_mistakeCounter;
//		byte_t  m_successCounter;
//};
//
//#endif //GAMEATTRIBUTEGROUP_HPP