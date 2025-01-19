#include <iostream>
using namespace std;

class Date{

private: // ���� ������
	int day;
	int month;
	int year;
public:

	Date(){ // ����������� ������ �� ���������
		day = 31;
		month = 12;
		year = 2010;
	}

	Date(int yy) { // ����������� ������ � ����� ����������
		day = 31;
		month = 12;
		year = yy;
	}
	Date (int mm, int yy){ // ����������� ������ � ����� �����������
		day = 31;
		month = mm;
		year = yy;
	}

	Date(int dd, int mm, int yy){ // ����������� ������ � ����� �����������
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
	Date d1(1999); // ����� ������������ Date(int yy);
	d1.Show();
	Date d2(8, 2004); // ����� ������������ Date(int mm, int yy);
	d2.Show();
	Date d3(20, 11, 2008); // ����� ������������ Date(int dd, int mm, int yy);
	d3.Show(); 
	Date d4; // ����� ������������ �� ���������
	d4.Show();

	return 0;
}
