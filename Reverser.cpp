#include "Reverser.h"
#include <cmath>
#include <iostream>

Reverser::Reverser()
{
}
int Reverser::reverseDigit(int value)
{
    if (value < 0)
    {
        return -1;
    }
    else if (value < 10)
    {
        return value;
    }
    int length = std::to_string(value).length() - 1;

    return (value % 10) * pow(10, length) + reverseDigit(value / 10);
}

std::string Reverser::reverseString(std::string characters)
{
    if (characters.length() == 0)
    {
        return "ERROR";
    }
    else if (characters.length() == 1)
    {
        return characters;
    }
    char lastCharacter = characters.back();

    characters.pop_back();

    return lastCharacter + reverseString(characters);
}