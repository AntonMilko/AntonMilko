#include <iostream>
#include <stdio.h>

using namespace std;

void func_punct1() {
    int a, b, a1, b1;
    std::cout << "Переменная а : ";
    std::cin >> a;

    std::cout << "Переменная b : ";
    std::cin >> b;

    std::cout << "Переменная а= " << a << "\n";
    std::cout << "Переменная b= " << b << "\n";
    std::cout << " \n";

    a1 = a;
    b1 = b;
    a = b1;
    b = a1;
    std::cout << "a = " << a << "\n" << "b = " << b << " \n";
    std::cout << " \n";
}


void func_punct2()
{
    //2. Даны переменные A, B, C.Изменить их значения, 
    //переместив содержимое A в B, B — в C, C — в A, и 
    //вывести новые значения переменных A, B, C.
    int a, b, c, a1, b1, c1;

    std::cout << "Переменная а : ";
    std::cin >> a;

    std::cout << "Переменная b : ";
    std::cin >> b;

    std::cout << "Переменная c : ";
    std::cin >> c;

    std::cout << "Переменная а= " << a << "\n";
    std::cout << "Переменная b= " << b << "\n";
    std::cout << "Переменная c= " << c << "\n";
    std::cout << " \n";

    a1 = a;
    b1 = b;
    c1 = c;

    b = a1;
    c = b1;
    a = c1;
    std::cout << "a = " << a << "\n" << "b = " << b << " \n" << "c = " << c << " \n";
    std::cout << " \n";
}


void func_punct3()
{
    //3. Даны переменные A, B, C. Изменить их значения, 
    //переместив содержимое A в C, C — в B, B — в A, и 
    //вывести новые значения переменных A, B, C.
    int a, b, c, a1, b1, c1;

    std::cout << "Переменная а : ";
    std::cin >> a;

    std::cout << "Переменная b : ";
    std::cin >> b;

    std::cout << "Переменная c : ";
    std::cin >> c;

    std::cout << "Переменная а= " << a << "\n";
    std::cout << "Переменная b= " << b << "\n";
    std::cout << "Переменная c= " << c << "\n";
    std::cout << " \n";

    a1 = a;
    b1 = b;
    c1 = c;

    c = a1;
    a = b1;
    b = c1;
    std::cout << "a = " << a << "\n" << "b = " << b << " \n" << "c = " << c << " \n";
    std::cout << " \n";
}

void func_punct4()
{
    //4. Найти значение функции y = 3x6 − 6x2 − 7 при данном значении x
    double x;

    std::cout << "X = : ";
    std::cin >> x;
    std::cout << " \n";

    double y;

    y = (3 * pow(x,6)) - (6 * pow(x,2)) - 7;
    std::cout << "Значение функции при x = " << x << "\n" << "Равно " << y << "\n";
    std::cout << " \n";
}

void func_punct5()
{
    //5. Найти значение функции y = 4(x−3)6 − 7(x−3)3 + 2 при данном значении x
    double x;

    std::cout << "X = : ";
    std::cin >> x;
    std::cout << " \n";

    double y;

    y = (4 * pow((x - 3),6)) - (7 * pow((x - 3),3)) + 2;
    std::cout << "Значение функции при x = " << x << "\n" << "Равно " << y << "\n";
    std::cout << " \n";
}


void func_punct6()
{
    //6. Дано число A. Вычислить A8 , используя вспомогательную переменную
    //и три операции умножения.
    double a, b;

    std::cout << "A = : ";
    std::cin >> a;
    std::cout << " \n";

    b = a * a; //1 оперция умножения 
    b = b * b; //2 оперция умножения
    b = b * b; //3 оперция умножения

    std::cout << "Значение A в степени 8 = " << b << "\n";
    std::cout << " \n";
}

void func_punct7()
{
    //7. Дано число A. Вычислить A15, используя две вспомогательные
    //переменные и пять операций умножения.
    double a, b, c;

    std::cout << "A = : ";
    std::cin >> a;
    std::cout << " \n";

    b = a * a;  // 2
    c = b * a; //  3
    b = b * c; //5
    
    c = b; // 5
    
    b = c * c; //10
    b = b * c; //15

    std::cout << "Значение A в степени 15 = " << b << "\n";
    std::cout << " \n";
}

int main()
{
    setlocale(LC_ALL, "rus");
    //func_punct1();
    //func_punct2();
    //func_punct3();
    //func_punct4();
    //func_punct5();
    //func_punct6();
    func_punct7();

}


