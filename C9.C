// Reverse of a given number
 #include <stdio.h>
 #include <string.h>
 int main() {
 char num[100];
 fgets(num,sizeof(num),stdin);
 int len=strlen(num);
 if(num[len-1]=='\n'){
 num[len-1]='\0';
 len--;
 }
 for(int i=len-1;i>=0;i--){
 printf("%c",num[i]);
 }
 printf("\n");
 return 0;
 }
