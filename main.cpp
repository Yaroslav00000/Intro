#include<iostream>
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
    cout << "To be,";
    SetConsoleTextAttribute(hConsole, 12);
    cout << " or not ";
    SetConsoleTextAttribute(hConsole, 7);
    cout << "to be: that is the question:" << endl;
    cout << "Whether";
    SetConsoleTextAttribute(hConsole, 6);
    cout << "'tis nobler in the mind to suffer" << endl;
    cout << "The slings and arrows of outrageous fortune," << endl;
    cout << "Or to take arms against a sea of troubles," << endl;
    cout << "And by opposing end them? " << endl;
    cout << "William Shakespeare" << endl;
    SetConsoleTextAttribute(hConsole, 7);
    return 0;
}
