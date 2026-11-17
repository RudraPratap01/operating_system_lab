/*
 * Experiment 06: Memory Allocation & Demand Paging in C
 * Author: Rudra Pratap
 * Description: Dynamically allocates MBs of memory via malloc() and touches
 *              each 4 KB page to observe Resident Set Size (RSS) changes.
 */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define PAGE_SIZE 4096

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        fprintf(stderr, "Usage: %s <memory_in_MB>\n", argv[0]);
        return 1;
    }

    int megabytes = atoi(argv[1]);
    if (megabytes <= 0)
    {
        fprintf(stderr, "Please specify a positive memory size in MB.\n");
        return 1;
    }

    size_t total_bytes = (size_t)megabytes * 1024 * 1024;
    char *allocated_block = (char *)malloc(total_bytes);

    if (allocated_block == NULL)
    {
        perror("Memory allocation failed");
        return 1;
    }

    /* Force physical page allocation (demand paging) by writing to each page */
    for (size_t offset = 0; offset < total_bytes; offset += PAGE_SIZE)
    {
        allocated_block[offset] = 1;
    }

    printf("%d MB memory allocated and mapped into physical RAM.\n", megabytes);
    printf("Process PID: %d | Running... Press Ctrl+C to terminate.\n", getpid());
    fflush(stdout);

    while (1)
    {
        sleep(1);
    }

    free(allocated_block);
    return 0;
}
