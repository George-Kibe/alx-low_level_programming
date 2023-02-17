#include <stdio.h>

int main(void)
{
	char f,m,l;
	int age;
	
	printf("Enter your initials followed by your Age: ");
	scanf("%c %c %c %d", &f, &m, &l, &age);
	printf("Your Initials are: %c%c%c and your age is %d.\n", f,m,l,age);
	return(0);
}

