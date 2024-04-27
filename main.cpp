#include <iostream>
#include <Windows.h>
using namespace std;
enum Color
{
    Black = 0,
    Blue = 1,
    Green = 2,
    Cyan = 3,
    Red = 4,
    Magenta = 5,
    Brown = 6,
    LightGray = 7,
    DarkGray = 8,
    LightBlue = 9,
    LightGreen = 10,
    LightCyan = 11,
    LightRed = 12,
    LightMagenta = 13,
    LightBrown = 14,

};
int main() {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, 4);
    cout << "Every" << endl;
    SetConsoleTextAttribute(hConsole, 6);
    cout << "\tHunter" << endl;
    SetConsoleTextAttribute(hConsole, 14);
    cout << "\t\tWants" << endl;
    SetConsoleTextAttribute(hConsole, 2);
    cout << "\t\t\tTo know" << endl;
    SetConsoleTextAttribute(hConsole, 11);
    cout << "\t\t\t\tWhere" << endl;
    SetConsoleTextAttribute(hConsole, 1);
    cout << "\t\t\t\t\tDoes Pheasant" << endl;
    SetConsoleTextAttribute(hConsole, 5);
    cout << "\t\t\t\t\t\tSit" << endl;
    SetConsoleTextAttribute(hConsole, 7);
    return 0;
}