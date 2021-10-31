#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("enter the number of prime numbers you want:");
    scanf("%d",&n);
    int sum = 0;


    int num=2,i,t = 0;
    while(t<n){
            i =1;
    while(1<=i && i<=num){

            if (num%i == 0){
                sum = sum +1;


                //printf("bum");
            }

      i++;
    }
if(sum==2){
    printf("%d\n",num);
    t++;
}
num++;
sum = 0;

}
}
