#include "header.h"

class Number
{
	private:
		int num;
		int power;
		int result;
		int lastNum;

	public:

		void setNum()
		{
			int value;
			cout << "Print the value of number: ";
			cin >> value;
			num = value;
		}

		void setPow()
		{
			int value;
			cout << "Print the value of power: ";
			cin >> value;
			power = value;
		}

		void setResult()
		{
			result = pow(num, power);
		}

		void setLastNum()
		{
			lastNum = result % 10;
		}

		int getNum()
		{
			return (num);
		}

		int getPow()
		{
			return (power);
		}

		void printNum()
		{
			cout << "\nYour number is: " << num << endl; 
		}

		void printPow()
		{
			cout << "\nYour Power is: " << power << endl; 
		}

		int getResult()
		{
			return (result);
		}

		void printResult()
		{
			int result;
			result = pow(num, power);
			cout << "\nYour result is: " << result << " ( "<< num <<"^"<< power <<" )" << endl;
		}

		int getLastNum()
		{
			return (lastNum);
		}

		void printLastNum()
		{
			cout << "Your last number is: " << result % 10 << endl;
		}

	
};