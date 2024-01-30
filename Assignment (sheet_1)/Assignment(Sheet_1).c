/*
************************************************************** 
* Assignment(Sheet_1)   	                                 *
* created by  : Ahmed Adel Sakr                   *
**************************************************************
*/
//(1)
//take 2 number from user and sum numbers between them
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int first, second,max,min, i,sum ;
    while(1)
    {
        sum = 0;
        printf("Enter First  Number : ");
        scanf("%d",&first);
        printf("Enter Second Number : ");
        scanf("%d",&second);

        if (first < second)
        {
            min = first ;
            max = second ;
        }
        else
        {
            min = second ;
            max = first ;
        }

        for (i=(min+1) ; i < max ; i++ )
        {
            sum = sum + i ;
        }
        printf("the Summation = %d\n",sum);
    }
    return 0;
}
/*******************************************************************************************/
//(2)
//take two number form user and get the max number and the min number 
#include <stdio.h>
#include <stdlib.h>
int main()
{
    unsigned int total, num,i,max=0,min=0;
    while(1)
    {
        printf("Enter Total of Numbers:");
        scanf("%d",&total);
        for( i= 1 ; i<=total ; i++ )
        {
            printf("Enter %d Number :",i);
            scanf("%d",&num);
            if(min == 0)
            {
                min=num;
            }
            if(max < num)
            {
                max = num ;
            }
            else if(min > num)
            {
                min = num ;
            }
        }
        printf("The max num : %d\nThe min num : %d\n",max,min);
    }
     return 0;
}
/*******************************************************************************************/
//(3)
//take 2 number from user and get sum of them 
#include <stdio.h>
#include <stdlib.h>
int main()
{

    unsigned int total, num,i,sum ;
    while(1)
    {
        printf("Enter Total of Numbers:");
        scanf("%d",&total);
        sum = 0 ;
        for( i= 1 ; i<=total ; i++ )
        {
            printf("Enter %d Number :",i);
            scanf("%d",&num);
            sum = sum + num ;
        }
        printf("The Summation : %d\n",sum);
    }
    return 0;
}
/*******************************************************************************************/
//(4)
//take 2 number from user and multiply them without (*) operator
#include <stdio.h>
#include <stdlib.h>
int main()
{
int first, second, i, mul;
    while(1)
    {
        mul=0 ;
        printf("Enter First  Number : ");
        scanf("%d",&first);
        printf("Enter Second Number : ");
        scanf("%d",&second);
        for (i=0 ; i < second ; i++ )
        {
            mul= mul + first ;
        }
        printf("the Multiplcation = %d\n",mul);
    }
    return 0;
}
/*******************************************************************************************/
//(5)
//take 2 number from user and calculate the reminder   of them without (%) operator
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int first, second, i ;
    while(1)
    {
        printf("Enter First  Number : ");
        scanf("%d",&first);
        printf("Enter Second Number : ");
        scanf("%d",&second);
        if (first >= second)
        {
            if( second > 0)
            {
                for (i=0 ; first >= second ; i++ )
                {
                    first = first - second ;
                }
                printf("Reminder : %d\n",first);
            }
            else
            {
                printf("please Enter number more than 0 :)\n");
            }
        }
        else
        {
            printf("Reminder : %d\n",second);
        }
    }
    return 0;
}
/*******************************************************************************************/
//(6)
//take 2 number from user  number and power of number 	them calculate the power
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int number, power,power_val,i ;
    while(1)
    {
        printf("Enter The  Number : ");
        scanf("%d",&number);
        printf("Enter power of Number : ");
        scanf("%d",&power);
        power_val =  number  ;
        if(power > 0 )
        {
            if(number > 1)
            {
                for (i=1 ; i < power ; i++ )
                {
                    power_val = power_val * number ;
                }
                printf("The number after power  : %d\n",power_val);
            }
            else
            {
                printf("The number after power  : 1\n");
            }
        }
        else if(number == 0 )
        {
            if (power == 0)
            {
                printf("Math Error :(\n");
            }
            else
            {
                printf("The number after power  : 0\n");
            }
        }
        else
        {
            printf("The number after power  : 1\n");
        }
    }
    return 0;
}
/*******************************************************************************************/
//(7)
//take number from user and calculate it's factorial
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int number,i,factorial ;
    while(1)
    {
        printf("Enter The positive Number : ");
        scanf("%d",&number);
        factorial = number ;
        if (number == 1)
        {
            printf("Factorial of %d --> 1\n",factorial,number);
        }
        else if(number >= 0 )
        {
            for (i=number-1 ; i > 0 ; i-- )
            {
                number = number * i;
            }
            printf("Factorial of %d --> %d\n",factorial,number);
        }
        else
        {
            printf("Invalid Number :(\n");
        }
    }

    return 0;
}
/*******************************************************************************************/
// Prime number
//(8)
//take number from user and check prime number or not
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num1,num2,max,min,i,num,sign=0,flag=0;
    while(1)
    {
        scanf("%d",&num1);
        flag=0;
        if(num1==1||num1==0)
        {
            printf("%d  not prime\n",num1);
        }
        else
        {
			//e7na hna 3amleen al num1/2 34an mafy4 rakam by2bal al 2sma akber mne nos al rakam 
            for(i=2; i<=num1/2; i=i+1)
            {
                if(num1%i==0)
                {
                    printf("%d  not prime\n",num1);
                    flag=1;
                    break;
                }
            }

            if(flag==0)
                printf("PRIME\n");
        }
    }

    return 0;
}
//another solution Prime
/*************************************************************/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int number,i,Reminder,counter ;
    while(1)
    {
        printf("Enter The positive Number : ");
        scanf("%d",&number);
        counter = 0 ;
        if (number == 1)
        {
            printf("%d is Not a Prim number\n",number);
        }
        else if(number >= 0 )
        {
            for (i = 1 ; i < number ; i++ )
            {
                Reminder = number % i ;
                if (Reminder == 0 )
                {
                    counter ++ ;
                }
            }
            if(counter == 1)
            {
                printf("%d --> is a Prim number\n",number);
            }
            else
            {
                printf("%d --> Not a Prim number\n",number);
            }
        }
        else
        {
            printf(" %d --> Not a Prim number\n",number);
        }
    }

    return 0;
}
/*******************************************************************************************/
//(9)
//take number from user and check it is perfect square or not 
// el rakam perfect square 2w leeh gazr wala la2 
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int number,i,times,counter_1;
    while(1)
    {
        printf("Enter The positive Number : ");
        scanf("%d",&number);

        if(number > 0 )
        {
            counter_1 = 0 ;
            for (i = 1 ; times <= number ; i++ )
            {
                times = i * i ;
                if (times == number )
                {
					printf("%d --> is a Perfect square number\n",number);
                    counter_1 ++ ;
                }
            }
            if (counter == 0)
            {
                printf("%d --> Not a Perfect square number\n",number);
            }
        }
        else
        {
            printf("%d --> Not a Perfect square number\n",number);
        }
    }
    return 0;
}
/*******************************************************************************************/
//(10)
// take number from user and check its base of 2 or not 
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int number,i,power_val,counter_1;
    while(1)
    {
        printf("Enter The positive Number : ");
        scanf("%d",&number);

        if(number > 0 )
        {
            if (number == 1)
            {
                printf("%d --> is  Base 2 number\n",number);
            }
            else
            {
                counter_1 = 0 ;
                power_val = 1 ;
                for (i = 1 ; i <= number ; i++ )
                {
                    power_val = power_val * 2 ;
                    if (power_val == number )
                    {
                        counter_1 ++ ;
                    }
                }
                if( counter_1 == 1  )
                {
                    printf("%d --> is  Base 2 number\n",number);
                }
                else
                {
                    printf("%d --> Not Base 2 number\n",number);
                }
            }
        }
        else
        {
            printf("%d --> Not Base 2 number\n",number);
        }
    }
    return 0;
}
/*******************************************************************************************/
//(11)
// sum digits in a decimal number 123 --> 1+2+3 = 6 
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int rem, num,sum=0;

    while(1)
    {
        printf("Enter the number : ");
        scanf("%d",&num);
        sum=0;
        while(num > 0)
        {
            rem=num%10;
            sum=sum+rem;
            num=num/10;
        }
        printf("sum : %d\n",sum);
    }
    return 0;
}
/*******************************************************************************************/
//(12)
/* write a program to take even numbers from user and
   print the sum of them after each entry if the user enters
   2 odd number the program print "bye" and stopped.
*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num1, num2,flage =1,sum;

    while (flage)
    {
        printf("Enter First  Even  Number  : ");
        scanf("%d",&num1);
        printf("Enter Second Even  Number  : ");
        scanf("%d",&num2);
        sum = 0 ;

        if((num1%2) != 0 && (num2%2)  != 0 )
        {
            printf("Bye\n");
            flage= 0 ;
        }
        else if ((num1%2) == 0 && (num2%2)  != 0)
        {
            while((num2 % 2) != 0)
            {
                printf("The  Second Number is Not Even Enter Even Number  : ");
                scanf("%d",&num2);
            }
        }
        else if ((num1%2) != 0 && (num2%2)  == 0)
        {
            while((num1 % 2) != 0)
            {
                printf("The  First   Number is Not Even Enter Even Number  : ");
                scanf("%d",&num1);
            }
        }
        if(flage == 1)
        {
            sum = num1 + num2 ;
            printf("The Summation = %d\n",sum);
        }
    }
    return 0;
}
/*******************************************************************************************/
//(13)
/*
You are designing a poster which prints out numbers
with a unique style applied to each of them. The styling is based on the number of closed paths or holes present in a giver number.
The number of holes that each of the digits from 0 to 9 have are equal to the number of closed paths in the digit. 
Their values are:
1, 2, 3, 5 and 7 = 0 holes.
0, 4, 6, and 9 = 1 hole.
8 = 2 holes.
Example if number 3824->3 has 0 holes,8 has 2 holes,4 has 1hole sum=0+2+1=3.
*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int rem, num,holes;

    while(1)
    {
        printf("Enter the Positive number : ");
        scanf("%d",&num);
        holes = 0 ;
        if(num > 0)
        {
            while(num > 0)
            {
                rem=num%10;
                num=num/10;
                if (rem == 0 || rem == 4 || rem == 6|| rem == 9)
                {
                    holes = holes + 1;
                }
                else if (rem == 8)
                {
                    holes = holes + 2;
                }
            }
            printf("sum of holes = %d\n",holes);
        }
        else if (num == 0 )
        {
            printf("sum of holes = 1\n");
        }
        else
        {
            printf("Invalid Number\n");
        }
    }
    return 0;
}






	































int num, remin, sum =0 ;

    while (1)
    {
        printf("Enter the num :  ");
        scanf("%d",&num);
        while(num > 0 )
        {
            remin = num % 10 ;
            sum = sum + remin ;
            num = num / 10 ;
        }
        printf("Sum = %d\n",sum);
        sum = 0 ;

    }