/*
#include <iostream>
using namespace std;

// Circle �����
class Circle {
public:
	int radius;
	Circle(); // �Ű����� ���� ������
	Circle(int r); // �Ű����� �ִ� ������
	~Circle(); // �Ҹ���
	double getArea();
};

Circle::Circle() : Circle(1) {} // ���� ������
Circle::Circle(int r) { // Ÿ�� ������
	radius = r;
	cout << "������ " << radius << " �� ����" << endl;
}
Circle::~Circle() {
	cout << "�Ҹ�" << endl;
}
// Circle ������
double Circle::getArea() {
	return 3.14 * radius * radius;
}

int main() {
	Circle donut; // �Ŵ뺯�� ���� ������ ȣ��
	donut.radius = 1;
	double area = donut.getArea(); 
	cout << "donut�� ������ : " << area << endl;

	Circle pizza(30);
	pizza.radius = 30; // �Ű� ���� �ִ� ������ ȣ��
	area = pizza.getArea(); 
	cout << "pizza�� ������ : " << area << endl;

	return 0;
}
*/