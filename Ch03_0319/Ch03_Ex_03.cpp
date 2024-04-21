/*
#include <iostream>
using namespace std;

class Account {
	string name;
	int id;
	int balance;
public:
	Account(string user_name, int user_id, int user_balance);
	void deposit(int money);
	string getOwner();
	int inQuery();
	int withdraw(int money);
};

Account :: Account(string user_name, int user_id, int user_balance)
	: name(user_name), id(user_id), balance(user_balance) { }

void Account :: deposit(int money) {
	balance += money;
}

string Account :: getOwner() {
	return name;
}

int Account :: inQuery() {
	return balance;
}

int Account :: withdraw(int money) {
	return balance -= money;
}

int main() {
	Account a("kitae", 1, 5000);
	a.deposit(50000);
	cout << a.getOwner() << "ÀÇ ÀÜ¾×Àº " << a.inQuery() << endl;
	int money = a.withdraw(20000);
	cout << a.getOwner() << "ÀÇ ÀÜ¾×Àº " << a.inQuery() << endl;

	return 0;
}
*/