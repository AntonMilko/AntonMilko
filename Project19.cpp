//1. Дан целочисленный массив размера N.Удалить из массива все соседние одинаковые элементы, оставив их первые вхождения.
//2. Дан целочисленный массив размера N.Удалить из массива все элементы, встречающиеся ровно два раза, и вывести размер полученного массива и его содержимое.
//3. Дан массив размера N.Вставить элемент с нулевым значением перед минимальным и после максимального элемента массива.
//4. Дан массив размера N.После каждого отрицательного элемента массива вставить элемент с нулевым значением.
//5. Дан массив размера N.Перед каждым положительным элементом массива вставить элемент с нулевым значением.


#include <iostream>
using namespace std;

void funk1()
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

	int k = 0;
	for (i = 1; i < n; ++i)
	{
		if (a[k] != a[i])
		{
			++k;
			a[k] = a[i];
		}
	}
	++k;

	cout << "Массив А:" << "\n";

	for (i = 0; i < k; ++i)
	{
		cout << "A[" << i + 1 << "]: " << a[i] << "\n";
	}
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
		cout << "A[" << i + 1 << "]:";
		cin >> a[i];
	}

	int ai, i2, k, num;
	for (i = 0; i < n; i++)
	{
		num = 0;
		for (i2 = 0; i2 < n; ++i2)
			if (a[i] == a[i2]) ++num;
		if (num == 2)
		{
			k = i - 1;
			ai = a[i];
			for (i2 = i; i2 < n; ++i2)
				if (a[i2] != ai)
				{
					++k;
					a[k] = a[i2];
				}
			n = k + 1;
			--i;
		}
	}

	cout << "А - " << n << "\n";

	for (i = 0; i < n; ++i)
	{
		cout << "A[" << i + 1 << "]: " << a[i] << "\n";
	}

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
		cout << "A[" << i + 1 << "]:";
		cin >> a[i];
	}

	int amin = 0, amax = 0;
	for (i = 0; i < n; ++i) 
	{
		if (a[amin] > a[i]) 
		{
			amin = i;
		}
		if (a[amax] < a[i]) 
		{
			amax = i;
		}
	}
	
	if (amax > amin) amax++;

	n++;
	for (i = n - 1; i >= amin; --i) a[i] = a[i - 1];
	a[amin] = 0;

	n++;
	for (i = n - 1; i > amax + 1; --i) a[i] = a[i - 1];
	a[amax + 1] = 0;

	for (i = 0; i < n; ++i)
	{
		cout << "A[" << i + 1 << "]: " << a[i] << "\n";
	}

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

	int i2;
	for (i = n - 1; i >= 0; --i) 
	{
		if (a[i] < 0) 
		{
			++n;
			for (i2 = n; i2 > i; --i2) a[i2] = a[i2 - 1];
			a[i + 1] = 0;
		}
	}

	for (i = 0; i < n; ++i)
	{
		cout << "A[" << i + 1 << "]: " << a[i] << "\n";
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


	int i2;
	for (i = n - 1; i >= 0; --i) 
	{
		if (a[i] > 0) 
		{
			++n;
			for (i2 = n - 1; i2 > i; --i2) a[i2] = a[i2 - 1];
			a[i] = 0;
		}
	}

	for (i = 0; i < n; ++i)
	{
		cout << "A[" << i + 1 << "]: " << a[i] << "\n";
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

