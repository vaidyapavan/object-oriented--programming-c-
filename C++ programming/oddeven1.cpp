#include<iostream>
using namespace std;
int main()
{
    int no,i;
    for(i=0;i<=5;i++)
    {
    cout<<"enter the number that you want to check"<<endl;
    cin>>no;
    if(no%2==0)
    {
        cout<<"number is even"<<endl;
    }
    else{
        cout<<"number is odd"<<endl;
    }
    }
    return 0;
}
