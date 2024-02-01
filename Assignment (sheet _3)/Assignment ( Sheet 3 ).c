 /*
************************************************************** 
* Assignment(Sheet_3)   	                                 *
* created by  : Abdelrahman Muhammed Kamel                   *
**************************************************************
*/
/* 1- Write a C function to return the index of LAST occurrence of a number in a
   given array. Array index start from 0. If the item is not in the list return -1 
*/
#include <stdio.h>
#include <stdlib.h>
void Array_Scan(int *arr,int size)
{
    int i ;
    for(i =0 ; i < size; i++)
    {
        printf("Enter the Element at index %d :",i);
        scanf("%d",&arr[i]);
    }
}

int array_find_2(int *arr,int size,int num)
{
    int i, place = 0;
    for(i =0 ; i < size; i++)
    {
        if(arr[i] == num )
        {
            place = i ;
        }
    }
    if (place == 0)
        return -1 ;
    else
        return place;
}

int main()
{
    int place, arr[15] ;
    
    Array_Scan(arr,15);
    
    place = array_find_2(arr,15,5);
    
    if(place == -1 )
    {
        printf("Element Not found");
    }
    else
    {
        printf("The Last occurrence found in index %d ",place);
    }

    return 0;
}
/********************************************************************************************/
 /* 1- Write a C function to return the maximum and minimum number in an
    array and their indexes.
*/
#include <stdio.h>
#include <stdlib.h>
void Array_Scan(int *arr,int size)
{
    int i ;
    for(i =0 ; i < size; i++)
    {
        printf("Enter the Element at index %d :",i);
        scanf("%d",&arr[i]);
    }
}
void array_find_Max_Min(int *arr,int size,int *max,int *min,int *index_1,int *index_2)
{
    int i ;
    for(i = 0 ; i < size; i++)
    {
        if(i == 0)
        {
            *max = arr[i] ;
            *min = arr[i] ;
        }
        if(arr[i] >= *max )
        {
            *max =  arr[i];
            *index_1 = i ;
        }
        if (arr[i] <= *min )
        {
            *min =  arr[i];
            *index_2 = i ;
        }
    }
}
int main()
{
    int max, min, index_1, index_2, arr[5] ;

    Array_Scan(arr,5);
    array_find_Max_Min(arr, 5, &max,&min, &index_1, &index_2 );
    printf("Max number : %d  at index : %d\n",max, index_1);
    printf("Min number : %d  at index : %d\n",min, index_2);


    return 0;
}
/********************************************************************************************/
/* 3- Write a C function that return 0 if a given number is a power of 3,
   otherwise return 1.
*/
#include <stdio.h>
#include <stdlib.h>
int Power_3(int num)
{
    int i, check ;
    for(i = 0 ; num >= check ; i++)
    {
        check = i * i * i ;
        if (check == num)
            return 0;
    }
    return 1 ;
}
int main()
{
    int num ;
    while(1)
    {
        printf("Enter Number : ");
        scanf("%d",&num);
        if (Power_3(num))
            printf("%d Not power of 3\n",num);
        else
            printf("%d Is  power of 3\n", num);
    }
    return 0;
}
/********************************************************************************************/
/* 4-Write a C function that take two numbers and return array contain all
   numbers between the two given numbers. (numbers 2,6->return array
   contain [3,4,5]).
*/
#include <stdio.h>
#include <stdlib.h>
void array_print(int *array, int size)
{
    int i  ;
    for(i =0 ; i< size ; i++)
    {
        printf("%d ",array[i]);
    }
}
void Array_Edit(int * arr,int *arr_2,int size, int num_1, int num_2)
{
    int i,j=0 ;
    for(i = 0 ; i  < num_2 ; i++)
    {
        if(arr[i] > num_1 && arr[i] < num_2)
        {
            arr_2[j] = arr[i];
            j++;
        }
    }
}
void Array_Scan(int *arr,int size)
{
    int i ;
    for(i =0 ; i < size; i++)
    {
        printf("Enter the Element at index %d :",i);
        scanf("%d",&arr[i]);
    }
}
int main()
{
    int arr [10],arr_2[10], num_1, num_2 ;
    while(1)
    {
        printf("Enter First Number  : ");
        scanf("%d",&num_1);
        printf("Enter Second Number : ");
        scanf("%d",&num_2);
        Array_Scan(arr, 10);

        Array_Edit(arr, arr_2,10, num_1, num_2) ;

        array_print(arr_2,(num_2 - num_1)-1);
        printf("\n");
    }
    return 0;
}
/********************************************************************************************/
/* 
   5- Write c function to find the most repeated number in an array of integers.
*/
#include <stdio.h>
#include <stdlib.h>
void Array_Scan(int *arr,int size)
{
    int i ;
    for(i =0 ; i < size; i++)
    {
        printf("Enter the Element at index %d :",i);
        scanf("%d",&arr[i]);
    }
}

