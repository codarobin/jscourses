#include <stdio.h>
#include <string.h>

struct adresse {
  char rue[30];
  char ville[30];
};

typedef struct etudiante {
  char prenom[30];
  char nom[30];
  struct adresse adresse;
  int notes_tp[6];
  int notes_ds[2];
} etudiante;

int main() {
  etudiante dupont;

  strcpy(dupont.nom, "Dupont");
  strcpy(dupont.prenom, "Pierre");
  strcpy(dupont.adresse.rue, "Rue Max");
  strcpy(dupont.adresse.ville, "Villeurbanne");
  dupont.notes_tp[0] = 1;
  dupont.notes_tp[1] = 3;
  dupont.notes_tp[2] = 3;
  dupont.notes_tp[3] = 4;
  dupont.notes_tp[4] = 4;
  dupont.notes_tp[5] = 5;
  dupont.notes_ds[0] = 18;
  dupont.notes_ds[1] = 0;

  printf("%s\n", dupont.nom);

  return(0);
}

