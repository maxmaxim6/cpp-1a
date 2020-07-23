#include <iostream>
#include <exception>
using namespace std;
#pragma once

namespace phonetic
{
    string find(string text, string word);
};

extern string message;
typedef struct myException :public exception
{
    virtual const char* what() const noexcept
    {
        return message.c_str();
    }
}myException;



