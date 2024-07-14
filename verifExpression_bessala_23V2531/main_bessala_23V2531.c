# include "functions_bessala_23V2531.h"
int main(){
    pileTab_t ma_pile;
    initTab(&ma_pile);
    int baron,i;
    char exp[10];
    ajouter();
    FILE *ficher =fopen("expression.txt","r");
while(fscanf(ficher,"%s",exp)!=EOF){
     for( i=0;i<strlen(exp);i++){
        if(exp[i]=='{'||exp[i]=='('||exp[i]=='['){
         pushTab(exp[i],&ma_pile);
        }else if(exp[i]=='}'||exp[i]==')'||exp[i]==']'){
            char elts=pullTab(&ma_pile);
            if(exp[i]==fermant(elts))
                continue;
            else{
                baron=-1;
                break;
            }

        }
    }
}
fclose(ficher);
  if(baron!=-1 && isEmptyTab(ma_pile)){
        printf("Expression bien formée !!\n");
    }else{
        printf("Expression mal formée!!\n");
    }
    
    return 0;
 }