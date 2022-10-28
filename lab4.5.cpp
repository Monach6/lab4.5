#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;

int main()
{
	double x, y, R;
	srand((unsigned)time(NULL));
	for (int i = 0; i < 10; i++)
	{
		cout << "x = "; cin >> x;
		cout << "y = "; cin >> y;
		cout << "R = "; cin >> R;
		if ((y <= x && (x - R) * (x - R) + (y - R) * (y - R) <= R * R)
			|| (y >= x && (x + R) * (x + R) + (y + R) * (y + R) <= R * R))

			cout << "yes" << endl;
		else
			cout << "no" << endl;
	}
	cout << endl << fixed;

	cout << "----------------------------" << endl;
	cout << "| " << setw(6) << " x " << setw(4) << " |"
		<< setw(6) << " y " << setw(4)
		<< "|" << setw(6) << " |" << endl;
	cout << "----------------------------" << endl;

	for (int i = 0; i < 10; i++)
	{
		x = -2 * R + rand() % 4 * R + 1;
		y = -2 * R + rand() % 4 * R + 1;
		if ((y <= x && (x - R) * (x - R) + (y - R) * (y - R) <= R * R)
			|| (y >= x && (x + R) * (x + R) + (y + R) * (y + R) <= R * R))
		{
			cout << "| " << setw(8) << setprecision(4) << x << " |"
				<< setw(8) << setprecision(4) << y << " | " << setw(2)
				<< "yes" << setw(2) << " |" << endl;
		}
		else
		{
			cout << "| " << setw(8) << setprecision(4) << x << " |"
				<< setw(8) << setprecision(4) << y << " |" << setw(4)
				<< "no" << setw(2) << " |" << endl;
		}
	}

	cout << "----------------------------" << endl;
	system("pause");
