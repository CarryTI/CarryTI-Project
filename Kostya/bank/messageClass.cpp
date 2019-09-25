#include "header.h"

class Message 
{
	private:
		int verbose = 1;

	public:
		void disableVerbose()
		{
			verbose = 0;
		}

		void hello()
		{
			cout << "Welcome to our bank!\n"
				 << "There you can: \n"
				 << "1.Put your monney on internet wallet.\n"
				 << "2.Create the deposit \n"
				 << "3. Buy something\n" << endl;
		}

		void menu()
		{
			if (verbose == 1)
			cout << "Menu: \n"
				 << "1. Add money \n"
				 << "2. Create deposit \n"
				 << "3. Create new wallet \n"
				 << "4. Buy something \n" << endl;
		}

};