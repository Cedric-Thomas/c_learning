#include <stdio.h>

int main(void) {

  int x, y;
  int base, hauteur;

  printf("BASE => ");
  scanf("%d", &base);
  fflush(stdin);
  if(base%2 == 0)
  {
    printf("BASE CANNOT BE PAIR !\n");
    base++;
  }
  printf("HAUTEUR => ");
  scanf("%d", &hauteur);
  fflush(stdin);
  printf("TRIANGLE: B=%d, H=%d\n", base, hauteur);

  for (y=0; y < hauteur; y++) {
    for (x=0; x < base; x++) {
      if (y==0 && x==base/2) {
        printf("|");
      }
      else if (x==(base/2)-y) {
        printf("/");
      }
      else if (x==(base/2)+y) {
        printf("\\");
      }
      else if (y==base/2      && \
               x > (base/2)-y && \
               x < (base/2)+y)
      {
        printf("-");
      }
      else {
        printf(" ");
      }
    }
    printf("\n");
  }
  return 0;
}
