#include <stdio.h>

int main(int argc, char* argv[]){
	char A[20];
	printf("nom en bas\n");
	scanf("%s", A);

	printf("nom %s\n", A);
	printf("5 eme lettre %c\n", A[4]);

	return(0);
}
