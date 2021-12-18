
#include <iostream>
using namespace std;

void funk_Proc1() 
{
    int N, countS;
    cout << "Секунды:";
    cin >> N;
    cout << endl;
    

    countS = N % 60;
    cout << "количество секунд, прошедших с начала последней минуты:" << countS << endl;
    cout << "\n";
}

void funk_Proc2()
{
    int K;
    int dayNumber;
    cout << "Введите число K от 1 до 365:  ";
    cin >> K;

    dayNumber = (K % 7) - 3;

    cout << "Номер дня недели = " << dayNumber << endl;
    cout << "\n";

}

void funk_Proc3() 
{
    int K;
    int N;
    int dayNumber;
    cout << "Введите число K от 1 до 365:  ";
    cin >> K;
    cout << "\n";

    cout << "Введите число N от 1 до 7:  ";
    cin >> N;
    cout << "\n";

    dayNumber = ((K + N - 2) % 7) + 1;

    cout << "Номер дня недели = " << dayNumber << endl;
    cout << "\n";
}


void funk_Proc4()
{
    int A, B, C;
    int K, Unused_part;

    cout << "Введите сторону A:  ";
    cin >> A;
    cout << "\n";

    cout << "Введите сторону B:  ";
    cin >> B;
    cout << "\n";

    cout << "Введите сторону квадрата:  ";
    cin >> C;
    cout << "\n";

    K = (A/C)*(B/C); //кол-во квадратов в прямоугольнике

    Unused_part = (A * B) - (K * pow(C, 2)); //не занятая площадь

    cout << "кол-во квадратов в прямоугольнике = " << K << endl;
    cout << "\n";

    cout << "не занятая площадь = " << Unused_part << endl;
    cout << "\n";
}

void funk_Proc5()
{
    int A, B;

    cout << "Введите Целое число:  ";
    cin >> A;
    cout << "\n";

    B = (A / 100) + 1;

    cout << "номер столетия: " << B << endl;
    cout << "\n";
}


int main()
{
    setlocale(LC_ALL, "Russian");
    
    funk_Proc1();
    funk_Proc2();
    funk_Proc3();
    funk_Proc4();
    funk_Proc5();
}
