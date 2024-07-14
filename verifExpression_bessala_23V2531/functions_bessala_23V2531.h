#ifndef FUNCTIONS_BESSALA_23V2531_H
#define FUNCTIONS_BESSALA_23V2531_H
 # include<stdio.h>
 #include<stdlib.h>
 #include<unistd.h>
 #include<string.h>
 #define max 10

   typedef struct pile{
      char head;
      char pile[max];
   }pileTab_t;
   void pushTab(char c,pileTab_t *p);
   char pullTab(pileTab_t *p);
   char headTab(pileTab_t *p);
   void initTab(pileTab_t *p);
   int isEmptyTab(pileTab_t p);
   int isplentyTab(pileTab_t p);
void ajouter();
char fermant(char c);
#endif // 