#include <stdio.h>

int main()

 {

      int number, rev = 0, remainder;

        printf("Please Give us a Value to Reverse : ");
        scanf("%d", &number);

      while (number != 0)

        {
            remainder = number % 10;
            printf("%d" , remainder);

            rev = rev * 10 + remainder;
            number /= 10;
        }

      iprintf("The Reversed Value is  = %d", rev);

      return 0;
}
