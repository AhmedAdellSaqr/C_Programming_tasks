/*
************************************************************** 
* Assignment(Sheet_2)   	                                 *
* created by  : Ahmed Adel Sakr                              *
**************************************************************
*/
//1
//Read redius from user and cal the are and Circumference
#include <stdio.h>
#include <stdlib.h>
int main()
{
    float circum, area, pi = 3.14 ;
    int red ;
    while(1)
    {
        area =0 ; circum = 0 ;
        printf("Enter the Redius of Circle : ");
        scanf("%d",&red);
        area = pi * (red * red) ;
        circum = 2 * pi * red ;
        printf("The Area Of Circle = %.2f\n",area);
        printf("The Circumference of Circle = %.2f\n",circum);
    }
    return 0;
}
/*********************************************************************************************************/
//2
//check the number Even or Odd and scan character and if odd print character if captial ---> small and revers else print the character
#include <stdio.h>
#include <stdlib.h>
int main()
{
    char x , z ;
    int Number ;
    while(1)
    {
        printf("Enter the Number : ");
        scanf("%d",&Number);
        printf("Enter the Character : ");
        scanf(" %c",&x);
        if (Number %2 == 0)
        {
            printf("%c\n",x);

        }
        else
        {

            if(x >= 'A' && x <= 'Z')
            {
                z = x -'A'+'a' ;
                printf("%c ---> %c\n",x,z);
            }
            else
            {
                z= (x - 'a') + 'A';
                printf("%c ---> %c\n",x,z);
            }
        }
    }
    return 0;
}
/*********************************************************************************************************/
//3
//take number form the user and revers the number 1234 --> 4321
//Enhanced solution
int main()
{
    int rem,num,reversed ;

    while(1)
    {
        reverse=0 ;
        printf("Enter the number : ");
        scanf("%d",&num);
        num ;
        while(num > 0)
        {
            rem=num%10;
            num=num/10;
			reversed= (reversed * 10) + rem ;
        }
        printf("the reversed Number : %d\n",reversed);
    }
    return 0;
}
//First solution
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int rem,num,num2,reverse,counter=0;

    while(1)
    {
        reverse=0 ;
        printf("Enter the number : ");
        scanf("%d",&num);
        num2 = num ;
        while(num2 > 0)
        {
            rem=num2%10;
            num2=num2/10;
            counter ++ ;
        }
        while(num > 0)
        {
            rem=num%10;
            num=num/10;
            for(int i = 1 ; i<counter ; i++)
            {
                rem = rem * 10 ;
            }
            reverse = reverse + rem  ;
            counter -- ;
        }
        printf("the reversed Number : %d\n",reverse);
    }
    return 0;
}
/*********************************************************************************************************/
//4
//count number of 1's in 32 bit unsigned number 
#include <stdio.h>
#include <stdlib.h>
int main()
{
    unsigned num ,i,counter=0;

    while(1)
    {
        printf("Enter the number : ");
        scanf("%d",&num);
        counter=0 ;
        for (i=0 ; i<32 ; i++)
        {
            if ((num >> i )& 1 == 1  )
            {
                counter ++ ;
            }
        }
        printf("Number of 1's  : %d\n",counter);
    }
    return 0;
}
/*********************************************************************************************************/
//5
//print the binary representation of a number and not print zeros on left side
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int  num, i,flag ;
.3
    while(1)
    {
        printf("Enter the number : ");
        scanf("%d",&num);
        flag = 0 ;
        for (i=31 ; i >= 0 ; i-- )
        {
            if ((num >> i ) & 1 == 1  )
            {
                printf("1");
                flag = 1 ;
            }
            else if(flag == 1)
            {
                printf("0");
            }
        }
        printf("\n**********************\n");
    }
    return 0;
}
/*********************************************************************************************************/
//6
// revers bits in  number ex 149--> 10010101   t0   169-->10101001   , 5 --> 00000101 to   160 -->10100000
//Enhanced solution
#include <stdio.h>
#include <stdlib.h>
int main()
{
     unsigned char  num ,reversed;
     char i ;

    while(1)
    {
        printf("Enter the number : ");
        scanf("%d",&num);
		//printing the scaned number
        printf("%d --> ",num);
        for (i=7 ; i >= 0 ; i --)
        {
            if ((num >> i ) & 1 == 1  )
            {
                printf("1");
            }
            else
            {
                printf("0");
            }
        }
		//Reversing the Number
        reversed = 0 ;
        for (i= 0 ; i < 8  ; i++)
        {
            reversed = reversed << 1 ;
            reversed = reversed | (num & 1) ;
            num = num >> 1 ;
        }
		//Printing the reversed Number
        printf(" Return %d --> ",reversed);
        for (i=7 ; i >= 0 ; i --)
        {
            if ((reversed >> i ) & 1 == 1  )
            {
                printf("1");
            }
            else
            {
                printf("0");
            }
        }
        printf("\n**********************\n");
    }
    return 0;
}
//another solution  by functions (Enhanced)
#include <stdio.h>
#include <stdlib.h>
unsigned int Rev_Binary( unsigned int num )
{
    unsigned int n2 = 0, i , j = 31 ;
    for(i=0 ; i<32 ; i++)
    {
        if((num >> i)& 1)
        {
            n2 = n2 | (1 << (j));
        }
        j-- ;
    }
    return n2 ;
}
int main()
{
    unsigned int  num , reversed  ;
    int i ;
    while(1)
    {
        printf("Enter the number : ");
        scanf("%d",&num);
        printf("Number Before Reversed = %u\n",num);
        for (i=31 ; i >=0 ; i--)
        {
            if ((num >> i ) & 1 == 1  )
            {
                printf("1");
            }
            else
            {
                printf("0");
            }
        }
        printf("\n**********************\n");

        reversed = Rev_Binary(num) ;
        printf("Number after Reversed = %u\n",reversed);
        for (i=31 ; i >=0 ; i--)
        {
            if ((reversed >> i ) & 1 == 1  )
            {
                printf("1");
            }
            else
            {
                printf("0");
            }
        }
        printf("\n**********************\n");
    }
    return 0;
}
/*********************************************************************************************************/
//7
//sum from 1 --> 100 without using loop 
//
#include <stdio.h>
#include <stdlib.h>
int main()
{
    while(1)
    {
        int number, sum = 0 ;
        printf("Enter the number : ");
        scanf("%d",&number);
        sum = (number * (number+1)) / 2  ;
        printf("The Summation = %d\n",sum);
    }
    return 0;
}
//another solution
/**goto**/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int number = 1, sum = 0 ;
    without_loop:

    if (number <= 100)
    {
        sum = sum + number ;
        number ++ ;
        goto without_loop ;
    }
    printf("The Summation = %d",sum);
    return 0;
}
/*********************************************************************************************************/
//8	
//set bit   , clear bit  , toggle bit , read value 
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int  Number,bit,bit_value = 0,choose = 0  ;
    while(1)
    {
        printf("Choose one from below :\n1-Set Bit \n2-Clear Bit \n3-Toggle Bit \n4-Read Bit \nEnter Your choice : ");
        scanf("%d",&choose);
        printf("Enter number : ");
        scanf("%d",&Number);
        printf("Enter bit : ");
        scanf("%d",&bit);

        if(choose == 1)
        {
            // set
            Number = Number | (Number |( 1<< bit) ) ;
            printf("Number After Set  = %d \n",Number);
        }
        else if (choose == 2)
        {
            //Clear
            Number = Number & (Number ^ ( 1 << bit) ) ;
            printf("Number After Clear  = %d \n",Number);
        }
        else if (choose == 3)
        {
            //toggle
            Number = (Number ^ ( 1<< bit) ) ;
            printf("Number After Toggle  = %d \n",Number);
        }
        else if (choose == 4)
        {
            //Read Bit
            bit_value = ((Number >> bit) & 1 );
            printf("Bit Number %d its Value = %d \n",bit,bit_value);
        }
        else
        {
            printf("Wrong choice Try Again :(\n");
        }
    }
    return 0;
}
/*********************************************************************************************************/
//9
/*  write c program to take from user number of line and Print one of this shapes
            1- ***     2-*    3-  *   4- * * 
               **        **      ***      * 
               *         ***    *****    * *
*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    while(1)
    {
        int Line,i,j,k,itera, counter = 1, choose ;

        printf("For 1- ***     2-*    3-   *   4- * * \n");
        printf("       **        **       ***      *  \n");
        printf("       *         ***     *****    * * \n");
        printf("Enter Your Choice : ");
        scanf("%d",&choose);
        if(choose == 4)
        {
            printf("Enter Odd Number :)\n");
        }
        printf("Enter number of Lines :");
        scanf("%d",&Line);
        itera = Line ;
        if(choose == 1 )
        {
            for(j =0 ; j <= itera ; j++)
            {
                for(i = 0 ; i < Line ; i++)
                {
                    printf("*");
                }
                printf("\n");
                Line -- ;
            }
        }
        else if (choose == 2)
        {
            for(j =1 ; j <= itera ; j++)
            {
                for(i = (Line - j); i <Line ; i++)
                {
                    printf("*");
                }
                printf("\n");
            }
        }
        else if (choose == 3)
        {
            for(j = 0 ; j < itera ; j++)
            {
                for (i = 0 ; i < Line-1 ; i++)
                {
                    printf(" ");

                }
                for(k=1; k <= counter ; k++)
                {
                    printf("*");
                }
                printf("\n");
                Line -- ;
                counter= counter + 2 ;
            }
        }
        else if (choose == 4)
        {
            for (j= 1 ; j<= itera ; j++)
            {
                for (i = 1 ; i<=itera ; i ++)
                {
                    if (j == i || i == Line)
                    {
                        /*if( (i-1) == j  && j == counter2)
                        {
                        }*/
                        //else
                        //{
                        printf("*");
                        //}
                    }
                    else
                    {
                        printf(" ");
                    }
                }
                Line -- ;
                printf("\n");
            }
        }
        else
        {
            printf("Wrong Choice :( Try againe \n");
        }
    }
    return 0;
}
/*********************************************************************************************************/
//10
// Max Number  of 0's Between 2 One
#include <stdio.h>
#include <stdlib.h>
int main()
{
    unsigned num ,i,counter,max,flag;
    while(1)
    {
        printf("Enter the number : ");
        scanf("%d",&num);
        counter = 0 ;
        flag = 0 ;
        max = 0 ;
        for (i=32 ; i > 0 ; i --)
        {
            if ((num >> i )& 1 == 1  )
            {
                //printf("1");
                flag ++ ;
            }
            else if(flag == 1 )
            {
               // printf("0");
                counter ++ ;
            }
            if(flag == 2)
            {
                if(max < counter)
                {
                    max = counter ;
                }
                flag = 1 ;
                counter = 0 ;
            }
        }
        printf("Max Number  of 0's Between 2 One : %d\n",max);
    }
    return 0;
}
//another solution by functions (Enhanced)
#include <stdio.h>
#include <stdlib.h>
int Max_Zeros_Between_2_1(unsigned int num)
{
    int i, counter = 0, max = 0, flag = 0 ;
    for(i=0 ; i<32 ; i++)
    {
        if((num >> i)& 1)
        {
            if(counter > max)
            {
                max = counter ;
            }
            counter = 0 ;
			flag = 1 ;
        }
        else if(flag)
        {
           counter ++ ;
        }
    }
    return max ;
}
int main()
{
    unsigned num , max ;
    while(1)
    {
        printf("Enter the number : ");
        scanf("%d",&num);
        max= Max_Zeros_Between_2_1(num);
        printf("Max Number  of 0's Between 2 One's : %d\n",max);
    }
    return 0;
}
/*********************************************************************************************************/
//11
// find max xor number between 2 number where L <= R(all the numbers between them )  
// ex input 10 , 11  --> 10 ^ 10   , 10 ^ 11 , 11 ^ 11 
#include <stdio.h>
#include <stdlib.h>
int main()
{
    while (1)
    {
        int l, r, i, j,xor,max,counter;
        printf("Left  Number : ");
        scanf("%d",&l);
        printf("Right Number : ");
        scanf("%d",&r);
        max =0, xor = 0 ,counter=0 ;
        for(i= l ; i <= r ; i ++ )
        {
            for (j = (l + counter) ; j <= r ; j++)
            {
                xor = i ^ j ;
                if (xor > max)
                {
                    max = xor ;
                }

                //printf("%d ^ %d = %d\n",i,j,xor);
            }
            counter ++ ;
        }
        printf("Max XOR between them  = %d\n",max);
    }
    return 0;
}