#include "notepad.h"

void writeFile(string filename)
{
    ofstream file(filename);
    string text;

    cout << "\t\tEnter text (type END to stop):" << endl;

    cin.ignore();

    while (true)
    {
        getline(cin, text);

        if (text == "END")
            break;

        file << text << endl;
    }

    file.close();
    cout << "\t\tFile saved successfully." << endl;
}

void readFile(string filename)
{
    ifstream file(filename);
    string text;

    if (!file)
    {
        cout << "\t\tFile not found!" << endl;
        return;
    }

    cout << "\n\t\t--- File Contents ---" << endl;

    while (getline(file, text))
    {
        cout << text << endl;
    }

    file.close();
}

void appendFile(string filename)
{
    ofstream file(filename, ios::app);
    string text;

    cout << "\t\tEnter text to append (type END to stop):" << endl;

    cin.ignore();

    while (true)
    {
        getline(cin, text);

        if (text == "END")
            break;

        file << text << endl;
    }

    file.close();
    cout << "\t\tText appended successfully." << endl;
}
