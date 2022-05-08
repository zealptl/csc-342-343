int calculateDotProductByIndex(int array1[], int array2[], int n) {
	int sum = 0;
	// #pragma loop(no_vector) - disables vectorization
	#pragma loop( hint_parallel( 0 ) ) // enables parallelization
	for (int i = 0; i < n; i++)
		sum += (array1[i] * array2[i]);
	return sum;
}