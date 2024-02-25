#include<iostream>
using namespace std;
int main()
{
    cout<<"Factorial no program:"<<endl;
    int num,i; 
    int p=0;
    cout<<"enter no:";
    cin>>num;
    for(i=2;i<num;i++)
    {
      if(num%i==0)
      p=p+1;
    }
    if(p==0)
    {
      cout<<" entered number"" "<<num<< " ""is  prime"<<endl; 
    }
      else{
        cout<<" entered number"" "<<num<< " ""is  not prime"<<endl;
        }

    }
