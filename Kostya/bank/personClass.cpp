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
			cout << "Print your age: ";
			
			cin >> value;
			this->age = value;
		}
// Вводим Имя
		
		void setName()
		{
			string value;
			cout << "Print your name: ";
			cin >> value;
			this->name = value;
		}
// Вводим Бабало		
		
		void setBallance()
		{
			int value;
			cout << "Print your ballance: ";
			cin >> value;
			this->ballance = value;
		}
// Возвращаем возраст
		int getAge()
		{
			return (this->age);
		}
// Возвращаем Имя
		
		string getName()
		{
			return (this->name);
		}
// Возвращаем баланс

		int getBallance()
		{
			return (this->ballance);
		}
// Выводим возраст
		
		int printAge()
		{
			cout <<"\nYour age is: " << this->age << endl;
		}
// Выводим имя
		
		int printName()
		{
			cout <<"\nYour name is: " << this->name << endl;
		}
// Выводим баланс
		
		int printBallance()
		{
			cout <<"\nYour ballance is: " << this->ballance << endl;
		}
};
