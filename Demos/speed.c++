#include <iostream>
#include <chrono>
using namespace std;
using namespace std::chrono;

int main() {
    auto start_time = high_resolution_clock::now();  // start timer

    for (int i = 0; i <= 9999; i++) {
        cout << i << "\n";
    }

    auto end_time = high_resolution_clock::now();    // end timer
    duration<double> time_taken = end_time - start_time;

    cout << "Execution time: " << time_taken.count() << " seconds" << endl;

    return 0;
}

// Additional loop to print numbers from 0 to 9999