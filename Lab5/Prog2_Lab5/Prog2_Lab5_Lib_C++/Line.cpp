#include "pch.h"
#include "Line.h"



// ����������� �����
Line::Line(string input)
{
    symbols.assign(input.size(), ' ');

    for (int j = 0; j < input.size(); j++)
    {
        symbols[j] = input[j];
    }
};

// ������� ���� ������, ��� �������� ������
vector<char> Line::GetWhole()
{
    return symbols;
}

// ³�������� ������� ��� ���������� ������� �����
int Line::Length()
{
    return symbols.size();
}

// ³�������� ������� ��� ��������� ������� ��������� �������
int Line::Count(char target)
{
    int count = 0;
    for (int i = 0; i < symbols.size(); i++)
    {
        if (symbols[i] == target) {
            count++;
        }
    }
    return count;
}

// ³�������� ������� ��������� ��� ���������
// ��� �� ������ ����� �� �������������� ���������, �� ��������� ����� ����������������
int Line::Count()
{
    return symbols.size();
}

// ��������� ��������� ������� ���������, ���� ������� ������� '*'
int Symbols::Count()
{
    int count = 0;
    for (int i = 0; i < symbols.size(); i++)
    {
        if (symbols[i] == '*')
        {
            count++;
        }
    }
    return count;
}

// ��������� ��������� ������� ���������, ���� ������� ������� '�'
int LargeLetters::Count()
{
    int count = 0;
    for (int i = 0; i < symbols.size(); i++)
    {
        if (symbols[i] == '�')
        {
            count++;
        }
    }
    return count;
}