int find_Most_Repeted(int *arr,int size, int*rep_times )
{
    int i,j,counter,max= 0, rep_num ;
    for(i = 0 ; i  < size ; i++)
    {
        counter = 0 ;
        for( j=0 ; j < size ; j++)
        {
            if(arr[i] == arr[j] )
            counter++ ;
        }
        if(counter > max )
        {
            max = counter ;
            rep_num = arr[i];
        }
    }
    *rep_times = max ;
    return rep_num ;
}
int main()
{
    int arr[10],num,Rep_times;
    while(1)
    {
        Array_Scan(arr, 10);
        num = find_Most_Repeted(arr,10,&Rep_times);
        printf("The Most repeted num is %d and repeted %d times\n",num,Rep_times);
    }
    return 0;
}
/*another solution if the array is sorted */
#include <stdio.h>
#include <stdlib.h>
void array_print(int*arr,int size)
{
    int i;
    for(i=0; i<size; i++)
    {
        printf("%d  ",arr[i]);
    }
    printf("\n");
}
int array_scan(int*arr,int LimitSize)
{
    int i,n;
    printf("enter Number of element not more than %d\n",LimitSize);
    scanf("%d",&n);
    printf("enter number\n");
    for(i=0; i<n&&i<LimitSize; i++)
    {
        scanf("%d",&arr[i]);
    }
    return i;
}
int array_mostRepeated_Sorted(int *arr,int size,int*pnum)
{
    int i,c=0,max=0,flag=arr[0];

    for(i=0; i<size ; i++)
    {
        if(flag != arr[i] )
        {
            flag = arr[i];
            c = 1 ;
        }
        else
        {
            c++ ;
        }
        if(c > max)
        {
            max = c ;
            *pnum = arr[i]  ;
        }
    }
    return max ;
}
int main ()
{
    int arr[100],size ,max ,number ;
    size = array_scan(arr,100);
    max = array_mostRepeated_Sorted(arr,size,&number);
    array_print(arr,size);
    printf("The repeted number is --> %d and Repeted %d times\n",number,max);
    return 0;
}
/********************************************************************************************/
/* 
   6 - Write a C function to take an array and reverse its elements.
*/
#include <stdio.h>
#include <stdlib.h>
void array_print(int*arr,int size)
{
    int i;
    for(i=0; i<size; i++)
    {
        printf("%d  ",arr[i]);
    }
    printf("\n");
}

int array_scan(int*arr,int LimitSize)
{
    int i,n;
    printf("enter Number of element not more than %d\n",LimitSize);
    scanf("%d",&n);
    printf("enter number\n");
    for(i=0; i<n&&i<LimitSize; i++)
    {
        scanf("%d",&arr[i]);
    }
    return i;
}
void array_reverse(int*arr,int size)
{
    int temp,i,j=size-1;
    for(i=0; i<(size/2); i++)
    {
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        j--;
    }
}
int main ()
{
    int arr[5] , x ;
    x = array_scan(arr,5);
    array_print(arr,x);
    array_reverse(arr,x);
    array_print(arr,x);

    return 0;

}
/********************************************************************************************/
/* 
   7- Write a C function to take 2 arrays and swap them (try with 2 different
      sizes)
*/
#include <stdio.h>
#include <stdlib.h>
void array_print(int*arr,int size)
{
    int i;
    for(i=0; i<size; i++)
    {
        printf("%d  ",arr[i]);
    }
    printf("\n");
}

