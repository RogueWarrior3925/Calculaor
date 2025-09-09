#include <iostream>
using namespace std;

float num;
float mun;
char operation;

int main()
{
    cout << "number one?" << endl;
    cin >> num;
    cout << "number two?" << endl;
    cin >> mun;
    cout << "Operation? (x, +, -, /)" << endl;
    cin >> operation;
    if (operation == 'x') {
        num = num * mun;
    }
    if (operation == '+') {
        num = num + mun;
    }
    if (operation == '-') {
        num = num - mun;
    }
    if (operation == '/') {
        num = num / mun;
    }
    cout << "your number is = " << num << endl;
    return 0;
}