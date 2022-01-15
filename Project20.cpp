//1. Дан целочисленный массив A размера N.Назовем серией группу подряд идущих одинаковых элементов, а длиной серии — количество этих элементов(длина серии может быть равна 1).Сформировать два новых целочисленных массива B и C одинакового размера, записав в массив B длины всех серий исходного массива, а в массив C — значения элементов, образующих эти серии
//2. Дано целое число L(> 0) и целочисленный массив размера N.Заменить каждую серию массива, длина которой больше L, на один элемент с нулевым значением
//3. Дано целое число K(> 0) и целочисленный массив размера N.Поменять местами последнюю серию массива и его серию с номером K
//4. Дано множество A из N точек(точки заданы своими координатами x, y).Среди всех точек этого множества, лежащих во второй четверти, найти точку, наиболее удаленную от начала координат.Если таких точек нет, то вывести точку с нулевыми координатами
//5. Дано множество A из N точек(N > 2, точки заданы своими координатами x, y).Найти наибольший периметр треугольника, вершины которого принадлежат различным точкам множества A, и сами эти точки(точки выводятся в том же порядке, в котором они перечислены при задании множества A).

#include <iostream>
#include <math.h>
using namespace std;

void funk1()
{
	int a[10]{}, b[10]{}, c[10]{};
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
	b[k] = 1;
	c[k] = a[k];
	for (i = 1; i < n; ++i)
	{
		if (a[i - 1] == a[i]) ++b[k];
		else
		{
			++k;
			b[k] = 1;
			c[k] = a[i];
		}
	}

	for (i = 0; i <= k; ++i)
	{
		cout << "i" << i + 1 << " > " << b[i] << ": " << c[i] << "\n";
	}

}

void funk2()
{
	int a[20]{}, b[20]{};
	int n, l;


	cout << "N: ";
	cin >> n;

	cout << "L: ";
	cin >> l;

	int i;
	for (i = 0; i < n; ++i)
	{
		cout << "A[" << i + 1 << "]:";
		cin >> a[i];
	}


	int i2 = -1, len = 1, i3, endn = n;

	for (i = 1; i < n; ++i)
	{
		if (a[i - 1] != a[i])
		{
			if (len > l)
			{
				b[++i2] = 0;
				endn -= len - 1;
			}
			else
			{
				for (i3 = 0; i3 < len; ++i3) b[++i2] = a[i - 1];
			}
			len = 0;
		}
		++len;
	}

	if (len > l)
	{
		b[++i2] = 0;
		endn -= len - 1;
	}
	else
	{
		for (i3 = 0; i3 < len; ++i3) b[++i2] = a[i - 1];
	}

	for (i = 0; i < endn; ++i) a[i] = b[i];


	for (i = 0; i < endn; ++i)
	{
		cout << "a " << i + 1 << ": " << a[i] << "\n";
	}

}

void funk3()
{
	int a[20]{}, b[20]{};
	int n, k;

	cout << "N: ";
	cin >> n;

	cout << "K: ";
	cin >> k;

	int i;
	for (i = 0; i < n; ++i)
	{
		cout << "A[" << i + 1 << "]:";
		cin >> a[i];
	}

	int nk = 1, begin_k_series = 1, len_k_series = (k == 1 ? 1 : 0), begin_end_series=0;

	for (i = 1; i < n; ++i) {
		if (a[i - 1] != a[i]) {
			nk++;
			if (nk == k) begin_k_series = i;
			begin_k_series = i;
		}
		if (nk == k) len_k_series++;
	}

	int i2 = -1;
	for (i = 0; i < begin_k_series; ++i)  b[++i2] = a[i];

	for (i = begin_end_series; i < n; ++i)  b[++i2] = a[i];

	for (i = begin_end_series + len_k_series; i < begin_end_series; ++i)  b[++i2] = a[i];

	for (i = begin_k_series; i < begin_k_series + len_k_series; ++i)  b[++i2] = a[i];

	for (i = 0; i < n; ++i) a[i] = b[i];

	for (i = 0; i < n; ++i)
	{
		cout << "a " << i + 1 << ": " << a[i] << "\n";
	}

}

void funk4()
{
	float a[10][2]{};
	int n;

	cout << "N: ";
	cin >> n;

	int i;
	for (i = 0; i < n; ++i)
	{
		cout << "A[" << i + 1 << "] X:";
		cin >> a[i][0];
		cout << "A[" << i + 1 << "] Y:";
		cin >> a[i][1];
	}

	int a_max = 0;
	float r, r_max=0;
	for (i = 0; i < n; ++i) {
		if (a[i][0] < 0 && a[i][1]>0) {
			r = sqrt(pow(a[i][0], 2) + pow(a[i][1], 2));
			if (r > r_max || i == 0) {
				r_max = r;
				a_max = i;
			}
		}
	}

	cout << "A " << a_max + 1 << ": \n" << "x: " << a[a_max][0] << "\n" << "y: " << a[a_max][1] << "\n";

}

void funk5()
{
	float a[10][2]{};
	int n;

	cout << "N: ";
	cin >> n;

	int i;
	for (i = 0; i < n; ++i)
	{
		cout << "A[" << i + 1 << "] X:";
		cin >> a[i][0];
		cout << "A[" << i + 1 << "] Y:";
		cin >> a[i][1];
	}

	int p1, p2, p3, i2, i3;
	float p, p_max = 0;

	for (i = 0; i < n; ++i)
		for (i2 = i + 1; i2 < n; ++i2)
			for (i3 = i2 + 1; i3 < n; ++i3) 
			{
				p = 0;                 
				p += sqrt(pow(a[i][0] - a[i2][0], 2) + pow(a[i][1] - a[i2][1], 2));                 
				p += sqrt(pow(a[i][0] - a[i3][0], 2) + pow(a[i][1] - a[i3][1], 2));                 
				p += sqrt(pow(a[i2][0] - a[i3][0], 2) + pow(a[i2][1] - a[i3][1], 2));                 
				if (p > p_max)
				{
					p1 = i;
					p2 = i2;
					p3 = i3;
					p_max = p;
				}
			}

	cout << "P:" << p_max << "\n";
	cout << "A" << p1 + 1 << "\n" << "x: " << a[p1][0] << "\n y: " << a[p1][1] << "\n";
	cout << "A" << p2 + 1 << "\n" << "x: " << a[p2][0] << "\n y: " << a[p2][1] << "\n";
	cout << "A" << p3 + 1 << "\n" << "x: " << a[p3][0] << "\n y: " << a[p3][1] << "\n";
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

