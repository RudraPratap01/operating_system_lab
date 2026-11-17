#include <stdio.h>

int main()
{
    long long counter = 0;

    printf("Starting CPU-bound task...\n");
    fflush(stdout);

    while (1)
    {
        counter++;
        if (counter % 100000000 == 0)
        {
            printf("CPU task running: %lld\n", counter);
            fflush(stdout);
        }
    }

    return 0;
}
