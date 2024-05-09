#include <iostream>
#include <vector>
using namespace std;
int main() {
	vector<int> V; // push_back, emplace_back
	for (int i = 0; i < 5; i++) {
		int t;
		cin >> t;
		V.push_back(t);
	}
	for (int i = 0; i < V.size(); i++) {
		cout << V[i] << " ";
	} 
}
