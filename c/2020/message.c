// une chaîne de caractères

#include <stdio.h>

int main() {
  char message[20] = "Bonjour\n";

  int compteur;
  for (compteur = 0; compteur  < 20; compteur++) {
    printf("%c\n", message[compteur]);
  }

  for (compteur = 0; compteur  < 20; compteur++) {
    printf("%d\n", message[compteur]);
  }

  return (0);
}
