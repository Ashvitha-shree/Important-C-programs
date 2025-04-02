// Addition, subtraction,multiplication, division, modulus and square of a number.
 #include <stdio.h>
 int main() {
 int operation;
 float num1, num2 ,result;
 scanf("%d", &operation);
 switch(operation){
 case 1:
 printf("");
 scanf("%f %f", &num1, &num2);
 result = num1 + num2;
 printf(" %.2f\n", result);
 break;
 case 2:
 printf("");
 scanf("%f %f", &num1, &num2);
 result = num1 - num2;
 printf("%.2f\n", result);
 break;
 case 3:
 printf("");
 scanf("%f %f", &num1, &num2);
 result = num1 * num2;
 printf("%.2f\n", result);
 break;
 case 4:
 printf("");
 scanf("%f %f", &num1, &num2);
 if(num2==0){
 printf("Error: Division by zero!\n");
 }
 else{
 result = num1 / num2;
 printf(" %.2f\n", result);
 }
 break;
 case 5:
 printf("");
 scanf("%f %f", &num1, &num2);
 if(num2==0){
 printf("Error: Division by zero!\n");
 }else{
 result= (int)num1 % (int)num2;
 printf(" %.2f\n", result);
 }
 break;
 case 6:
 printf("");
 scanf("%f", &num1);
 result = num1 * num1;
 printf(" %.2f\n", result);
 break;
 default :
 printf("Invalid operation!\n");
 }
 return 0;
 }
