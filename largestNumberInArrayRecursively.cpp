#include <iostream>

using namespace std;

const int ARR_LENGHT = 5;

int searchLargestNumberRecursievly(int arr[ARR_LENGHT], int index);

int main() {
	int arr[ARR_LENGHT], largestNumber;

	cout << "Input " << ARR_LENGHT << " arr value:" << endl;
	for (int i = 0; i < ARR_LENGHT; i++) {
		cin >> arr[i];
	}

	largestNumber = searchLargestNumberRecursievly(arr, 0);

	cout << "Largest number = " << largestNumber << endl;
}

int searchLargestNumberRecursievly(int arr[ARR_LENGHT], int index) {
	int retValue;
	if (index == ARR_LENGHT - 1) {
		return arr[index];
	} else {
		retValue = searchLargestNumberRecursievly(arr, index + 1);
		return arr[index] > retValue ? arr[index] : retValue;
	}
}