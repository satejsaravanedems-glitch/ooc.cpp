#include <iostream>
using namespace std;

class Number
{
    int num;

public:
    void getData()
    {
        cout << "Enter a number: ";
        cin >> num;
 }

    Number operator+( Number n)
Number temp;
        temp.num = num + n.num;
        return temp;
}
 }

    void display()
    {
        cout << "Sum = " << num << endl;
    }
};
int main()
{
    number n1, n2, n3, n4;
