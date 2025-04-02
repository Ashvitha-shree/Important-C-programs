//Display your personal details.
 #include <stdio.h>
 int main() {
 char name[40];
 scanf("%[^\n]s",name);
 unsigned int age;
 scanf(" %u",&age);
 char address[40];
scanf(" %[^\n]s",address);
 char ph[40];
 scanf(" %[^\n]s",ph);
 printf("\nName: %s\n",name);
 printf("Age: %d\n",age);
 printf("Address: %s\n",address);
 printf("Phone Number: %s\n",ph);
 return 0;
 }
