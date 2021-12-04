#include <iostream>
#include <stdio.h>
using namespace std;







void func_punct6()
{
//6. Найти решение системы линейных уравнений вида
//A1·x + B1·y = C1,
//A2·x + B2·y = C2,
	double A1, B1, C1, A2, B2, C2, x, y;
	std::cout << "Введите A1 :";
	std::cin >> A1;

	std::cout << "Введите B1 :";
	std::cin >> B1;

	std::cout << "Введите C1 :";
	std::cin >> C1;

	std::cout << "Введите A2 :";
	std::cin >> A2;

	std::cout << "Введите B2 :";
	std::cin >> B2;

	std::cout << "Введите C2 :";
	std::cin >> C2;
	std::cout << "\n";

	double D = A1 * B2 - A2 * B1;
	x = (C1 * B2 - C2 * B1) / D;
	y = (A1 * C2 - A2 * C1) / D;

	std::cout << "Решение x=" << x << " y=" << y;
	std::cout << "\n";
}


void func_punct5()
{
//5. Решить линейное уравнение A·x + B = 0, заданное своими 
//коэффициентами A и B (коэффициент A не равен 0).
	double a, b;
	std::cout << "Введите коэффициент a (a не равен 0) :";
	std::cin >> a;
	std::cout << "\n";

	std::cout << "Введите коэффициент b :";
	std::cin >> b;
	std::cout << "\n";

	std::cout << "Решение линейного уравнения a*x+b=0 x= :" << (-1) * b / a << "\n";
}

void func_punct4()
{
//4. Скорость первого автомобиля V1 км / ч, второго — V2 км / ч,
//расстояние между ними S км.Определить расстояние между ними через T часов,
//если автомобили удаляются друг от друга.
	
	double V1, V2, S, T;
	std::cout << "Введите скорость первого автомобиля км/ч: ";
	std::cin >> V1;
	std::cout << "\n";

	std::cout << "Введите скорость второго автомобиля км/ч: ";
	std::cin >> V2;
	std::cout << "\n";

	std::cout << "Введите расстояние между ними км";
	std::cin >> S;
	std::cout << "\n";

	std::cout << "Введите количество часов: ";
	std::cin >> T;
	std::cout << "\n";

	double S1 = T * (V1 + V2) + S;
	std::cout << "Расстояние между автомобилями через " << T << "часов\n";
	std::cout << "Равно " << S1 << " км\n";
}




void func_punct3()
{
//3. Известно, что X кг конфет стоит A рублей.Определить,
//сколько стоит 1 кг и Y кг этих же конфет.
	double x, a;
	std::cout << "Введите известное количество кг: " << "\n";
	std::cin >> x;
	std::cout << "\n";

	std::cout << "Введите стоимость р: " << "\n";
	std::cin >> a;
	std::cout << "\n";

	double y;
	std::cout << "Введите расчётное количество кг: " << "\n";
	std::cin >> y;
	std::cout << "\n";

	std::cout << "1 кг стоит " << a / x << "\n";
	std::cout << y << " кг стоит " << y * (a / x) << "\n";

}



void func_punct2()
{
//2. Дано значение угла α в радианах(0 < α < 2·π).
// Определить значение этого же угла в градусах, учитывая, что 180◦ = π радианов

	const double PI = 3.14;
	double rad;

	std::cout << "Задайте угол а в радианах(0 < а < 2*PI): "; //
	std::cin >> rad;
	std::cout << "\n";

	double a = (180/PI) * rad;

	std::cout << "\n";
	std::cout << "угол в " << rad << " радиан равен " << a << " градусов";
	std::cout << "\n";
}


void func_punct1()
{
//1. Дано значение угла α в градусах(0 < α < 360).
//Определить значение этого же угла в радианах, учитывая, что 180◦ = π радианов.

	const double PI = 3.14;
	int A;
	
	std::cout << "Задайте угол а в градусах(0 < а < 360): "; //
	std::cin >> A; 
	std::cout << "\n";

	double rad = PI * A / 180;

	std::cout << "\n";
	std::cout << "угол в " << A << " градусов равен " << rad << " радиан";
	std::cout << "\n";
}

int main()
{
	setlocale(LC_ALL, "rus"); //русский язык в консоли

	// Задание 1 
	func_punct1();

	// Задание 2
	func_punct2();
	
	// Задание 3
	func_punct3();

	// Задание 4
	func_punct4();

	// Задание 5
	func_punct5();

	// Задание 6
	func_punct6();
}
