#pragma once
#include <vector>
using namespace std;

class vectorPol {
private:
	vector<double> m_data; //������ ��� ��������� ��������� 

public:
	vectorPol() {			//����������� �� ������������
		m_data.push_back(0);
		m_data.push_back(0);
	}

	vectorPol(double rad, double ang) {	//����������� � �����������
		m_data.push_back(rad);
		m_data.push_back(ang);
	}

	vectorPol(vectorPol& em_data) {	//����������� ���������
		m_data.push_back(em_data.m_data[0]);
		m_data.push_back(em_data.m_data[1]);
	}

	void rotate(double angle) { //����� �������� �� ���
		m_data[1] += angle;
	}

	double getRad() {	//����� ���������� �������
		return m_data[0];
	}

	double getAng() {	//����� ���������� ����
		return m_data[1];
	}

	vectorPol operator=(vectorPol v) {	//���������� ��������� ���������
		m_data[0] = v.m_data[0];
		m_data[1] = v.m_data[1];
		return *this;
	}

	vectorPol operator/=(double x) {	//���������� ��������� ������
		m_data[0] = m_data[0] / x;
		return *this;
	}

	vectorPol operator+=(vectorPol v) {	//���������� ��������� ���������
		m_data[0] += v.m_data[0];
		m_data[1] += v.m_data[1];
		return (*this);
	}

	friend ostream& operator<<(ostream& stream, vectorPol v) {	//���������� ��������� ���������
		stream << "radius: " << v.m_data[0] << "\n"
			<< " angle: " << v.m_data[1] << "\n\n";
		return stream;
	}
};