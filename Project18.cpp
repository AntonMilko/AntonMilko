﻿//1. Даны массивы A и B одинакового размера N.Поменять местами их содержимое и вывести вначале элементы преобразованного массива A, а затем — элементы преобразованного массива B.
//2. Дан массив A размера N.Сформировать новый массив B того же размера по следующему правилу : элемент BK равен среднему арифметическому элементов массива A с номерами от 1 до K.
//3. Дан целочисленный массив размера N.Увеличить все нечетные числа, содержащиеся в массиве, на исходное значение последнего нечетного числа.Если нечетные числа в массиве отсутствуют, то оставить массив без изменений
//4. Дан массив размера N.Обнулить элементы массива, расположенные между его минимальным и максимальным элементами(не включая минимальный и максимальный элементы).
//5. Дан массив размера N, все элементы которого, кроме первого, упорядочены по возрастанию.Сделать массив упорядоченным, переместив первый элемент на новую позицию.

#include <iostream>
using namespace std;

void funk1()
{
	int a[10]{}, b[10]{};
	int n;

	cout << "N: ";
	cin >> n;

	int i;
	for (i = 0; i < n; ++i)
	{
		cout << "A[" << i + 1 << "]:";
		cin >> a[i];
	}

	for (i = 0; i < n; ++i)
	{
		cout << "B[" << i + 1 << "]:";
		cin >> b[i];
	}

	for (i = 0; i < n; ++i)
	{
		a[i] += b[i];
		b[i] = a[i] - b[i];
		a[i] = a[i] - b[i];
	}

	cout << "Массив А:" << "\n";
	for (i = 0; i < n; ++i)
	{
		cout << "A[" << i + 1 << "]: " << a[i] << "\n";
	}

	cout << "Массив B:" << "\n";
	for (i = 0; i < n; ++i)
	{
		cout << "B[" << i + 1 << "]: " << b[i] << "\n";;
	}
}

void funk2()
{
	int a[10]{}, b[10]{};
	int n;

	cout << "N: ";
	cin >> n;

	int k;
	for (k = 0; k < n; ++k)
	{
		cout << "a[" << k + 1 << "]: ";
		cin >> a[k];
	}

	int i;
	for (k = 0; k < n; ++k)
	{
		b[k] = 0;
		for (i = k; i < n; ++i)
		{
			b[k] += a[i];
		}
	}

	cout << "Массив B:" << "\n";

	for (k = 0; k < n; ++k)
	{
		cout << "B[" << k + 1 << "]: " << b[k] << "\n";;
	}

}

void funk3()
{
	int a[10]{};
	int n, i, k = 0;

	cout << "N: ";
	cin >> n;

	for (i = 0; i < n; ++i)
	{
		cout << "A[" << i + 1 << "]:";
		cin >> a[i];
	}

	for (i = 0; i < n; ++i)
	{
		if (a[i] % 2 != 0)
		{
			cout << a[i] << "\n";
			++k;
		}
	}
	cout << "K = " << k << "\n";
}

void funk4()
{
	int a[10]{};
	int n;

	cout << "N: ";
	cin >> n;

	int i;
	for (i = 0; i < n; ++i)
	{
		cout << "A[" << i + 1 << "]:";
		cin >> a[i];
	}

	int min = 0, max = 0;

	for (i = n - 1; i >= 0; --i)
	{
		if (a[i] > a[max]) max = i;
		if (a[i] < a[min]) min = i;
	}

	if (max < min)
	{
		max += min;
		min = max - min;
		max = max - min;
	}

	for (i = min + 1; i < min + (max - min); ++i)
	{
		a[i] = 0;
	}
	cout << "A: ";

	for (i = 0; i < n; ++i)
	{
		cout << "[A" << i + 1 << "]: " << a[i] << "\n";
	}
}

void funk5()
{
	int a[10]{};
	int n;

	cout << "N: ";
	cin >> n;

	int i;
	for (i = 0; i < n; ++i)
	{
		cout << "A[" << i + 1 << "]:";
		cin >> a[i];
	}

	for (i = 2; i < n; ++i)
	{
		if (a[i - 1] > a[i])
		{
			a[i - 1] = a[i] + a[i - 1];
			a[i] = a[i - 1] - a[i];
			a[i - 1] = a[i - 1] - a[i];
		}
	}

	for (i = 1; i < n; ++i)
	{
		cout << "A[" << i << "]: " << a[i] << "\n";
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

