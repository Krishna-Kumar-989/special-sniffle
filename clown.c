#include <stdio.h>
#include <math.h>  // For fabs

int main() {
    float b = 0, step = 0, learn = 0.01;
    float ssd;

    do {
        // Update the SSD based on current value of b
        ssd = 2 * ((b - 2) + (b - 3) + (b - 4) + (b - 5));

        // Calculate the step size using learning rate and SSD
        step = fabs(learn * ssd);

        // Update b by subtracting the step
        b = b - step;

    } while (step >= 0.001);  // Continue until step size is small

    // Print the final value of b
    printf("Final value of b: %f\n", b);

    return 0;
}
