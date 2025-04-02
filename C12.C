
//Average of Array Elements (Using Pointers

 #include <stdio.h>
 int main() {
 int size,sum=0;
 scanf("%d",&size);
 int arr[size];
 int *pr = arr;
 for (int i=0;i<size;i++){
 scanf("%d ",pr+i);
 }
 for(int i=0;i<size;i++){
 sum+=*(pr+i);
 }
 float avg= (float)sum/ size ;
 printf("Average: %.2f",avg);
 return 0;
 }
