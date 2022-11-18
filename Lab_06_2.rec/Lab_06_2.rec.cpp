#include <iostream>
#include <windows.h>

using namespace std;

void Create(int* a, int size, int i)
{
	cout << "a[" << i << "] = "; cin >> a[i];
	if (i < size - 1)
		Create(a, size, i + 1);
	else
		cout << endl;
}

int IFirst(int* a, int size, int& min, int i)
{
	if (a[i] % 2 == 0)
	{
		min = a[i];
		return 1;
	}

	if (i < size - 1)
		return IFirst(a, size, min, i + 1);
	else
		return -1;
}

int Min(int* a, int size, int min, int i)
{
	if (a[i] < min && a[i] % 2 == 0)
		min = a[i];
	if (i < size - 1)
		return Min(a, size, min, i + 1);
	else
		return min;
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int size;
	cout << "Введіть кількість елементів масиву:" << endl;
	cin >> size;

	int* a = new int[size];
	cout << "Введіть елементи масиву:" << endl;
	Create(a, size, 0);
	cout << endl;

	int min;
	int imin = IFirst(a, size, min, 0);
	cout << "Найменший парний елемент масиву: " << Min(a, size, min, 0) << endl;

	if (imin == -1)
		cerr << "Немає елементів, котрі задовольняють умову" << endl;
	else
		cout << "min = " << Min(a, size, min, imin + 1) << endl;

	delete[] a;
	return 0;
}


