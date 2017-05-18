#include<stdio.h>
void main(){
FILE *f;
char c[100];
f=fopen("text.txt","rt");
fscanf(f,"%[^EOF]",c);
printf("%s",c);
fclose(f);
}
