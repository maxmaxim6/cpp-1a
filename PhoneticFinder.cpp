#include "PhoneticFinder.hpp"
string message;
string phonetic::find(string text, string word)
{
    if(word.length() == 0)
    {
        message = "empty word is not acceptable";
        throw myException();
    }
    string temp;
    for (size_t i = 0; i <= text.length(); i++)
    {
        if(i != text.length() && text[i] != ' ' )
            temp += text[i];
        else if(temp.length() == word.length())
        {
            string t = temp;
            for (size_t i = 0; i < temp.length(); i++)//to lower case for word and temp
            {
                if(word[i] >= 'A' && word[i] <= 'Z')
                    word[i]+=32;
                if(temp[i] >= 'A' && temp[i] <= 'Z')
                    temp[i]+=32;
            }
            bool flag = 1;
            for (size_t i = 0; i < temp.length(); i++)
            {
                if(word[i] == temp[i])continue;
                else if(word[i] == temp[i] + ('a' - 'A') || temp[i] == word[i] + ('a' - 'A'))continue;
                else if( (word[i] == 'v' && temp[i] == 'w') || (word[i] == 'w' && temp[i] == 'v') )continue;
                else if( (word[i] == 'b' && (temp[i] == 'f' || temp[i] == 'p')) 
                || (word[i] == 'f' && (temp[i] == 'b' || temp[i] == 'p')) 
                || (word[i] == 'p' && (temp[i] == 'b' || temp[i] == 'f')) ) continue;
                else if( (word[i] == 'g' && temp[i] == 'j') || (word[i] == 'j' && temp[i] == 'g') )continue;
                else if((word[i] == 'c' && (temp[i] == 'k' || temp[i] == 'q') ) 
                || (word[i] == 'k' && (temp[i] == 'c' || temp[i] == 'q') ) 
                || (word[i] == 'q' && (temp[i] == 'c' || temp[i] == 'k')) ) continue;
                else if( (word[i] == 's' && temp[i] == 'z') || (word[i] == 'z' && temp[i] == 's') )continue;
                else if( (word[i] == 'd' && temp[i] == 't') || (word[i] == 't' && temp[i] == 'd') )continue;
                else if( (word[i] == 'o' && temp[i] == 'u') || (word[i] == 'u' && temp[i] == 'o') )continue;
                else if( (word[i] == 'i' && temp[i] == 'y') || (word[i] == 'y' && temp[i] == 'i') )continue;
                else flag = 0;
                
            }
            if(flag) return t;
            else 
                temp.clear();

        }
        else
            temp.clear();
    }
    message = "Did not find the word '"+word+"' in the text";
    throw myException();
}
