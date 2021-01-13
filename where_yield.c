#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void food();
void cash();
void plant();
FILE *fp;
void where_yield()
{
 fp=fopen("report.txt","a+");
 fprintf(fp,"Generated report\n\n");
 int crop_no;
 char ch,cont[10];
 do{
printf("1-Food Crop\n2-Cash Crop\n3-Plant Crop\n");
printf("Enter the type of crop no\n");
scanf("%d",&crop_no);
 switch(crop_no)
 {
 case 1:
 food();
 break;
 case 2:
 cash();
 break;
 case 3:
 plant();
 break;
 default:
printf("Invalid type\n");
 }
 printf("Enter 'yes' to continue , Press any key to exit\n");
 scanf("%s",cont);
 }while(strcmp(cont,"yes")==0);
}
 void food()
 {
 int food_crop;
 printf("1-Rice\n2-Banana\n3-Potato\n4-Mango\n");
 printf("Enter the type of foot crop\n");
 scanf("%d",&food_crop);
 switch(food_crop)
 {
 case 1 :
 {
 printf("you have selected the rice\n");
 printf("Type of soil-Alluvial soil\n");
 printf("Type of irrigation-flood irrigation\n");
 printf("Type of pesticides-Carbaryl\n");
 fprintf(fp,"Food crop - Rice\n you have selected the rice\nType of soil-Alluvial
soil\nType of irrigation-flood irrigation\nType of pesticides-Carbaryl\n\n");
 break;
 }
 case 2 :
 {
printf("you have selected the banana\n");
printf("Type of soil-Well-drained soil\n");
printf("Type of irrigation-Ord river irrigation\n");
printf("Type of pesticides-Chlorpyrifos \n");
fprintf(fp,"Food crop - banana\n you have selected the banana\nType of soil-Well drained
soil\nType of irrigation-Ord river irrigation\nType of pesticides-Chloropyrifos\n\n");
 break;
 }
 case 3 :
 {
printf("you have selected the potato\n");
printf("Type of soil-Saline and Alkaline \n");
printf("Type of irrigation-Drip irrigation\n");
printf("Type of pesticides-Chlorpropham\n");
fprintf(fp,"Food crop - potato\n you have selected the potato\nType of soil-Saline and
alkaline\nType of irrigation-Drip irrigation\nType of pesticides-Chloropropharm\n\n");
 break;
 }
 case 4 :
 {
printf("you have selected the Mango\n");
printf("Type of soil-Alluvial\n");
printf("Type of irrigation-Flood irrigation\n");
printf("Type of pesticides-Broad spectrum\n");
fprintf(fp,"Food crop - Mango\n you have selected the Mango\nType of soil-Alluvial
soil\nType of irrigation-flood irrigation\nType of pesticides-Broad spectrum\n\n");
 break;
 }
 default: {
printf("Invalid crop\n");
fprintf(fp,"Invalid crop\n\n");
 }
 }
 }
 void cash()
 {
int cost_crop;
printf("1-Cotton\n2-Timbers\n3-Bamboo\n4-Wool");
printf("Enter the type of cost crop\n");
scanf("%d",&cost_crop);
 switch(cost_crop)
 {
 case 1 :
 {
printf("you have selected the Cotton\n");
printf("Type of soil-Loamy soil\n");
printf("Type of irrigation-Sprinkler irrigation\n");
printf("Type of pesticides-Aldicarb\n");
fprintf(fp,"Cash crop - Cotton\n you have selected the Cotton\nType of soil-Loamy
soil\nType of irrigation-Sprinkler irrigation\nType of pesticides- Aldicarb\n\n");
 break;
 }
 case 2 :
 {
printf("you have selected the Timbers\n");
printf("Type of soil-Drier upland soil\n");
printf("Type of irrigation-Gravity irrigation\n");
printf("Type of pesticides-Propiconazole\n");
fprintf(fp,"Cash crop - Timbers\n you have selected the Timbers\nType of soil-Drier upland
soil\nType of irrigation-Gravity irrigation\nType of pesticides- Propicanazole\n\n");
 break;
 }
 case 3 :
 {
printf("you have selected the Bamboo\n");
printf("Type of soil-Well-drained soil\n");
printf("Type of irrigation-Drip irrigation\n");
printf("Type of pesticides-Hexachlorocyclohexane\n");
fprintf(fp,"Cash crop - Bamboo\n you have selected the Bamboo\nType of soil-Well drained
soil\nType of irrigation-Drip irrigation\nType of pesticides- Hexachlorocyclohexane\n\n");
 break;
 }
 case 4 :
 {
printf("you have selected the Wool\n");
printf("Type of soil-Dry soil\n");
printf("Type of irrigation-Sprinkler irrigation\n");
printf("Type of pesticides-Permethrin\n");
fprintf(fp,"Cash crop - Wool\n you have selected the Wool\nType of soil- Dry soil\nType of
irrigation-Sprinkler irrigation\nType of pesticides- Permethrin\n\n");
 break;
 }
 default: {
printf("Invalid crop\n");
fprintf(fp,"Invalid crop\n\n");
 }
 }
 }
 void plant()
 {
int plant_crop;
printf("1-Sugarcane\n2-Soybeans\n3-Corn\n4-Oranges");
printf("Enter the type of plant crop\n");
scanf("%d",&plant_crop);
 switch(plant_crop)
 {
 case 1 :
 {
printf("you have selected the Sugarcane\n");
printf("Type of soil-Well-drained soil\n");
printf("Type of irrigation-Drip irrigation\n");
printf("Type of pesticides-Dimethoate\n");
fprintf(fp,"Plant crop - Sugarcane\n you have selected the sugarcane\nType of soil-Well
drained soil\nType of irrigation-Drip irrigation\nType of pesticides- Dimethoate\n\n");
 break;
 }
 case 2 :
 {
printf("you have selected the Soyabeans\n");
printf("Type of soil-Well-drained soil \n");
printf("Type of irrigation-Prebloom irrigation\n");
printf("Type of pesticides-Glyphosate potassium\n");
fprintf(fp,"Plant crop - Soyabeans\n you have selected the Soyabeans\nType of soil-Well
drained soil\nType of irrigation-Prebloom irrigation\nType of pesticides- Glyphosphate\n\n");
 break;
 }
 case 3 :
 {
printf("you have selected the Corn\n");
printf("Type of soil-Well-drained soil\n");
printf("Type of irrigation-Drip irrigation \n");
printf("Type of pesticides-Fludioxonil\n");
fprintf(fp,"Plant crop - Corn\n you have selected the Corn\nType of soil-Well drained
soil\nType of irrigation-Drip irrigation\nType of pesticides- Fludioxonil\n\n");
 break;
 }
 case 4 :
 {
printf("you have selected the Orange\n");
printf("Type of soil-Well--drained\n");
printf("Type of irrigation-Drip irrigation\n");
printf("Type of pesticides-Dicloran\n");
fprintf(fp,"Plant crop - Orange\n you have selected the Orange\nType of soil-Well drained
soil\nType of irrigation-Drip irrigation\nType of pesticides- Dicloran\n\n");
 break;
 }
 default: {
 printf("Invalid crop\n");
 fprintf(fp,"Invalid crop\n\n");
 }
 }}