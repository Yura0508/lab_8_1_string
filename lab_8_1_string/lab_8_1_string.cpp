// lab_8_1_string.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//


#include <iostream>
#include <string>
using namespace std;
int Count(const string s, const string cs)
{
	size_t pos = 0;
	int k = 0;
	while ((pos = s.find(cs, pos)) != -1)
	{
		k++;
		pos++;
	}
	return k;
}


string Change(string& s)
{
	size_t pos = 0;
	while ((pos = s.find('w', pos)) != -1)
		if (s[pos + 1] == 'h' && s[pos + 2] == 'i' && s[pos + 3] == 'l' && s[pos + 4] == 'e')
			s.replace(pos, 5, "***");
		else
			pos++;
	return s;
}
int main()
{
	string str;
	cout << "Enter string:" << endl;
	getline(cin, str);
	string cs = "while";
	cout << "String contained " << Count(str, cs) << " groups of 'while'" << endl;
	string dest = Change(str);
	cout << "Modified string (param) : " << str << endl;
	cout << "Modified string (result): " << dest << endl;
	return 0;
}
