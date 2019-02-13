/*  https://ravesli.com/urok-61-struktury/    */
#include <iostream>     //��� �����-������
#include <Windows.h>    //��� �������� �����
//using namespace std;

//���� �� ������ ������� ���������� ���������� ����������(������� ����� ������������ ������ ������ ������ �����) � ����������� �������� ����� static:
static int g_x; // g_x - ��� ����������� ���������� ���������� � � ����� ������������ ������ ������ ����� �����
//���� �� ������ ������� ���������� ���������� �������(������� ����� ������������ � ����� ����� ���������) � ����������� �������� ����� extern:
extern double g_y(9.8); // g_y - ��� ������� ���������� ���������� � � ����� ������������ � � ������ ������

/*
��������� (���������������� ����) � c++ �����, ����� ��� �������� ������� ��������� ��������� ����������
*/


// ��������� ��������� �Employee�, �������� ����� sturct
	struct Employee
	{
		short id;
		int age;
		double salary;
	};



// ����� ���������� � ������� ��� ��������� �������
void printIdAgeSalary(Employee man_in_func)
{
	std::cout << "id = " << man_in_func.id << ", age = " << man_in_func.age << ", salary = " << man_in_func.salary << std::endl;
}

// ������� ����� ���������� ��������� �������
Employee AddAgeSalary(Employee man_in_func)
{
	man_in_func.age++;
	man_in_func.salary += 0.5;   //man_in_func.salary=man_in_func.salary+0.5
	return man_in_func;
}

// ��������� ����� ��������� � ���� ������ ���������
struct Company
	{
	Employee President; // Employee - ��� ��������� ������ ��������� Company, � ������� � ��� ����� ���� � ���������
	int numberOfEmployees;
	};

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	
	// ���������� ���������� john � james ����������������� ����
	Employee john, james; // ��� ���-�� ���������� � ������� �����, ���������� john � james - � ���������
// ����� ���������������� ���������� "��������" ��������� �������� ������ (�����)
	john.id = 8;
	john.age = 22;
	john.salary = 25.300;
	james.age = 33;

	john = { 9, 23, 25.500 }; //  ����� ����������� �������� ������, ��������� ������ ���������������:
	// ����� ������� ������ ������������� �������� � ������ ���������������
	Employee ivan = { 1, 29, 26.0 }; //ivan.id = 1, ivan.age = 29, ivan.salary = 26.0
	Employee nastya = { 2, 22 }; //���� � ������ ��������������� ��� ���������� ���������, �� ���������� �������� �� ��������� (������ 0).

	// ������������� ������������� (�������) ������ ��������� �������� �� ��������� ��� ���������� ���������
	struct rectangle
	{
		int id;
		float length = 2.0;
		float width = 3.0;
	};

	rectangle z; // � id ����� �����, � � length � width - �������� 2.0 � 3.0

	/* � �������-����������� ����� ���������� ��� � �������� ����������� */
	james.id = john.id + john.age;
	// � ������� �� �� ���� ����� ������, ��� � ������
	james.salary = john.salary + 5.000;

	// ����� ���������� � ������� ��� ��������� �������
	printIdAgeSalary(john);
	
	// ����� ���������� � ������� ��� ��������� � �������� ������� ���������
	john = AddAgeSalary(john);
	printIdAgeSalary(john);

	// ��������� � ���������� ��������� ��������

	Company my_company{ {1, 33, 30.0}, 7 }; //�������������� ���������

	std::cout << "�������� ��������� " << my_company.President.salary << std::endl;
	std::cout << "ivan.age = " << ivan.age << std::endl;
	system("Pause");
	return 0;
}
