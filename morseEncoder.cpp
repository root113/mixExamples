#include <stdio.h>
#include <string.h>
#define SIZE 100

const char* morseEncode(char x){
	switch(x){
		case 'A':
		case 'a':
			return ".-";
		case 'B':
		case 'b':
			return "-...";
		case 'C':
		case 'c':
		case 'Ç':
		case 'ç':
			return "-.-.";
		case 'D':
		case 'd':
			return "-..";
		case 'E':
		case 'e':
			return ".";
		case 'F':
		case 'f':
			return "..-.";
		case 'G':
		case 'g':
		case 'Ğ':
		case 'ğ':
			return "--.";
		case 'H':
		case 'h':
			return "....";
		case 'I':
		case 'ı':
		case 'İ':
		case 'i':
			return "..";
		case 'J':
		case 'j':
			return ".---";
		case 'K':
		case 'k':
			return "-.-";
		case 'L':
		case 'l':
			return ".-..";
		case 'M':
		case 'm':
			return "--";
		case 'N':
		case 'n':
			return "-.";
		case 'O':
		case 'o':
			return "---";
		case 'Ö':
		case 'ö':
			return "---.";
		case 'P':
		case 'p':
			return ".--.";
		case 'Q':
		case 'q':
			return "--.-";
		case 'R':
		case 'r':
			return ".-.";
		case 'S':
		case 's':
		case 'Ş':
		case 'ş':
			return "...";
		case 'T':
		case 't':
			return "-";
		case 'U':
		case 'u':
			return "..-";
		case 'Ü':
		case 'ü':
			return "..--";
		case 'V':
		case 'v':
			return "...-";
		case 'W':
		case 'w':
			return ".--";
		case 'X':
		case 'x':
			return "-..-";
		case 'Y':
		case 'y':
			return "-.--";
		case 'Z':
		case 'z':
			return "--..";
		default:
			return NULL;
	}
}

void morseCode (char *p){
	for(int i=0;p[i] != '\0';i++){
		printf("%s/",morseEncode(p[i]));
	}
}

int main() {
	char phrase[SIZE];
	printf("Code is non-sensitive to letters.\nEnter phrase: ");
	scanf("%s",phrase);
	puts("");
	morseCode(phrase);
}
