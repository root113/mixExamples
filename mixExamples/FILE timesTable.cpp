#include <stdio.h>

int main () {
	FILE *file;
	
	file = fopen("timesTable.txt","w");
	int i,j;
	for (i=1; i<=10; i++) {
		for (j=1; j<=10; j++) {
			fprintf(file,"%i x %i = %i\n",i,j,i*j);
		}
		fprintf(file,"\n");
	}
	fclose(file);
}