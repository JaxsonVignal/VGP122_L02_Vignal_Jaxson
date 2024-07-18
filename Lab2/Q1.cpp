#include <iostream>
#include <array>
using namespace std;

int main() {
	class customer {
	public:
		int accNum;
		float balance;
		float totalSpent;
		float totalCredits;
		float creditLimit;
	};
	int count = 0;
	int   arrayCount = 0;
	bool running = true;
	
	while (running == true) {
		cout << "Enter account number  -1 to exit";
		cin >> count;

		if (count == -1) {
			running = false;
			exit(0);
		}



		while (count != 0) {
			customer c1;
			c1.accNum = count;
			cout << "Enter Starting balance";
			cin >> c1.balance;
			cout << "Enter total charges";
			cin >> c1.totalSpent;
			cout << "Enter credits";
			cin >> c1.totalCredits;
			cout << "Enter credit limit";
			cin >> c1.creditLimit;
			c1.balance = c1.balance + c1.totalSpent - c1.totalCredits;
			if (c1.creditLimit < c1.balance) {
				cout << "acc number" + c1.accNum << endl;
				cout << "Credit Limit";
				cout << c1.creditLimit << endl;
				cout << "Balance";
				cout << c1.balance << endl;
				cout << "Credit Limit Exceeded /n";
				count = 0;
			}
			else {
				count = 0;

			}
		};
	};
	}

	

	









