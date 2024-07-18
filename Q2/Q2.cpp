#include <iostream>
#include <array>
using namespace std;

int main() {

	int nums[10];

	int a, b, c, d, e, f, g, h, i, j;
	cout << "Enter a number   \n";
	cin >> a;
	cout << "Enter a number  \n";
	cin >> b;
	cout << "Enter a number   \n";
	cin >> c;
	cout << "Enter a number   \n";
	cin >> d;
	cout << "Enter a number \n";
	cin >> e;
	cout << "Enter a number   \n";
	cin >> f;
	cout << "Enter a number  \n";
	cin >> g;
	cout << "Enter a number   \n";
	cin >> h;
	cout << "Enter a number    \n";
	cin >> i;
	cout << "Enter a number  \n";
	cin >> j;
	nums[1] = a;
	nums[2] = b;
	nums[3] = c;
	nums[4] = d;
	nums[5] = e;
	nums[6] = f;
	nums[7] = g;
	nums[8] = h;
	nums[9] = i;
	nums[0] = j;
	for (int count = 0; count < 10; count++) {
		if (nums[count] >= nums[count+1]) {
			nums[count + 1] = nums[count];
		}
	}

	cout << "The highest number is " << nums[9];

}
