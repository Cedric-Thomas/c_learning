#include <stdio.h>

int main(void) {
  int i, j;
  int base, hauteur;
  printf("BASE => ");
  scanf("%d", &base);
  printf("HAUTEUR => ");
  scanf("%d", &hauteur);
  printf("TRIANGLE: B=%d, H=%d\n", base, hauteur);
  for (i=0; i < hauteur; i++) {
    for(j=0; j < base; j++) {
      printf("X");
    }
    printf("\n");
  }
  return 0;
}
