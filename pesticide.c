#include<stdio.h>
#include<string.h>
FILE *fpc;
void get_price_list(char pest[]);
int pesticide(){
 int ch;
 char pesttype[20];
 char pest_cont[20];
 do{
 printf("\nPESTICE PRICE LIST");

printf("\n\t\t\t\t1.Disinfectants\n\t\t\t\t2.Insecticides\n\t\t\t\t3.Fungicides\n\t\t\t\t4.Herbicides\n
\t\t\t\t5.Biopesticides\n\n");
 printf("\nChoose your pesticide type:");
 scanf("%d",&ch);
 switch (ch)
 {
 case 1:
 stpcpy(pesttype,"disinfectants");
 get_price_list(pesttype);
 break;
 case 2:
 stpcpy(pesttype,"insecticides");
 get_price_list(pesttype);
 break;
 case 3:
 stpcpy(pesttype,"fungicides");
 get_price_list(pesttype);
 break;
 case 4:
 stpcpy(pesttype,"herbicides");
 get_price_list(pesttype);
 break;
 case 5:
 stpcpy(pesttype,"biopesticides");
 get_price_list(pesttype);
 break;
 default:
 break;
 }
 printf("Press yes to continue or any key to exit\n");
 scanf("%s",pest_cont);
 }while(strcmp(pest_cont,"yes")==0);
 return 0;
}
void get_price_list(char pest[]){
 char buff[200];
printf("\nPesticide Name\t\t\tPrice(in INR)\n");
fpc=fopen(strcat(pest,".csv"),"r");
fscanf(fpc,"%[^\0]",buff);
char *p;
p=buff;
while (*p != '\0')
{
 if (*p == ',')
 {
 p++;
 printf("%c",*p);
 }
 else {
 printf("%c",*p);
 p++;
 }
}
printf("\n");
}