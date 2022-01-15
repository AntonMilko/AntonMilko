//1. Дан символьный файл, содержащий по крайней мере один символ пробела.Удалить все его элементы, расположенные перед первым символом пробела, включая и этот пробел.
//2. Дано имя файла и целые положительные числа N и K.Создать текстовый файл с указанным именем и записать в него N строк, каждая из которых состоит из K символов «* »(звездочка).
//3. Даны два текстовых файла.Добавить в начало первого файла содержимое второго файла
//4. Дан текстовый файл.Заменить в нем все подряд идущие пробелы на один пробел.
//5. Дан текстовый файл.Найти количество абзацев в тексте, если первая строка каждого абзаца начинается с 5 пробелов(«красная строка»).Пустые строки между абзацами не учитывать.

# include <bits/stdc++.h>
# include <iostream>
# include <windows.h>
# include <cmath>
# include <iomanip>
# include <fstream>
# include <regex>
#include <string>
#include <iterator>
#include <cstdlib>


using namespace std;

void funk1()
{
	ifstream ifs{ "in25.txt" };

	if (ifs.is_open())
	{
		string str{ std::istreambuf_iterator<char>{ ifs.rdbuf() },{} };
		regex reg{ "[^ ]* " };

		cout << regex_replace(str, reg, "", regex_constants::format_first_only) << std::endl;

		ifs.close();
	}
	else
	{
		cerr << "не могу открыть файл...\n";
	}
}

void funk2()
{
	char filename[20];
	int N, K;

	cout << "Enter N,K and file name: ";
	cin >> N >> K >> filename;

	ofstream ofile(filename);

	for (int i = 0; i < N; i++)
	{
		for (char j = '*'; j <= K; j++)
			ofile << j;
		ofile << '\n';
	}

	ofile.close();


}

void funk3()
{
	fstream f1;
	fstream f2;
	fstream f3;
	char c;

	const char* f1name = "file1.txt";
	const char* f2name = "file2.txt";
	const char* f3name = "file3.txt";

	f1.open(f3name, ios::in);
	f2.open(f3name, ios::in);

	f1.close();
	f2.close();

	f1.open(f1name, ios::out);
	f2.open(f2name, ios::out);
	f3.open(f3name, ios::in);

	f1.close();
	f2.close();
	f3.close();
}

void funk4()
{
	string str;
	ifstream infile("file.txt");
	if (!infile) {
		cerr << "Error in opening !" << endl;
	}
	else
	{
		while (infile >> str) 
		{
			cout << str << ' ';
		}
	}
	infile.close();
	system("pause");
}

void funk5()
{
	cout << "Введите имя файла в формате $(DiskName)\$(FileName).txt: ";
	string name;
	cin.sync();
	getline(cin, name);
	const char* name1 = name.c_str();
	string str; char S; int count = 0;
	ifstream F(name1);
	if (!F)
		cout << "Неправильно задан путь, введите путь в формате: $(DiskName)\$(FileName).txt" << endl << endl;
	else
	{
		while (!F.eof())
		{
			F.get(S);
			if (S == '\n')
				count++;
		}
		F.close();
	}
	cout << "Количество абзацев в файле: " << count << endl;
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

}

