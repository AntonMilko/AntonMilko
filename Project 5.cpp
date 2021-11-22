#include <iostream>
#include <stdio.h>
#include<string>
#include <cmath>

using namespace std;

//функция для проверки точки С (С>A &&  C<B)
bool func_checkC(double a, double b, double c) {
    if (a > c > b) 
    { 
        return true; 
    }
    else 
    {
        return false;
    }
}

// растояние между двумя точками на плоскости (корень из суммы разности 
// квадратов растояний координат) ) 
double function1(double x1, double y1, double x2, double y2) {
    return sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
}

int main()
{
    //1. Найти расстояние между двумя точками с заданными координатами(x1, y1) и(x2, y2)

    //    2. Даны три точки A, B, C на числовой оси.Найти длины отрезков AC и BC и их сумму.
    //    3. Даны три точки A, B, C на числовой оси.Точка C расположена
    //    между точками A и B.Найти произведение длин отрезков AC и BC
    //    4. Даны координаты двух противоположных вершин прямоугольника :
    //(x1, y1), (x2, y2).Стороны прямоугольника параллельны осям координат.
    //    Найти периметр и площадь данного прямоугольника.
    //    5. Даны координаты трех вершин треугольника : (x1, y1), (x2, y2), (x3, y3).Найти его периметр и площадь

    setlocale(LC_ALL, "rus");
    
    //1.1 объявление переменных для работы
    // первая точка
    double P1X; 
    double P1Y;
    
    // вторая точка
    double P2X;
    double P2Y;
    
    std::cout << "Точка 1 х : "; 
    std::cin >> P1X;

    std::cout << "Точка 1 у : ";
    std::cin >> P1Y;

    std::cout << "Точка 2 х : ";
    std::cin >> P2X;

    std::cout << "Точка 2 у : ";
    std::cin >> P2Y;

    double ret1 = function1(P1X, P1Y, P2X, P2Y);
    std::cout << "Растояние между 2 точками : " + to_string(ret1) + "\n";
    

    //2. Даны три точки A, B, C на числовой оси.Найти длины отрезков AC и BC и их сумму.
    //2.1 объявление переменных для работы
    double a, b, c;
    
    std::cout << "A: ";
    std::cin >> a;

    std::cout << "B: ";
    std::cin >> b;

    std::cout << "C: ";
    std::cin >> c;

    
    double lenAC = abs(a - c);// длинна АС
    double lenBC = abs(b - c);// длинна BC
    double sumLen = lenAC + lenBC; // сумма длин отрезков

    std::cout << "Длинна АС : " + to_string(lenAC) + "\n";
    std::cout << "Длинна BС : " + to_string(lenBC) + "\n";
    std::cout << "сумма длин отрезков : " + to_string(sumLen) + "\n";

    //3. Даны три точки A, B, C на числовой оси.Точка C расположена 
    // между точками A и B.Найти произведение длин отрезков AC и BC
    //3.1 объявление переменных для работы

    std::cout << "точка A: ";
    std::cin >> a;

    std::cout << "точка B: ";
    std::cin >> b;

    std::cout << "точка C больше А и меньше В : ";
    std::cin >> c;

    bool chckC = func_checkC(a, b, c ); //результат проверки  
    
    if (!chckC) 
    {
        while (chckC = false) 
        {
            std::cout << "точка C больше А и меньше В : ";
            std::cin >> c;
        }
        chckC= func_checkC(a, b, c);
    }

    std::cout << "Сумма длин отрезков: " + to_string((c-a) + (b-c)) + "\n";

    
    //4. Даны координаты двух противоположных вершин прямоугольника :
    //(x1, y1), (x2, y2).Стороны прямоугольника параллельны осям координат.
    //Найти периметр и площадь данного прямоугольника.
    //4.1
    double x1, x2, y1, y2, lenA, lenB, s, p;

    std::cout << "x1 : ";
    std::cin >> x1;

    std::cout << "y1 : ";
    std::cin >> y1;

    std::cout << "x2 : ";
    std::cin >> x2;

    std::cout << "y2 : ";
    std::cin >> y2;

    lenA = abs(x2 - x1);
    lenB = abs(y2 - y1);
    p = (lenA + lenB) * 2;
    s = lenA * lenB;
    
    //Вывод результата
    std::cout << "Прериметр : " + to_string(p) + "Площадь : " + to_string(s) + "\n";

    //5. Даны координаты трех вершин треугольника : (x1, y1), (x2, y2), (x3, y3).
    //Найти его периметр и площадь    
    double xx1, yy1, xx2, yy2, xx3, yy3, aa, bb, cc, per, ss;

    std::cout << "X1  : ";
    std::cin >> xx1;

    std::cout << "Y1 : ";
    std::cin >> yy1;

    std::cout << "X2 : ";
    std::cin >> xx2;

    std::cout << "Y2 : ";
    std::cin >> yy2;

    std::cout << "X3 : ";
    std::cin >> xx3;

    std::cout << "Y3 : ";
    std::cin >> yy3;
    //pow(x, 2);
    aa = sqrt(pow((xx2 - xx1),2) + pow((yy2 - yy1),2));
    bb = sqrt(pow((xx3 - xx2),2) + pow((yy3 - yy2),2));
    cc = sqrt(pow((xx1 - xx3),2) + pow((yy1 - yy3),2));
    per = (aa + bb + cc) / 2;
    ss = sqrt(per * (per - aa) * (per - bb) * (per - cc));

    std::cout << "Прериметр : " + to_string(per) + "Площадь : " + to_string(ss) + "\n";

}

