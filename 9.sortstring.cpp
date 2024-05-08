#include <iostream>
#include <algorithm>
#include <numeric>
#include <string>
using namespace std;
int main() {
	string s;
	cin >> s;
//	getline(cin, s);
	    // index based
//	cout << s.size();
//	for (int i = 0; i < s.size(); i++) {
//		cout << s[i] << '\n';
//	}
		// range based
//	for (char i: s) cout << i << endl;
//	for (char i: s) cout << (int)i << endl; //
//	s.begin() // beginning address // "hello" "h" s.end() "o"
	sort(s.begin(), s.end()); // sort(arr, arr + n)
	cout << s;
//	cout << s;
}
