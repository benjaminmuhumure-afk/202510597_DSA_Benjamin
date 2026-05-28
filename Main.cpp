#include <iostream>
#include "notepad.h"
using namespace std;

int main()
{
    int choice;
    string filename;

    do
    {
        cout << "\n\t\t-------SIMPLE NOTEPAD-------" << endl;
        cout << "\t\t1. Write File" << endl;
        cout << "\t\t2. Read File" << endl;
        cout << "\t\t3. Append File" << endl;
        cout << "\t\t4. Exit" << endl;
        cout << "\t\tEnter choice: ";
        cin >> choice;

        if (choice >= 1 && choice <= 3)
        {
            cout << "\t\tEnter filename: ";
            cin >> filename;
        }

        switch (choice)
        {
        case 1:
            writeFile(filename);
            break;

        case 2:
            readFile(filename);
            break;

        case 3:
            appendFile(filename);
            break;

        case 4:
            cout << "\t\tExiting program..." << endl;
            break;

        default:
            cout << "\\t\tInvalid choice!" << endl;
        }

    } while (choice != 4);

    return 0;
}
