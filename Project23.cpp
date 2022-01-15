//1. Дан символ C.Вывести два символа, первый из которых предшествует символу C в кодовой таблице, а второй следует за символом C.
//2. Дана непустая строка S.Вывести строку, содержащую символы строки S, между которыми вставлено по одному пробелу.
//3. Дана строка.Подсчитать количество содержащихся в ней прописных латинских букв.
//4. Дан символ C и строка S.Удвоить каждое вхождение символа C в строку S
//5. Даны строки S и S0.Найти количество вхождений строки S0 в строку S.
//

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void funk1()
{
	char symbol = 'C';
	cout << "Предыдущий символ: " << static_cast<char>(symbol - 1) <<
		" | Следующий символ: " << static_cast<char>(symbol + 1) << endl;
	
	system("pause");
}

void funk2()
{
	string s;
	cout << "строка: ";
	cin >> s;

	for (int i = 0; i < s.size(); ++i)
	{
		cout << s[i] << ' ';
	}

}

void funk3()
{
	int l = 0, r = 0;

	string s;

	cout << "строка: ";
	cin >> s;

	
	for (int i = 0; i < s.size(); ++i) {
		if (s[i] >= 'a' && s[i] <= 'z')
			++l;
		if (s[i] >= 'а' && s[i] <= 'я')
			++r;
	}
	cout << "Ланских: " << l << " Русских: " << r << endl;
}

void funk4()
{
	char c;
	string s;

	cout << "Символ: ";
	cin >> c;

	
	cout << "строка: ";
	cin >> s;

	
	int pos = s.find(c);

	while (pos + 1) 
	{
		s.insert(pos, 1, c);
		pos = s.find(c, pos + 2);
	}

	cout << "Новая строка: " << s << endl;
}

void funk5()
{
	string s, s0;

	int k = 0;
	cout << "строка S: ";
	cin >> s;

	cout << "строка S0: ";
	cin >> s0;

	cin >> s >> s0;
	int pos = s.find(s0);
	while (pos + 1) 
	{
		++k;
		s.find(s0, pos + 1);
	}
	cout <<"Кол-во: "<< k << endl;

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

