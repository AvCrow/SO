#include<stdio.h>
#include<stdlib.h>
#include<errno.h>
#include<unistd.h>
#include<cstring>
int main()
{
	int fd[2];
	char buffer[30];
	pipe(fd); //descriptor de archivo
	if(!fork())
	{
		printf("HIJO: escribiendo en el PIPE\n");
		buffer[0]='h'; //read
		buffer[1]='o'; //write
		buffer[2]='l'; 
		buffer[3]='a';
		buffer[4]='.';
		write(fd[1], buffer, 5);
		printf("HIJO.... adios\n");
		exit(0);
	}
	else{
		sleep(2);		
		printf("PADRE: leyendo desde pipe \n");
		read(fd[0], buffer, 5);
		printf("PADRE: he leido \%s \n", buffer);
buffer[5]='m';
	buffer[6]='u';
buffer[7]='n';
buffer[8]='d';
	buffer[9]='o';
write(fd[1], buffer, 10);

	}
}
