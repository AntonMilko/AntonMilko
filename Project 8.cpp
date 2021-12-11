﻿#include <iostream>
using namespace std;

void func_punct1() 
{
	/*
	1. Дан размер файла в байтах.Найти количество полных килобайтов,
		которые занимает данный файл

		1 килобайт равен 1024 байтам(Двоичное число)
		1 килобайт равен 1000 байтам(Десятичное число)
	*/
	int sizeByte;
	int sizeKbyte2;
	int sizeKbyte10;

	std::cout << "Размер файла в байтах = ";
	std::cin >> sizeByte;

	sizeKbyte2 = sizeByte / 1024;
	sizeKbyte10 = sizeByte / 1000;

	std::cout << "Размер файла в Килобайтах (десятичная система) = " << sizeKbyte10;
	std::cout << "\n";

	std::cout << "Размер файла в Килобайтах (двоичная система) = " << sizeKbyte2;
	std::cout << "\n";

}

void func_punct2()
{
	/*
  2. Даны целые положительные числа A и B(A > B).На отрезке длины A
  размещено максимально возможное количество отрезков длины
  B(без наложений).Найти количество отрезков B, размещенных на отрезке A.
	*/
	int A;
	int B;

	std::cout << "Длина отрезка A = ";
	std::cin >> A;

	std::cout << "Длина отрезка B = ";
	std::cin >> B;

	int C = A / B;

	

	std::cout << "Количество отрезков = " << C;
	std::cout << "\n";

}

void func_punct3()
{
	/*
  3. Даны целые положительные числа A и B(A > B).На отрезке длины A 
  размещено максимально возможное количество
  отрезков длины B(без наложений).Найти длину незанятой части отрезка A.
	*/
	int A;
	int B;

	std::cout << "Длина отрезка A = ";
	std::cin >> A;

	std::cout << "Длина отрезка B = ";
	std::cin >> B;

	int D = A - ((A/B) * B);

	std::cout << "Длина не занятой части = " << D;
	std::cout << "\n";
}

void func_punct4()
{
	/*
   4.Дано двузначное число.Вывести число, полученное при перестановке цифр исходного числа.
	*/
	int A;
	
	std::cout << "двузначное число  = ";
	std::cin >> A;

	int D = (A / 10) + (A % 10) * 10;

	std::cout << "результат  = " << D;
	std::cout << "\n";
}

void func_punct5()
{
	/*
  5.Дано трехзначное число.
  В нем зачеркнули первую слева цифру и приписали ее справа.
  Вывести полученное число.
	*/
	int A;

	std::cout << "трехзначное число  = ";
	std::cin >> A;

	int D = A / 100 * 10 + (A % 100) / 10 * 100 + A % 10;

	std::cout << "результат  = " << D;
	std::cout << "\n";
}

int main()
{

	setlocale(LC_ALL, "rus"); //русский язык в консоли

	func_punct1();// задание 1
	func_punct2();// задание 2
	func_punct3();// задание 3
	func_punct4();// задание 4
	func_punct5();// задание 5
}
