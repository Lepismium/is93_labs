#include "Library.h"
#include<vector>
#include <windows.h>
#include<iostream>
namespace New_Library
{
    Library::Library()
    {
        Init();
    }//����������� �� �����������
    Library::Library(std::vector<char> str)
    {
        this->str = str;
        LENGTH(str);
    }//����������� � �����������
    Library::Library(Library& p)
    {
        this->str = p.str;
        this->length = p.str.size();
    }//����������� ���������
    void Library::LENGTH(std::vector<char> str)
    {
        this->length = str.size();
    }//����� ��� ����������� ������� �����
    void Library::Init()
    {
        this->str.push_back('\0');
        length = 0;
    }//����������� �� �����������
    std::vector<char> Library::GetStr()
    {
        return this->str;
    }//����� ��� ���������� �����
    Library Library::operator +(Library right_val)
    {
        Library rez;
        rez.str = this->str;
        try
        {
            if (right_val.length == 0)
            {
                throw "String has got null value!!!";
            }
        }
        catch (const char* c)
        {
            MessageBoxA(GetActiveWindow(), c, "Error message", MB_ICONERROR);//Output message box with info
            exit(1);
        }
        for (int i = 0; i < right_val.length; i++)
        {
            rez.str.push_back(right_val.str[i]);
        }
        rez.length = right_val.length + this->length;
        return rez;
    }//�������� ��� ��������� ���� �����
    Library Library::operator /(int b)
    {
        try
        {
            if (b==0)
            {
                throw "Value is null of argument in denominator!!!";
            }
        }
        catch (const char* c)
        {
            MessageBoxA(GetActiveWindow(), c, "Error message", MB_ICONERROR);//Output message box with info
            exit(1);
        }
        Library rez;
        std::vector<char> s(0);
        for (int i = 0; i < this->length; i++)
        {
            if (i % b == 0)
            {
                s.push_back(this->str[i]);
            }
        }
        this->str.clear();
        this->str = s;
        LENGTH(this->str);
        rez.str = this->str;
        rez.length = this->length;
        return rez;
    }//�������� ��� ������ �����
}