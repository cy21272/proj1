#include<signal.h>
#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]){
	
	printf("send\n");
	kill(atoi(argv[1]),SIGUSR1);
	
}
