#include <iostream>
#include <algorithm>
#include <numeric>
using namespace std;
int main() {
	int arr[5] = {5, -1, 2, 4, 1};
	sort(arr , arr + 5);
	//sort(arr + 2, arr + 5);
	//we can also give limit from which index to which index we are wanted to sort
	for (int i = 0; i < 5; i++) {
		cout << arr[i] << " ";
	}
}
