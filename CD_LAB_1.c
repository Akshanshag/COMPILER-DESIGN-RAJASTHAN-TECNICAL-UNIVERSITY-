#include <stdio.h>
#include <string.h>
int main() {

 char keyword[32][10]={
 "auto","double","int","struct","break","else","long",
 "switch","case","enum","register","typedef","char",
 "extern","return","union","const","float","short",
 "unsigned","continue","for","signed","void","default",
 "goto","sizeof","voltile","do","if","static","while"
 } ;
 //char str[]="auto";
 char str[10];
 int flag=0,i;
 printf("Enter a keyword: ");
 scanf("%s",&str);
 for(i = 0; i<1; i++) {
 if(strcmp(str,keyword[i])==0) {
 flag=1;
  }
 if(flag==1)
 printf("%s is a keyword",str);
 else
 printf("%s is not a keyword",str);
 }
}

