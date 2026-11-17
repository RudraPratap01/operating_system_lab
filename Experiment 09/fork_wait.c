/*
 * Experiment 09: Process Creation and Synchronization in C
 * Author: Rudra Pratap
 * Description: Demonstrates fork() system call for child process creation
 *              and wait() for parent synchronization and exit status.
 */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main(void)
{
    setbuf(stdout, NULL);

    pid_t process_id = fork();

    if (process_id < 0)
    {
        perror("fork invocation failed");
        return 1;
    }

    if (process_id == 0)
    {
        /* Child execution flow */
        printf("Child Process Active [PID: %d, Parent PID: %d]\n", getpid(), getppid());
        sleep(2);
        printf("Child Process Finished [PID: %d]\n", getpid());
        exit(0);
    }
    else
    {
        /* Parent execution flow */
        printf("Parent Process Waiting for Child [PID: %d]...\n", process_id);
        pid_t completed_child = wait(NULL);
        printf("Parent: Child process [PID: %d] successfully terminated.\n", completed_child);
    }

    return 0;
}
