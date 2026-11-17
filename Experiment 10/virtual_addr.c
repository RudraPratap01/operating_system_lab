/*
 * Experiment 10: Observing Virtual Memory Addresses & ASLR in C
 * Author: Rudra Pratap
 * Description: Displays stack variable virtual memory addresses and demonstrates
 *              Address Space Layout Randomization (ASLR).
 */

#include <stdio.h>
#include <unistd.h>

int main(void)
{
    int test_variable = 42;

    printf("PID: %d | Virtual Address: %p\n", getpid(), (void *)&test_variable);
    fflush(stdout);

    while (1)
    {
        sleep(1);
    }

    return 0;
}
