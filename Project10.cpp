#include <iostream>
using namespace std;

void func_Proc1() 
{
	//«Справедливы неравенства A > 2 и B ≤ 3»
	int A, B;
	
	cout << "число A:";
	cin >> A;
	cout << "\n";

	cout << "число B:";
	cin >> B;
	cout << "\n";

	if (A > 2 && B <= 3) 
	{
		cout << "Истинно" << "\n";
	}
	else 
	{
		cout << "Ложь" << "\n";
	}
}


void func_Proc2()
{
	//«Справедливо двойное неравенство A < B < C».
	int A, B, C;

	cout << "число A:";
	cin >> A;
	cout << "\n";

	cout << "число B:";
	cin >> B;
	cout << "\n";

	cout << "число C:";
	cin >> C;
	cout << "\n";

	if (A < B && B < C)
	{
		cout << "Истинно" << "\n";
	}
	else
	{
		cout << "Ложь" << "\n";
	}
}

void func_Proc3()
{
	//Данное число является четным двузначным
	int A;

	cout << "число A:";
	cin >> A;
	cout << "\n";

	if (A%2==0 && A>9 && A<100)  
	{
		cout << "Истинно" << "\n";
	}
	else
	{
		cout << "Ложь" << "\n";
	}
}

void func_Proc4()
{
	//Цифры данного числа образуют возрастающую или убывающую последовательность
	//125 true 543-true 132 -false
	int A;

	cout << "число A:";
	cin >> A;
	cout << "\n";

	if ((A / 100) > (A % 100 / 10) && (A % 100 / 10) > (A % 10) || (A / 100) < (A % 100 / 10) && (A % 100 / 10) < (A % 10))
	{
		cout << "Истинно" << "\n";
	}
	else
	{
		cout << "Ложь" << "\n";
	}
}

void func_Proc5()
{
	//Данное число читается одинаково слева направо и справа налево
	//1001 true 2568 false
	int A;

	cout << "число A:";
	cin >> A;
	cout << "\n";

	if ((A % 10 == A / 1000 && A % 100 / 10 == A % 1000 / 100))
	{
		cout << "Истинно" << "\n";
	}
	else
	{
		cout << "Ложь" << "\n";
	}
}

void func_Proc6()
{
	//Треугольник со сторонами a, b, c является прямоугольным
	// 5 3 17 
	int A, B, C;

	cout << "сторона A:";
	cin >> A;
	cout << "\n";

	cout << "сторона B:";
	cin >> B;
	cout << "\n";

	cout << "сторона C:";
	cin >> C;
	cout << "\n";

	if ((A * A == B * B + C * C) || (B * B == A * A + C * C) || (C * C == A * A + B * B))
	{
		cout << "Истинно" << "\n";
	}
	else
	{
		cout << "Ложь" << "\n";
	}
}

void func_Proc7()
{
	//Существует треугольник со сторонами a, b, c
	//Треугольник существует только тогда, когда сумма любых двух его сторон больше третьей.
	int A, B, C;

	cout << "сторона A:";
	cin >> A;
	cout << "\n";

	cout << "сторона B:";
	cin >> B;
	cout << "\n";

	cout << "сторона C:";
	cin >> C;
	cout << "\n";

	if ((A+B >C) || (A+C >B) || (B+ C >A))
	{
		cout << "Истинно" << "\n";
	}
	else
	{
		cout << "Ложь" << "\n";
	}
}




int main()
{
	setlocale(LC_ALL, "Rus");

	func_Proc1();
	func_Proc2();
	func_Proc3();
	func_Proc4();
	func_Proc5();
	func_Proc6();
	func_Proc7();



}

