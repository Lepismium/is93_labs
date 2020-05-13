#pragma once


#include <cmath>
#include <string>
#include <stdexcept>
#include <iostream>

using namespace std;

class expression {
private:
	double a, b, c, d, res = 1;
	bool flag = 1;

public:

	expression() {
		d = c = b = a = 0;
	}
	expression(double _a, double _c, double _d, double _b) {
		if ((d < 0) || (d != 0))
			throw new invalid_argument("invalid 'a' value"); //��������� throw �������� ����������, �.�. ������� ���.
		_a = a;
		_c = c;
		_d = d;
		_b = b;
	}

	string getVariables() {
		return to_string(a) + " " + to_string(b) + " " + to_string(c) + " " + to_string(d) + "\n";
	}

	string getRes() {
		return to_string(res) + "\n";
	}

	void setVariables(double _a, double _c, double _d, double _b) {
		if ((d < 0) || (d != 0))
			throw new invalid_argument("invalid 'a' value"); //��������� throw �������� ����������, �.�. ������� ���.
		_a = a;
		_c = c;
		_d = d;
		_b = b;
	}

	string calculate() {
		try { //���� try {�} ��������� �������� ���� ��� ��������� ����������, ������� ����� ��������� ����������
			if ((d < 0) || (d != 0))
				throw invalid_argument("invalid 'a' value, result can't be calculated"); //��������� throw �������� ����������, �.�. ������� ���.
			else
				throw 1;
		}
		catch (invalid_argument ex) {//���� catch ������������ ��� ���� ����������.
			flag = 0;
			return ex.what();
		}
		catch (int) {//���� catch ������������ ��� ���� ����������.
			flag = 1;
			this->res = ((log10(4 * b - c) * a) / (b + c / d - 1));
			return "OK";
		}
	}

	string result() {
		try {
			if (flag)
				throw 1; //��������� throw �������� ����������, �.�. ������� ���.
			else
				throw invalid_argument("result wasn't calculated"); //��������� throw �������� ����������, �.�. ������� ���.
		}
		catch (invalid_argument ex) { //���� catch ������������ ��� ���� ����������.
			return ex.what();
		}
		catch (int) { //���� catch ������������ ��� ���� ����������.
			double dres = (((log10(4 * b - c) * a) / (b + c / d - 1)));
			return to_string(dres);
		}
	}
};