int array_scan(int*arr,int LimitSize)
{
    int i,n;
    printf("enter Number of element not more than %d\n",LimitSize);
    scanf("%d",&n);
    printf("enter number\n");
    for(i=0; i<n&&i<LimitSize; i++)
    {
        scanf("%d",&arr[i]);
    }
    return i;
}
int array_SwapReverse(int *arr1,int size1,int *arr2,int size2)
{
    int temp ,i , j ;
    if(size1 > size2)
    {
        size1 = size2 ;
    }
    j=(size1-1) ;
    for(i=0; i<size1; i++)
    {
        temp=arr1[i];
        arr1[i]=arr2[j];
        arr2[j]=temp;
        j--;
    }
    return 1;
}
int main ()
{
    int arr[10] , arr_2 [10] , x , y ;
    x = array_scan(arr,10);
    y = array_scan(arr_2,10);
    array_print(arr,x);
    array_print(arr_2,y);
    array_SwapReverse(arr,x,arr_2,y);
    array_print(arr,x);
    array_print(arr_2,y);

    return 0;   
}
/********************************************************************************************/
/* 
   8- Write a C function that return the count of the longest consecutive
      occurrence of a given number in an array.
      Array= {1,2,2,3,3,3,3,4,4,4,4,3,3,3} and searching for 3 -> result = 4.
*/
#include <stdio.h>
#include <stdlib.h>
void array_print(int*arr,int size)
{
    int i;
    for(i=0; i<size; i++)
    {
        printf("%d  ",arr[i]);
    }
    printf("\n");
}

int array_scan(int*arr,int LimitSize)
{
    int i,n;
    printf("enter Number of element not more than %d\n",LimitSize);
    scanf("%d",&n);
    printf("enter number\n");
    for(i=0; i<n&&i<LimitSize; i++)
    {
        scanf("%d",&arr[i]);
    }
    return i;
}
int array_Search_Consecutive_Num(int *arr,int size,int search_Num)
{
    int counter=0, max=0, i ;
    for(i=0; i < size; i++)
    {
        if(arr[i] == search_Num)
        {
            counter ++ ;
			if(counter > max)
            {
                max = counter ;
            }
        }
        else
        {
            counter = 0 ;
        }
    }

    return max ;
}
int main ()
{
    int arr[10],x,max,search_num;
    while(1)
    {
        x = array_scan(arr,10);
        array_print(arr,x);
        printf("Enter Search Number : ");
        scanf("%d",&search_num);
        max = array_Search_Consecutive_Num(arr,x,search_num);
        printf("The longest consecutive occurrence of number %d --> %d Times \n",search_num,max);
    }
    return 0;
}
/********************************************************************************************/
/* 
    9- Write a C function that return the count of the longest consecutive
       occurrence of any number ,and return the number
       Array={1,2,2,3,3,3,3,4,4,4,4,4,3,3,3} result -> 5 ,number -> 4.
*/
#include <stdio.h>
#include <stdlib.h>
void array_print(int*arr,int size)
{
    int i;
    for(i=0; i<size; i++)
    {
        printf("%d  ",arr[i]);
    }
    printf("\n");
}

