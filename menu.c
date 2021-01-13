#include<stdio.h>
void menu()
{
int choice;
printf("\n1.Where to yield\n\n2.What to yield\n\n3.Pesticide\n\n4.Shops in your
location\n\n5.Log out\n\n6.Exit\n\n");
printf("Enter your choice : ");
scanf("%d",&choice);
menu1(choice);
}
void menu1(int choice)
{
 switch(choice)
 {
 case 1:
 {
 where_yield();
 menu();
 break;
 }
 case 2:
 {
 what_yield();
 menu();
 break;
 }
 case 3:
 {
 pesticide();
 menu();
 break;
 }
 case 4:
 {
 city();
 menu();
 break;
 }
 case 5:
 {
 main();
 break;
 }
 case 6:
 {
 return 0;
 break;
 }
 default:
 printf("Invalid Input!!!");
}
}