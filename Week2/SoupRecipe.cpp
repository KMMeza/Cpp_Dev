#include "soupRecipe.hpp"
#include <iostream>


////////////////////////////////////////////////////////

SoupRecipe::SoupRecipe(void) // constructor
{
}

SoupRecipe::~SoupRecipe(void) //destructor (~)
{

}

////////////////////////////////////////////////////////

void SoupRecipe::Prepare(void)
{
	std::cout << "the Soup is being prepared" << std::endl; // must include std when not using namespace

}