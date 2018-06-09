/* Enter the number "6" at the prompt in the console */

#include <stdio.h>

int main(void) {

int t1 = 0, t2= 1, nextTerm = 0, n;
printf("Enter a positive number: ");
scanf("%d", &n);

printf("Fibonacci series: %d, %d, ", t1, t2 );

nextTerm = t1 + t2;

while (nextTerm <= n) {
print("%d, ", nextTerm);
t1 = t2;
t2 = nextTerm;
nextTerm = t1 + t2;
}
return = 0;
}   
