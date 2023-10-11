#include <iostream>
#include <cmath>
using namespace std;
int main()
{

	while (true)
	{
		setlocale(LC_ALL, "Rus");
		double a, b;
		cout << "\tВведите a\t" << endl;
		cin >> a;

		if (cin.fail()) {
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "Вы ввели не число!" << endl;
		}
		else {
			cout << "\tВведите b\t" << endl;
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



		cout << "\tЗадание 2\t\n" << endl;
		double p, y;
		cout << "\tВведите p\t" << endl;
		cin >> p;
		if (cin.fail()) {
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "Непраильнаааааа!\n>0" << endl;
		}
		else {
			cout << "\tВведите y\t" << endl;
			cin >> y;
			if (cin.fail()) {
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');

				cout << "Непраильнаааааа!\n>0" << endl;
			}
			else
			{
				cout << "\tK=\t" << log10(pow(p, 2) + pow(y, 3)) + exp(p) << endl;
			};
		};

		cout << "\tЗадание 3\t\n" << endl;
		double n, k;
		cout << "\tВведите n\t" << endl;
		cin >> n;
		if (cin.fail()) {
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "Непраильнаааааа!\n>0" << endl;
		}
		else {
			cout << "\tВведите y\t" << endl;
			cin >> k;
			if (cin.fail()) {
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');

				cout << "Непраильнаааааа!\n>0" << endl;
			}
			else
			{
				cout << "\tG=\t" << n * (k + 3, 5) + sqrt(y) << endl;
			};
		};

		cout << "\tЗадание 4\t\n" << endl;
		double er, ke;
		cout << "\tВведите a\t" << endl;
		cin >> er;
		if (cin.fail()) {
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "Непраильнаааааа!\n>0" << endl;
		}
		else {
			cout << "\tВведите t\t" << endl;
			cin >> ke;
			if (cin.fail()) {
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');

				cout << "Непраильнаааааа!\n>0" << endl;
			}
			else
			{
				cout << "\tD=\t" << 9.8 + pow(er, 2) + 5.52 * cos(pow(ke, 5)) << endl;
			};
		};

		cout << "\tЗадание 5\t\n" << endl;
		double x;
		cout << "\tВведите x\t" << endl;
		cin >> x;
		if (cin.fail()) {
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "Непраильнаааааа!\n>0" << endl;
		}

		else
		{
			cout << "\tL=\t" << 1.51 * cos(pow(x, 2)) * pow(x, 2) << endl;
		};





	};
}