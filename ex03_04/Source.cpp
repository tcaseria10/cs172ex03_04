#include <iostream>	
#include <string>
#include <algorithm>
using namespace std;

// Tyler Caseria
// CS172
// Hw 03 : Exercise 04
// 23 February 2017

string sort(string& s) {
	string sss = s;
	std::sort(sss.begin(), sss.end());
	cout << "Your sorted string is: " << sss << "." << endl;
	return sss;
}



int main() {
	string ss;
	cout << "Enter a string of characters:";
	cin >> ss;
	cout << endl;
	sort(ss);

	int one;
	cout << "Press 1, then press enter to exit." << endl;
	cin >> one;

	return 0;
}