#include "functions_bessala_23V2531.h"
 void pushTab(char c,pileTab_t *p){
    if(isplentyTab(*p)){
        printf("ERROR: la pile est pleine!!\n");
        exit(0);
    }else{
     p->pile[p->head]=c;
     p->head ++;
    }
  }
   char pullTab(pileTab_t *p){
      if(isEmptyTab(*p)){
         printf("ERROR: la pile est vide !!\n");
        exit(0);
      }
      char el=p->head;
      p->head=p->head-1;
      return el;

   }
   char headTab(pileTab_t *p){
    if(isEmptyTab(*p)){
        printf("ERROR: la pile est vide !!\n");
        return '\0';
    }else{
        return p->pile[p->head-1];
    }
   }
   void initTab(pileTab_t *p){
        p->head=0;
   }
   int isEmptyTab(pileTab_t p){
    if(p.head==0)
       return 1;
    else
     return 0;
   }

   int isplentyTab(pileTab_t p){
    if(p.head==max)
        return 1;
    else
       return 0;
   }

 char fermant(char c){
    switch (c)
    {
    case '{':
        return '}';
    case '(':
        return ')';
    case '[':
        return ']';
    default:
        return ' ';
    }
 }
 void ajouter(){
    FILE *fichier=fopen("expression.txt","a");
    char exp[10];
    printf("Veuillez entrer une expression\n");
    scanf("%s",exp);
    fprintf(fichier,"%s\n",exp);
    fclose(fichier);

 }