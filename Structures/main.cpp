#include <iostream>     //для ввода-вывода
#include <Windows.h>    //для русского языка
//using namespace std;
/*
Структуры (пользовательские типы) в c++ нужны, когда для описание объекта требуются несколько переменных
*/
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	// Объявляем структуру «Employee», ключевое слово sturct
	struct Employee
	{
		short id;
		int age;
		double salary;
	};
	// Определяем переменные john и james пользовательского типа
	Employee john, james; // имя стр-ры начинается с большой буквы, переменные john и james - с маленькой
// можно инициализировать переменные "поштучно" используя оператор выбора (точка)
	john.id = 8;
	john.age = 22;
	john.salary = 25.300;
	james.age = 33;

	/* с членами-переменными можно обращаться как с обычными переменными */
	james.id = john.id + john.age;

	// у джеймса зп на пять тысяч больше, чем у йохана
	james.salary = john.salary + 5.000;

	std::cout << "Привет world!" << std::endl;
	system("Pause");
	return 0;
}
