#include<stdio.h>
int main()
{
   char s1[50];
   fgets(s1,50,stdin);
   int i=0,j=0;
   while( s1[i] != '\ ' ){
       if((s1[i]>='A'&&s1[i]<='Z')||(s1[i]>='a'&&s1[i]<='z'))
       {
           j++;
       }
       i++;
   }
   printf("%d %d",i,j);

   return 0;
}
