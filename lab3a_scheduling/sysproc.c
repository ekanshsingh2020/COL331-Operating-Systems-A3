#include "types.h"
#include "x86.h"
#include "defs.h"
#include "param.h"
#include "memlayout.h"
#include "mmu.h"
#include "proc.h"

/* System Call Definitions */
int 
sys_set_sched_policy(void)
{
    // Implement your code here 
    int pol;
    if(argint(0, &pol) < 0)
        return -22;
    struct proc *curproc = myproc();
    curproc->policy = pol;
    return 0;
}

int 
sys_get_sched_policy(void)
{
    // Implement your code here 
    struct proc *curproc = myproc();
    return curproc->policy;
}
