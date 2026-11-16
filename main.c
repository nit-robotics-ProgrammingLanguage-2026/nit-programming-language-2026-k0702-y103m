#include <stdio.h>
#include <stdlib.h> 
 
int func3(int a, int b);
 
int main(void) {
int n;
scanf("%d", &n);
printf("%d", func3(10, n));
return 0;
}
 
int func3(int a, int b) {
/* a と b の差の絶対値を返す */
int diff = a - b;
return (diff < 0) ? -diff : diff;
// または return abs(a - b); でも可能です
}