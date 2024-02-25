/*#include<iostream>
using namespace std;
int main()
{
    int i,j,no;
    cout<<"enter no:";
    cin>>no;
    for(i=0;i<=no;i++)
    {
        for(j=0;j<=no;j++)
        {
            cout<<i;
        }
        cout<<" "<<endl;
    }
}
*/

**************star pattern***************
#include<iostream>
using namespace std;
int main()
{
    int i,j,no;
    cout<<"enter no:";
    cin>>no;
    for(i=0;i<=no;i++)
    {
        for(j=0;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<" "<<endl;
    }
}