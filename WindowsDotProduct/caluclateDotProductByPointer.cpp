int calculateDotProductByPointer(int* vector1, int* vector2, int n) {
	int sum = 0;
	int* a, * b;
	//#pragma loop(no_vector) - disables vectorization
    #pragma loop( hint_parallel( 0 ) ) // enables parallelization
	for (a = &vector1[0], b = &vector2[0]; a < &vector1[n]; a++, b++)
		sum += ((*a) * (*b));
	return sum;
}