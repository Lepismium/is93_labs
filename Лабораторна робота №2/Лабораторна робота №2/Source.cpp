#include<iostream>
#include"MyText.h"
#include<vector>
using namespace Text;
using namespace std;
void AddString(MyText &text);//��������� ����� 
void Menu(); // ���� ����	
void OutputText(MyText text);// ������� �����
void MinString(MyText text);// ����������� �����, ���� �� �������� �������
void OutputStringFirstLatters(MyText text);//��������� ����� ������ �������
void LettersCount(MyText text);//��������� ������� ����������� �������� �������

int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "���i����� ��������� ���������� IS-93\n";
	int n;
	cout << "������� ���������� �����: ";
	cin >> n;
	cout << "������� �����:\n";
	MyText text;
	for (int i = 0; i < n + 1; i++)
	{
		vector<char>arr;
		for (int j = 0; j < 1000; j++)
		{
			char c;
			c = getchar();
			if (c == '\n')
			{
				arr.push_back('\0');
				break;
			}
			arr.push_back(c);
		}
		if (i != 0)
		{
			MyString s;
			s.GetStr(arr);
			text.AddStr_2(s);
			arr.clear();
		}
		arr.clear();
	}
	int c;
	Menu();
	cout << "�������� ����� ����: ";
	cin >> c;
	while(true)
	{
		switch(c)
		{
		case 1: system("cls"); AddString(text); Menu(); cin >> c; break;
		case 2: system("cls"); cout << "������� ����� ������ ��� ��������: ";int c1;cin >> c1; text.DeleteStr_2(c1); Menu(); cin >> c; break;
		case 3: system("cls"); text.DeleteText_2(); Menu(); cin >> c;break;
		case 4: system("cls"); LettersCount(text); Menu();  cin >> c; break;
		case 5: system("cls"); OutputStringFirstLatters(text); Menu(); cin >> c; break;
		case 6: system("cls"); MinString(text); Menu();  cin >> c; break;
		case 7: system("cls"); OutputText(text); Menu();  cin >> c;break;
		case 8: return 0; break;
		default:
			break;
		}
	}
	system("pause");
	return 0;
}
void Menu()
{
	cout << "Menu:\n";
	cout << "1.�������� ������.\n2.������� ������.\n";
	cout << "3.������� ���� �����." << endl;
	cout << "4.����� ���������� ��������� �������..." << endl;
	cout << "5.������� ������, ������� ������� �� ������ �������� ������ ������." << endl;
	cout << "6.������� ������, ������� ����� ����������� �����." << endl;
	cout << "7.������� �����." << endl;
	cout << "8.����� �� ���������.\n";
}
void AddString(MyText &text)
{
	cout << "������� ����� ������: ";
	for (int i = 0; i < 2; i++)
	{
		vector<char>arr_2;
		for (int j = 0; j < 1000; j++)
		{
			char c;
			c = getchar();
			if (c == '\n')
			{
				arr_2.push_back('\0');
				break;
			}
			arr_2.push_back(c);
		}
		if (i != 0)
		{
			MyString t;
			t.GetStr(arr_2);
			text.AddStr_2(t);
			arr_2.clear();
		}
		arr_2.clear();
	}
}
void OutputText(MyText text)
{
	cout << "My text:\n";
	for (int i = 0; i < text.arrgs.size(); i++)
	{
		for (int j = 0; j < text.arrgs[i].count; j++)
		{
			cout << text.arrgs[i].arrgs[j];
		}
		cout << endl;
	}
}
void MinString(MyText text)
{
	vector<char>string;
	text.MinStr_2(string);
	cout << "����������� ������:" << endl;
	for (int i = 0; i < string.size(); i++)
	{
		cout << string[i];
	}
	cout << endl;
}
void OutputStringFirstLatters(MyText text)
{
	vector<char>string;
	text.FirstChars_2(string);
	cout << "String: " <<endl;
	for (int i = 0; i < string.size(); i++)
	{
		cout << string[i];
	}
	cout << endl;
}
void LettersCount(MyText text)
{
	cout << "Input ������ " << endl;
	char c;
	cin >> c;
	int k = 0;
	cout << "Noumbers: ";
	k = text.CharCountInTextAndStr_2(c);
	cout << k;
	cout << endl;
}