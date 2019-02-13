/*  https://ravesli.com/urok-61-struktury/    */
#include <iostream>     //для ввода-вывода
#include <Windows.h>    //для русского языка
//using namespace std;

//Если вы хотите сделать глобальную переменную внутренней(которую можно использовать только внутри одного файла) – используйте ключевое слово static:
static int g_x; // g_x - это статическая глобальная переменная и её можно использовать только внутри этого файла
//Если вы хотите сделать глобальную переменную внешней(которую можно использовать в любом файле программы) – используйте ключевое слово extern:
extern double g_y(9.8); // g_y - это внешняя глобальная переменная и её можно использовать и в других файлах

/*
Структуры (пользовательские типы) в c++ нужны, когда для описание объекта требуются несколько переменных
*/


// Объявляем структуру «Employee», ключевое слово sturct
	struct Employee
	{
		short id;
		int age;
		double salary;
	};



// можно передавать в функцию всю структуру целиком
void printIdAgeSalary(Employee man_in_func)
{
	std::cout << "id = " << man_in_func.id << ", age = " << man_in_func.age << ", salary = " << man_in_func.salary << std::endl;
}

// функция может возвращать структуру целиком
Employee AddAgeSalary(Employee man_in_func)
{
	man_in_func.age++;
	man_in_func.salary += 0.5;   //man_in_func.salary=man_in_func.salary+0.5
	return man_in_func;
}

// Структура может содержать в себе другую структуру
struct Company
	{
	Employee President; // Employee - это структура внутри структуры Company, в которой у нас будет инфо о директоре
	int numberOfEmployees;
	};

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	
	// Определяем переменные john и james пользовательского типа
	Employee john, james; // имя стр-ры начинается с большой буквы, переменные john и james - с маленькой
// можно инициализировать переменные "поштучно" используя оператор выбора (точка)
	john.id = 8;
	john.age = 22;
	john.salary = 25.300;
	james.age = 33;

	john = { 9, 23, 25.500 }; //  можно присваивать значения пачкой, используя список инициализаторов:
	// более быстрый способ инициализации структур — список инициализаторов
	Employee ivan = { 1, 29, 26.0 }; //ivan.id = 1, ivan.age = 29, ivan.salary = 26.0
	Employee nastya = { 2, 22 }; //Если в списке инициализаторов нет нескольких элементов, им присвоятся значения по умолчанию (обычно 0).

	// Инициализация нестатических (обычных) членов структуры значения по умолчанию при объявлении структуры
	struct rectangle
	{
		int id;
		float length = 2.0;
		float width = 3.0;
	};

	rectangle z; // в id будет мусор, а в length и width - значения 2.0 и 3.0

	/* с членами-переменными можно обращаться как с обычными переменными */
	james.id = john.id + john.age;
	// у джеймса зп на пять тысяч больше, чем у йохана
	james.salary = john.salary + 5.000;

	// можно передавать в функцию всю структуру целиком
	printIdAgeSalary(john);
	
	// можно передавать в функцию всю структуру и получать обратно структуру
	john = AddAgeSalary(john);
	printIdAgeSalary(john);

	// обращение к параметрам вложенных структур

	Company my_company{ {1, 33, 30.0}, 7 }; //инициализируем структуру

	std::cout << "зарплата директора " << my_company.President.salary << std::endl;
	std::cout << "ivan.age = " << ivan.age << std::endl;
	system("Pause");
	return 0;
}
