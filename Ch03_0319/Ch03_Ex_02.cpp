#include <iostream>
#include <string>
using namespace std;

class Date {
	int year, month, day;
	string date;
public:
	Date(int y, int m, int d);
	Date(string d);
	void show();
	int getYear();
	int getMonth();
	int getDay();
};

Date::Date(int y, int m, int d)
	: year(y), month(m), day(d) { }

Date::Date(string d) 
	: date(d) { }

void Date::show() {
	year = stoi(date.substr(0, date.find("/", 0)));
	month = stoi(date.substr(date.find("/", 0) + 1, date.find("/", 5)));
	day = stoi(date.substr(date.find("/", 5) + 1));

	cout << year << "년 " << month << "월 " << day << "일" << endl;
}

int Date::getYear() {
	return year;
}

int Date::getMonth() {
	return month;
}

int Date::getDay() {
	return day;
}

int main() { // 김종현
	Date birth(2014, 3, 30);
	Date independDate("1945/8/15");
	independDate.show();
	cout << birth.getYear() << ", " << birth.getMonth() << ", " << birth.getDay() << endl;
	return 0;
}