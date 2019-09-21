#include "header.h"

class Person 
{

// Основные переменные
	private:
		string name;
		int age;
		double ballance;

// Ну это вербоус)
	public: 
		int verbose;

// Вводим возраст
	public: 
		void setAge()
		{
			int value;
			if (verbose == 1)
			cout << "Print your age: ";
			
			cin >> value;
			this->age = value;
		}
// Вводим Имя
		
		void setName()
		{
			string value;
			if (verbose == 1)
			cout << "Print your name: ";
			cin >> value;
			this->name = value;
		}
// Вводим Бабало		
		
		void setBallance()
		{
			int value;
			if (verbose == 1)
			cout << "Print your ballance: ";
			cin >> value;
			this->ballance = value;
		}
// Возвращаем возраст
		
		int getAge()
		{
			return (age);
		}
// Возвращаем Имя
		
		string getName()
		{
			return (name);
		}
// Возвращаем баланс

		int getBallance()
		{
			return (ballance);
		}
// Выводим возраст
		
		int printAge()
		{
			cout <<"\nYour age is: " << age << endl;
		}
// Выводим имя
		
		int printName()
		{
			cout <<"\nYour name is: " << name << endl;
		}
// Выводим баланс
		
		int printBallance()
		{
			cout <<"\nYour ballance is: " << ballance << endl;
		}
};
