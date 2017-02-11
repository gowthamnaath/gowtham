#include<stdio.h>
#include<string.h>
main(){
 char string[100];
 int i,j,k,ans=0;
 printf("Enter the string \n");
 scanf("%s",string);
 for(i=0;i<strlen(string);i++){
   if((int)string[i]>47&&(int)string[i]<58){
      for(j=48,k=0;j<=57;j++){
        if((int)string[i]==j){
         ans=(ans*10)+k;
        }
        k++;
      }

   }else{
      printf("not a number");
      return;
      }
   }
   printf("\n%d",ans);
}
