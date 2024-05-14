#include "types.h"
#include "stat.h"
#include "user.h"

int main(int argc, char *argv[]){
	int myPid = getpid();
	int grandPid = getgpid();
	printf(1,"My student id is 2020040946\n");
	printf(1,"My pid is %d\n", myPid);
	printf(1,"My gpid is %d\n", grandPid);
	exit();
};


