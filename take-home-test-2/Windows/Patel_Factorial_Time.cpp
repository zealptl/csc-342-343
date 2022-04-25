#include <chrono>
#include <iostream>
using namespace std;

int fact(int N) {
    if (N == 1)
        return 1;
    return (N * fact(N - 1));
}

int main() {
    using chrono::high_resolution_clock;
    using chrono::duration_cast;
    using chrono::duration;
    using chrono::milliseconds;
    int N_fact;

    auto t1 = high_resolution_clock::now();
    N_fact = fact(10);
    auto t2 = high_resolution_clock::now();
    duration<double, std::milli> exec_time = t2 - t1;
    cout << "Execution Time for factorial(10): " << exec_time.count() << " ms\n";

    auto t3 = high_resolution_clock::now();
    N_fact = fact(100);
    auto t4 = high_resolution_clock::now();
    duration<double, std::milli> exec_time2 = t4 - t3;
    cout << "Execution Time for factorial(100): " << exec_time2.count() << " ms\n";

    auto t5 = high_resolution_clock::now();
    N_fact = fact(1000);
    auto t6 = high_resolution_clock::now();
    duration<double, std::milli> exec_time3 = t6 - t5;
    cout << "Execution Time for factorial(1000): " << exec_time3.count() << " ms\n";

    auto t7 = high_resolution_clock::now();
    N_fact = fact(10000);
    auto t8 = high_resolution_clock::now();
    duration<double, std::milli> exec_time4 = t8 - t7;
    cout << "Execution Time for factorial(10000): " << exec_time4.count() << " ms\n";

    return 0;
}