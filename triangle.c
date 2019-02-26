#include <stdio.h>

int main() {
  int x, y;
  int base, hauteur;
  int t;
  printf("TRIANGLE \n");
  printf("base: ");
  scanf("%d", &base);
  printf("hauteur: ");
  scanf("%d", &hauteur);

  if(base%2 ==0)
    base++;

  printf("TRIANGLE: base=%d hauteur=%d\n", base, hauteur);
  for ( y = 0; y < hauteur; y++) {
    for (x = 1; x < base;  x++) {
    if (y == 0 && x==base%2)
    printf(".");
    else if(x ==base%2-y)
      printf("/");
    else if(x == base%2+y)
      printf("\\");
    else
      printf(" ");
    }
  printf("\n");

  }

  return 0;
}
