#include <stdio.h>
#include <stdlib.h>

int main() {

  int a, b, c, x, maiorab;

  scanf ("%d%d%d", &a, &b, &c);


  x = (a+b+abs(a-b))/2;
  maiorab = (x+c+abs(x-c))/2;



printf("%d eh o maior\n", maiorab);

}
