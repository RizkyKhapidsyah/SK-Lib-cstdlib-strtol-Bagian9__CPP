#include <iostream>
#include <cstdlib>
#include <conio.h>

/*
    Source by Programiz (https://www.programiz.com)
    Modified For Learn by RK
    I.D.E : VS2022
*/

using namespace std;

int main() {
    char* end;

    /* octal base */
    cout << "0128ai" << " to Long Int with base-0 = " << strtol("0128ai", &end, 0) << endl;
    cout << "End String = " << end << endl << endl;

    /* hexadecimal base */
    cout << "0x15axzz" << " to Long Int with base-0 = " << strtol("0x15axzz", &end, 0) << endl;
    cout << "End String = " << end << endl << endl;

    /* decimal base */
    cout << "23dfl" << " to Long Int with base-0 = " << strtol("23dfl", &end, 0) << endl;
    cout << "End String = " << end << endl << endl;

    _getch();
    return 0;
}