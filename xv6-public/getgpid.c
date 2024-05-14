#include "types.h"
#include "x86.h"
#include "defs.h"
#include "date.h"
#include "param.h"
#include "memlayout.h"
#include "mmu.h"
#include "proc.h"
#include <stddef.h>
int getgpid(void){

	struct proc *child = myproc();

	if(child->parent == NULL)
		return -1;
	
	if(child->parent->parent == NULL)
		return -1;
	
	return child->parent->parent->pid;

}

int sys_getgpid(void){
	return getgpid();
}
