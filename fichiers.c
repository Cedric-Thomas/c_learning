#include <stdio.h>

int main(int argc, char* argv[]) {
  char nom[20], pnom[20];

  printf("nom: ");
  scanf("%s", &nom);
  printf("prenom: ");
  scanf("%s", &pnom);

  FILE* fichier;
  fichier = fopen("reg.txt", "a");
  if(fichier != NULL){
  fprintf(fichier, "%s %s \n", nom, pnom );
  }
  return 0;
}
