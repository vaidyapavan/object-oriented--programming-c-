#include<iostream>
using namespace std;
int main()
{
    int i,j;
    int count=1;
    
    for(i=1;i<=3;i++)
    {
        for(j=1;j<=3;j++)
        {
            char ch='a'+j-1;
            cout<<ch<<" ";
            count=count+1;
            char c='a'+j-1+count;
            cout<<c<<" ";
            
        }
        cout<<" "<<endl;
    }
    return 0;
}