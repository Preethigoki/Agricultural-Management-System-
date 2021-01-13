#include<stdio.h>
#include<string.h>
#include<unistd.h>
FILE *fp;
char city_buff[100];
int display_list(char file[]);
char city_cont[20];
int city(){
 int choice;
 char city_name[20];
 do{
 printf("Find agri-shops in your city:");
 printf("\n\t\t\t1.Coimbatore\n\t\t\t2.Chennai\n\t\t\t3.Madurai\n\t\t\t4.Bangalore");
 printf("\nChoose Your City: ");
 scanf("%d",&choice);
 switch (choice)
 {
 case 1:
 strcpy(city_name,"coimbatore.txt");
 display_list(city_name);
 break;
 case 2:
 strcpy(city_name,"chennai.txt");
 display_list(city_name);
 break;
 case 3:
 strcpy(city_name,"madurai.txt");
 display_list(city_name);
 break;
 case 4:
 strcpy(city_name,"bangalore.txt");
 display_list(city_name);
 break;
 default:printf("\nNah!Invalid Choice..\n");
 }
 printf("Press yes to continue or any key to exit\n");
 scanf("%s",city_cont);
 }while(strcmp(city_cont,"yes")==0);
 return 0;
}
int display_list(char file[]){
 if (access(file,F_OK)!=-1)
 {
 fp=fopen(file,"r");
 fscanf(fp,"%[^\0]",city_buff);
 printf("%s\n",city_buff);
 }
 else
 {
 printf("Sorry, couldn't find shop list in the selected city\n");
 }
 return 0;
}