#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <iostream>

#define PI 3.14 //В качестве значения π использовать 3.14

//Задание к теме 4.
//  
//1. Даны стороны прямоугольника a и b.Найти его площадь S = a·b и периметр P = 2·(a + b).
//  
//2. Дан диаметр окружности d.Найти ее длину L = π·d.В качестве значения π использовать 3.14.
// 
//3. Даны два числа a и b.Найти их среднее арифметическое : (a + b) / 2.
//  
//4. Даны два ненулевых числа.Найти сумму, разность, произведение и частное их квадратов.
// 
//5. Даны два ненулевых числа.Найти сумму, разность, произведение и частное их модулей.



//3. Функция вычислияющая среднее арифметическое : (a + b) / 2.
double func_averArifmetic(int a, int b)
{
	return (a + b) / 2;
}

//2. Функция вычислияющая длинну окружности по диаметру
double func_leghtCicle(int c)
{
	return PI * c;
}


//1.Функция вычислияющая площадь S = a·b и 
int func_area(int a, int b)
{
	return a * b;
}

//1.Функция вычислияющая периметр P = 2·(a + b).
int func_perimetr(int a, int b) {
	return 2 * (a + b);
}


int main()
{

	// объявление переменных для работы
	int a;
	int b;
	int c;

	setlocale(LC_ALL, "rus");

	//ввод данных
	std::cout << "Сторона a : "; //вводим переменную a
	std::cin >> a;

	std::cout << "Сторона b : "; //вводим переменную b
	std::cin >> b;

	int res1; //переменная для вывода результата

	res1 = func_area(a, b); //площадь
	printf("Площадь %d\r\n", res1);
	printf("\r\n");
	res1 = func_area(a, b); //периметр
	printf("Периметр: %d\r\n", res1);
	printf("\r\n");

	//ввод данных
	std::cout << "Диаметр окружности : "; //вводим переменную c
	std::cin >> c;

	double res2 = func_leghtCicle(c);
	printf("Длинна окружности: %f\r\n", res2);
	printf("\r\n");


	//ввод данных
	std::cout << "Значение 1: "; //вводим переменную a
	std::cin >> a;

	std::cout << "Значение 2: "; //вводим переменную b
	std::cin >> b;

	double res3 = func_averArifmetic(a, b);
	printf("Среднее арифметическое: %f\r\n", res3);
	printf("\r\n");

	//4
	//ввод данных
	std::cout << "Число 1: "; //вводим переменную a
	std::cin >> a;

	std::cout << "Число 2: "; //вводим переменную b
	std::cin >> b;
	
	double res4 = a + b; //сумма
	double res5 = a - b; //разность
	double res6 = a * b; //произведение
	double res7 = pow(a, 2) / pow(b, 2); //частное квадратов

	printf("сумма: %f\r\n", res4);
	printf("разность: %f\r\n", res5);
	printf("произведение: %f\r\n", res6);
	printf("частное квадратов: %f\r\n", res7);
	printf("\r\n");


	//5
	//ввод данных
	std::cout << "Число 1: "; //вводим переменную a
	std::cin >> a;

	std::cout << "Число 2: "; //вводим переменную b
	std::cin >> b;

	double res8 = a + b; //сумма
	double res9 = a - b; //разность
	double res10 = a * b; //произведение
	double res11 =  abs(a) / abs(b); //частное модулей

	printf("сумма: %f\r\n", res8);
	printf("разность: %f\r\n", res9);
	printf("произведение: %f\r\n", res10);
	printf("частное модулей: %f\r\n", res11);
	printf("\r\n");


}

