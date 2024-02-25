#include<iostream>
using namespace std;
int main()
{
    cout<<"program of factorial:"<<endl;
    int no,i;
    int fact=1;
    cout<<"enter no:";
    cin>>no;
    for(i=no;i>0;i--)
    {
        fact=fact*i;
    }
    cout<<"factorial of the"" "<<no<<" ""is:"<<fact<<endl;

}
