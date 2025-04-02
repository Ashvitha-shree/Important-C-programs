
// To sort an Array using Selection Sort Techniques
#include <stdio.h>
 int main() {
 unsigned int size;
 scanf("%u",&size);
 if (size<1000){
 int arr[size];
 for (int i=0;i<size;i++){
 scanf("%d",&arr[i]);
 }
 for(int i=0;i<size-1;i++){
 int min=i;
 for(int j=i+1;j<size;j++){
 if(arr[j]<arr[min]){
 min=j;
 }
 }
 int temp=arr[min];
 arr[min]=arr[i];
 arr[i]=temp;
 }
 for(int i=0;i<size;i++){
 printf("%d ",arr[i]);
 }}
 return 0;
 }
