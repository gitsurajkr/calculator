#include <iostream>
using namespace std;

int main()
{
    while (true)
    {
        int num;
        cout << "Press 1: Run Program\nPress 0: Quit Program" << endl;

        // Check if the input is a valid integer
        if (!(cin >> num))
        {
            cout << "Invalid input!!" << endl;
            cin.clear();  // Clear error flags
            cin.ignore(); // Ignore invalid input
            continue;
        }

        if (num == 0)
        {
            cout << "Exiting Program......" << endl;
            break;
        }
        else if (num != 1)
        {
            cout << "Enter Valid Input" << endl;
            cin.ignore(); // Clear the input buffer
            continue;
        }
        else
        {
            int a, b;

            cout << "Enter First Number: ";
            cin >> a;

            char ch;
            cout << "Enter Operation: ";
            cin >> ch;

            cout << "Enter Second Number: ";
            cin >> b;

            if (cin.fail())
            {
                cout << "Invalid input!!" << endl;
                cin.clear();  // Clear error flags
                cin.ignore(); // Ignore invalid input
                continue;
            }

            switch (ch)
            {
            case '+':
                cout << "Sum is: " << a + b << endl;
                break;
            case '-':
                cout << "Subtract is: " << a - b << endl;
                break;
            case '*':
                cout << "Multiply is: " << a * b << endl;
                break;
            case '/':
                if (b == 0)
                {
                    cout << "Cannot Divide By Zero" << endl;
                }
                else
                {
                    cout << "Division is: " << static_cast<double>(a) / b << endl;
                }
                break;
            default:
                cout << "Invalid Operator" << endl;
            }
        }
    }

    return 0;
}
