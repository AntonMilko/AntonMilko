//1. Дана строка, состоящая из русских слов, разделенных пробелами(одним или несколькими).Найти количество слов в строке.
//2. Дана строка, состоящая из русских слов, разделенных пробелами(одним или несколькими).Найти длину самого короткого слова.
//3. Дана строка, состоящая из русских слов, набранных заглавными буквами и разделенных пробелами(одним или несколькими).Преобразовать каждое слово в строке, заменив в нем все последующие вхождения его первой буквы на символ «.»(точка).Например, слово «МИНИМУМ» надо преобразовать в «МИНИ.У.».Количество пробелов между словами не изменять
//4. Дана строка - предложение на русском языке.Подсчитать количество содержащихся в строке гласных букв.
//5. Дана строка, содержащая полное имя файла, то есть имя диска, список каталогов(путь), собственно имя и расширение.Выделить из этой строки имя файла(без расширения)
//6. Дана строка, содержащая полное имя файла.Выделить из этой строки название последнего каталога(без символов «\»).Если файл содержится в корневом каталоге, то вывести символ «\».

//7. Дана строка - предложение.Зашифровать ее, поместив вначале все символы, расположенные на четных позициях строки, а затем, в обратном, все символы, расположенные на нечетных позициях(например, строка «Программа» превратится в «ргамамроП»).


# include <bits/stdc++.h>
# include <iostream>
# include <windows.h>
# include <cmath>
# include <iomanip>
# include <fstream>
using namespace std;


void funk1()
{
	const int nmax = 100;

	char str[nmax] = "";

	ifstream in("Str24.txt");

	in.getline(str, sizeof(str));
	cout << "Исходная строка:" << "\n";
	cout << str << endl;
	int answer = 0;
	char* ptr;
	ptr = strtok(str, " ,.");
	while (ptr != NULL) 
	{
		ptr = strtok(NULL, " ,.");
		++answer;
	}

	cout << "Количество слов в строке = " << answer << "\n";


}

void funk2()
{
	string s;
	getline(cin, s);

	int res = INT_MIN, k = INT_MIN;

	s.insert(0, 1, ' ');
	s += " ";
	for (int i = 0; i < s.size(); ++i) 
	{
		if (s[i] != ' ') {
			k = 1;
			while (s[++i] != ' ')
				++k;
		}
		res = max(res, k);
	}
	
	cout << res << endl;
}

void funk3()
{
	string s;

	getline(cin, s);
	
	for (int i = 0; i < s.size() - 1; ++i) 
	{
		if (s[i] == s[s.size() - 1])
			s[i] = '.';
	}
	cout << s;
}

void funk4()
{
	int k = 0;
	string s;
	getline(cin, s);
	int pos = s.find_first_of("уеоаыияю");
	while (pos + 1) {
		++k;
		pos = s.find_first_of("уеоаыияю", pos + 1);
	}
	cout << k;
}

void funk5()
{
	string s;
	getline(cin, s);
	
	int pos = s.rfind('.');
	
	cout << s.substr(pos + 1);
}

void funk6()
{
	string s;
	
	getline(cin, s);

	int pos = s.rfind(char(92));
	int pos1 = s.rfind(char(92), pos - 1);
	
	cout << s.substr(pos1 + 1, pos - pos1 - 1);
}


void funk7()
{
	string s, s1 = "";

	getline(cin, s);

	for (int i = 0; i < s.size(); i++) 
	{
		if (i % 2 != 0)
		{
			cout << s[i];
		}
		else 
		{
			s1 += s[i];
		}
		
	}
	reverse(s1.begin(), s1.end());
	cout << s1;
}

int main()
{
	setlocale(LC_ALL, "Russian");
	SetConsoleOutputCP(1251);

	funk1();
	funk2();
	funk3();
	funk4();
	funk5();
	funk6();
	funk7();

}

