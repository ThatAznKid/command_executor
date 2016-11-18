#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
	
int main(int argc, char *argv[]){

	printf("What would you like to do Mister DDubleU?: ");
	char line[100];
	scanf("%s",line);
	char * s = line;
	char * command[5];
	int i = 0;
	while(s){
		printf("%s\n",s);
		command[i] = strsep(&s," ");
		i++;
		printf("%d\n",i);
	}
	printf("%s\n",command[1]);
	command[i] = 0;
	//execvp(command[0],command);	

}
