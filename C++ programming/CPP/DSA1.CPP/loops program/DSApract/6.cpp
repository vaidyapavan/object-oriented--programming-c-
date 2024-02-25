#include <iostream>
using namespace std;

class graph {
    int m[20][20];
    int visited[20];
    int n;

public:
    void accept();
    void display();
    void dfs(int);
    void dfsnr(int);
    int returN() {
        return n;
    }
};

class stack {
    int st[20];
    int top;

public:
    int z;
    stack() {
        top = -1;
    }
    bool isEmpty() {
        if (top == -1) {
            return true;
        }
        else {
            return false;
        }
    }
    bool isFull() {
        if (top == 19) {
            return true;
        }
        else {
            return false;
        }
    }
    void push(int value) {
        if (isFull()) {
            cout << "overflow" << endl;
            return;
        }
        else {
            top = top + 1;
            st[top] = value;
        }
    }
    int pop() {
        if (isEmpty()) {
            cout << "underflow" << endl;
            return 1;
        }
        else {
            top = top - 1;
            return (st[top]);
        }
    }
};

void graph::accept() {
    cout << "enter the number of vertices" << endl;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        visited[i] = 0;
    }
    cout << "enter the adjacency matrix" << endl;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> m[i][j];
        }
    }
}

void graph::display() {
    cout << "adjacency matrix is:" << endl;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << "\t";
            cout << m[i][j];
        }
        cout << "\n";
    }
}

void graph::dfs(int vertex) {
    cout << "\n" << vertex;
    visited[vertex] = 1;
    for (int i = 1; i <= n; i++) {
        if (m[vertex][i] == 1 && visited[i] == 0) {
            dfs(i);
        }
    }
}

void graph::dfsnr(int i) {
    for (int i = 1; i <= n; i++) {
        visited[i] = 0;
    }
    i = 1;
    stack s;
    s.push(i);
    while (!s.isEmpty()) {
        i = s.pop();
        if (visited[i] == 0) {
            visited[i] = 1;
            cout << "\n" << i;
        }
        for (int j = 1; j <= n; j++) {
            if (m[i][j] == 1) {
                if (visited[j] == 0) {
                    s.push(j);
                }
            }
        }
    }
}
int main()
{
    int ch;
    char ans;
    graph g;
    do
    {
        cout<<"***menu****"<<endl;
        cout<<"1) accept "<<endl;
        cout<<"2) diaplay"<<endl;
        cout<<"3)DFS recursive"<<endl;
        cout<<"4) DFS non recursive"<<endl;
        cout<<"enter your choice"<<endl;
        cin>>ch;
        switch(ch)
        {
            case 1:
            g.accept();
            break;
            case 2:
            g.display();
            break;
            case 3:
            g.dfs(1);
            break;
            case 4:
            g.dfsnr(1);
            break;

        }
        cout<<"do you want to continue(y/n)"<<endl;
        cin>>ans;
    }
        while(ans=='y');
        
}
 2q