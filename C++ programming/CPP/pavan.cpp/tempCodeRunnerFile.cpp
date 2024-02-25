#include<iostream>
using namespace std;
int main()
{ 
    int j=0;
    
    do
    {

    int i, no;
    int fact=1;
    cout<<"enter the number which you want to find  the factorial "<<endl;
    cin>>no;
    for(i=no;i>=1;i--)
    {
    fact=fact*i;
    j=j+1;
    }
    cout<<"factorial of the given number is:"<<endl;
    cout<<fact<<endl;
    }
    while(j<=5);
    
}
