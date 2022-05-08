#include <iostream>
#include <vector>
#include <algorithm>
#include <windows.h>
using namespace std;

int calculateDotProductByPointer(int* vector1, int* vector2, int n);
int calculateDotProductByIndex(int array1[], int array2[], int n);
float calculateOptimizedDotProduct(float* array1, float* array2, int n);

const int arraySize = 2;
static int X[arraySize];
static int Y[arraySize];
static float X2[arraySize];
static float Y2[arraySize];


int main() {
	__int64 startTime = 0, endTime = 0, frequency = 0;

	int final_product = 0;
	float final_product2 = 0;

	for (int i = 0; i < arraySize; i++) {
		X[i] = i;
		Y[i] = i / 2;
	}

	for (int i = 0; i < arraySize; i++) {
		X2[i] = (float)i;
		Y2[i] = (float)i / 2;
	}


	if (QueryPerformanceCounter((LARGE_INTEGER*)&startTime) != 0) {
		final_product = calculateDotProductByIndex(X, Y, arraySize);
		// final_product = calculateDotProductByPointer(&X[0], &Y[0], arraySize);??
		// final_product2 = calculateOptimizedDotProduct(X2, Y2, arraySize);
		QueryPerformanceCounter((LARGE_INTEGER*)&endTime);
		QueryPerformanceFrequency((LARGE_INTEGER*)&frequency);

		cout << "Size of array: " << arraySize << endl << "Run Time: " << (endTime - startTime) * 1.0 / frequency << " seconds" << endl;
		cout << "Final result is : " << final_product << endl;
	}

	else {
		DWORD dwError = GetLastError();
		cout << "Error value = " << dwError << endl;
	}

	system("pause");
	return 0;
}

