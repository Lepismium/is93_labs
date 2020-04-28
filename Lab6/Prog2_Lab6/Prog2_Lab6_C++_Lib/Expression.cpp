#include "pch.h"
#include "Expression.h"

// ����� ��� �������� ����������� �������� �������, ���������� ��� ������ ����� �� ���������� �������� ������.
void Expression::Check()
{
    // �������� ������
    if (isnan(sqrt(41 - d))) { throw 1; }
    // �������� �������
    else if ((sqrt(41 - d) - (b * a) + c) == 0) { throw 2; }
    return;
    //catch (int errIndex) {
    //    if (errIndex == 1) { printf("���������� ���i�� �i�'������ �����\n"); }
    //    else if (errIndex == 2) { printf("�i����� ���i���� ����\n"); }
    //}
}

// ����� ��� ���������� �������� ������
double Expression::Calculate()
{
    // ����������� �������� ����������� �������
    Check();
    // ������������� �������� ������
    return ((a * b / 4) - 1) / (sqrt(41 - d) - (b * a) + c);
}

// �����������
Expression::Expression(double aInput, double bInput, double cInput, double dInput)
{
    a = aInput;
    b = bInput;
    c = cInput;
    d = dInput;

    // ����������� �������� ����������� �������
    Check();
}

// ���������� ��� ��������-��������� ������� ������
// �������� ����������� ������� ��� �������
void Expression::Change(char index, double value)
{
    if (index == 'a') { a = value; }
    else if (index == 'b') { b = value; }
    else if (index == 'c') { c = value; }
    else if (index == 'd') { d = value; }
    else { throw "������ �� ������� ������� � ������� ������."; }

    // ����������� �������� ����������� �������
    Check();
}
