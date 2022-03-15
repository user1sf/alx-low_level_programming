#include <stdio.h>
int main(){
	char ch = 'a';
	printf("Alphabetic letters are:\n");
	while(ch <= 'z')
	{
		printf("%c ", ch);
		ch++;
	}
	printf("\n");
	return 0;
}
