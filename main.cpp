#include <iostream>


#include "src/slide.hpp"
using namespace std;
int main() {
	int arr[] = { 1,2,3,4,5 };
	arrayShift(arr, 5, 1);
	for (int i = 0; i < 5; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
	return 0;
}

