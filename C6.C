
// Armstrong number or not
#include <stdio.h>
 #include<math.h>
 int main() {
 int orginalnum,num,remainder,sumofpower=0,digits=0;
 scanf("%d",&orginalnum);
 num=orginalnum;
 while(num!=0){
 digits++;
 num/=10;
 }
 num=orginalnum;
 while(num!=0){
 remainder=num%10;
 sumofpower+=pow(remainder,digits);
 num/=10;
 }
 if(orginalnum==sumofpower){
 printf("Armstrong Number\n");
 }
 else{
 printf("Not an Armstrong Number\n");
 }
 return 0;
 }
