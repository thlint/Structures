#include <iostream>     //��� �����-������
#include <Windows.h>    //��� �������� �����
//using namespace std;
/*
��������� (���������������� ����) � c++ �����, ����� ��� �������� ������� ��������� ��������� ����������
*/
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	// ��������� ��������� �Employee�, �������� ����� sturct
	struct Employee
	{
		short id;
		int age;
		double salary;
	};
	// ���������� ���������� john � james ����������������� ����
	Employee john, james; // ��� ���-�� ���������� � ������� �����, ���������� john � james - � ���������
// ����� ���������������� ���������� "��������" ��������� �������� ������ (�����)
	john.id = 8;
	john.age = 22;
	john.salary = 25.300;
	james.age = 33;

	/* � �������-����������� ����� ���������� ��� � �������� ����������� */
	james.id = john.id + john.age;

	// � ������� �� �� ���� ����� ������, ��� � ������
	james.salary = john.salary + 5.000;

	std::cout << "������ world!" << std::endl;
	system("Pause");
	return 0;
}
