#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Rus");
    int a, b;
    cout << "\tВведите a\t" << endl;
    cin >> a;
    if (cin.fail()) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        cout << "Вы ввели не число!" << endl;
    }
    else {
        cout << "\tВведите a\t" << endl;
        cin >> b;
        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');

            cout << "Вы ввели не число!" << endl;
        }
        else
        {
            cout << "\tR=\t" << 3 * pow(a, 2) + 3 * pow(b, 3) + 4.9 << endl;

        };
    };
}