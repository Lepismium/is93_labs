#include<vector>
#include "Helper.h"
namespace Laba_4
{
    void Helper::Initializ()//����������� �� �������������
    {
        this->str.push_back('\0');
        length = 0;
    }
    void Helper::Str_Length(std::vector<char> str)//��� ����������� �������
    {
        this->length = str.size();
    }
    Helper::Helper()//����������� �� �������������
    {
        Initializ();
    }
    Helper::Helper(std::vector<char> str)//����������� � �����������
    {
        this->str = str;
        Str_Length(str);
    }
    Helper::Helper(Helper& p)//����������� ���������
    {
        this->str = p.str;
        this->length = p.str.size();
    }
    std::vector<char> Helper::Get_str()//��� ���������� �����
    {
        return this->str;
    }//
    Helper Helper::operator +(Helper right)//�������� ���� ���� �����
    {
        Helper rez;
        rez.str = this->str;
        for (int i = 0; i < right.length; i++)
        {
            rez.str.push_back(right.str[i]);
        }
        rez.length = right.length + this->length;
        return rez;
    }
    Helper Helper::operator *(int a)//�������� ��������
    {
        Helper rez;
        std::vector<char> s(0);
        for (int i = 0; i < this->length; i++)
        {
           for(int j=0;j<a;j++) 
                s.push_back(this->str[i]);
        }
        this->str = s;
        Str_Length(this->str);
        rez.length = this->length;
        rez.str = this->str;
        return rez;
    }
}