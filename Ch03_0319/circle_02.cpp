/*
#include <iostream>
using namespace std;

// Circle 선언부
class Circle {
public:
	int radius;
	Circle(); // 매개변수 없는 생성자
	Circle(int r); // 매개변수 있는 생성자
	~Circle(); // 소멸자
	double getArea();
};

Circle::Circle() : Circle(1) {} // 위임 생성자
Circle::Circle(int r) { // 타겟 생성자
	radius = r;
	cout << "반지름 " << radius << " 원 생성" << endl;
}
Circle::~Circle() {
	cout << "소멸" << endl;
}
// Circle 구현부
double Circle::getArea() {
	return 3.14 * radius * radius;
}

int main() {
	Circle donut; // 매대변수 없는 생성자 호출
	donut.radius = 1;
	double area = donut.getArea(); 
	cout << "donut의 면적은 : " << area << endl;

	Circle pizza(30);
	pizza.radius = 30; // 매개 변수 있는 생성자 호출
	area = pizza.getArea(); 
	cout << "pizza의 면적은 : " << area << endl;

	return 0;
}
*/