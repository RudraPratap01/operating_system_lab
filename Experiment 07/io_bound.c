/*
 * Experiment 07: I/O-Bound Process in C
 * Author: Rudra Pratap
 * Description: Periodic file I/O operations and sleep calls spending most
 *              time in wait states rather than on CPU.
 */

#include <stdio.h>
#include <unistd.h>

int main(void)
{
    FILE *file_ptr;

    printf("Starting I/O-bound workload (PID: %d)...\n", getpid());
    fflush(stdout);

    while (1)
    {
        file_ptr = fopen("dummy.txt", "w");
        if (file_ptr != NULL)
        {
            fprintf(file_ptr, "Writing disk data at PID %d\n", getpid());
            fclose(file_ptr);

            printf("File write completed\n");
            fflush(stdout);
        }

        sleep(1);
    }

    return 0;
}
