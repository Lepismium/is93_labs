#include<string>
#include<vector>
namespace Laba_4
{
    class Helper
    {
    public:int length;//�������
    private: std::vector<char> str;//�����
    public:Helper();
    public:Helper(std::vector<char> str);
    public:Helper(Helper&);
    private: void Initializ();//�� �������������
    private: void Str_Length(std::vector<char> str);//��� ��������� �������
    public:std::vector<char> Get_str();//��� ��������� �����
    public:Helper operator +(Helper right_val);//�������� ���������
    public:Helper operator *(int b);//�������� ��������
    };
}