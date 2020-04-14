#include "pch.h"
#include "Figure.h"

// ����� ��������� ����� (�����) ������
vector<vector<int>> Figure::Get() {
	return points;
};

// �������������� ����� ��������� ����� ������, ������� ���� �������� ������� �����
// ��������������� � ������� ��������� ������� �� �����, � ������� �������
int Figure::Get(int i, int j) {
	return points[i][j];
};

// ����������� ��� �����
// ���� ����� �������
void Figure::_Init(int n) {
	points.assign(n, { 0, 0 });
}

// ������ ����������� ��� ������������ ��������� � �������� ��������������
Figure::Figure() {
}

// ����������� � ����������
Figure::Figure(int input[4][2]) {
	_Init(4);

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 2; j++) {
			points[i][j] = input[i][j];
		}
	}
}

// ����� ���������� ������� �� ������� ������
float Figure::Length(int i1, int i2) {
	if (i1 == -1) { i1 = 3; }
	vector<int> a(2);
	vector<int> b(2);

	for (int i = 0; i < 2; i++) {
		a[i] = points[i1][i];
		b[i] = points[i2][i];
	}

	return sqrtf(pow((double(a[0]) - double(b[0])), 2) + pow((double(a[1]) - double(b[1])), 2));
};

// ����������� ��� ��������, ���� ����� �������
// 4 �����, 2 �����
void Square::_Init() {
	points.assign(4, { 0, 0 });
}

// ����������� � ����������
Square::Square(int input[4][2]) {
	_Init();

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 2; j++) {
			points[i][j] = input[i][j];
		}	
	}
}

// ����� ���������� ���������
float Square::Perimeter() {
	float peri = 0;
	for (int i = 0; i < 3; i++)
	{
		peri += Length(i - 1, i);
	}
	return peri;
};

// ����� ���������� �����
float Square::Area() {
	return Length(0, 1) * Length(1, 2);
};