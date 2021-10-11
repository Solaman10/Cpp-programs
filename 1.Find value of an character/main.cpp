#include<iostream>
using namespace std;

class ASCII
{
    public:
        
        char charac;
        
        void character()
        {
         cout<<"Please, Enter a character: ";
         cin>>charac;
        }    
        void value()
        {
         cout<<"\nThe entered character's ASCII value is: " <<(int)charac;
        }
};

    int main()
    {
        ASCII alphabet;
        alphabet.character();
        alphabet.value();
        return 0;
    }
