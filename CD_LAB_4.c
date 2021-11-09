#include <stdio.h>
#include <string.h>
#define MAX_FILE_NAME 100 
int main()
{
 FILE* fp; 
 int count = 0, al=0, i, flag; 
 char filename[MAX_FILE_NAME], alph[50], freq[50]; 
 char c, cf; 
 
 fp = fopen("CD_LAB_4.txt", "r"); 
 if (fp == NULL) { 
 printf("Could not open file %s", filename); 
 return 0; } 
for (c = getc(fp); c != EOF; c = getc(fp)) { 
flag=0;
count=0;
for(i=0;i<=al;i++){
for(i=0;i<=al;i++){
if(alph[i]==c) flag=1;
}
if(flag==0){
fseek(fp, 0, SEEK_SET);
for (cf = getc(fp); cf != EOF; cf = getc(fp)) { 
if(c==cf)
count++;
}
alph[al]=c;
freq[al]=count;
al++;
fseek(fp, 0, SEEK_SET);
}
 } 
 fclose(fp);
for(i=0;i<al;i++)
 printf("Characters %c has appeared %d times\n ", alph[i], freq[i]); 
 
 return 0;
}
}