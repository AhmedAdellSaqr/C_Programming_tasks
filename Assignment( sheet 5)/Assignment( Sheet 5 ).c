/*
************************************************************** 
* Assignment(Sheet_5)   	                                 *
* created by  : Abdelrahman Muhammed Kamel                   *
**************************************************************
*/
/* 
    1) You have an array of 100 element contain all number from 0 t0 100 except
      one number, write c function to find the missed number (try in O(n)).
*/
#include <stdio.h>
#include <stdlib.h>
int Array_GetMissedNumber(int *parr , int size)
{
    int i = 0 , sum = 0 , original_sum = 0 ;
    original_sum = (size  * (size + 1)) / 2 ;
    for(i =  0 ; i < size ; i++)
    {
        sum += parr[i] ;
    }

    return original_sum - sum ;
}
int main ()
{
    int arr[]={0,1,2,4,5,6,7,8,9,10};
    printf("Missed Number = %d ",Array_GetMissedNumber(arr,10));

    return 0;
}
//Another Solution

#include <stdio.h>
#include <stdlib.h>
int Array_GetMissedNumber(int *parr , int size)
{
    int i = 0 , missed_number ;
    int arr[11]={0};
    for(i =  0 ; i < size ; i++)
    {
        arr[parr[i]] ++ ;
    }
    for(i = 0 ; i <= size ; i++)
    {
        if(arr[i]== 0)
        {
            missed_number = i ;
        }
    }
    return missed_number ;
}
int main ()
{
    int arr[]={0,1,2,3,4,5,6,7,9,10};
    printf("Missed Number = %d ",Array_GetMissedNumber(arr,10));

    return 0;
}
/*********************************************************************************************************/
/*
  2) You have an array of 101 element contain all number from 1 t0 100, so one
     number is repeated, write c function to find the repeated number (try in
     O(n)).
*/
#include <stdio.h>
#include <stdlib.h>
int Array_GetRepetedNumber(int *parr , int size)
{
    int i = 0 , sum = 0,original_sum = 0   ;
    original_sum = ((size - 1 )* size) / 2 ;
    
    for(i =  0 ; i < size ; i++)
    {
        sum += parr[i] ;
    }
    return sum - original_sum ;
}
int main ()
{
    int arr[]={1,2,3,4,5,6,7,8,9,10,9};
    printf("Repeted Number = %d ",Array_GetRepetedNumber(arr,11));

    return 0;
}
//Another Solution
#include <stdio.h>
#include <stdlib.h>
int Array_GetRepetedNumber(int *parr , int size)
{
    int i = 0 , sum = 0, original_sum = 0 ,Repeted_Num   ;
    int arr[11]={0};
    for(i =  1 ; i <= size ; i++)
    {
        arr[parr[i]] ++ ;
    }
    for(i = 1 ; i <= size ; i++)
    {
        if(arr[i] ==  2)
        {
            Repeted_Num = i ;
        }
    }
    return Repeted_Num ;
}
int main ()
{
    int arr[]={1,2,3,4,4,5,6,7,8,9,10};
    printf("Repeted Number = %d ",Array_GetRepetedNumber(arr,10));

    return 0;
}
/*********************************************************************************************************/
/*
  3) You have an array of integers all numbers in the array repeated 2 times
     except one number repeated one time only find this number (try o(n)).
	 array like {1,2,4,66,2,1,500,66,7,7,500}->4.
*/

