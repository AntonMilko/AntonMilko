//1. Дана матрица размера M × N.Преобразовать матрицу, поменяв местами минимальный и максимальный элемент в каждой строке.
//2. Дана матрица размера M × N.Поменять местами столбцы, содержащие минимальный и максимальный элементы матрицы.
//3. Дана матрица размера M × N(M и N — четные числа).Поменять местами левую верхнюю и правую нижнюю четверти матрицы
//4. Дана матрица размера M × N.Упорядочить ее строки так, чтобы их первые элементы образовывали возрастающую последовательность.
//5. Дана квадратная матрица A порядка M.Найти сумму элементов каждой ее диагонали, параллельной главной(начиная с одноэлементной диагонали).

#include <iostream>
#include <math.h>
#include <bits/stdc++.h>
#include <bits/IOMatrix.h>
#include <windows.h>
#include <cmath>
#include <iomanip>
#include <fstream>
using namespace std;

int N1; 

void funk1()
{
    const int m = 4, n = 5;

    int mat[m][n] = { {3, 0, 4, 9, 1},
                     {6, 7, 8, 1, 2},
                     {2, 5, 7, 0, 5},
                     {6, 7, 1, 0, 10} };

    cout << "Matrix before:" << '\n';

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << mat[i][j] << "  ";
        }
        cout << '\n';
    }

    int min = 0, max = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (mat[i][min] > mat[i][j])
            {
                min = j;
            }
            if (mat[i][max] < mat[i][j])
            {
                max = j;
            }
        }
        int temp = mat[i][min];
        mat[i][min] = mat[i][max];
        mat[i][max] = temp;
    }

    cout << "Matrix after:" << '\n';
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << mat[i][j] << "  ";
        }
        cout << '\n';
    }
}


void funk2()
{
    srand(time(0));
    int H, W, max_index, min_index;

    cout << "Введите H: ";
    cin >> H;
    
    cout << "Введите W: ";
    cin >> W;
    
    cout << "\n";
    
    double max, min;
    double** M = new double* [H];
    for (int i = 0; i < H; i++)
        M[i] = new double[W];

    for (int i = 0; i < H; i++)
    {
        for (int j = 0; j < W; j++)
        {
            M[i][j] = (double)(rand() % 5);
            cout << setw(7) << M[i][j];
        }
        cout << "\n\n";
    }

    max = min = M[0][0];
    max_index = min_index = 0; //на всякий, если условие ниже не выполнится, чтобы было знач. 0

    for (int j = 0; j < W; j++)
    {
        for (int i = 0; i < H; i++)
        {
            if (max < M[i][j])
            {
                max = M[i][j];
                max_index = j;
            }

            if (min > M[i][j])
            {
                min = M[i][j];
                min_index = j;
            }
        }
    }

    if (max_index == min_index)
        cout << "\nMax and Min elements are on the same column\n\n";
    else
    {
        for (int i = 0; i < H; i++)
            swap(M[i][max_index], M[i][min_index]);

        cout << "\nПосле того как поменял\n\n";

        for (int i = 0; i < H; i++)
        {
            for (int j = 0; j < W; j++)
                cout << std::setw(7) << M[i][j];
            cout << "\n\n";
        }
    }

    for (int i = 0; i < H; i++)
        delete[] M[i];
    delete[] M;
}

void funk3()
{
    int n = 0, c = 0;

    cout << "Введите количество строк и столбцов: ";
    cin >> n >> c;

    int** a = new int* [n];
    
    for (int i = 0; i < n; i++)
    {
        a[i] = new int[c];
    }
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < c; j++)
        {
            a[i][j] = rand() % 25;
            cout << a[i][j] << "\t";
        }
        cout << endl;
    }
    for (int i = 0; i < n; i++)
    {
        delete[] a[i];
    }
    delete[] a;
    cout << endl;
}



void Swap(int& x, int& y) {
    if (x != y) {
        x = x + y;
        y = x - y;
        x = x - y;
    }
}

void SwapMatrixRow(int mat[10][10], int x, int y) {
    int j;
    if (x != y)
        for (j = 1; j <= N1; ++j)
            Swap(mat[x][j], mat[y][j]);

}



void funk4()
{
    cout << "N: ";
    cin >> N1;
    int m;
    cout << "M: ";
    cin >> m;
    int a[10][10];

    int i, j;
    for (i = 1; i <= m; ++i) {
        cout << i << " : " << endl;
        for (j = 1; j <= N1; ++j) {
            cout << j << " : ";
            cin >> a[i][j];
        }
    }

    int m2 = m, i2;
    for (i = 1; i < m; ++i) {
        i2 = 1;
        --m2;
        while (i2 <= m2) {
            if (a[i2][1] > a[i2 + 1][1])
                SwapMatrixRow(a, i2, i2 + 1);
            ++i2;
        }
    }

    for (i = 1; i <= m; ++i) {

        for (j = 1; j <= N1; ++j) {
            cout << " : " << a[i][j];

        }
        cout << " : " << endl;
    }
}


void funk5()
{
    int N, M;
    cout << "Введите размер массива -> ";
    cin >> N;
    M = N;
    int** a = new int* [N];
    for (int i = 0; i < N; i++) {
        a[i] = new int[M];
    }
    srand(time(0));
    cout << "Исходный массив" << endl;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            a[i][j] = (rand() % 20);
            cout << setw(4) << a[i][j];
        }
        cout << endl;
    }
    cout << endl;
    
    int sum, k, v = 0;
    for (int i = 0; i < N * 2 - 1; ++i) {
        sum = 0;
        k = i;
        if (i >= N) { k = N - 1; ++v; };

        for (int j = k; j > v - 1; --j) {
            sum += a[k + v - j][j];
        }
        cout << sum << endl;
    }
    
    for (int i = 0; i < N; i++) {
        delete[]a[i];
    }
    delete[] a;
    system("PAUSE");
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

