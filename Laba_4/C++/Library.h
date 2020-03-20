#pragma once
#include<string>
#include<vector>
namespace New_Library
{
    class Library
    {
    public:int length;// �������
    private: std::vector<char> str;//  �����
    public:Library();//����������� �� �����������
    public:Library(std::vector<char> str);//����������� � �����������
    public:Library(Library&);//����������� ���������
    private: void LENGTH(std::vector<char> str);//����� ��� ����������� ������� �����
    public:std::vector<char> GetStr();//����� ��� ���������� �����
    public:Library operator +(Library right_val);//�������� ��� ��������� ���� �����
    public:Library operator /(int b);//�������� ��� ������ �����
    private: void Init();//����������� �� �����������
    };
}