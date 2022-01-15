//1. Дана квадратная матрица A порядка M(M — нечетное число).Начиная с элемента A1, 1 и перемещаясь против часовой стрелки, вывести все ее элементы по спирали : первый столбец, последняя строка, последний столбец в обратном порядке, первая строка в обратном порядке, оставшиеся элементы второго столбца и т.д.; последним выводится центральный элемент матрицы.
//2. Дана матрица размера M × N и целое число K(1 ≤ K ≤ M).Найти сумму и произведение элементов K - й строки данной матрицы.
//3. Дана матрица размера M × N.Найти номер ее столбца с наименьшим произведением элементов и вывести данный номер, а также значение наименьшего произведения.
//4. Дана матрица размера M × N.В каждом ее столбце найти количество элементов, больших среднего арифметического всех элементов этого столбца
//5. Дана целочисленная матрица размера M × N.Найти номер первого из ее столбцов, содержащих только нечетные числа.Если таких столбцов нет, то вывести 0.


#include <iostream>
#include <math.h>
#include <bits/stdc++.h>
#include <bits/IOMatrix.h>
#include <windows.h>
#include <cmath>
#include <iomanip>
#include <fstream>


using namespace std;


void funk1() 
{
    srand(time(0));
    int n;
    
    cout << "N: ";
    cin >> n;
    

    vector <vector < int > > ar(n, vector < int >(n));

    for (size_t i = 0; i < ar.size(); ++i)
        for (size_t j = 0; j < ar.size(); ++j)
            ar[i][j] = rand() % 90 + 10;
    
    for (auto i : ar) 
    {
        for (auto j : i)
        cout << j << " ";
        cout << endl;
    }
    cout << endl;


    for (int i = 0; i < ar.size() / 2 + 1; ++i)
    {
        for (size_t j = i; j < ar.size() - i; ++j)
            cout << ar[j][i] << " ";
        for (size_t j = i + 1; j < ar.size() - i; ++j)
            cout << ar[ar.size() - 1 - i][j] << " ";
        for (size_t j = ar.size() - 2 - i; (int)j >= i; --j)
            cout << ar[j][ar.size() - 1 - i] << " ";
        for (size_t j = ar.size() - 2 - i; j > i; --j)
            cout << ar[i][j] << " ";
    }


}
void funk2() 
{
    int m, n, k, s = 0, p = 1;

    cout << "M: ";
    cin >> m;

    cout << "N: ";
    cin >> n;

    cout << "K: ";
    cin >> k;
   
    vector < vector <int> > a(n, vector <int>(m));
       
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j)
            cin >> a[i][j];
    }
    for (int i = 0; i < n; ++i) {
        s += a[k - 1][i];
        p *= a[k - 1][i];
    }
    cout << s << " " << p;

}
void funk3() 
{
    int m, n, s, res = INT_MAX, pos = 0;
    
    cout << "M: ";
    cin >> m;

    cout << "N: ";
    cin >> n;

    vector < vector <int> > a(n, vector <int>(m));
    
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j)
            cin >> a[i][j];
    }
    for (int i = 0; i < n; ++i) {
        s = 1;
        for (int j = 0; j < m; ++j)
            s *= a[j][i];
        if (res > s) {
            pos = i + 1;
            res = s;
        }
    }
    cout << pos << ' ' << res << endl;

}
void funk4()
{
    int m, n, i, k;

    cout << "M: ";
    cin >> m;

    cout << "N: ";
    cin >> n;

    vector < vector <int> > a(n, vector <int>(m));

    srand(time(NULL));
    for (i = 0; i < m; i++) {
        for (k = 0; k < n; k++)
            cout << setw(6) << (a[i][k] = rand() % 101 - 50);
        cout << endl;
    }

    cout << endl;
    for (k = 0; k < n; k++) {
        // находим сумму элементов в столбце
        int sum = 0;
        for (i = 0; i < m; i++)
            sum += a[i][k];
        // находим среднее арифметическое элементов столбца
        double avg = (double)sum / m;
        // находим число элементов больших среднего арифметического
        int count = 0;
        for (i = 0; i < m; i++)
            if (a[i][k] > avg)
                count++;
        // выводим результат на экран
        
        cout <<"количество элементов "<< setw(6) << count;
    }
    cout << endl;

}

void funk5() 
{
    int matr[RMAX][CMAX];
    int nr, nc;
    
    input(matr, "Matrix2.txt", nr, nc);
    output(matr, nr, nc);

    int numdercol = 0;
    for (int col = 0; col < nc; ++col) {
        bool odd = 1;
        for (int row = 0; row < nr; ++row) {
            if (matr[row][col] % 2 == 0) odd = 0;
        }
        if (odd) {
            numdercol = col + 1;
            break;
        }
    }
    cout << "Номер первого столбца, содержащего только нечетные числа = " << numdercol << endl;
    system("pause");
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

