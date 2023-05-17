#include <stdlib.h>
#include <stdio.h>

int main(){
FILE* f = NULL;
f = fopen("marche.txt", "r+");
if(f == NULL){
printf("erreur type erno\n");
exit(1);
}
char c;
while(c!=EOF){
printf("%c", c);
c = fgetc(f);
}
int a;
scanf("%d", &a);
FILE* f1= NULL;
if(a==1){
f1=fopen("marche1.txt", "r+");
}
else if(a==2){
f1=fopen("marche2.txt", "r+");
}
else{
printf("tapez 1 ou 2\n");
}

char c1;
while(c1!=EOF){
printf("%c", c1);
c1 = fgetc(f1);
}
return 0;
}

