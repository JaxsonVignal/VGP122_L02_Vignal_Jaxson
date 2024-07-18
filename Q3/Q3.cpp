#include <iostream>
#include <array>
using namespace std;

int main() {
	


	int a;
	int b;

	cout << "Enter a number   \n";
	cin >> a;


	int* nums = new int[a-1];
	
	for (int count = 0; count < a; count++) {
		cout << "Enter a number";
		cin >> b;
		nums[count] = b;
	}

	for (int count = 0; count < a-1; count++) {
		if (nums[count] <= nums[count + 1]) {
			nums[count + 1] = nums[count];
		}
	}

	cout << "The lowest number is " << nums[a-2];
}
