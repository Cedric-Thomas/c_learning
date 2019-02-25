#include <stdio.h>

int main(void) {
  int x, y;
  int base, hauteur;
  printf("BASE => ");
  scanf("%d", &base);
  fflush(stdin);
  printf("HAUTEUR => ");
  scanf("%d", &hauteur);
  fflush(stdin);
  printf("TRIANGLE: B=%d, H=%d\n", base, hauteur);

  for (y=0; y < hauteur; y++) {
    for(x=0; x < base; x++) {
      printf("X");
    }
    printf("\n");
  }
  return 0;
}
