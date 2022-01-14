﻿//1. Дан массив размера N и целые числа K и L(1 ≤ K ≤ L ≤ N).Найти среднее арифметическое элементов массива с номерами от K до L включительно.
//2. Дан целочисленный массив размера N, не содержащий одинаковых чисел.Проверить, образуют ли его элементы арифметическую прогрессию.Если образуют, то вывести разность прогрессии, если нет — вывести 0.
//3. Дан массив A размера N.Найти минимальный элемент из его элементов с четными номерами : A2, A4, A6,
//4. Дан массив размера N.Найти номер его последнего локального максимума(локальный максимум — это элемент, который больше любого из своих соседей).
//5. Дан целочисленный массив размера N, содержащий ровно два одинаковых элемента.Найти номера одинаковых элементов и вывести эти номера в порядке возрастания


#include <iostream>
using namespace std;

void funk1()
{
	int a[10]{};
	int n, k, l;

	cout << "N: ";
	cin >> n;

	cout << "K: ";
	cin >> k;

	cout << "L: ";
	cin >> l;

	cout << "\n";

	int i;
	for (i = 0; i < n; ++i)
	{
		cout << "a[" << i + 1 << "]:";
		cin >> a[i];
	}

	int sum = 0;
	for (i = k - 1; i <= l - 1; ++i) sum += a[i];

	cout << "\n";
	cout << "ср.ариф. от K = " << k << " до L = " << l << " равно: " << (float)sum / (float)(l - k + 1) << "\n";
}
void funk2()
{
	int a[10]{};
	int n;

	cout << "N: ";
	cin >> n;

	int i;
	for (i = 0; i < n; ++i)
	{
		cout << "a[" << i + 1 << "]:";
		cin >> a[i];
	}

	int r = a[1] - a[0];

	for (i = 1; i < n; ++i)
	{
		if (r != a[i] - a[i - 1])
		{
			r = 0;
		}
	}

	cout << "\n";
	cout << "разность прогрессии = " << r << "\n";
}


void funk3()
{
	int a[10]{};
	int n;

	cout << "N: ";
	cin >> n;

	int i;
	for (i = 0; i < n; ++i)
	{
		cout << "a[" << i + 1 << "]:";
		cin >> a[i];
	}


	int min = a[1];
	for (i = 1; i < n; i += 2)
	{
		if (a[i] < min) min = a[i];
	}
	cout << "\n";
	cout << "минимальный элемент из его элементов с четными номерами = " << min << "\n";
}


void funk4() {

	int a[10]{};
	int n, tmp;

	cout << "N: ";
	cin >> n;

	int i;
	for (i = 0; i < n; ++i)
	{
		cout << "a[" << i + 1 << "]:";
		cin >> a[i];
	}


	for (int i = 1; i < n - 1; i++)
	{
		if (a[i] > a[i - 1] && a[i] > a[i + 1])
			tmp = a[i];
	}

	cout << "\n";
	cout << " номер последнего локального максимума = " << tmp << "\n";


}
void funk5()
{
	int a[10]{};
	int n, i2;

	cout << "N: ";
	cin >> n;

	int i;
	for (i = 0; i < n; ++i)
	{
		cout << "a[" << i + 1 << "]:";
		cin >> a[i];
	}

	for (i = 0; i < n - 1; ++i)
	{
		for (i2 = i + 1; i2 < n; ++i2)
		{
			if (a[i] == a[i2])
			{
				cout << " i1= " << i + 1 << " i2= " << i2 + 1 << "\n";
			}
		}
	}
}



int main()
{
	setlocale(LC_ALL, "Russian");

	funk1();
	funk2();
	funk3();
	funk4();
	funk5();

}

