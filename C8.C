//Find a element using Linear Search Techniques
 #include <stdio.h>
 int main() {
 int size,target,index=-1;
 scanf("%d",&size);
 int array[size];
 for(int i=0;i<size;i++){
 scanf("%d ",&array[i]);
 }
 scanf("%d",&target);
 for(int i=0;i<size;i++){
 if(array[i]==target){
 index=i;
 break;
 }
 }
 printf("%d",index);
 return 0;
 }
