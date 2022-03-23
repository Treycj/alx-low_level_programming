#include "main.h"
#include <stdio.h>
int main(void){
	int n, *p;
	n = 402;
	*p = &n;
	*p = 98;
	putchar(*p);
	putchar('\n');
	return 0;
}
