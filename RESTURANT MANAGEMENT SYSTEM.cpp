#include<iostream>
#include<windows.h>
#include<string>
using namespace std;
int KEY = 0;
int CHOISE = 0;
void INPUT_MENU();
class INTRODUCTION
{
protected:
	string NAME[2];
	string REG_NUM[2];
	string SECTION;
	string PROJECT_NAME;
	string INSTRUCTOR_NAME;
	string DATE;
	string T_NO_GRP;
public:
	INTRODUCTION(string name1, string name2, string regnum1, string regnum2, string section, string projectname, string instname, string date, string T_N);
	void DISPLAY();
};
class RESTURANT 
{
protected:
	string NAME;
	string CELL_NO;
	string EMAIL;
	string ADDRESS;
public:
	void SET_NAME();
	void SET_CELL_NO();
	void SET_EMAIL();
	void SET_ADDRESS();

	string GET_NAME();
	string GET_CELL_NO();
	string GET_EMAIL();
	string GET_ADDRESS();
};
class CUSTOMER : public RESTURANT
{
protected:
	string AGE;
	string ORDER_ID;
	string REVIEW;
public:
	void SET_ORDER_ID();
	void SET_REVIEW();
	void SET_AGE();

	string GET_AGE();
	string GET_ORDER_ID();
	string GET_REVIEW();

	void INPUT();
	void DISPLAY();
};
class CATEGORY :public RESTURANT
{
public:
	string TYPE;
	double BILL = 0.000;
	double COUNT = 0.000;

	virtual void INPUT() = 0;
	virtual void DISPLAY() = 0;
};
class FAST_FOOD : public CATEGORY
{
public:
	void INPUT();
	void DISPLAY();
};
class PROPER_MEAL :public CATEGORY
{
public:
	void INPUT();
	void DISPLAY();
};
class REFRESHMENT :public CATEGORY
{
public:
	void INPUT();
	void DISPLAY();
};
class DESERTS :public CATEGORY
{
public:
	void INPUT();
	void DISPLAY();
};

