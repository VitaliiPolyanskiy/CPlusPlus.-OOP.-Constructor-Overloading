#include <iostream>
using namespace std;

class Date{

private: // поля класса
	int day;
	int month;
	int year;
public:

	Date(){ // конструктор класса по умолчанию
		day = 31;
		month = 12;
		year = 2010;
	}

	Date(int yy) { // конструктор класса с одним параметром
		day = 31;
		month = 12;
		year = yy;
	}
	Date (int mm, int yy){ // конструктор класса с двумя параметрами
		day = 31;
		month = mm;
		year = yy;
	}

	Date(int dd, int mm, int yy){ // конструктор класса с тремя параметрами
		day = dd;
		month = mm;
		year = yy;
	}

	void Show(){
		cout << day << "." << month << "." << year << endl;
	}

};

int main()
{
	Date d1(1999); // вызов конструктора Date(int yy);
	d1.Show();
	Date d2(8, 2004); // вызов конструктора Date(int mm, int yy);
	d2.Show();
	Date d3(20, 11, 2008); // вызов конструктора Date(int dd, int mm, int yy);
	d3.Show(); 
	Date d4; // вызов конструктора по умолчанию
	d4.Show();

	return 0;
}
