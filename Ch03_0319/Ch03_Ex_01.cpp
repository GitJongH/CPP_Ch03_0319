/*
#include <iostream>
using namespace std;

class Tower {
	int height;
public:
	Tower(); // 생성자 (기본)
	Tower(int h); // 오버로딩
	int getHeight();
};

Tower :: Tower() : Tower(1) { }
// Tower :: Tower() { height = 1; }

Tower :: Tower(int h) 
	: height(h) { }

int Tower :: getHeight() {
	return height;
}

int main() {
	Tower myTower;
	Tower seoulTower(100);
	cout << "높이는 " << myTower.getHeight() << "미터" << endl;
	cout << "높이는 " << seoulTower.getHeight() << "미터" << endl;
	return 0;
}
*/