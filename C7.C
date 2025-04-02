
//Electricity Bill Calculation
#include <stdio.h>
 int main() {
 unsigned int id,units;
 char name[50];
 float totalbill;
 scanf("%u",&id);
 scanf("%s",name);
 scanf("%u",&units);
 printf("Customer ID: %u\n",id);
 printf("Customer Name: %s\n",name);
 printf("Units Consumed: %u\n",units);
 if(units>0 && units<200){
 totalbill=units*1.20;
 }
 else if(units>=200 && units<400){
 totalbill=(199*1.20)+((units-199)*1.50);
 }
 else if(units>=400 && units<600){
 totalbill=(199*1.20)+(200*1.50)+((units-399)*1.80);
 }
 else if(units>=600){
 totalbill=(199*1.20)+(200*1.50)+(200*1.80)+((units-599)*2.00);
 }
 if(totalbill>400){
 totalbill+=totalbill*0.15;
 }
 else if(totalbill<100){
 totalbill=100;
 }
 printf("Total Amount Payable: ₹%.2f\n",totalbill);
 return 0;
 }
