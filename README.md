# Assignment 3: Custom Scheduler
### Goal
- To implement a scheduling algorithm which allows processes to specify whether they are "foreground" or "background", and they will be allocated CPU time accordingly
- The algorithm should make sure that any process is not starved and is given time share according to its priority
### Idea Overview
- I started with implementing two system calls in sysproc.c:
  - int set_sched_policy(void): This would indicate to the operating system the policy number of the process 
  - int get_sched_policy(void): This would just the process information and extract the policy number out of it
- One subtle thing was to add these system call declations in usys.S
- The algorithm that I chose for the given problem by stride scheduling as it helped to take care of priorities and the 90:10 ratio as mentioned in lab3.md
- You can find the implementation in void scheduler(void) in proc.c

This was easy assignment since it had involvment of syscalls, it made me understand the depth of xv6 code even better.

Let me know if you have any doubts in the code :)