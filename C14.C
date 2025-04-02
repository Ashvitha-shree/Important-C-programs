// Student Details (Using Structures)
 #include <stdio.h>
 struct student{
    unsigned int rollno;
    char name[30];
    float m1,m2,m3;
    };
 int main() {

    struct student stud;
        scanf("%u\n",&stud.rollno);
        scanf(" %[^\n]\n",&stud.name);
        scanf(" %f\n",&stud.m1);
        scanf(" %f\n",&stud.m2);
        scanf(" %f",&stud.m3);
         printf("Roll No: %d\n",stud.rollno);
 printf("Name: %s\n",stud.name);
 printf("Marks in Subject 1: %.1f\n",stud.m1);
 printf("Marks in Subject 2: %.1f\n",stud.m2);
 printf("Marks in Subject 3: %.1f\n",stud.m3);
 return 0;
 }
