#include <smmintrin.h>
float calculateOptimizedDotProduct(float* array1, float* array2, int n) {
    //__m128 array1 = _mm_load_ps(array1);
    //__m128 array2 = _mm_load_ps(array2);
    //__m128 t1 = _mm_dp_ps(array1,array2, 0xff);

    int sseLen = n / 4;
    __m128 dotSSE;
    float dot = 0.0;

    __m128 val1;
    __m128 val2;

    for (int i = 0; i < sseLen; i++)
    {
        val1 = _mm_load_ps(&array1[4 * i]);
        val2 = _mm_load_ps(&array2[4 * i]);

        dotSSE = _mm_dp_ps(val1, val2, 0xFF);
        dot += dotSSE.m128_f32[0];
    }

    return dotSSE.m128_f32[0];
}