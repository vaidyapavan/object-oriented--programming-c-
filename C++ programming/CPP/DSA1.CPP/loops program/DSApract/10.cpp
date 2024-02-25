#include <iostream>
using namespace std;

class heap
{
public:
    int heap1[20], heap2[20], n, x, i;

    heap() // default constructor
    {
        heap1[0] = 0;
        heap2[0] = 0;
    }

    void getdata();
    void insert1(int val, int i);
    void upadjust1(int);
    void display1();
    void minmax();
};

void heap::getdata()
{
    cout << "Marks of second year students:" << endl;
    cout << "Enter total number of students: ";
    cin >> n;

    for (i = 0; i < n; i++)
    {
        cout << "Enter the marks of student " << i + 1 << ": ";
        cin >> x;
        heap2[i+1] = x;
        insert1(x, i);
    }
}

void heap::insert1(int val, int i)
{
    int n;
    n = heap2[0];
    heap2[n + 1] = val;
    heap2[0] = n + 1;
    upadjust1(n + 1);
}

void heap::upadjust1(int i)
{
    int temp;
    while (i > 1 && heap2[i] > heap2[i / 2])
    {
        temp = heap2[i];
        heap2[i] = heap2[i / 2];
        heap2[i / 2] = temp;
        i = i / 2;
    }
}

void heap::display1()
{
    cout << "Max Heap: ";
    for (i = 1; i <= heap2[0]; i++)
    {
        cout << heap2[i] << " ";
    }
    cout << endl;
}

void heap::minmax()
{
    cout << "Maximum marks: " << heap2[1] << endl;
}

int main()
{
    heap h;
    h.getdata();
    h.display1();
    h.minmax();

    return 0;
}
