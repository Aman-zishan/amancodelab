#Ashwin Anil


#include <stdio.h>

void transfer(int n, char from, char to, char temp);

int main(){

	int n;

	printf("Welcome to the TOWER OF HANOI\n\n");
	printf("How many disks : ");
	scanf("%d", &n);
	printf("\n");
	transfer(n, 'L', 'R', 'C'); 
}

void transfer(int n, char from, char to, char temp)
{
	if(n > 0){
		//Move n-1 disks from origin to temporary
		transfer(n-1, from, temp, to);

		//Move nth disk from origin to destination
		printf("Move the disk %d from %c to %c\n", n, from, to);

		//Move n-1 disks from temporary to destination
		transfer(n-1, temp, to, from);
	}
	return;
}
