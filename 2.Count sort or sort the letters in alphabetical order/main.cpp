#include<iostream>
using namespace std;

class solution
{
    public:
    string varisai(string arr) 
    {
        int count[26] = {0};
        for(int i=0;arr[i]!='\0';i++)
        {
            int temp;
            temp = (int)arr[i]-97;
            count[temp]++;
        }
        
        string ans =""; 
        for(int i=0;i<26;i++)
        {
            for(int j=0;j<count[i];j++)
            {
                ans+=(char)(i+97);
            }
        }
        return ans;
    }
};

int main()
{
    string arr;
    solution obj;
    cout<<"Enter the string: ";
    cin>>arr;
    
    cout<<obj.varisai(arr);
    return 0;
}
