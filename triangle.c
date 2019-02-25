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

  printf("TRIANGLE: base=%d hauteur=%d\n", base, hauteur);
  for ( x = 0; x < hauteur; x++) {
    printf("/");
    for (y = 1; y < base;  y++) {
        printf("-");
    }
  printf("\\");
  printf("\n");

  }

  return 0;
}
