#include <iostream>

using namespace std;

int main()
{
	int n;
	cout << "Podaj ile liczb: ";
	cin >> n;
	cout << "----------------\n";

	float* liczba;
	float* p;
	liczba = new float[n];
	p = new float[n];
	float suma = 0;

	for (int i = 0; i < n; i++)
	{
		cout << i + 1 << ". liczba: ";
		cin >> liczba[i];
		suma += liczba[i];
	}

	float m = suma / n;

	cout << "\nSrednia wynosi: " << m << endl << endl;

	float s = 0;

	for (int i = 0; i < n; i++)
	{
		if (liczba[i] > m)
			p[i] = liczba[i] - m;
		else if (liczba[i] < m)
			p[i] = m - liczba[i];
		else
		{
			cout << "Liczba najblizsza sredniej: " << m << endl;
			return 0;
		}
		s += p[i];
	}
	float x = 1, y;

	cout << "Liczba najblizsza sredniej: ";

	for (int i = 0; i < n; i++)
	{
		if (s > p[i])
		{
			s = p[i];
			x = y = liczba[i];
		}
		else if (s == p[i])
			y = liczba[i];
	}

	if (x == y)
		cout << x << endl;
	else
		cout << x << " i " << y << endl;

	delete[] liczba;
	delete[] p;

	cout << endl;
	system("pause");
	return 0;
}
//njumen72
