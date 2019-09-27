#include <iostream>
using namespace std;

bool check_args(int argc)
{
    if(argc != 2)
    {
        cout << "~~~~~~~~~~~reverse_string.cpp~~~~~~~~~~~" << endl;
        cout << "Usage: reverse_string.exe \"<string>\"" << endl;
        return false;
    }
    return true;
}

void reverse_string(string phrase)
{
    // get the length of the phrase
    char *character = &phrase[0]; // point at the beginning of the string
    while(*character != 0) // iterate until the null pointer at the end of the string
    {
        cout << *character;
        character++;
    }
    cout << endl;

    char *end = character; // point at the end of the string
    character = &phrase[0]; // return to the beginning of the string

    int phrase_length = end - character; // get the length of the string
    char result[phrase_length]; // this will contain the reversed string

   // iterate backwards through the string
   end--; // begin at the last character rather than after the last character
   character--; // End at the first character rather than right after it
   unsigned int i = 0;
   while(end != character)
   {
       // place the current character into the result array
       result[i] = *end;
       end--;
       i++;
   }

    cout << result << endl;
}

int main(int argc, char* argv[])
{
    if(check_args(argc))
    {
        reverse_string(argv[1]);
    }
}
