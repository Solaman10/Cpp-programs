#include<iostream>
using namespace std;

class ASCII
{
    public:
        
        char letter;
        
        void character()
        {
         cout<<"Enter letter: ";
         cin>>letter;
        }    
        void value()
        {
         cout<<"The entered letter's value is: " <<(int)letter;
        }
};

    int main()
    {
        char s;
        ASCII alphabet;
        alphabet.character();
        alphabet.value();
        return 0;
    }
