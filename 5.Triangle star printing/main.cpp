#include<iostream>
using namespace std;

int main()
{
    int i,j,k,n;
    cout<<"Enter the limit: ";
    cin>>n;
    
    for(i=1; i<=n;i++)
    {
        for(k=n;k>=i;k--)
        cout<<" ";
        for(j=1;j<=i;j++)
        {
            cout<<"* ";
        }
        cout<<"\n";
    }
    return 0;
}
