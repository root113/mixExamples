#include <stdio.h>
#include <string.h>

void reverse(char rev[]);

int main () {
	char text[200];
	printf("Enter text:\n");
	scanf("%s",text);
	reverse(text);
	printf("Reverse: %s\n",text);
	return 0;
}

void reverse(char rev[]) {
	int i,length,remainder;
	
	length= strlen(rev);
	
	for (i=0; i<length/2; i++) {
		remainder = rev[i];
		rev[i] = rev[length-1-i];
		rev[length-1-i] = remainder;
	}
}
