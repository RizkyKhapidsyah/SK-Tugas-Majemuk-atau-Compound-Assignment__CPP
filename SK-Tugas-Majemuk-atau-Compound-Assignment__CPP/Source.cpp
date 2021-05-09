#include <iostream>
#include <conio.h>

/*  Source Code by BelajarCPP
    Modified for Learn by Rizky Khapidsyah */

using namespace std;

int main() {
    int x = 14, y = 2;
    
    cout << "Nilai x = " << x << endl;
    cout << "Nilai y = " << y << endl << endl;


    cout << "(x += y)  : " << (x += y) << endl;
    x = 14;
    cout << "(x -= y)  : " << (x -= y) << endl;
    x = 14;
    cout << "(x *= y)  : " << (x *= y) << endl;
    x = 14;
    cout << "(x /= y)  : " << (x /= y) << endl;
    x = 14;
    cout << "(x %= y)  : " << (x %= y) << endl;
    x = 14;
    cout << "(x >>= y) : " << (x >>= y) << endl;
    x = 14;
    cout << "(x <<= y) : " << (x <<= y) << endl;
    x = 14;
    cout << "(x &= y)  : " << (x &= y) << endl;
    x = 14;
    cout << "(x ^= y)  : " << (x ^= y) << endl;
    x = 14;
    cout << "(x |= y)  : " << (x |= y) << endl;

    _getch();
    return 0;
}