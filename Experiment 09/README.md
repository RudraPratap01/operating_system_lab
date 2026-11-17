# Experiment 09 — Process Creation & Termination in C

> **Submitted by:** Rudra Pratap  

---

### Objective
To implement child process creation using the `fork()` system call and demonstrate process synchronization and exit status harvesting using the `wait()` system call.

---

### Source Code

- **Program:** [`fork_wait.c`](./fork_wait.c)

```c
pid_t process_id = fork();

if (process_id == 0) {
    /* Child Process */
    printf("Child Process Active [PID: %d]\n", getpid());
    sleep(2);
    exit(0);
} else {
    /* Parent Process */
    printf("Parent Waiting for Child...\n");
    pid_t completed_child = wait(NULL);
    printf("Parent: Child [PID: %d] finished.\n", completed_child);
}
```

---

### Core Concepts

- **`fork()`:** Clones the calling process. It returns `0` in the child process, the child's new PID in the parent process, and `-1` on failure.
- **`getpid()` & `getppid()`:** Returns the current process ID and parent process ID, respectively.
- **`wait(NULL)`:** Blocks parent execution until an existing child process changes its state or terminates, preventing zombie processes.

---

### How to Compile & Run

```bash
gcc -Wall -Wextra fork_wait.c -o fork_wait
./fork_wait
```

---

### Sample Output

```text
Parent Process Waiting for Child [PID: 23412]...
Child Process Active [PID: 23412, Parent PID: 23411]
Child Process Finished [PID: 23412]
Parent: Child process [PID: 23412] successfully terminated.
```

*(See [`output.txt`](./output.txt) for raw execution trace).*

---

### Conclusion
Successfully verified parent-child process creation, asynchronous execution, and parent blocking synchronization using standard POSIX system calls.
