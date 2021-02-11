#include <cstdlib>
#include <fstream>
#include <string>
#include <iostream>
#include <sstream>
#include <Windows.h>

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_CTYPE, "rus");
	string abc = "àáâãäå¸æçèéêëìíîïðñòóôõö÷øùúûüýþÿ", ABC = "ÀÁÂÃÄÅ¨ÆÇÈÉÊËÌÍÎÏÐÑÒÓÔÕÖ×ØÙÚÛÜÝÞß";
	string in, out;
	ofstream fout;
	getline(cin, in);
	int r;
	cin >> r;
	for (int i = 0; i < in.size(); i++)
	{
		if (abc.find(in[i]) != -1)
		{
			in[i] = abc[(abc.find(in[i]) + r) % abc.size()];
		}
		else if (ABC.find(in[i]) != -1)
		{
			in[i] = ABC[(ABC.find(in[i]) + r) % ABC.size()];
		}
	}
for (int i = 0; i < in.size(); i++)
	cout << in[i];
return 0;
}
