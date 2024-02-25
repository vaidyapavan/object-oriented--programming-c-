#include<iostream>
using namespace std;
class prim 
{
    int visited[20],m[20][20],mincost,min,edgemst;
    public:
    int n;
    prim()
    {
        edgemst=1;
        mincost=0;
        min=0;
        
    }
    void insert();
    void display();
    void primsalgo();
};
void prim::insert()
{
    cout<<"enter tne no of vertices"<<endl;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        visited[i]=0;
    }
    cout<<"enter the adjancey matrix:"<<endl;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cin>>m[i][j];
            if(m[i][j]==0)
            {
                m[i][j]=999;
            }
        }
    }
    
}
void prim::display()
{
    cout<<"adjancey matrix is:"<<endl;
    for( int i=1;i<=n;i++)
    {
        for( int j=1;j<=n;j++)
        {
            cout<<"\t";
            cout<<m[i][j];
        }
        cout<<"\n";
    }
}
void prim::primsalgo()
{
    visited[1]=1;
    int x,y;
    while(edgemst<(n-1))
    {
        min=999;
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n;j++)
            {
                if(m[i][j]<min)
                {
                    if(visited[i]!=0)
                    {
                        min-=m[i][j];
                        x=i;
                        y=j;


                    }
                }
            }
        }
        if(visited[x]==0 || visited[y]==0)
        {
            edgemst=edgemst+1;
            mincost=mincost+min;
            cout<<"subpath="<<edgemst<<")"<<x<<"to"<<y<<"="<<min;
            visited[y]=1;

        }
        m[x][y]=m[y][x]=999;

    }
    cout<<"minimum cost is:"<<mincost;

}
int main()
{
    int ch;
    prim p;
    char ans;
    do
    {
        cout<<"\n****menu*****"<<endl;
        cout<<"1) for creation of tree"<<endl;
        cout<<"2)for displat matrix"<<endl;
        cout<<"3) for  finding min distace"<<endl;
        cout<<"enter your choice"<<endl;
        cin>>ch;
        switch(ch)
        {
            case 1:
            p.insert();
            break;
            case 2:
            p.display();
            break;
            case 3:
            p.primsalgo();
            break;
        
        
        }
        cout<<"do you wamt to continue (y/n)"<<endl;
        cin>>ans;

    } while (ans=='y');
    cout<<"thanks"<<endl;
    return 0;
        
   
    
}
