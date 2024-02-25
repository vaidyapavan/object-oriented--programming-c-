#include<iostream>
using namespace std;
int main()
{
    int i,j;
    int count=1;
    
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=i;j++)
        {
            char ch='a'+i-1;
            cout<<ch<<" ";
            
        }
        cout<<" "<<endl;
    }
    return 0;
}