int array_scan(int*arr,int LimitSize)
{
    int i,n;
    printf("enter Number of element not more than %d\n",LimitSize);
    scanf("%d",&n);
    printf("enter number\n");
    for(i=0; i<n&&i<LimitSize; i++)
    {
        scanf("%d",&arr[i]);
    }
    return i;
}
int array_Search_Consecutive_Num(int *arr,int size,int* Number)
{
    int counter=0, max=0, i,j;
    for(i=0; i < size; i++)
    {
        for(j = 0 ; j< size ; j++)
        {
            if(arr[i] == arr[j])
            {
                counter ++ ;
                if(counter > max)
                {
                    max = counter ;
                    *Number= arr[i];
                }
            }
            else
            {
                counter = 0 ;
            }
        }
    }
    return max ;
}
int main ()
{
    int arr[10],x,max,Number;
    while(1)
    {
        x = array_scan(arr,10);
        array_print(arr,x);
        max = array_Search_Consecutive_Num(arr,x,&Number);
        printf("The longest consecutive occurrence is number %d --> %d Times \n",Number,max);
    }
    return 0;
}
/********************************************************************************************/
/* 
    10- Write c function to take 2 arrays and return an array by merging
        them like this ( arr1={1,2,3,4,5},arr2={11,12,13,14,15} return
        arr3={1,11,2,12,3,13,4,14,5,15} ).
*/
#include <stdio.h>
#include <stdlib.h>
void array_print(int*arr,int size)
{
    int i;
    for(i=0; i<size; i++)
    {
        printf("%d  ",arr[i]);
    }
    printf("\n");
}

int array_scan(int*arr,int LimitSize)
{
    int i,n;
    printf("enter Number of element not more than %d\n",LimitSize);
    scanf("%d",&n);
    printf("enter number\n");
    for(i=0; i<n&&i<LimitSize; i++)
    {
        scanf("%d",&arr[i]);
    }
    return i;
}
void array_Merg(int *arr_1,int size_1,int* arr_2,int size_2,int *arr_3 )
{
    int   i=0, j = 0  ;
    for(i=0; i < size_1 + size_2 ; i++ )
    {
        arr_3[j]= arr_1[i] ;
        j++ ;
        arr_3[j]= arr_2[i] ;
        j++ ;
    }
}
int main ()
{
    int arr_1[10],arr_2[10],arr_3[20],size_1,size_2,size_3;
    while(1)
    {
        size_1 = array_scan(arr_1,10);
        array_print(arr_1,size_1);
        size_2 = array_scan(arr_2,10);
        array_print(arr_2,size_2);
        array_Merg(arr_1,size_1,arr_2,size_2,arr_3);
        array_print(arr_3,size_1+size_2);
    }
    return 0;
}
//another solution
int array_merge(int*arr1,int size1,int *arr2,  int size2,int*arrNew)
{
    int i,j=0,size=size1+size2;
    int doubleMinSize;
    int*arrmax;
    doubleMinSize=size1<size2?size1:size2;
    arrmax=size1>size2?arr1:arr2;
    doubleMinSize=doubleMinSize*2;
    for(i=0; i<doubleMinSize; i++)
    {
        if(i%2==0)
        {
            arrNew[i]=arr1[j];
        }
        else
        {
            arrNew[i]=arr2[j];
            j++;
        }
    }
    for(; i<size; i++)
    {
        arrNew[i]=arrmax[j];
        j++;
    }
    return size;
}
//another solution
int array_merge2(int*arr1,int size1,int *arr2,  int size2,int*arrNew)
{
    int i,j=0,size=size1+size2;
    for(i=0; i<size-1; i=i+2)
    {
        arrNew[i]=arr1[j];
        arrNew[i+1]=arr2[j];
        j++;
    }
    return size;
}
/********************************************************************************************/
/* 
    11- Write a c function that removes the repeated number of an input
        sorted array and return a new array without the repeated numbers.
*/
//array is soreted 
#include <stdio.h>
#include <stdlib.h>
void array_print(int*arr,int size)
{
    int i;
    for(i=0; i<size; i++)
    {
        printf("%d  ",arr[i]);
    }
    printf("\n");
}

