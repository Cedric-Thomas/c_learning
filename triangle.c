#include <stdio.h>
int min(int a, int b){
  if(a > b)
  return b;
  else
  return a;
}

int main() {
  int x, y;
  int base, hauteur;
  int t;
  printf("TRIANGLE \n");
  printf("base: ");
  scanf("%d", &base);
  printf("hauteur: ");
  scanf("%d", &hauteur);

  if(base%2 == 0)
    base++;

  printf("TRIANGLE: base=%d hauteur=%d\n", base, hauteur);
  for ( y = 0; y < hauteur; y++) {
    for (x = 0; x < base;  x++) {
    if (y == 0 && x==base/2)
    printf(".");
    else if(x ==base/2-y)
      printf("/");
    else if(x ==base/2+y)
      printf("\\");
    else
      if(y==min(hauteur-1, base/2) && x>(base/2)-y && x<(base/2)+y)
        printf("_");
      else
        printf(" ");
    }
  printf("\n");

  }

  return 0;
}
