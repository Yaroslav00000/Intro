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
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    cout << "Продам цуценят." << endl;
    cout << "Порода: ротвейлер." << endl;
    cout << "\n……" << endl;
    cout << "\nТел.: 222-22-22" << endl;
    cout << "222";
    cout << "\t|";
    SetConsoleTextAttribute(hConsole, 6);
    cout << "\t222" << endl;
    SetConsoleTextAttribute(hConsole, 7);
    cout << "\n22";
    cout << "\t|";
    SetConsoleTextAttribute(hConsole, 6);
    cout << "\t22" << endl;
    SetConsoleTextAttribute(hConsole, 7);
    cout << "\n22";
    cout << "\t|";
    SetConsoleTextAttribute(hConsole, 6);
    cout << "\t22" << endl;
    SetConsoleTextAttribute(hConsole, 7);
    cout << "\nі тд." << endl;
    return 0;
}