int array_scan(int*arr,int LimitSize)
{
    int i,n;
    printf("enter Number of element not more than %d\n",LimitSize);
    scanf("%d",&n);
    printf("enter number\n");
    for(i=0; i<n&&i<LimitSize; i++)
    {
        scanf("%d",&arr[i]);
    }
    return i;
}
int array_Remove_Repeted_Num_Sorted(int *arr_1,int size_1,int *arr_2 )
{
    int   i=0,j= 0,flag= 0  ;
    for(i=0; i < size_1 ; i++ )
    {
        if(flag != arr_1[i] )
        {
            arr_2[j]= arr_1[i];
            flag = arr_1[i];
            j++ ;
        }
    }
    return j ;
}
int main ()
{
    int arr_1[10],arr_2[10],size_1,size_2;
    while(1)
    {
        size_1 = array_scan(arr_1,10);
        array_print(arr_1,size_1);
        size_2 = array_Remove_Repeted_Num(arr_1,size_1,arr_2);
        array_print(arr_2,size_2);
    }
    return 0;
}
//array not sorted 
#include <stdio.h>
#include <stdlib.h>
void array_print(int*arr,int size)
{
    int i;
    for(i=0; i<size; i++)
    {
        printf("%d  ",arr[i]);
    }
    printf("\n");
}

int array_scan(int*arr,int LimitSize)
{
    int i,n;
    printf("enter Number of element not more than %d\n",LimitSize);
    scanf("%d",&n);
    printf("enter number\n");
    for(i=0; i<n&&i<LimitSize; i++)
    {
        scanf("%d",&arr[i]);
    }
    return i;
}
int array_Remove_Repeted_Num(int *arr_1,int size_1,int *arr_2 )
{
    int   i,j,k=0,flag= 0  ;
    for(i=0; i < size_1 ; i++ )
    {
        flag= 0 ;
        for(j=0 ; j<i ; j++)
        {
            if(arr_1[i] == arr_1[j] )
            {
                flag = 1 ;
                break ;
            }
        }
        if(flag == 0 )
        {
            arr_2[k]= arr_1[i];
            k++ ;
        }
    }
    return k ;
}
int main ()
{
    int arr_1[10],arr_2[10],size_1,size_2;
    while(1)
    {
        size_1 = array_scan(arr_1,10);
        array_print(arr_1,size_1);
        size_2 = array_Remove_Repeted_Num(arr_1,size_1,arr_2);
        array_print(arr_2,size_2);
    }
    return 0;
}

/********************************************************************************************/
/* 
    12- Write c function to take an array (with unknown size) contain 2 zeros
        swap the 3 element after the first zero with the 3 element after the second zero
		( x,x,x,0,1,2,3,xxxx,0,5,6,7,xxxx ->swap 1,2,3with 5,6,7).
*/

#include <stdio.h>
#include <stdlib.h>
void array_print(int*arr,int size)
{
    int i;
    for(i=0; i<size; i++)
    {
        printf("%d  ",arr[i]);
    }
    printf("\n");
}

int array_scan(int*arr,int LimitSize)
{
    int i,n;
    printf("enter Number of element not more than %d\n",LimitSize);
    scanf("%d",&n);
    printf("enter number\n");
    for(i=0; i<n&&i<LimitSize; i++)
    {
        scanf("%d",&arr[i]);
    }
    return i;
}
int array_swap_after_2_Zero(int *arr_1)
{
    int i ,index_1 = 0 , index_2 = 0 , temp = 0  ;
    for( i = 0 ; index_2 < 1 ; i++)
    {
        if( arr_1[i] == 0 )
        {
            if(index_1 == 0)
            {
                index_1 = i ;
            }
            else
            {
                index_2 = i ;
            }
        }
    }
    for(int j = 1 ; j <= 3 ; j++)
    {
        temp = arr_1[index_1+j];
        arr_1[index_1+j] = arr_1[index_2+j];
        arr_1[index_2+j] = temp ;
    }
    return (i+3) ;
}
int main ()
{
    int arr_1[15],size_1, size_2 ;
    while(1)
    {
        size_1 = array_scan(arr_1,15);
        array_print(arr_1,size_1);
        size_2 = array_swap_after_2_Zero(arr_1);
        array_print(arr_1,size_2);
    }
    return 0;
}
/********************************************************************************************/
/* 
    13- Write c function to take an array and return the biggest difference
        between 2 numbers in the array (the smaller number must come first in the array)
		{10,1,5,3,6,8,7,2}->return 7 difference between 1,8.
*/
#include <stdio.h>
#include <stdlib.h>
void array_print(int*arr,int size)
{
    int i;
    for(i=0; i<size; i++)
    {
        printf("%d  ",arr[i]);
    }
    printf("\n");
}

