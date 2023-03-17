#include "Reverser.h"
#include <cmath>
#include <iostream>

Reverser::Reverser()
{
}
int Reverser::reverseDigit(int value)
{

    if (value < 10)
    {
        return value;
    }
    int length = std::to_string(value).length()-1;

    return (value % 10) * pow(10, length) + reverseDigit(value / 10);
}

std::string Reverser::reverseString(std::string characters)
{
    if(characters.length()==1){
        return characters;
    }


    return ;
}