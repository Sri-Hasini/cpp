#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main() {
	string s = " ";
	for (int i = 0; i < 6; i++) {
		char ch;
		cin >> ch;
		s += ch; // s = s + ch; 
	}
	cout << s;
}