int array_scan(int*arr,int LimitSize)
{
    int i,n;
    printf("enter Number of element not more than %d\n",LimitSize);
    scanf("%d",&n);
    printf("enter number\n");
    for(i=0; i<n&&i<LimitSize; i++)
    {
        scanf("%d",&arr[i]);
    }
    return i;
}
int array_biggest_Subtraction_SmallComesFirst(int *arr, int size)
{
    int  i, j, max_sub = 0, sub = 0;
    for(i = 0 ; i < size ; i++)
    {
        for( j = size - 1  ; j > i ; j--)
        {
            sub = arr[j] - arr[i] ;
            //printf("the sub (%d - %d)=%d\n",arr[j],arr[i],sub);
            if (sub > max_sub)
            {
                max_sub = sub ;
            }
        }
    }
    return max_sub ;
}
int main ()
{
    int arr[15],size_1, Big_sub ;
    while(1)
    {
        size_1 = array_scan(arr,15);
        array_print(arr,size_1);
        Big_sub = array_biggest_Subtraction_SmallComesFirst(arr,size_1);
        printf("The Big subtraction = %d\n",Big_sub);
    }
    return 0;
}

/********************************************************************************************/
/* 
    14- Write c function to find the most repeated number in an array of
        char (size of the array is very large) try to optimize your code.
*/
#include <stdio.h>
#include <stdlib.h>
void array_print(char*arr,char size)
{
    char i;
    for(i=0; i<size; i++)
    {
        printf("%d  ",arr[i]);
    }
    printf("\n");
}

char array_scan(char*arr,char LimitSize)
{
    char i,n;
    printf("enter Number of element not more than %d\n",LimitSize);
    scanf("%d",&n);
    printf("enter number\n");
    for(i=0; i<n&&i<LimitSize; i++)
    {
        scanf("%d",&arr[i]);
    }
    return i;
}
char Array_Most_Repeted_Num(char *arr_1, char size)
{
    char i, j, Repeted_num, counter = 0, Number_Repetion=0 ;
    for(i = 0 ; (Number_Repetion + i) < size ; i++)
    {
        for(j = 0 ; j < size ; j++)
        {
            if(arr_1[i] == arr_1[j])
            {
                counter ++ ;
            }
        }
        if(counter > Number_Repetion)
        {
            Number_Repetion = counter ;
            Repeted_num =  arr_1[i] ;
        }
        counter = 0 ;
    }
    return Repeted_num ;
}
int main ()
{
    char arr_1[100],size_1, repeted_num ;
    while(1)
    {
        size_1 = array_scan(arr_1,100);
        array_print(arr_1,size_1);
        repeted_num = Array_Most_Repeted_Num(arr_1,size_1);
        printf("The Most  Repeted Number is %d\n",repeted_num);
    }
    return 0;
}
/********************************************************************************************/
/* 
    15-  Write a C Function that swaps two pointers .
*/
#include <stdio.h>
#include <stdlib.h>
void swap_2_Pointers(int *ptr_1, int *ptr_2 )
{
    int *temp = 0 ;
    temp = *ptr_1;
    *ptr_1 = *ptr_2 ;
    *ptr_2 = temp ;
}

