#include<iostream>
using namespace std;

class solution
{
    public:
    int strstr(string s, string x)
    {
         int index = -1;
         int l;
         int flag = 0;
         
         for(int i=0;s[i]!='\0';i++)
         {
             l=i;
             if(s[i]==x[0])
            {
                 for(int j=0;x[j]!='\0';j++)
                 {
                  if(x[j]==s[l])
                   {
                     l++;
                     flag = 1;
                   }
                   else
                   { 
                     flag = 0;
                     break;
                   }
                 }
                   if(flag==1)
                   {
                   index = i;
                   return index;
                   }
                   else
                   {
                       return index;
                   }
            }       
        }
    }
};

int main()
{
    
    string s,x;
    cout<<"Enter the first string: ";
    cin>>s;
    cout<<"Enter the second string: ";
    cin>>x;
    
    solution obj;
    cout<<obj.strstr(s,x);
    return 0;
}
