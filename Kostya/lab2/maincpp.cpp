#include "header.h"
#include "numberClass.cpp"

int main(int ac, char **av)
{
	Number firstNumber; // Об'являємо новий обьект класса Number

	firstNumber.setNum(); // Встановлюємо число
	firstNumber.setPow(); // Встановлюємо степінь
	firstNumber.setResult(); // Обчислюєм число в степені
	firstNumber.setLastNum(); // Находимо останню цифру

	firstNumber.getNum(); // Фунція повернення числа
	firstNumber.getPow(); // Фунція повернення степені
	firstNumber.getResult(); // Фунція повернення числа в степені
	firstNumber.getLastNum(); // Фунція повернення останньої цифри

	firstNumber.printNum(); // Виводимо в термінал число
	firstNumber.printPow();	// Виводимо в термінал степінь
	firstNumber.printResult(); // Виводимо в термінал результат
	firstNumber.printLastNum(); // Виводимо в термінал останню цифру
	
	return 0; // Завершення програми
}