int main ()
{
    int  x = 5,y = 6 ;

    int *ptr_1 = &x ;
    int *ptr_2 = &y ;

    printf("Ptr_1 = %d  Ptr_2 = %d\n",ptr_1,ptr_2);
    swap_2_Pointers(&ptr_1,&ptr_2);
    printf("Ptr_1 = %d  Ptr_2 = %d\n",ptr_1,ptr_2);
    return 0;
}
/********************************************************************************************/
/* 
    16- Write a C function to get the nth term of Fibonacci series, and use it
        to print the first 20 element.
*/
#include <stdio.h>
#include <stdlib.h>
void Fibonacci_series(int Number)
{
    int First_term = 0,Second_term = 1, result, i ;
    for(i = 0 ; i < Number; i++ )
    {
        printf("iteration Number %d --> %d \n",i+1,First_term);
        result = First_term + Second_term ;
        First_term = Second_term ;
        Second_term = result ;
    }
}

int main ()
{
    int  number  ;
    printf("Enter the number : ");
    scanf("%d",&number);
    Fibonacci_series(number);
    return 0;
}
/********************************************************************************************/
/* 
    17- Write a C function to take 10 mono numbers (from 0to 9) from user and return the most repeated one, 
	    if user enter number bigger than 9 return -1(don’t use arrays).
*/
#include <stdio.h>
#include <stdlib.h>

int count_Occu_of_SearchNum(long int Number, int Search_Num)
{
    int count = 0;
    while (Number)
    {
        if (Number%10 == Search_Num)
            count++;
        Number = Number / 10;
    }
    return count;
}

int Max_Count_Digits(unsigned long int Number)
{
    int result = 0 , max_count = 1, i ,count ;

    for (i=0; i<=9; i++)
    {
        count = count_Occu_of_SearchNum(Number, i);

        if (count > max_count)
        {
            max_count = count;
            result = i ;
        }
    }
    return result;
}

unsigned long int  Scan_Numbers_Without_Array( )
{
    int  i, number;
    unsigned long int  sum = 0;
    for(i=0 ; i<9 ; i++)
    {
        printf("Enter Number from 0 to 9 : ");
        scanf("%d",&number);
        if(number > 9)
        {
            return -1 ;
        }
        else
        {
            sum = (sum + number) * 10  ;
        }
    }
    return sum ;
}
int main ()
{
    unsigned long int number,result ;
    number =  Scan_Numbers_Without_Array();
    result=Max_Count_Digits(number);

    if (result == 0 )
    {
        printf("Sry You Entered wrong number");
    }
    else
    {
        printf("The Most Repeted Number = %d",result);
    }
    return 0;
}

/*wrong solution */
#include <stdio.h>
#include <stdlib.h>
int  Most_Repeted_Without_Array(char *Number1)
{
    char *add1 = Number1 ;
    int counter  = 0, value = 0, i, j, max = 0 ;
    for(i = 0 ; i < 8 ; i ++)
    {
        printf("Enter the number for 0 to 9 : ");
        scanf("%d",Number1);
        if(*Number1 > 9)
        {
            return -1 ;
        }
        Number1++ ;
    }
    for(i = 0 ; i < 8 ; i++)
    {
        for(j =0 ; j < 8 ; j++)
        {
            if (*(add1+i) == *(add1+j))
            {
                counter ++ ;
            }
        }
        if (counter > max )
        {
            max = counter ;
            value = *(add1+i) ;
            printf("value iteration = %d\n" ,value);
        }
        counter = 0 ;
    }
    return value ;
}
int main ()
{
    unsigned long long  int  number1  ;
    int value ;
    value = Most_Repeted_Without_Array(&number1);
    if( value == -1 )
    {
        printf("Sry you Entered value Bigger than 9");
    }
    else
    {
        printf("The most repeted Number --> %d\n",value);
    }
    return 0;
}
/********************************************************************************************/

/*****array_sort******/
void Array_Sort(int *arr, int size)
{
    int  i, j, temp = 0 ;
    for(i = 0 ; i < size ; i++)
    {
        for(j = size-1  ; j > i ; j--)
        {
            if (arr[i] > arr[j] )
            {
                temp= arr[i];
                arr[i] = arr[j];
                arr[j]= temp;
            }
        }
    }
}

















































