////////////////////////////////////////////////////////////////////////////////
// Test suite: scrabble
// 
// Test case 1: scrabblescore
// 
// 
////////////////////////////////////////////////////////////////////////////////

#include "embunit.h"
#include "scrabble_ts.h"


void scrabble_ts::scrabblescore_tc()
{
    embunit_Case(1);

    embunit_Step(1);
    try
    {
        embunit_Context(Basic Test);
        int getscore(char ch);
        int score(scscore(word));
        int length(word.length());
        string.cin.getline();
        Switch.switch(switch());
        int  scscore(string word);
    }
    catch(...)
    {
        // If we get here something has thrown unexpectedly
        embunit_AbortTest();
    }
}


#include <iostream> 
#include <string> 
using namespace std; 

int scscore(string word); 
int getscore(char ch); 

int main()
{
   
        char word[80]; 
        cout << "Please enter your word: "; 
        cin.getline(word, 80); 

        

        int score = scscore(word);
        cout << "The scrabble score for '" << word << "' is " << score << "\n"; 
   
        return 0;
  
   
}

int scscore(string word)
{
    int total = 0; 
    int length = word.length(); 

    for(int i = 0; i < length; i++)
    {
        total += getscore(word[i]); 
    }

    return total; 
}

int getscore(char ch)
{
    int value = 0; 

    switch(ch)
    {
         case 'A': case 'a': 
        case 'E': case 'e':  
        case 'I': case 'i': 
        case 'O': case 'o': 
        case 'U': case 'u': 
        case 'L': case 'l': 
        case 'N': case 'n': 
        case 'R': case 'r': 
        case 'S': case 's': 
        case 'T': case 't': 
            value += 1; break; 
        case 'D': case 'd': 
        case 'G': case 'g': 
            value += 2; break; 
        case 'B': case 'b': 
        case 'C': case 'c': 
        case 'M': case 'm':  
        case 'P': case 'p': 
            value += 3; break; 
        case 'F': case 'f': 
        case 'H': case 'h': 
        case 'V': case 'v': 
        case 'W': case 'w': 
        case 'Y': case 'y': 
            value += 4; break; 
        case 'K': case 'k': 
            value += 5; break; 
        case 'J': case 'j': 
        case 'X': case 'x': 
            value += 8; break; 
        case 'Q': case 'q':
        case 'Z': case 'z': 
            value += 10; break; 
    }
    return value; 
}