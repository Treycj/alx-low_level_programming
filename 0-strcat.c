#include "main.h"
#include <stdio.h>
#include <string.h>
int main(){
char dest[] = "Hello";
char src[] = "World\n";
char *ptr;
ptr =strcat(dest,src);
putchar(ptr);
return 0;
}
