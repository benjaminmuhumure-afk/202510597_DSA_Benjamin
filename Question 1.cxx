#include <iostream>
using namespace std;

void swapNumbers(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int num1, num2;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    cout << "\nBefore swapping:" << endl;
    cout << "First number = " << num1 << endl;
    cout << "Second number = " << num2 << endl;

    swapNumbers(&num1, &num2);

    cout << "\nAfter swapping:" << endl;
    cout << "First number = " << num1 << endl;
    cout << "Second number = " << num2 << endl;

    return 0;
}