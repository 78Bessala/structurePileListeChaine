#include "functions_bessala_23V2531.h"
int main() {
    listStud_t *listSt = NULL;
    student_t Stud;
    int choix;
    char matricule[6];

    do {
        printf("\n\nBIENVENUE DANS LE MENU DU TP INF 112\n\n");
        printf("Que souhaitez-vous faire?\n");
        printf("\t0. Quitter le programme\n");
        printf("\t1. Insérer un étudiant\n");
        printf("\t2. Supprimer un étudiant\n");
        printf("\t3. Rechercher un étudiant\n");
        printf("\t4. Afficher la liste des étudiants\n");
        printf("Votre choix: ");
        scanf("%d", &choix);

        switch (choix) {
        case 0:
            printf("Veuillez patienter.......................\n");
            sleep(2);
            break;
        case 1:
            printf("Veuillez entrer les informations de l'étudiant\n");
            printf("Le matricule (format '24LCCC')\n");
            scanf("%s", Stud.mat);
            printf("Son nom\n");
            scanf("%s", Stud.nom);
            printf("Son âge\n");
            scanf("%d", &Stud.age);
            insertInList(Stud, &listSt);
            printf("Étudiant %s ajouté à la liste avec succès\n", Stud.mat);
            break;
        case 2:
            printf("Veuillez entrer le matricule de l'étudiant à supprimer\n");
            scanf("%s", matricule);
            removeFromList(matricule, &listSt);
            printf("Étudiant %s supprimé avec succès\n", matricule);
            break;
        case 3:
            printf("Veuillez entrer le matricule de l'étudiant à rechercher\n");
            scanf("%s", matricule);
            findInList(matricule, listSt);
            break;
        case 4:
            aff(listSt);
            break;
        default:
            printf("Désolé, votre choix n'est pas disponible. Veuillez réessayer !!!\n");
            break;
        }

    } while (choix != 0);


    return 0;
}