#include "pch.h"
#include "Expression.h"

// ����� ��� �������� ����������� �������� �������, ���������� ��� ������ ����� �� ���������� �������� ������.
void Expression::Check()
{
    try {
        // �������� ������
        if (isnan(sqrt(41 - d))) { throw "���������� ���i�� �i�'������ �����"; }
        // �������� �������
        else if ((sqrt(41 - d) - (b * a) + c) == 0) { throw "�i����� ���i���� ����"; }
        return;
    }
    catch (char* errMessage) {
        throw std::runtime_error(errMessage);
    }
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
    try {
        switch (index) {
        case 'a': a = value; break;
        case 'b': b = value; break;
        case 'c': c = value; break;
        case 'd': d = value; break;
        default: throw "������ �� ������� ������� � ������� ������."; break;
        }
    }
    catch (char* errMessage) {
        throw std::invalid_argument(errMessage);
    }

    // ����������� �������� ����������� �������
    Check();
}
