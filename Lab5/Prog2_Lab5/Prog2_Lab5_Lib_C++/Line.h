#pragma once
#include "vector"
#include "string"

using std::vector;
using std::string;

class Line
{
// protected ������ ������ �������� ������� ��� ������� �������� ������
protected:
	vector<char> symbols;

public:
	Line(string input);

	virtual vector<char> GetWhole();

	virtual int Length();

	virtual int Count(char target);

	virtual int Count();
};

class Symbols : public Line
{
public:
	// ������������ ����� �� �����������, ��� ������� ����������� ����������� �������� ������
	Symbols(string input) : Line(input) { };

	int Count();

    // ������ ������� Length ���������� ������� ������� � �� ������������
};

class LargeLetters : public Line
{
public:
	// ������������ ����� �� �����������, ��� ������� ����������� ����������� �������� ������
	LargeLetters(string input) : Line(input) { };

	int Count();

	// ������ ������� Length ���������� ������� ������� � �� ������������
};