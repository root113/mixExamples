#include <stdio.h>

int main () {
	FILE *baban;
	
	baban = fopen("carpimTablosu.txt","w");
	int i,j;
	for (i=1; i<=10; i++) {
		for (j=1; j<=10; j++) {
			fprintf(baban,"%i x %i = %i\n",i,j,i*j);
		}
		fprintf(baban,"\n");
	}
	fclose(baban);
}
