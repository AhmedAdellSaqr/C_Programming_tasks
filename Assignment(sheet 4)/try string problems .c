/********************************************************************************************/
/*
   6-  Write a C function to take 3 strings, “main string”, “find”, and “replace”, 
       if you find the second string inside the first one replaces it with the third 
	   and return new string, if u didn’t find it return the first string without change
       Main string->”ahmed mohamed ali kamel”.
       Find->”ali”.
       Replace->”ayman”.
       Return new string ->”ahmed mohamed ayman kamel”.
*/
#include <stdio.h>
#include <stdlib.h>
void string_print(char*str)
{
    int i;
    for(i=0; str[i]!=0; i++)
    {
        printf("%c",str[i]);
    }
    printf("\n");
}
int string_len(char*str)
{
    int i;
    for(i=0; str[i]; i++);
    return i;
}
void string_Find_And_Replace(char*str,char*find,char*replace,char*new_str)
{
    int i= 0, j= 0, k= 0, rep_index= 0,rep2_index =0 , z= 0, new_str_index= 0, check= 0, length= 0;
    int size_str = string_len(str), size_find = string_len(find) ;

    for(i= 0 ; i <= size_str ; i++)
    {
        length ++ ;
        if((str[i] == ' ' || str[i] == '\0' ) && (length - 1  == size_find) )
        {
            rep_index = j ;
            rep2_index = j ;
            j = i+1 ;
            check = 0 ;
            for( k = 0 ; find[k] ; k++,rep_index ++)
            {
                if(str[rep_index] != find[k])
                {
                    check ++ ;
                }
                printf("Entered (1)\n");
                printf("i= %d , j = %d , k = %d , rep_index = %d , rep2_index = %d, z = %d ,check = %d , length = %d,size_find=%d , new_str_index = %d str[m]=%c , find[k]=%c\n",i,j,k,rep_index,rep2_index,z,check,length,size_find,new_str_index,str[rep_index],find[k]);
            }

            if(check == 0)
            {
                printf("Enter Enter Enter \n") ;
                for( z = 0  ; replace[z] ; z++)
                {
                    new_str[new_str_index] = replace[z];
                    new_str_index ++ ;
                    printf("Entered (2)\n");
                printf("i= %d , j = %d , k = %d , rep_index = %d , rep2_index = %d, z = %d ,check = %d , length = %d,size_find=%d , new_str_index = %d new_str[new_str_index]=%c , replace[z]=%c\n",i,j,k,rep_index,rep2_index,z,check,length,size_find,new_str_index,new_str[new_str_index],replace[z]);
                }
                new_str[new_str_index] = ' ';
                new_str_index ++ ;
            }
            else
            {
                for( rep2_index  ; rep2_index <= i ; rep2_index++)
                {
                    new_str[new_str_index] = str[rep2_index];
                    new_str_index ++ ;
                    printf("Entered (3)\n");
                printf("i= %d , j = %d , k = %d , rep_index = %d , rep2_index = %d, z = %d ,check = %d , length = %d,size_find=%d , new_str_index = %d new_str[new_str_index]=%c , str[rep2_index]=%c\n",i,j,k,rep_index,rep2_index,z,check,length,size_find,new_str_index,new_str[new_str_index],str[rep2_index]);
                }

            }
            rep_index = j ;
            rep2_index=j ;
            j = i+1 ;
            length = 0 ;
        }
        else if ((str[i] == ' ' || str[i] == '\0' ) && (length - 1 != size_find))
        {

            for( j  ; j <= i ; j++)
            {
                new_str[new_str_index] = str[j];
                new_str_index ++ ;
                printf("Entered (4)\n");
               printf("i= %d , j = %d , k = %d , rep_index = %d , rep2_index = %d, z = %d ,check = %d , length = %d,size_find=%d , new_str_index = %d new_str[new_str_index]=%c , str[j]=%c\n",i,j,k,rep_index,rep2_index,z,check,length,size_find,new_str_index,new_str[new_str_index],str[j]);
            }
            rep_index = j ;
            rep2_index = j ;
            j = i+1 ;
            length = 0 ;
        }

printf("i= %d , j = %d , k = %d , rep_index = %d , rep2_index = %d, z = %d ,check = %d , length = %d,size_find=%d , new_str_index = %d new_str[new_str_index]=%c , str[j]=%c\n",i,j,k,rep_index,rep2_index,z,check,length,size_find,new_str_index,new_str[new_str_index],str[j]);
    }
    new_str[new_str_index]=0 ;

}
int main ()
{
    char arr[]="mohsen mohamed kamel mohsen";
    char find[]="abdo";
    char replace[]="saied";
    char new_arr[100]={0};
    string_print(arr);
    string_Find_And_Replace(arr,find,replace,new_arr);
    string_print(new_arr);
    return 0;
}
/********************************************************************************************/
/*
   7-  Write a C code to take string “hi,5,hello,12” and
       print the first word number of times as the first number ,
	   and second word as the second number.
*/
#include <stdio.h>
#include <stdlib.h>
void string_print(char*str)
{
    int i;
    for(i=0; str[i]!=0; i++)
    {
        printf("%c",str[i]);
    }
    printf("\n");
}
int string_len(char*str)
{
    int i;
    for(i=0; str[i]; i++);
    return i;
}
void string_print_word_times(char*str)
{
    int i= 0, j= 0,index = 0, index_num = 0, index_word = 0,sum= 0, flag = 0;
    char arr_num[2] = {0}, arr_words[50]= {0};
    int size_str = string_len(str);

    for(i= 0 ; i <= size_str ; i++)
    {
        if((str[i] == ',' || str[i] == '\0' ) )
        {
            for( j  ; j < i ; j++)
            {
                flag = 0 ;
                if( str[j] >= 'A' && str[j] <= 'z' )
                {
                    arr_words[index_word]=str[j] ;
                    index_word ++ ;
                    flag = 1 ;
                }
                if ((str[j] >= '0' && str[j] <= '9') || str[j] == '\0' )
                {
                    sum = sum * 10 +(str[j] - '0' );
                    flag = 2 ;
                }
            }
            j = i + 1 ;
            if(flag == 1)
            {
                arr_words[index_word]=' ';
                index_word ++ ;
            }
            else if (flag == 2)
            {
                arr_num[index_num] = sum ;
                index_num ++ ;
                sum = 0 ;
            }
        }
    }
    string_print(arr_words);
    printf("array_Num = %d\n",arr_num[2]);
    arr_words[index_word] = 0 ;
    int new_size = string_len(arr_words), e = 0, postion = 0, space_index = 1, itration = 0, q =0, k = 0, flag2= 0;
    for(k = 0 ; k < new_size ; k ++)
    {
        if(arr_words[k] == ' ')
        {
            itration= arr_num[e];
            if (arr_words[k] == ' ' && flag2 == 0)
            {
                space_index = k + 1 ;
            }
            flag2 ++ ;
            while(itration)
            {
                if (flag2 == 1 )
                {
                    q = 0 ;
                }
                else if( flag2 == 2 )
                {
                    q = space_index ;
                }
                for(q ; q < k ; q++ )
                {
                    printf("%c",arr_words[q]);
                }
                printf("\n");
                itration -- ;
            }
            e ++ ;
        }
    }
}
int main ()
{
    char arr[]="Embedded,3,System,4,win,15";
    string_print(arr);
    string_print_word_times(arr);
    return 0;
}
