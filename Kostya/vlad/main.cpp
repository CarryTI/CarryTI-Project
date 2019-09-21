#include "header.h"
#include "personClass.cpp"

int main()
{
	Person firstPerson; 
	
	//Вводим значения
	firstPerson.setAge();
	firstPerson.setName();
	firstPerson.setBallance();
	
	// Если надо получить значение
	firstPerson.getAge();
	firstPerson.getName();
	firstPerson.getBallance();
	
	//Вывод на экран
	firstPerson.printAge();
	firstPerson.printName();
	firstPerson.printBallance();
	
	return 0;


}