#ifndef FUNCTIONS_BESSALA_23V2531_H
#define FUNCTIONS_BESSALA_23V2531_H
 # include<stdio.h>
 #include<stdlib.h>
 #include<string.h>
 #include<unistd.h>
  typedef struct student{
    char mat[6];
    int age;
    char nom[20];
  }student_t;
  typedef struct liste{
    student_t eleve;
    struct liste *suiv;
  }listStud_t;
 void insertInList(student_t Stud,listStud_t** listSt);
 void findInList(char *matricule,listStud_t *listST);
void removeFromList(char *matricule, listStud_t**hashT);
 void aff(listStud_t *list);
#endif // !1