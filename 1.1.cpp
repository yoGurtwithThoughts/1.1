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
        cout << "Вы ввели число " << a << endl;
    }
    //if (typeid(a).name() != "int")
    //{
    //    cout << "Тип данных не int" << endl;
    //}
    //else
    //{
    //    cout << "OK" << endl;
    //}

