#include "functions_bessala_23V2531.h"

// Fonction pour insérer un étudiant dans la liste
void insertInList(student_t Stud, listStud_t **listSt) {
    listStud_t *nouveau = (listStud_t *)malloc(sizeof(listStud_t));
    if (nouveau == NULL) {
        printf("Erreur d'allocation mémoire.\n");
        exit(1);
    }
    nouveau->eleve = Stud;
    nouveau->suiv = *listSt;
    *listSt = nouveau;
}

// Fonction pour trouver un étudiant dans la liste par son matricule
void findInList(char *matricule, listStud_t *listST) {
    listStud_t *current = listST;
    while (current != NULL) {
        if (strcmp(current->eleve.mat, matricule) == 0) {
            printf("Étudiant trouvé : %s, %d ans, Matricule: %s\n",
                   current->eleve.nom, current->eleve.age, current->eleve.mat);
            return;
        }
        current = current->suiv;
    }
    printf("Étudiant avec matricule %s non trouvé.\n", matricule);
}

// Fonction pour supprimer un étudiant de la liste par son matricule
void removeFromList(char *matricule, listStud_t **listSt) {
    listStud_t *current = *listSt;
    listStud_t *previous = NULL;

    while (current != NULL && strcmp(current->eleve.mat, matricule) != 0) {
        previous = current;
        current = current->suiv;
    }

    if (current == NULL) {
        printf("Étudiant avec matricule %s non trouvé.\n", matricule);
        return;
    }

    if (previous == NULL) {
        *listSt = current->suiv;
    } else {
        previous->suiv = current->suiv;
    }

    free(current);
    printf("Étudiant avec matricule %s supprimé.\n", matricule);
}

// Fonction pour afficher la liste des étudiants
void aff(listStud_t *list) {
    listStud_t *current = list;
    printf("************La liste des etudiants :*********************\n");
    printf("------------------------------------------------------------\n");
    while (current != NULL) {
        printf("Nom: %s, Âge: %d, Matricule: %s\n",
               current->eleve.nom, current->eleve.age, current->eleve.mat);
        current = current->suiv;
    }
    printf("------------------------------------------------------------\n");
    printf("************************************************************\n");
}

