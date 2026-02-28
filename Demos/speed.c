#include <stdio.h>
#include <time.h>

int main() {
    clock_t start_time = clock();  // start timer

    for (int i = 0; i <= 9999; i++) {
        printf("%d\n", i);
    }

    clock_t end_time = clock();    // end timer
    double time_taken = (double)(end_time - start_time) / CLOCKS_PER_SEC;

    printf("Execution time: %f seconds\n", time_taken);

    return 0;
}