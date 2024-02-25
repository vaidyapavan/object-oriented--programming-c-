#include<iostream>
using namespace std;
int main()
{
    int no,rev, temp,rem=0;
    cout<<"enter the number:"<<endl;
    cin>>no;
    temp=no;
    do
    {
        rem=no%10;
        rev=(rev*10)+rem;
        no=no/10;
        
    } while(no!=0);
    cout<<"reverse of the given number is:"<<rev<<endl;
    if(rev==temp)
    {
        cout<<"number is palindrome"<<endl;
    }
    else
    {
        cout<<"enmber is not palindrome"<<endl;
    }
    
}