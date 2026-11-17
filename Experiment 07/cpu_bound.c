/*
 * Experiment 07: CPU-Bound Process in C
 * Author: Rudra Pratap
 * Description: Infinite compute loop maximizing processor utilization.
 */

#include <stdio.h>
#include <unistd.h>

int main(void)
{
    long long iteration_count = 0;

    printf("Starting CPU-bound workload (PID: %d)...\n", getpid());
    fflush(stdout);

    while (1)
    {
        iteration_count++;

        if (iteration_count % 100000000 == 0)
        {
            printf("CPU task running: %lld\n", iteration_count);
            fflush(stdout);
        }
    }

    return 0;
}
