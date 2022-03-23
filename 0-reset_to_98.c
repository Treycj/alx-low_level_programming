#include "main.h"
#include <stdio.h>
int main(){
	int n, *p;
	n = 30;
	*p = &n;
	*p = 98;
	putchar(*p);
	putchar('\n');
	return 0;
}
