#include<iostream>
using namespace std;
class heap
{
    public:
    int heap1[20], heap2[20],n,x,i;
    heap()    // default constructor//
    {
        heap1[0]=0;
         heap2[0]=0;
    }
    void getdata();
    void insert1(int val,int i);
    void upadjust1(int);
    void display1();
    void minmax();
   
};
void heap::getdata()
{
    cout<<" marks of second year data"<<endl;
    cout<<"enter total no of student"<<endl;
    cin>>n;
    for(i=0;i<=n;i++)
    {
        cout<<"enter the marks of the student"<<endl;
        cin>>x;
        insert1(x,i);
    }
}
void heap::insert1(int val,int i)
{
    int n;
    n=heap1[0];
    heap1[n+1]=val;
    heap1[0]=n+1;
    upadjust1(n+1);
}
void  heap::upadjust1(int i)
{
    int temp;
    while(i>1 && heap1[i]>heap1[i/2])
    {
        temp=heap1[i];
        heap1[i]=heap1[i/2];
        heap1[i/2]=temp;
        i=i/2;
    }
}
void heap:: display1()
{
    cout<<"maxheap "<<endl;
    for(i=1;i<=n;i++)
    {
        cout<<heap1[i]<<" ";
       
    }
    cout<<endl;
}
void heap ::minmax()
{
    cout<<"maximumx marks is:"<<heap1[1]<<endl;
}
int main()
{
    heap h;
    h.getdata();
    h.display1();
    h.minmax();
   
   
}

