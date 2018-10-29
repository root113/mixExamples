#include <stdio.h>
#define SIZE 10

int main (void) {
	int n[SIZE] = {19,3,15,7,11,9,13,5,17,1};
	size_t i;
	int j;
	
	printf("%s%13s%17s\n", "Element", "Value", "Histogram");
	
	for (i=0; i<SIZE; ++i) {
		printf("%7u%13d        ", i, n[i]);
		
		for (j=1; j<=n[i]; ++j) {
			printf("%c", '*');
		}
		puts("");
	}
}