#include <stdio.h>
#include <stdlib.h>
int Array_GetNonRepetedNumber(int *parr , int size)
{
    int i = 0 , min = 0, max = 0 ,size_2 , Non_Repeted ;
    for(i = 0 ; i < size ; i ++)
    {
        if (i == 0 )
        {
            max = parr[i];
            min = parr[i];
        }
        else if (parr[i] > max)
        {
            max = parr[i];
        }
        else if (parr[i] < min )
        {
            min = parr[i] ;
        }
    }
    size_2 = max - min + 1 ;

    int *Dyna_arr = (int *)calloc(size_2,sizeof(int));

    for(i = 0 ; i < size ; i++)
    {
        (Dyna_arr[parr[i]] )++ ;
    }
    for(i = min ; i <= max ; i++)
    {
        if(Dyna_arr[i] ==  1)
        {
            Non_Repeted = i ;
        }
    }
    free(Dyna_arr);

    return Non_Repeted ;
}
int main ()
{
    int arr[]={1,1,2,2,4,4,6,6,8,9,8};
    printf("Repeted Number = %d ",Array_GetNonRepetedNumber(arr,11));

    return 0;
}
/*********************************************************************************************************/
/*
   4) repeat Q3 but array is sorted (try less than O(n)).
      array {1,1,2,2,4,4,70,70,73,80,80,81,81} ->73.
*/
#include <stdio.h>
#include <stdlib.h>
int Array_GetNonRepetedNumber_SortedArray(int*arr,int size)
{
    int first,last,middle,c=0;
    first=0;
    last=size-1;

    while(  first<=last )
    {
        c++;
        middle=(first+last)/2;
        if(arr[middle] != arr[middle + 1] && arr[middle]!= arr[middle - 1] )
        {
           return arr[middle];
        }
        else if ((arr[middle] != arr[middle + 1] &&  middle % 2 != 0  )||(arr[middle] == arr[middle + 1] &&  middle % 2 == 0 ) )
        {
           first=middle+1;
        }
        else if ((arr[middle] == arr[middle + 1] &&  middle % 2 != 0 )||(arr[middle] != arr[middle + 1] &&  middle % 2 == 0 ) )
        {
           last=middle-1;
        }
    }
}
int main ()
{
    int arr[]={0,0,1,1,2,2,4,4,70,70,73,73,80,80,81,81,82,82,83,83,84,85,85,86,86,87,87,88,88,89,89,90,90};
    printf("Repeted Number = %d ",Array_GetNonRepetedNumber_SortedArray(arr,33));

    return 0;
}
/*********************************************************************************************************/
/*
   5) You have an array of integers contain Mono numbers only (from 0 to 9)
      ,write c function to find the most repeated number (try in O(n)).
*/
#include <stdio.h>
#include <stdlib.h>
int array_mostRepeated_mono(int *arr,int size)
{
    int i,most_Rep=0,max =0 ;
     int count[10]= {0};

    for(i=0; i<size; i++)
    {
        count[arr[i]]++;
    }
    for(i=0; i<10; i++)
    {
        if(count[i]>max)
        {
            max = count[i];
            most_Rep = i;
        }
    }
    return most_Rep;
}
int main ()
{
    int arr[]={0,0,0,0,1,1,1,1,2,2,2,2,2,2,2,3,3,3,3,4,4,5,5,6,6,7,7,7,8,8,8,9,9,9,9,9,9,9,9,9,9,9};
    printf("Most Repeted Number = %d ",array_mostRepeated_mono(arr,42));
    return 0;
}
/*********************************************************************************************************/
/*  
   6) Write c function to find the first repeated char in string (try in O(n)).
      "ahmed selem" ->e.
*/
#include <stdio.h>
#include <stdlib.h>
char array_FirstRepeated_char(char *arr)
{
    int i   ;
    char count[26]= {0};
    for( i=0 ; arr[i] ; i++)
    {
        if( arr[i] >= 'a' && arr[i] <= 'z')
        {
            count[ arr[i] - 'a' ]++;
        }
        if (count[ arr[i] - 'a'] == 2  )
        {
            return arr[i];
        }
    }
	return 0 
}
int main ()
{
    char arr[]="ahmed selem";
    if( array_FirstRepeated_char(arr) == 0 )
    {
        printf("No Repeted char\n");
    }
    else
    {
        printf("First Repeted char = %c ",array_FirstRepeated_char(arr));
    }
    return 0;
}
/*********************************************************************************************************/
/*
   7) Write c function to copy string to string without copy repeated characters
      try (O(n)).  "ahmed selem kamel"->"ahmed slk".
*/
#include <stdio.h>
#include <stdlib.h>
void array_CopyStringWithoutRepeted(char *arr, char*str_edit)
{
    int i , j= 0 ;
	//3ala4an law 3amlto char momkan al rakam ykon mwgod aktermen 255 we y3mel over flow
    int count[27]= {0};
    for( i= 0 ; arr[i] ; i++)
    {
        //check the repeation
		
        if(arr[i] >= 'a' && arr[i] <= 'z')
        {
            count[arr[i] - 'a' ]++;
        }
        //spiceal for space
        else if (arr[i] == ' ')
        {
            count[arr[i] - 6 ]++;
        }
        //copy non repeted
		
        if (count[arr[i] - 'a' ] == 1  )
        {
            str_edit[j] = arr[i];
            j++ ;
        }
        // spiceal for space
        else if (count[arr[i] - 6 ] == 1)
        {
            str_edit[j] = arr[i];
            j++ ;
        }
    }
    // ziadet t2kid
    str_edit[j]= 0 ;
}
int main ()
{
    char arr[]="ahmed selem kamel ";
    char str_edit[19]={0};
    array_CopyStringWithoutRepeted(arr,str_edit);
    for(int i=0 ;str_edit[i];i++)
    {
        printf("%c",str_edit[i]);
    }
    return 0;
}
/*********************************************************************************************************/
/* 
    8) Write C function to take an array and if it finds a number "given" makes the
       previous elements in a new array and returns it (try to optimize).
*/
#include <stdio.h>
#include <stdlib.h>
int * arry_CopyAfterFind(int *arr ,int  size , int element , int *size2 )
{
    int i = 0  ;
    for(i=0 ; i < size ; i++)
    {
        if(arr[i] == element)
        {
            *size2 = i ;
            break ;
        }
    }
    int *arr2 = (int*)malloc(sizeof(int)* (*size2) );

    for(i=0 ; i < (*size2) ; i++)
    {
        arr2[i]=arr[i] ;
    }

    return arr2 ;
}
int main ()
{
    int size2 , *arry_Copy =  0  , i = 0 ;
    int arr[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17};
    arry_Copy = arry_CopyAfterFind(arr,17,17,&size2);

    for(i = 0 ; i < size2 ; i++ )
    {
        printf("arry_Copy[%d] = %d\n",i,arry_Copy[i]);
    }
    free(arry_Copy);
    return 0;
}
/*********************************************************************************************************/
/*
    9) Write a c function to swap the two bytes of a short int (n=0xFE20 ->0X20FE)
       use 2 methods.
*/
//Method - 1
#include <stdio.h>
#include <stdlib.h>
void Swap2Bytes_Method1(unsigned int *number)
{
    unsigned char *ptr = number ;
    unsigned char temp = *ptr ;
    *ptr = *(ptr+2);
    *(ptr+2)= temp ;

    temp = *(ptr+1);
    *(ptr+1) = *(ptr+3);
    *(ptr+3)= temp ;
}
int main ()
{
    unsigned int number = 300 ;
    printf("Before = %d\n",number) ;
    Swap2Bytes_Method1(&number);
    printf("After = %d\n",number) ;
    return 0;
}
//Method - 2
#include <stdio.h>
#include <stdlib.h>
void Swap2Bytes_Method2(unsigned int *number)
{
    unsigned short int  *ptr = number ;

    unsigned short int  temp = *ptr ;
    *ptr = *(ptr+1);
    *(ptr+1)= temp ;
}
int main ()
{
    unsigned int number = 300 ;
    printf("Before = %d\n",number) ;
    Swap2Bytes_Method1(&number);
    printf("After = %d\n",number) ;
    return 0;
}



/*********************************************************************************************************/



