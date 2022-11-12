#include<stdio.h>
int main(){

    int num, sum=0;
    scanf("%d",&num);
    int n=1;
    while(n<=num){
        n = n%2 + n;
        sum+=n;
        n++;
    }
    printf("the sum is %d\n", sum);
    // char day;
    // scanf("%c", &day);
    // switch(day){
    //     case '1': printf("sonibar\n");
    //     case '2' : printf("robibar\n"); break;
    //     case '3' ... '9' : printf("sommmmnibar\n"); break;
    //     default : printf("what the dy\n");
    // }
//     int i=10, count=0;
//   do
//   {
//       i = i-2;
//       count++;
//   } while (i>0);
  
    
//     printf("  %d ", i);
//     printf("\n iteration %d \n", count);
    return 0;
}