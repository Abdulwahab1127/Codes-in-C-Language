#include<stdio.h>
int main(){
    int m,userNum2, flag=0;

           printf("Enter Number to Check For Prime : ");
            scanf("%d" , &userNum2);
            m=userNum2/2;

            for(int i=2;i<=m;i++)
            {
                if(userNum2%i==0)
                {
                    printf("\nThe Given Number is Not Prime Number");
                    flag=1;
                    break;
                }

            }
            if(flag==0)
            {
                printf("\nThe Given Number is a Prime Number");
            }

            return 0;
}
