#include <iostream>
using namespace std;

int main()
{
    int marks[30];              
    int totalmarks = 0;         

    for(int j = 0; j < 30; j++ )
    {
        cout << "Enter marks of student " << j+1;
        cin >> marks[j];                         
        totalmarks = totalmarks + marks[j];
    }
    cout << "\nTotal marks of 30 student = " << total ;
    return 0;
}