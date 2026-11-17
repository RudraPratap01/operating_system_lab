#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main()
{
    pid_t p = fork();

    if (p < 0)
    {
        perror("fork failed");
        return 1;
    }

    if (p == 0)
    {
        /* Child Process */
        printf("Child Running with PID: %d\n", getpid());
        sleep(2);
        printf("Child Exiting...\n");
        exit(0);
    }
    else
    {
        /* Parent Process */
        printf("Parent Waiting for Child to terminate...\n");
        pid_t terminated_pid = wait(NULL);
        printf("Parent Terminated Child PID: %d\n", terminated_pid);
    }

    return 0;
}
