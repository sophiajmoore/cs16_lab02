#include <iostream>
using namespace std;

int main()
{
    int number1(0), number2(0), number3(0);

    cin >> number1 >> number2 >> number3;

    if ((number1 >= number2) && (number1 >= number3))
    {
        if (number2 >= number3)
            cout << number1 << ' '
                 << number2 << ' '
                 << number3 << endl;
        else //number3 > number2
            cout << number1 << ' '
                 << number3 << ' '
                 << number2 << endl;
    }

    else if ((number2 >= number1) && (number2 >= number3))
    {
        if (number1 >= number3)
            cout << number2 << ' '
                 << number1 << ' '
                 << number3 << endl;
        else //number3 > number1
            cout << number2 << ' '
                 << number3 << ' '
                 << number1 << endl;
    }

    else if ((number3 >= number1) && (number3 >= number2))
    {
        if (number1 >= number2)
            cout << number3 << ' '
                 << number1 << ' '
                 << number2 << endl;
        else //number2 > number1
            cout << number3 << ' '
                 << number2 << ' '
                 << number1 << endl;
    }

    return 0;       
}