int main()
{
	INTRODUCTION INTRO("RAFIYA TARIQ", "JUNAID AHMED", "BCS203031", "BCS203035", "CS-2", "RESTURANT MANAGEMENT SYSTEM", "SYED ASAD JAVED", "5th JULY,21", "2");
	INTRO.DISPLAY();

	do
	{
		INPUT_MENU();

		cout << "\n\n\n\t\t\t\t\t\t\t\t\t\t PRESS ANY KEY TO CONTINUE AND '0' TO GET  EXIT:\t";
		cin >> KEY;
		system("cls");
	} while (KEY != 0);
}
void INPUT_MENU()
{
	system("color 2");

	cout << "\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\n";
	cout << "\t\t\t\t\t\t\t\t\t\tWHAT DO YOU LIKE TO ORDER\n\n\n";
	cout << "\t\t\t\t\t\t\t\t\t\t1) FAST FOOD.\n";
	cout << "\t\t\t\t\t\t\t\t\t\t2) PROPER MEAL.\n";
	cout << "\t\t\t\t\t\t\t\t\t\t3) REFRESHMENT.\n";
	cout << "\t\t\t\t\t\t\t\t\t\t4) DESERTS.\n";
	cout << "\t\t\t\t\t\t\t\t\t\tCHOOSE YOUR DESIRED OPTION :\t";
	do
	{
		cin >> CHOISE;
		if (CHOISE < 1 || CHOISE > 4)
		{
			cout << "\t\t\t\t\t\t\t\t\t\t PLEASE ENTER A VALID OPTION :\t";
		}
	} while (CHOISE < 1 || CHOISE > 4);
	cout << "\n\n\n\t\t\t\t\t\t\t\t\t\t PRESS ANY KEY TO CONTINUE :\t";
	cin >> KEY;
	system("cls");

	CATEGORY* C;
	if (CHOISE == 1)
	{
		FAST_FOOD F_F;
		C = &F_F;
		C->INPUT();
		system("color 4");

		if (CHOISE == 1)
		{
			cout << "\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\n";
			cout << "\t\t\t\t\t\t\t\t\t\WHICH BURGER DO YOU WANT TO ORDER\n\n\n";
			cout << "\t\t\t\t\t\t\t\t\t\t1) CHIKEN         (200 RS).\n";
			cout << "\t\t\t\t\t\t\t\t\t\t2) BEEF           (220 RS).\n";
			cout << "\t\t\t\t\t\t\t\t\t\t3) MUTTON         (250 RS).\n";
			cout << "\t\t\t\t\t\t\t\t\t\tCHOOSE YOUR DESIRED OPTION :\t";;
			do
			{
				cin >> CHOISE;
				if (CHOISE < 1 || CHOISE > 3)
				{
					cout << "\t\t\t\t\t\t\t\t\t\t PLEASE ENTER A VALID OPTION :\t";
				}
			} while (CHOISE < 1 || CHOISE > 3);

			if (CHOISE == 1)
			{
				C->TYPE = "CHICKEN BURGER";
				C->BILL = C->BILL + 200;
			}
			else if (CHOISE == 2)
			{
				C->TYPE = "BEEF BURGER";
				C->BILL = C->BILL + 220;
			}
			else if (CHOISE == 3)
			{
				C->TYPE = "MUTTON BURGER";
				C->BILL = C->BILL + 250;
			}
			cout << "\t\t\t\t\t\t\t\t\t HOW MANY BURGERS YOU WANT TO ADD :\t";
			cin >> C->COUNT;
			C->BILL = C->BILL * C->COUNT;
			cout << "\n\n\n\t\t\t\t\t\t\t\t\t\t PRESS ANY KEY TO CONTINUE :\t";
			cin >> KEY;
			system("cls");
		}
		else if (CHOISE == 2)
		{
			cout << "\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\n";
			cout << "\t\t\t\t\t\t\t\t\t\WHICH PIZZA DO YOU WANT TO ORDER\n\n\n";
			cout << "\t\t\t\t\t\t\t\t\t\t1) CHIKEN         (500 RS).\n";
			cout << "\t\t\t\t\t\t\t\t\t\t2) BEEF           (600 RS).\n";
			cout << "\t\t\t\t\t\t\t\t\t\t3) MUTTON         (700 RS).\n";
			cout << "\t\t\t\t\t\t\t\t\t\tCHOOSE YOUR DESIRED OPTION :\t";;
			do
			{
				cin >> CHOISE;
				if (CHOISE < 1 || CHOISE > 3)
				{
					cout << "\t\t\t\t\t\t\t\t\t\t PLEASE ENTER A VALID OPTION :\t";
				}
			} while (CHOISE < 1 || CHOISE > 3);

			if (CHOISE == 1)
			{
				C->TYPE = "CHICKEN PIZZA";
				C->BILL = C->BILL + 500;
			}
			else if (CHOISE == 2)
			{
				C->TYPE = "BEEF PIZZA";
				C->BILL = C->BILL + 600;
			}
			else if (CHOISE == 3)
			{
				C->TYPE = "MUTTON PIZZA";
				C->BILL = C->BILL + 700;
			}
			cout << "\t\t\t\t\t\t\t\t\t HOW MANY PIZZA YOU WANT TO ADD :\t";
			cin >> C->COUNT;
			C->BILL = C->BILL * C->COUNT;
			cout << "\n\n\n\t\t\t\t\t\t\t\t\t\t PRESS ANY KEY TO CONTINUE :\t";
			cin >> KEY;
			system("cls");
		}
		else if (CHOISE == 3)
		{
			cout << "\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\n";
			cout << "\t\t\t\t\t\t\t\t\t\WHICH SANDWICH DO YOU WANT TO ORDER\n\n\n";
			cout << "\t\t\t\t\t\t\t\t\t\t1) CHIKEN         (100 RS).\n";
			cout << "\t\t\t\t\t\t\t\t\t\t2) BEEF           (150 RS).\n";
			cout << "\t\t\t\t\t\t\t\t\t\t3) MUTTON         (200 RS).\n";
			cout << "\t\t\t\t\t\t\t\t\t\tCHOOSE YOUR DESIRED OPTION :\t";;
			do
			{
				cin >> CHOISE;
				if (CHOISE < 1 || CHOISE > 3)
				{
					cout << "\t\t\t\t\t\t\t\t\t\t PLEASE ENTER A VALID OPTION :\t";
				}
			} while (CHOISE < 1 || CHOISE > 3);

			if (CHOISE == 1)
			{
				C->TYPE = "CHICKEN SANDWICH";
				C->BILL = C->BILL + 100;
			}
			else if (CHOISE == 2)
			{
				C->TYPE = "BEEF SANDWICH";
				C->BILL = C->BILL + 150;
			}
			else if (CHOISE == 3)
			{
				C->TYPE = "MUTTON SANDWICH";
				C->BILL = C->BILL + 200;
			}
			cout << "\t\t\t\t\t\t\t\t\t HOW MANY SANDWICHES YOU WANT TO ADD :\t";
			cin >> C->COUNT;
			C->BILL = C->BILL * C->COUNT;
			cout << "\n\n\n\t\t\t\t\t\t\t\t\t\t PRESS ANY KEY TO CONTINUE :\t";
			cin >> KEY;
			system("cls");
		}
		else if (CHOISE == 4)
		{
			cout << "\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\n";
			cout << "\t\t\t\t\t\t\t\t\t\WHICH FRIES DO YOU WANT TO ORDER\n\n\n";
			cout << "\t\t\t\t\t\t\t\t\t\t1) SIMPLE            (70 RS).\n";
			cout << "\t\t\t\t\t\t\t\t\t\t2) SAUSAGE           (100 RS).\n";
			cout << "\t\t\t\t\t\t\t\t\t\t3) MAYO              (120 RS).\n";
			cout << "\t\t\t\t\t\t\t\t\t\tCHOOSE YOUR DESIRED OPTION :\t";;
			do
			{
				cin >> CHOISE;
				if (CHOISE < 1 || CHOISE > 3)
				{
					cout << "\t\t\t\t\t\t\t\t\t\t PLEASE ENTER A VALID OPTION :\t";
				}
			} while (CHOISE < 1 || CHOISE > 3);

			if (CHOISE == 1)
			{
				C->TYPE = "SIMPLE FRIES";
				C->BILL = C->BILL + 70;
			}
			else if (CHOISE == 2)
			{
				C->TYPE = "SAUSAGE FRIES";
				C->BILL = C->BILL + 100;
			}
			else if (CHOISE == 3)
			{
				C->TYPE = "MAYO FRIES";
				C->BILL = C->BILL + 120;
			}
			cout << "\t\t\t\t\t\t\t\t\t HOW MANY FRIES PLASTES YOU WANT TO ADD :\t";
			cin >> C->COUNT;
			C->BILL = C->BILL * C->COUNT;
			cout << "\n\n\n\t\t\t\t\t\t\t\t\t\t PRESS ANY KEY TO CONTINUE :\t";
			cin >> KEY;
			system("cls");
		}
		C->DISPLAY();
	}
	else if (CHOISE == 2)
	{
		PROPER_MEAL P_M;
		C = &P_M;

		C->INPUT();

		if (CHOISE == 1)
		{
			cout << "\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\n";
			cout << "\t\t\t\t\t\t\t\t\t\PLEASE SELECT SIZE OF DAAL PLATE\n\n\n";
			cout << "\t\t\t\t\t\t\t\t\t\t1) SMALL            (100 RS).\n";
			cout << "\t\t\t\t\t\t\t\t\t\t2) MEDIUM           (150 RS).\n";
			cout << "\t\t\t\t\t\t\t\t\t\t3) LARGE            (200 RS).\n";
			cout << "\t\t\t\t\t\t\t\t\t\tCHOOSE YOUR DESIRED OPTION :\t";;
			do
			{
				cin >> CHOISE;
				if (CHOISE < 1 || CHOISE > 3)
				{
					cout << "\t\t\t\t\t\t\t\t\t\t PLEASE ENTER A VALID OPTION :\t";
				}
			} while (CHOISE < 1 || CHOISE > 3);

			if (CHOISE == 1)
			{
				C->TYPE = "SMALL DAAL PLATE";
				C->BILL = C->BILL + 100;
			}
			else if (CHOISE == 2)
			{
				C->TYPE = "MEDIUM DAAL PLATE";
				C->BILL = C->BILL + 150;
			}
			else if (CHOISE == 3)
			{
				C->TYPE = "LARGE DAAL PLATE";
				C->BILL = C->BILL + 200;
			}
			cout << "\t\t\t\t\t\t\t\t\t HOW MANY DAAL PLATES YOU WANT TO ADD :\t";
			cin >> C->COUNT;
			C->BILL = C->BILL * C->COUNT;
			cout << "\n\n\n\t\t\t\t\t\t\t\t\t\t PRESS ANY KEY TO CONTINUE :\t";
			cin >> KEY;
			system("cls");
		}
		else if (CHOISE == 2)
		{
			cout << "\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\n";
			cout << "\t\t\t\t\t\t\t\t\t\PLEASE SELECT TYPE OF KARAHI\n\n\n";
			cout << "\t\t\t\t\t\t\t\t\t\t1) CHICKEN            (800 RS).\n";
			cout << "\t\t\t\t\t\t\t\t\t\t2) BEEF               (1000 RS).\n";
			cout << "\t\t\t\t\t\t\t\t\t\t3) MUTTON             (1200 RS).\n";
			cout << "\t\t\t\t\t\t\t\t\t\tCHOOSE YOUR DESIRED OPTION :\t";;
			do
			{
				cin >> CHOISE;
				if (CHOISE < 1 || CHOISE > 3)
				{
					cout << "\t\t\t\t\t\t\t\t\t\t PLEASE ENTER A VALID OPTION :\t";
				}
			} while (CHOISE < 1 || CHOISE > 3);

			if (CHOISE == 1)
			{
				C->TYPE = "CHICKEN KARAHI";
				C->BILL = C->BILL + 800;
			}
			else if (CHOISE == 2)
			{
				C->TYPE = "BEEF KARAHI";


				C->BILL = C->BILL + 1000;
			}
			else if (CHOISE == 3)
			{
				C->TYPE = "MUTTON KARAHI";
				C->BILL = C->BILL + 1200;
			}
			cout << "\t\t\t\t\t\t\t\t\t HOW MANY KARAHI PLATES YOU WANT TO ADD :\t";
			cin >> C->COUNT;
			C->BILL = C->BILL * C->COUNT;
			cout << "\n\n\n\t\t\t\t\t\t\t\t\t\t PRESS ANY KEY TO CONTINUE :\t";
			cin >> KEY;
			system("cls");
		}
		else if (CHOISE == 3)
		{
			cout << "\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\n";
			cout << "\t\t\t\t\t\t\t\t\t\PLEASE SELECT ITEM OF BBQ\n\n\n";
			cout << "\t\t\t\t\t\t\t\t\t\t1) CHICKEN TIKKA            (200 RS).\n";
			cout << "\t\t\t\t\t\t\t\t\t\t2) BEEF TIKKA               (250 RS).\n";
			cout << "\t\t\t\t\t\t\t\t\t\t3) MUTTON TIKKA             (300 RS).\n";
			cout << "\t\t\t\t\t\t\t\t\t\tCHOOSE YOUR DESIRED OPTION :\t";
			do
			{
				cin >> CHOISE;
				if (CHOISE < 1 || CHOISE > 3)
				{
					cout << "\t\t\t\t\t\t\t\t\t\t PLEASE ENTER A VALID OPTION :\t";
				}
			} while (CHOISE < 1 || CHOISE > 3);

			if (CHOISE == 1)
			{
				C->TYPE = "CHICKEN TIKKA";
				C->BILL = C->BILL + 200;
			}
			else if (CHOISE == 2)
			{
				C->TYPE = "BEEF TIKKA";
				C->BILL = C->BILL + 250;
			}
			else if (CHOISE == 3)
			{
				C->TYPE = "MUTTON TIKKA";
				C->BILL = C->BILL + 300;
			}
			cout << "\t\t\t\t\t\t\t\t\t HOW MANY BBQ PLATES YOU WANT TO ADD :\t";
			cin >> C->COUNT;
			C->BILL = C->BILL * C->COUNT;
			cout << "\n\n\n\t\t\t\t\t\t\t\t\t\t PRESS ANY KEY TO CONTINUE :\t";
			cin >> KEY;
			system("cls");
		}
		else if (CHOISE == 4)
		{
			cout << "\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\n";
			cout << "\t\t\t\t\t\t\t\t\t\PLEASE SELECT TYPE OF RICE\n\n\n";
			cout << "\t\t\t\t\t\t\t\t\t\t1) CHICKEN BIRIYANI            (180 RS).\n";
			cout << "\t\t\t\t\t\t\t\t\t\t2) BOILED RICE                 (200 RS).\n";
			cout << "\t\t\t\t\t\t\t\t\t\t3) CHINESE RICE                (250 RS).\n";
			cout << "\t\t\t\t\t\t\t\t\t\tCHOOSE YOUR DESIRED OPTION :\t";;
			do
			{
				cin >> CHOISE;
				if (CHOISE < 1 || CHOISE > 3)
				{
					cout << "\t\t\t\t\t\t\t\t\t\t PLEASE ENTER A VALID OPTION :\t";
				}
			} while (CHOISE < 1 || CHOISE > 3);

			if (CHOISE == 1)
			{
				C->TYPE = "CHICKEN BIRIYANI";
				C->BILL = C->BILL + 180;
			}
			else if (CHOISE == 2)
			{
				C->TYPE = "BOILED RICE";
				C->BILL = C->BILL + 200;
			}
			else if (CHOISE == 3)
			{
				C->TYPE = "CHINESE RICE";
				C->BILL = C->BILL + 250;
			}
			cout << "\t\t\t\t\t\t\t\t\t HOW MANY RICE PLATES YOU WANT TO ADD :\t";
			cin >> C->COUNT;
			C->BILL = C->BILL * C->COUNT;
			cout << "\n\n\n\t\t\t\t\t\t\t\t\t\t PRESS ANY KEY TO CONTINUE :\t";
			cin >> KEY;
			system("cls");
		}
		C->DISPLAY();
	}
	else if (CHOISE == 3)
	{
		REFRESHMENT R;
		C = &R;
		C->INPUT();

		if (CHOISE == 1)
		{
			cout << "\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\n";
			cout << "\t\t\t\t\t\t\t\t\t\PLEASE SELECT TYPE OF SAMOSA\n\n\n";
			cout << "\t\t\t\t\t\t\t\t\t\t1) POTATO            (20 RS).\n";
			cout << "\t\t\t\t\t\t\t\t\t\t2) CHICKEN           (25 RS).\n";
			cout << "\t\t\t\t\t\t\t\t\t\t3) BEEF              (30 RS).\n";
			cout << "\t\t\t\t\t\t\t\t\t\tCHOOSE YOUR DESIRED OPTION :\t";;
			do
			{
				cin >> CHOISE;
				if (CHOISE < 1 || CHOISE > 3)
				{
					cout << "\t\t\t\t\t\t\t\t\t\t PLEASE ENTER A VALID OPTION :\t";
				}
			} while (CHOISE < 1 || CHOISE > 3);

			if (CHOISE == 1)
			{
				C->TYPE = "POTATO SAMOSA";
				C->BILL = C->BILL + 20;
			}
			else if (CHOISE == 2)
			{
				C->TYPE = "CHICKEN SAMOSA";
				C->BILL = C->BILL + 25;
			}
			else if (CHOISE == 3)
			{
				C->TYPE = "BEEF SAMOSA";
				C->BILL = C->BILL + 30;
			}
			cout << "\t\t\t\t\t\t\t\t\t HOW MANY SAMOSAS WOULD YOU WANT TO ADD :\t";
			cin >> C->COUNT;
			C->BILL = C->BILL * C->COUNT;
			cout << "\n\n\n\t\t\t\t\t\t\t\t\t\t PRESS ANY KEY TO CONTINUE :\t";
			cin >> KEY;
			system("cls");
		}
		else if (CHOISE == 2)
		{
			cout << "\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\n";
			cout << "\t\t\t\t\t\t\t\t\t\PLEASE SELECT TYPE OF PAKORA\n\n\n";
			cout << "\t\t\t\t\t\t\t\t\t\t1) ONION                (50 RS-/KG).\n";
			cout << "\t\t\t\t\t\t\t\t\t\t2) POTATO               (60 RS-/KG).\n";
			cout << "\t\t\t\t\t\t\t\t\t\t3) CHICKEN              (70 RS-/KG).\n";
			cout << "\t\t\t\t\t\t\t\t\t\tCHOOSE YOUR DESIRED OPTION :\t";;
			do
			{
				cin >> CHOISE;
				if (CHOISE < 1 || CHOISE > 3)
				{
					cout << "\t\t\t\t\t\t\t\t\t\t PLEASE ENTER A VALID OPTION :\t";
				}
			} while (CHOISE < 1 || CHOISE > 3);

			if (CHOISE == 1)
			{
				C->TYPE = "ONION PAKORRA";
				C->BILL = C->BILL + 50;
			}
			else if (CHOISE == 2)
			{
				C->TYPE = "POTATO PAKORRA";
				C->BILL = C->BILL + 60;
			}
			else if (CHOISE == 3)
			{
				C->TYPE = "CHICKEN PAKORRA";
				C->BILL = C->BILL + 70;
			}
			cout << "\t\t\t\t\t\t\t\t\t HOW MUCH QUANTITY (IN KG'S) OF PAKORA YOU WANT TO ADD :\t";
			cin >> C->COUNT;
			C->BILL = C->BILL * C->COUNT;
			cout << "\n\n\n\t\t\t\t\t\t\t\t\t\t PRESS ANY KEY TO CONTINUE :\t";
			cin >> KEY;
			system("cls");
		}
		else if (CHOISE == 3)
		{
			cout << "\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\n";
			cout << "\t\t\t\t\t\t\t\t\t\PLEASE SELECT SIZE OF DHAI BHALAY PLATE\n\n\n";
			cout << "\t\t\t\t\t\t\t\t\t\t1) SMALL            (100 RS).\n";
			cout << "\t\t\t\t\t\t\t\t\t\t2) MEDIUM           (150 RS).\n";
			cout << "\t\t\t\t\t\t\t\t\t\t3) LARGE            (200 RS).\n";
			cout << "\t\t\t\t\t\t\t\t\t\tCHOOSE YOUR DESIRED OPTION :\t";;
			
			do
			{
				cin >> CHOISE;
				if (CHOISE < 1 || CHOISE > 3)
				{
					cout << "\t\t\t\t\t\t\t\t\t\t PLEASE ENTER A VALID OPTION :\t";
				}
			} while (CHOISE < 1 || CHOISE > 3);

			if (CHOISE == 1)
			{
				C->TYPE = "SMALL DHAI BHALAY PLATE";
				C->BILL = C->BILL + 100;
			}
			else if (CHOISE == 2)
			{
				C->TYPE = "MEDIUM DHAI BHALAY  PLATE";
				C->BILL = C->BILL + 150;
			}
			else if (CHOISE == 3)
			{
				C->TYPE = "LARGE DHAI BHALAY PLATE";
				C->BILL = C->BILL + 200;
			}
			cout << "\t\t\t\t\t\t\t\t\t HOW MANY DHAI BHALAY PLATES YOU WANT TO ADD :\t";
			cin >> C->COUNT;
			C->BILL = C->BILL * C->COUNT;
			cout << "\n\n\n\t\t\t\t\t\t\t\t\t\t PRESS ANY KEY TO CONTINUE :\t";
			cin >> KEY;
			system("cls");
		}
		else if (CHOISE == 4)
		{
			cout << "\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\n";
			cout << "\t\t\t\t\t\t\t\t\t\PLEASE SELECT SIZE OF GOL GAPPAY PLATE\n\n\n";
			cout << "\t\t\t\t\t\t\t\t\t\t1) SMALL            (100 RS).\n";
			cout << "\t\t\t\t\t\t\t\t\t\t2) MEDIUM           (150 RS).\n";
			cout << "\t\t\t\t\t\t\t\t\t\t3) LARGE            (190 RS).\n";
			cout << "\t\t\t\t\t\t\t\t\t\tCHOOSE YOUR DESIRED OPTION :\t";;
			do
			{
				cin >> CHOISE;
				if (CHOISE < 1 || CHOISE > 3)
				{
					cout << "\t\t\t\t\t\t\t\t\t\t PLEASE ENTER A VALID OPTION :\t";
				}
			} while (CHOISE < 1 || CHOISE > 3);

			if (CHOISE == 1)
			{
				C->TYPE = "SMALL GOL GAPPAY PLATE";
				C->BILL = C->BILL + 100;
			}
			else if (CHOISE == 2)
			{
				C->TYPE = "MEDIUM GOL GAPPAY  PLATE";
				C->BILL = C->BILL + 150;
			}
			else if (CHOISE == 3)
			{
				C->TYPE = "LARGE GOL GAPPAY PLATE";
				C->BILL = C->BILL + 190;
			}
			cout << "\t\t\t\t\t\t\t\t\t HOW MANY GOL GAPPAY PLATES YOU WANT TO ADD :\t";
			cin >> C->COUNT;
			C->BILL = C->BILL * C->COUNT;
			cout << "\n\n\n\t\t\t\t\t\t\t\t\t\t PRESS ANY KEY TO CONTINUE :\t";
			cin >> KEY;
			system("cls");
		}
		else if (CHOISE == 5)
		{
			cout << "\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\n";
			cout << "\t\t\t\t\t\t\t\t\t\PLEASE SELECT SIZE OF CHANNA CAHT PLATE\n\n\n";
			cout << "\t\t\t\t\t\t\t\t\t\t1) SMALL            (150 RS).\n";
			cout << "\t\t\t\t\t\t\t\t\t\t2) MEDIUM           (200 RS).\n";
			cout << "\t\t\t\t\t\t\t\t\t\t3) LARGE            (250 RS).\n";
			cout << "\t\t\t\t\t\t\t\t\t\tCHOOSE YOUR DESIRED OPTION :\t";;
			do
			{
				cin >> CHOISE;
				if (CHOISE < 1 || CHOISE > 3)
				{
					cout << "\t\t\t\t\t\t\t\t\t\t PLEASE ENTER A VALID OPTION :\t";
				}
			} while (CHOISE < 1 || CHOISE > 3);

			if (CHOISE == 1)
			{
				C->TYPE = "SMALL CHANNA CHAT PLATE";
				C->BILL = C->BILL + 150;
			}
			else if (CHOISE == 2)
			{
				C->TYPE = "MEDIUM CHANNA CHAT  PLATE";
				C->BILL = C->BILL + 200;
			}
			else if (CHOISE == 3)
			{
				C->TYPE = "LARGE CHANNA CHAT PLATE";
				C->BILL = C->BILL + 250;
			}
			cout << "\t\t\t\t\t\t\t\t\t HOW MANY CHANNA CHAT PLATES YOU WANT TO ADD :\t";
			cin >> C->COUNT;
			C->BILL = C->BILL * C->COUNT;
			cout << "\n\n\n\t\t\t\t\t\t\t\t\t\t PRESS ANY KEY TO CONTINUE :\t";
			cin >> KEY;
			system("cls");
		}
		else if (CHOISE == 6)
		{
			cout << "\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\n";
			cout << "\t\t\t\t\t\t\t\t\t\PLEASE SELECT SIZE OF FRUIT CHAT PLATE\n\n\n";
			cout << "\t\t\t\t\t\t\t\t\t\t1) SMALL            (110 RS).\n";
			cout << "\t\t\t\t\t\t\t\t\t\t2) MEDIUM           (150 RS).\n";
			cout << "\t\t\t\t\t\t\t\t\t\t3) LARGE            (180 RS).\n";
			cout << "\t\t\t\t\t\t\t\t\t\tCHOOSE YOUR DESIRED OPTION :\t";;
			do
			{
				cin >> CHOISE;
				if (CHOISE < 1 || CHOISE > 3)
				{
					cout << "\t\t\t\t\t\t\t\t\t\t PLEASE ENTER A VALID OPTION :\t";
				}
			} while(CHOISE < 1 || CHOISE > 3);

			if (CHOISE == 1)
			{
				C->TYPE = "SMALL FRUIT CHAT PLATE";
				C->BILL = C->BILL + 110;
			}
			else if (CHOISE == 2)
			{
				C->TYPE = "MEDIUM FRUIT CHAT PLATE";
				C->BILL = C->BILL + 150;
			}
			else if (CHOISE == 3)
			{
				C->TYPE = "LARGE FRUIT CHAT PLATE";
				C->BILL = C->BILL + 180;
			}
			cout << "\t\t\t\t\t\t\t\t\t HOW MANY FRUIT CHAT PLATES YOU WANT TO ADD :\t";
			cin >> C->COUNT;
			C->BILL = C->BILL * C->COUNT;
			cout << "\n\n\n\t\t\t\t\t\t\t\t\t\t PRESS ANY KEY TO CONTINUE :\t";
			cin >> KEY;
			system("cls");
		}
		C->DISPLAY();
	}
	else if (CHOISE == 4)
	{
		DESERTS D;
		C = &D;
		C->INPUT();

		if (CHOISE == 1)
		{
			cout << "\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\n";
			cout << "\t\t\t\t\t\t\t\t\t\PLEASE SELECT FLAVOUR OF ICE CREAM\n\n\n";
			cout << "\t\t\t\t\t\t\t\t\t\t1) MANGO                 (80 RS).\n";
			cout << "\t\t\t\t\t\t\t\t\t\t2) COCOLATE              (90 RS).\n";
			cout << "\t\t\t\t\t\t\t\t\t\t3) COFFEE                (100 RS).\n";
			cout << "\t\t\t\t\t\t\t\t\t\tCHOOSE YOUR DESIRED OPTION :\t";;
			do
			{
				cin >> CHOISE;
				if (CHOISE < 1 || CHOISE > 3)
				{
					cout << "\t\t\t\t\t\t\t\t\t\t PLEASE ENTER A VALID OPTION :\t";
				}
			} while (CHOISE < 1 || CHOISE > 3);

			if (CHOISE == 1)
			{
				C->TYPE = "MANGO ICE CREAM";
				C->BILL = C->BILL + 80;
			}
			else if (CHOISE == 2)
			{
				C->TYPE = "CHOCOLATE ICE CREAM";
				C->BILL = C->BILL + 90;
			}
			else if (CHOISE == 3)
			{
				C->TYPE = "CHOCOLATE ICE CREAM";
				C->BILL = C->BILL + 100;
			}
			cout << "\t\t\t\t\t\t\t\t\t HOW MANY ICE CREAMS WOULD YOU WANT TO ADD :\t";
			cin >> C->COUNT;
			C->BILL = C->BILL * C->COUNT;
			cout << "\n\n\n\t\t\t\t\t\t\t\t\t\t PRESS ANY KEY TO CONTINUE :\t";
			cin >> KEY;
			system("cls");
		}
		else if (CHOISE == 2)
		{
			cout << "\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\n";
			cout << "\t\t\t\t\t\t\t\t\t\PLEASE SELECT TYPE OF PIE\n\n\n";
			cout << "\t\t\t\t\t\t\t\t\t\t1) CHICKEN PIE            (50 RS-/KG).\n";
			cout << "\t\t\t\t\t\t\t\t\t\t2) CREAM PIE              (75 RS-/KG).\n";
			cout << "\t\t\t\t\t\t\t\t\t\t3) APPLE PIE              (95 RS-/KG).\n";
			cout << "\t\t\t\t\t\t\t\t\t\tCHOOSE YOUR DESIRED OPTION :\t";;
			do
			{
				cin >> CHOISE;
				if (CHOISE < 1 || CHOISE > 3)
				{
					cout << "\t\t\t\t\t\t\t\t\t\t PLEASE ENTER A VALID OPTION :\t";
				}
			} while (CHOISE < 1 || CHOISE > 3);

			if (CHOISE == 1)
			{
				C->TYPE = "CHICKEN PIE";
				C->BILL = C->BILL + 50;
			}
			else if (CHOISE == 2)
			{
				C->TYPE = "CREAM PIE";
				C->BILL = C->BILL + 75;
			}
			else if (CHOISE == 3)
			{
				C->TYPE = "APPLE PIE";
				C->BILL = C->BILL + 95;
			}
			cout << "\t\t\t\t\t\t\t\t\t HOW MUCH QUANTITY OF PIE YOU WANT TO ADD :\t";
			cin >> C->COUNT;
			C->BILL = C->BILL * C->COUNT;
			cout << "\n\n\n\t\t\t\t\t\t\t\t\t\t PRESS ANY KEY TO CONTINUE :\t";
			cin >> KEY;
			system("cls");
		}
		else if (CHOISE == 3)
		{
			cout << "\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\n";
			cout << "\t\t\t\t\t\t\t\t\t\PLEASE SELECT TYPE OF COOKIES\n\n\n";
			cout << "\t\t\t\t\t\t\t\t\t\t1) PLAIN               (20 RS).\n";
			cout << "\t\t\t\t\t\t\t\t\t\t2) CHOCOLATE           (30 RS).\n";
			cout << "\t\t\t\t\t\t\t\t\t\t3) CHOCOLATE CHIP      (35 RS).\n";
			cout << "\t\t\t\t\t\t\t\t\t\tCHOOSE YOUR DESIRED OPTION :\t";

			do
			{
				cin >> CHOISE;
				if (CHOISE < 1 || CHOISE > 3)
				{
					cout << "\t\t\t\t\t\t\t\t\t\t PLEASE ENTER A VALID OPTION :\t";
				}
			} while (CHOISE < 1 || CHOISE > 3);

			if (CHOISE == 1)
			{
				C->TYPE = "PLAIN COOKIES";
				C->BILL = C->BILL + 20;
			}
			else if (CHOISE == 2)
			{
				C->TYPE = "CHOCOLATE COOKIES";
				C->BILL = C->BILL + 30;
			}
			else if (CHOISE == 3)
			{
				C->TYPE = "CHOCOLATE CHIP COOKIES";
				C->BILL = C->BILL + 35;
			}
			cout << "\t\t\t\t\t\t\t\t\t HOW MANY COOKIES YOU WANT TO ADD :\t";
			cin >> C->COUNT;
			C->BILL = C->BILL * C->COUNT;
			cout << "\n\n\n\t\t\t\t\t\t\t\t\t\t PRESS ANY KEY TO CONTINUE :\t";
			cin >> KEY;
			system("cls");
		}
		else if (CHOISE == 4)
		{
			cout << "\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\n";
			cout << "\t\t\t\t\t\t\t\t\t\PLEASE SELECT TYPE OF CAKE\n\n\n";
			cout << "\t\t\t\t\t\t\t\t\t\t1) PLAIN CAKE           (200 RS).\n";
			cout << "\t\t\t\t\t\t\t\t\t\t2) FRUIT CAKE           (250 RS).\n";
			cout << "\t\t\t\t\t\t\t\t\t\t3) CHOCOLATE CAKE       (300 RS).\n";
			cout << "\t\t\t\t\t\t\t\t\t\tCHOOSE YOUR DESIRED OPTION :\t";;
			do
			{
				cin >> CHOISE;
				if (CHOISE < 1 || CHOISE > 3)
				{
					cout << "\t\t\t\t\t\t\t\t\t\t PLEASE ENTER A VALID OPTION :\t";
				}
			} while (CHOISE < 1 || CHOISE > 3);

			if (CHOISE == 1)
			{
				C->TYPE = "PLAIN CAKE";
				C->BILL = C->BILL + 200;
			}
			else if (CHOISE == 2)
			{
				C->TYPE = "FRUIT CAKE";
				C->BILL = C->BILL + 250;
			}
			else if (CHOISE == 3)
			{
				C->TYPE = "CHOCOLATE CAKE";
				C->BILL = C->BILL + 300;
			}
			cout << "\t\t\t\t\t\t\t\t\t HOW MANY CAKES YOU WANT TO ADD :\t";
			cin >> C->COUNT;
			C->BILL = C->BILL * C->COUNT;
			cout << "\n\n\n\t\t\t\t\t\t\t\t\t\t PRESS ANY KEY TO CONTINUE :\t";
			cin >> KEY;
			system("cls");
		}
		else if (CHOISE == 5)
		{
			cout << "\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\n";
			cout << "\t\t\t\t\t\t\t\t\t\PLEASE SELECT TYPE OF PUDDING\n\n\n";
			cout << "\t\t\t\t\t\t\t\t\t\t1) CHOCOLATE PUDDING     (150 RS).\n";
			cout << "\t\t\t\t\t\t\t\t\t\t2) APPLE PUDDING         (200 RS).\n";
			cout << "\t\t\t\t\t\t\t\t\t\t3) COFFEE PUDDING        (250 RS).\n";
			cout << "\t\t\t\t\t\t\t\t\t\tCHOOSE YOUR DESIRED OPTION :\t";;
			do
			{
				cin >> CHOISE;
				if (CHOISE < 1 || CHOISE > 3)
				{
					cout << "\t\t\t\t\t\t\t\t\t\t PLEASE ENTER A VALID OPTION :\t";
				}
			} while (CHOISE < 1 || CHOISE > 3);

			if (CHOISE == 1)
			{
				C->TYPE = "CHOCOLATE PUDDING";
				C->BILL = C->BILL + 150;
			}
			else if (CHOISE == 2)
			{
				C->TYPE = "APPLE PUDDING";
				C->BILL = C->BILL + 200;
			}
			else if (CHOISE == 3)
			{
				C->TYPE = "COFFEE PUDDING";
				C->BILL = C->BILL + 250;
			}
			cout << "\t\t\t\t\t\t\t\t\t HOW MUCH QUANTITY OF PUDDING DO YOU WANT TO ADD :\t";
			cin >> C->COUNT;
			C->BILL = C->BILL * C->COUNT;
			cout << "\n\n\n\t\t\t\t\t\t\t\t\t\t PRESS ANY KEY TO CONTINUE :\t";
			cin >> KEY;
			system("cls");
		}
		C->DISPLAY();
	}
}
INTRODUCTION::INTRODUCTION(string name1, string name2, string regnum1, string regnum2, string section, string projectname, string instname, string date, string T_N)
{
	NAME[0] = name1;
	NAME[1] = name2;
	REG_NUM[0] = regnum1;
	REG_NUM[1] = regnum2;
	SECTION = section;
	PROJECT_NAME = projectname;
	INSTRUCTOR_NAME = instname;
	DATE = date;
	T_NO_GRP = T_N;
}
void INTRODUCTION::DISPLAY()
{
	system("color 1");
	cout << "\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t  ________________________________________________________________ \n";
	cout << "\t\t\t\t\t\t\t\t\t\t WELCOME TO RESTURANT MANAGEMENT SYSTEM\n";
	cout << "\t\t\t\t\t\t\t\t |________________________________________________________________| \n";
	cout << "\t\t\t\t\t\t\t\t\t\t    TOTAL NUMBER OF GROUP MEMBERS\n\t\t\t\t\t\t\t\t\t\t\t\t" << T_NO_GRP << endl;
	cout << "\t\t\t\t\t\t\t\t |________________________________________________________________| \n";
	cout << "\t\t\t\t\t\t\t\t\t\t\t   PRESENTED BY                          \n";
	cout << "\t\t\t\t\t\t\t\t\t     " << NAME[0] << "\t\t\t" << REG_NUM[0] << "        " << endl;
	cout << "\t\t\t\t\t\t\t\t\t     " << NAME[1] << "\t\t\t" << REG_NUM[1] << "        " << endl;
	cout << "\t\t\t\t\t\t\t\t |________________________________________________________________| \n";
	cout << "\t\t\t\t\t\t\t\t\t\t\t      SECTION                            \n";
	cout << "\t\t\t\t\t\t\t\t\t\t\t       " << SECTION << "                              " << endl;
	cout << "\t\t\t\t\t\t\t\t |________________________________________________________________| \n";
	cout << "\t\t\t\t\t\t\t\t\t\t\t    PROJECT_NAME" << "\t\t\t\t\t\t\t\t\t\t\t\t\t     " << PROJECT_NAME << "                 " << endl;
	cout << "\t\t\t\t\t\t\t\t |________________________________________________________________| \n";
	cout << "\t\t\t\t\t\t\t\t\t\t\t        DATE" << "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t    " << DATE << endl;
	cout << "\t\t\t\t\t\t\t\t |________________________________________________________________|\n";

	cout << "\t\t\t\t\t\t\t\t\t\t PRESS ANY KEY TO CONTINUE :\t";
	cin >> KEY;
	system("cls");
}
void RESTURANT::SET_NAME()
{
	cin.ignore();
	cout << "\t\t\t\t\t\t\t\t\t\NAME     :\t";
	getline(cin, NAME);
}
void RESTURANT::SET_CELL_NO()
{
	cout << "\t\t\t\t\t\t\t\t\t\CELL NO  :\t";
	getline(cin, CELL_NO);
}
void RESTURANT::SET_EMAIL()
{
	cout << "\t\t\t\t\t\t\t\t\t\EMAIL ID :\t";
	getline(cin, EMAIL);
}
void RESTURANT::SET_ADDRESS()
{
	cout << "\t\t\t\t\t\t\t\t\t\ADDRESS  :\t";
	getline(cin, ADDRESS);
}
void CUSTOMER::SET_AGE()
{
	cout << "\t\t\t\t\t\t\t\t\t\AGE      :\t";
	getline(cin, AGE);
}
void CUSTOMER::SET_ORDER_ID()
{
	cout << "\t\t\t\t\t\t\t\t\t\ORDER ID :\t";
	getline(cin, ORDER_ID);
}
void CUSTOMER::SET_REVIEW()
{
	cout << "\t\t\t\t\t\t\t\t\t\REVIEW   :\t";
	getline(cin, REVIEW);
}
string RESTURANT::GET_NAME()
{
	return NAME;
}
string RESTURANT::GET_CELL_NO()
{
	return CELL_NO;
}
string RESTURANT::GET_EMAIL()
{
	return EMAIL;
}
string RESTURANT::GET_ADDRESS()
{
	return ADDRESS;
}
string CUSTOMER::GET_AGE()
{
	return AGE;
}
string CUSTOMER::GET_ORDER_ID()
{
	return ORDER_ID;
}
string CUSTOMER::GET_REVIEW()
{
	return REVIEW;
}
void CUSTOMER::INPUT()
{
	system("color 3");
	cout << "\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\n";
	cout << "\t\t\t\t\t\t\tFOR THE IMPROVEMENT OF QUALITY PLEASE GIVE THE FOLLOWING INFORMATION\n";
	SET_NAME();
	SET_CELL_NO();
	SET_AGE();
	SET_EMAIL();
	SET_ADDRESS();
	SET_ORDER_ID();
	SET_REVIEW();
	system("cls");
}
void CUSTOMER::DISPLAY()
{

	system("color 5");
	cout << "\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\n";
	cout << "\t\t\t\t\t\t\t\t\tYOUR BIL WITH YOUR REVIEW AND DATA\n";
	cout << "\t\t\t\t\t\t\t\t\t| NAME     :\t" << GET_NAME() << "\t |" << endl;
	cout << "\t\t\t\t\t\t\t\t\t| CELL NO  :\t" << GET_CELL_NO() << " |" << endl;
	cout << "\t\t\t\t\t\t\t\t\t| AGE      :\t" << GET_AGE() << " \t |" << endl;
	cout << "\t\t\t\t\t\t\t\t\t| EMAIL ID :\t" << GET_EMAIL() << "\t |" << endl;
	cout << "\t\t\t\t\t\t\t\t\t| ADDRESS  :\t" << GET_ADDRESS() << "\t |" << endl;
	cout << "\t\t\t\t\t\t\t\t\t| ORDER ID :\t" << GET_ORDER_ID() << "\t |" << endl;
	cout << "\t\t\t\t\t\t\t\t\t| REVIEW   :\t" << GET_REVIEW() << "\t |" << endl;
}
void FAST_FOOD::INPUT()
{
	system("color 3");
	cout << "\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\n";
	cout << "\t\t\t\t\t\t\t\t\t\tWHAT DO YOU LIKE TO ORDER AMONG FOLLOWING FAST FOOD DEALS\n\n\n";
	cout << "\t\t\t\t\t\t\t\t\t\t1) BURGER.\n";
	cout << "\t\t\t\t\t\t\t\t\t\t2) PIZZA.\n";
	cout << "\t\t\t\t\t\t\t\t\t\t3) SANDWICH.\n";
	cout << "\t\t\t\t\t\t\t\t\t\t4) FRIES.\n";
	cout << "\t\t\t\t\t\t\t\t\t\tCHOOSE YOUR DESIRED OPTION :\t";

	do
	{
		cin >> CHOISE;
		if (CHOISE < 1 || CHOISE > 4)
		{
			cout << "\t\t\t\t\t\t\t\t\t\t PLEASE ENTER A VALID OPTION :\t";
		}
	} while (CHOISE < 1 || CHOISE > 4);
	cout << "\n\n\n\t\t\t\t\t\t\t\t\t\t PRESS ANY KEY TO CONTINUE :\t";
	cin >> KEY;
	system("cls");
}
void FAST_FOOD::DISPLAY()
{
	system("color 5");
	CUSTOMER C;
	C.INPUT();
	C.DISPLAY();
	system("color 5");

	cout << "\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\n";
	cout << "\t\t\t\t\t\t\t\t\t\tDETAILS OF YOUR ORDER ARE\n\n\n";
	cout << "\t\t\t\t\t\t\t\t\t\t" << TYPE << "\n";
	cout << "\t\t\t\t\t\t\t\t\t\tQUANTITY    =\t" << COUNT << "\n";
	cout << "\t\t\t\t\t\t\t\t\t\tBILL AMOUNT =\t" << BILL << " RS" << "\n";
	cout << "\n\n\n\t\t\t\t\t\t\t\t\t\t PRESS ANY KEY TO CONTINUE :\t";
	cin >> KEY;
	system("cls");
}
void PROPER_MEAL::INPUT()
{
	system("color 3");
	cout << "\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\n";
	cout << "\t\t\t\t\t\t\t\t\t\tWHAT DO YOU LIKE TO ORDER AMONG FOLLOWING PROPER MEAL DEALS\n\n\n";
	cout << "\t\t\t\t\t\t\t\t\t\t1) DAAL.\n";
	cout << "\t\t\t\t\t\t\t\t\t\t2) KARAHI.\n";
	cout << "\t\t\t\t\t\t\t\t\t\t3) BBQ.\n";
	cout << "\t\t\t\t\t\t\t\t\t\t4) RICE.\n";
	cout << "\t\t\t\t\t\t\t\t\t\tCHOOSE YOUR DESIRED OPTION :\t";

	do
	{
		cin >> CHOISE;
		if (CHOISE < 1 || CHOISE > 4)
		{
			cout << "\t\t\t\t\t\t\t\t\t\t PLEASE ENTER A VALID OPTION :\t";
		}
	} while (CHOISE < 1 || CHOISE > 4);
	cout << "\n\n\n\t\t\t\t\t\t\t\t\t\t PRESS ANY KEY TO CONTINUE :\t";
	cin >> KEY;
	system("cls");
}
void PROPER_MEAL::DISPLAY()
{
	system("color 5");
	CUSTOMER C;
	C.INPUT();
	C.DISPLAY();
	system("color 5");
	cout << "\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\n";
	cout << "\t\t\t\t\t\t\t\t\t\tDETAILS OF YOUR ORDER ARE\n\n\n";
	cout << "\t\t\t\t\t\t\t\t\t\t" << TYPE << "\n";
	cout << "\t\t\t\t\t\t\t\t\t\tQUANTITY    =\t" << COUNT << "\n";
	cout << "\t\t\t\t\t\t\t\t\t\tBILL AMOUNT =\t" << BILL << " RS" << "\n";
	cout << "\n\n\n\t\t\t\t\t\t\t\t\t\t PRESS ANY KEY TO CONTINUE :\t";
	cin >> KEY;
	system("cls");
}
void REFRESHMENT::INPUT()
{
	system("color 3");
	cout << "\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\n";
	cout << "\t\t\t\t\t\t\t\t\t\tWHAT DO YOU LIKE TO ORDER AMONG FOLLOWING REFRESHMENT DEALS\n\n\n";
	cout << "\t\t\t\t\t\t\t\t\t\t1) SAMOSA.\n";
	cout << "\t\t\t\t\t\t\t\t\t\t2) PAKORA.\n";
	cout << "\t\t\t\t\t\t\t\t\t\t3) DHAI BHALAY.\n";
	cout << "\t\t\t\t\t\t\t\t\t\t4) GOL GAPAY.\n";
	cout << "\t\t\t\t\t\t\t\t\t\t5) CHANA CHAT.\n";
	cout << "\t\t\t\t\t\t\t\t\t\t6) FRUIT CHAT.\n";
	cout << "\t\t\t\t\t\t\t\t\t\tCHOOSE YOUR DESIRED OPTION :\t";

	do
	{
		cin >> CHOISE;
		if (CHOISE < 1 || CHOISE > 6)
		{
			cout << "\t\t\t\t\t\t\t\t\t\t PLEASE ENTER A VALID OPTION :\t";
		}
	} while (CHOISE < 1 || CHOISE > 6);
	cout << "\n\n\n\t\t\t\t\t\t\t\t\t\t PRESS ANY KEY TO CONTINUE :\t";
	cin >> KEY;
	system("cls");
}
void REFRESHMENT::DISPLAY()
{
	system("color 5");
	CUSTOMER C;
	C.INPUT();
	C.DISPLAY();
	system("color 5");
	cout << "\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\n";
	cout << "\t\t\t\t\t\t\t\t\t\tDETAILS OF YOUR ORDER ARE\n\n\n";
	cout << "\t\t\t\t\t\t\t\t\t\t" << TYPE << "\n";
	cout << "\t\t\t\t\t\t\t\t\t\tQUANTITY    =\t" << COUNT << "\n";
	cout << "\t\t\t\t\t\t\t\t\t\tBILL AMOUNT =\t" << BILL << " RS" << "\n";
	cout << "\n\n\n\t\t\t\t\t\t\t\t\t\t PRESS ANY KEY TO CONTINUE :\t";
	cin >> KEY;
	system("cls");
}
void DESERTS::INPUT()
{
	system("color 3");
	cout << "\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\n";
	cout << "\t\t\t\t\t\t\t\t\t\tWHAT DO YOU LIKE TO ORDER AMONG FOLLOWING DESERTS DEALS\n\n\n";
	cout << "\t\t\t\t\t\t\t\t\t\t1) ICECREAMS.\n";
	cout << "\t\t\t\t\t\t\t\t\t\t2) PIE.\n";
	cout << "\t\t\t\t\t\t\t\t\t\t3) COOKIES.\n";
	cout << "\t\t\t\t\t\t\t\t\t\t4) CAKES.\n";
	cout << "\t\t\t\t\t\t\t\t\t\t5) PUDDING.\n";
	cout << "\t\t\t\t\t\t\t\t\t\tCHOOSE YOUR DESIRED OPTION :\t";


	do
	{
		cin >> CHOISE;
		if (CHOISE < 1 || CHOISE > 5)
		{
			cout << "\t\t\t\t\t\t\t\t\t\t PLEASE ENTER A VALID OPTION :\t";
		}
	} while (CHOISE < 1 || CHOISE > 5);
	cout << "\n\n\n\t\t\t\t\t\t\t\t\t\t PRESS ANY KEY TO CONTINUE :\t";
	cin >> KEY;
	system("cls");
}
void DESERTS::DISPLAY()
{
	
	system("color 5");
	CUSTOMER C;
	C.INPUT();
	C.DISPLAY();
	cout << "\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\n";
	cout << "\t\t\t\t\t\t\t\t\t\tDETAILS OF YOUR ORDER ARE\n\n\n";
	cout << "\t\t\t\t\t\t\t\t\t\t" << TYPE << "\n";
	cout << "\t\t\t\t\t\t\t\t\t\tQUANTITY    =\t" << COUNT << "\n";
	cout << "\t\t\t\t\t\t\t\t\t\tBILL AMOUNT =\t" << BILL << " RS" << "\n";
	cout << "\n\n\n\t\t\t\t\t\t\t\t\t\t PRESS ANY KEY TO CONTINUE :\t";
	cin >> KEY;
	system("cls");
	
}
