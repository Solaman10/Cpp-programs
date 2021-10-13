#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    char word[] = "GEEKSFORGEEKS";
    int word_length = strlen(word)+1;
    int middle = word_length/2;
    
    for(int i = 0;i<word_length;i++)
    {
        for(int j = 0;j<word_length;j++)
        {
            if(i==j && middle != i && middle != j)
            {
                cout<<word[j-1];
            }
            if(i+j == word_length)
            {
                cout<<word[j-1];
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<"\n";
    }    
    return 0;
}
