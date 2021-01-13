#include<stdio.h>
#include<string.h>
#include<string.h>
#include "menu.c"
#include "what_yield.c"
#include "where_yield.c"
#include "pesticide.c"
#include "city.c"
void login();
void signup();
FILE *fpr;
int count=1;
int main()
{
 int ch;
 printf("\n(-_-_-_-_-_- Agri-Tech _-_-_-_-_-_-)");
 printf("\n\t\t\t\t1.Already a member? Sign In...\n\t\t\t\t2.Create new account");
 printf("\nChoose the option : ");
 scanf("%d",&ch);
 switch(ch)
 {
 case 1:
 {
 login();
 if(count<=3)
 main();
 else
 printf("you exceeded 3 attempts!!!");
 break;
 }
 case 2:
 signup();
 break;
 default :
 printf("\nInvalid Option !!");
 break;
 }
 return 0;
}
void login()
{
19
 char user[200],pass[200],file_user[200],file_pass[200],comp_buff[200],*p;
 printf("\nEnter user name:");
 scanf("%s",user);
 fpr = fopen("admin.txt","r");
 fscanf(fpr,"%[^\n]",comp_buff);
 p=comp_buff;
 int i=0,success=0,j=0;
 while (*p != '\0')
 {
 if(*p != ':'){
 file_user[i]= *p;
 i++;
 p++;
 }
 else
 {
 file_user[i]='\0';
 p++;
 if(strcmp(user,file_user)==0)
 {
 printf("\nUser name correct");
 printf("\nEnter password:");
 scanf("%s",pass);
 while (*p!=';')
 {
 file_pass[j]= *p-3;
 j++;
 p++;
 }
 file_pass[j]='\0';
 if (strcmp(pass,file_pass)==0)
 {
 printf("\nLogin success full");
 success=1;
 break;
 }
 else
 {
 printf("\nInvalid credentials...\n");
 count=count+1;
 break;
 }
 }
 else
 {
 while (*p != ';')
 {
 p++;
 }
 p++;
 i=0;
 }
 }
 }
 if (success == 1)
 {
 menu();
 }
 else
 {
 printf("\nInvalid credentials...\n");
 count=count+1;
 }
}
void signup(){
 fpr = fopen("admin.txt","r");
 FILE *fp2;
 fp2= fopen("admin.txt","a");
 char user2[200],file_user2[200],pass2[200],*p2,whole[200];
 int i=0,j=0,exists=0;
 printf("\nEnter your username:");
 scanf("%s",user2);
 fscanf(fpr,"%[^\n]",whole);
 p2=whole;
 while (*p2 != '\0')
 {
 if(*p2 != ':')
 {
 file_user2[i] = *p2;
 i++;
 p2++;
 }
 else
 {
 file_user2[i]='\0';
 p2++;
 if (strcmp(file_user2,user2)==0)
 {
 exists=1;
 break;
 }
 else
 {
 while (*p2 != ';')
 {
 p2++;
 }
 p2++;
 i=0;
 }
 }
 }
 if (exists == 0)
 {
 printf("\nEnter password:");
 scanf("%s",pass2);
 int i=0;
 char encrypted[20],*z;
 z=pass2;
 while (*z != '\0')
 {
 encrypted[i]= *z+3;
 z++;
 i++;
 }
 encrypted[i]='\0';
 fprintf(fp2,"%s:%s;",user2,encrypted);
 printf("\nUser created successfully!\n");
 menu();
 }
 else
 {
 printf("\nSorry User name already exists\n");
 main();
 }
}