#include<stdio.h>
#include<string.h>
FILE *p;
int what_yield()
{
 char ch,s[20];
int choice,type,soil;
p=fopen("mod1report.txt","a+");
fprintf(p,"Generated report\n\n");
do {
printf("\nEnter the type of soil\n1.Red soil\n2.Black soil\n3.Alluvial soil\n4.Laterite soil\n");
scanf("%d",&type);
printf("\nPercentage of minerals in your soil(in percentage)");
printf("\nMagnesium\t\tPotash\t\tPhosphorus");
 switch(type)
 {
 case 1: printf("\n0.7\t\t\t0.24\t\t0.09\n");
printf("\nSome Best crops for your soil:\n 1.Green Gram\n 2.Ground nut\n 3.Castor seed\n");
scanf("%d",&soil);
 switch(soil) {
 case 1: {
 printf("Duration: 60-65 days\n\n Temperature:28-30 C\n");
 fprintf(p,"Red soil - Green gram\nDuration: 60-65 days\t\t
Temperature:28-30 C\n\n");
 break;
 }
 case 2: {
 printf("Duration: 60-80 days\n\n Temperature:30 C\n");
 fprintf(p,"Red soil - Ground nut\nDuration: 60-80 days\t\t
Temperature:30 C\n\n");
 break;
 }
 case 3: {
printf("\t Duration: 7-8 days\n\n Temperature:20-26 C\n");
 fprintf(p,"Red soil - Castor seed\nDuration: 7 -8 days\t\t
Temperature:20 - 26 C\n\n");
 break;
 default:
 printf("\nInvalid input");
 fprintf(p,"\nInvalid input\n\n");
 }
 }
 break;
 case 2: printf("\n6-8\t\t\t0.5(per cent)\t0.5(per cent)\n");
printf("\nSome Best crops for your soil:\n 1.Cotton\n 2.Chilly\n 3.Maize\n");
scanf("%d",&soil);
 switch(soil) {
 case 1: {
 printf("Duration: 135-140 days\n\n Temperature:15.5 C\n");
 fprintf(p,"Black soil - Cotton\nDuration: 135-140 days\t\t
Temperature:15.5 C\n\n");
 break;
 }
 case 2:
 printf("Duration: 150-180 days\n\n Temperature: 30-40 C\n");
 fprintf(p,"Black soil - Chilly\nDuration: 150-180 days\t\t
Temperature:30 - 40 C\n\n");
 break;
 case 3: {
 printf("Duration: 7-8 days\n\n Temperature:18-20 C\n");
 fprintf(p,"Black soil - Maize\nDuration: 7 - 8 days\t\t Temperature: 18
-20 C\n\n");
 break;
 default:
 printf("\nInvalid input");
 fprintf(p,"\nInvalid input\n\n");
 }
 }
 break;
 case 3: printf("\n\t\t\t\t\t\n");
printf("\nSome Best crops for your soil:\n 1.Wheat\n 2.Sugarcane\n 3.Rice\n");
scanf("%d",&soil);
 switch(soil) {
 case 1: {
 printf("Duration: 60-70 days\n\n Temperature: 15.5 C\n");
 fprintf(p,"Alluvial soil - Wheat\nDuration: 60-70 days\t\t
Temperature:15.5 C\n\n");
 break;
 }
 case 2: {
 printf("Duration: 90 days\n\n Temperature: 20 C\n");
 fprintf(p,"Alluvial soil - Sugarcane\nDuration: 90 days\t\t
Temperature:20 C\n\n");
 break;
 }
 case 3: {
 printf("Duration: 35-40 days\n\n Temperature: 40-42C\n");
 fprintf(p,"Alluvial soil - Rice\nDuration: 35-40 days\t\t
Temperature:40-42 C\n\n");
 break;
 default:
 printf("\nInvalid input");
 fprintf(p,"\nInvalid input\n\n");
 }
 }
 break;
 case 4:
 printf("\n\t\t\t\t\t\n");
 printf("\nSome Best crops for your soil:\n 1.Coconut\n 2.Rubber\n
3.Coffee\n");
 scanf("%d",&soil);
 switch(soil) {
 case 1:
 printf("Duration: 30-40 days\n\n Temperature: 35-36 C\n");
 fprintf(p,"Laterite soil - Coconut\nDuration: 30-40 days\t\t
Temperature:35-36 C\n\n");
 break;
 case 2:
 printf("Duration: 80-90 days\n\n Temperature: 25-30 C\n");
 fprintf(p,"Alluvial soil - Wheat\nDuration: 80-90 days\t\t
Temperature:25-30 C\n\n");
 break;
 case 3:
 printf("Duration: 30-35 days\n\n Temperature: 20-25C\n");
 fprintf(p,"Alluvial soil - Wheat\nDuration: 30-35 days\t\t
Temperature:20-25 C\n\n");
 break;
 default:
 printf("\nInvalid input");
 fprintf(p,"\nInvalid input\n\n");
 }
 break;
 default:
 printf("\nInvalid Input\n");
 fprintf(p,"Invalid Input\n\n");
 }
 printf("Press yes to continue or any key to exit\n");
 scanf("%s",s);
 }while(strcmp(s,"yes")==0);
}