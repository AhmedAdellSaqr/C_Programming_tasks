
   1- Write c function to reverse string "Ahmed salem"-> melas demhA".
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
void string_reverse(char*str)
{
    int i=0,j=string_len(str)-1;
    char temp;
    for(i=0; i<=j; i++)
    {
        temp=str[i];
        str[i]=str[j];
        str[j]=temp;
        j--;
    }
}
int main ()
{
    char arr[]="Abdelrahman muhammed";
    string_print(arr);
    string_reverse(arr);
    string_print(arr);

    return 0;
}
/********************************************************************************************/
/*
   2- Write c function to check if string is mirror or not "SalaS","SalelaS".
*/
#include <stdio.h>
#include <stdlib.h>
int string_len(char*str)
{
    int i;
    for(i=0; str[i]; i++);
    return i;
}
int string_Mirror(char*str1,char*str2)
{
    int i ;
	int l1=string_len(str1);
    int l2=string_len(str2);
    int j = l2 - 1 ;
    if(l1!=l2)
    {
        return 0;
    }
    else
    {
        for(i=0; i<l1; i++,j--)
        {
            if(str1[i]!=str2[j])
            {
                return 0;
            }
        }
        return 1;
    }
}
int main ()
{
    char arr[]="ZooZ";
    char arr2[] ="ZooZ" ;
    if(string_Mirror(arr,arr2))
    {
        printf("The 2 Strings is Mirror\n");
    }
    else
    {
        printf("The 2 Strings is not  Mirror\n");
    }
    return 0;
}
/********************************************************************************************/
/*
   3- Write c function to reverse words in sentence (without using external arrays)
      " I work as an embedded software engineer for 3 years"
      -> " years 3 for engineer software embedded an as work I".
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

void string_reverse(char*str)
{
    int i=0,j=string_len(str)-1;
    char temp;
    for(i=0; i<=j; i++)
    {
        temp=str[i];
        str[i]=str[j];
        str[j]=temp;
        j--;
    }
}
void string_Reverse_Words_Sentence(char*str1)
{
    int i, j =0,index = 0 , temp , size = string_len(str1);
    for(i=0 ; i <= size ; i++)
    {
        if(str1[i] == ' ' || str1[i] == '\0')
        {
            index = i-1 ;
            for( j  ; j < index ; j++)
            {
                temp = str1[j];
                str1[j]=str1[index];
                str1[index]=temp;
                index --;
            }
            j =  i + 1  ;
        }
    }
    string_reverse(str1);
}
int main ()
{
    char arr[]="I work as an embedded software engineer for 3 years";
    string_print(arr);
    string_Reverse_Words_Sentence(arr);
    string_print(arr);
    return 0;
}

//another solution
void string_reverse2(char*str,int f,int l)
{
    char temp,i=f,j=l;
    for(; i<=j; i++,j--)
    {
        temp=str[i];
        str[i]=str[j];
        str[j]=temp;
    }

}
void string_reverseWords(char*str)
{
    int i,len=string_len(str);
    int f=0,l;
    string_reverse2(str,0,len-1);
    for(i=0; str[i]; i++)
    {
        if(str[i]==' ')
        {
            l=i-1;
            string_reverse2(str,f,l);
            f=i+1;
        }
        else
        {

        }
    }
    string_reverse2(str,f,len-1);
}
/********************************************************************************************/
/*
   4- Write C function to take string contain three numbers separated by space,
      check what type of triangle this number could make, and return string "12 23 21 "
	  "Equilateral triangle "  "Isosceles triangle"  "Scalene triangle"  "Not triangle"
*/
#include <stdio.h>
#include <stdlib.h>

int string_len(char*str)
{
    int i;
    for(i=0; str[i]; i++);
    return i;
}
int string_Type_of_Triangle(char*str1)
{
    int i, j =0, index = 0, sapces = 0, size = string_len(str1), sum = 0;
    int arr[3]= {0},index2 = 0;
    for(i=0 ; str1[i] ; i++)
    {
        if(str1[i] == ' ')
        {
            sapces ++ ;
        }
        if(sapces > 2)
        {
            return 0 ;
        }
    }
    for(i=0 ; i <= size ; i++)
    {
        if(str1[i] == ' ' || str1[i] == '\0')
        {
            index = i-1 ;
            for( j  ; j <=index ; j++)
            {
                sum=sum*10+(str1[j]-'0');

            }
            j = i+1 ;
            arr[index2]=sum ;
            index2 ++ ;
            sum = 0 ;
        }
    }
    if(arr[0] == arr[1] && arr[1] ==arr[2])
    {
        return 1 ;
    }
    else if (arr[0] == arr[1] || arr[1] ==arr[2] || arr[0] == arr[2] )
    {
        return 2 ;
    }
    else
    {
        return 3 ;
    }
}
int main ()
{
    char arr[]="12 12 12";

    switch(string_Type_of_Triangle(arr))
    {
    case 1 :
        printf("Equilateral triangle\n");
        break;
    case 2 :
        printf("Isosceles triangle\n");
        break;
    case 3 :
        printf("Scalene triangle\n");
        break;
    default :
        printf("Not triangle\n");
        break;
    }
    return 0;
}
/********************************************************************************************/
/*
   5-  Write a C function to convert float number to string
       Float f1=3.45    to string str=”3.45”. hnsabt 3 digits b3d al 3lama 
*/
#include <stdio.h>
#include <stdlib.h>
int string_len(char*str)
{
    int i;
    for(i=0; str[i]; i++);
    return i;
}
void string_reverse(char*str)
{
    int i=0,j=string_len(str)-1;
    char temp;
    for(i=0; i<=j; i++)
    {
        temp=str[i];
        str[i]=str[j];
        str[j]=temp;
        j--;
    }
}
void string_print(char*str)
{
    int i;
    for(i=0; str[i]!=0; i++)
    {
        printf("%c",str[i]);
    }
    printf("\n");
}
void FloatToString(float num ,char *str)
{
    int i=0,rem,flag=0 , convert =  num * 1000;
    if(convert == 0)
    {
        str[0]='0';
        str[1]='.';
        str[2]='0'; 
		str[3]='0';
		str[4]='0'; 
        str[5]=0;
        return;
    }
    if( convert < 0)
    {
        convert=convert*(-1);
        flag=1;
    }
    while(convert>0)
    {

        if (i == 3)
        {
            str[i]='.';
            i++ ;
        }
        else
        {
            rem=convert%10;
            rem=rem+'0';
            str[i]=rem;
            i++;
            convert=convert/10;
        }
    }
    if(flag==1)
    {
        str[i]='-';
        i++;
    }
    str[i]=0;
    string_reverse(str);
    int index = string_len(str) - 1 ;
	
	// to not print zeros
    for(i = 0 ; i < 2 ; i ++ )
    { 
        if (str[index] == '0')
        {
            str[index]=0 ;
            index -- ;
        }
        else if (str[index] != '0')
        {
            break ;
        }
    }
}
int main ()
{
    float num = -12.54544540;
    char arr[20]= {0};
    printf("Number = %.3f\n",num) ;
    FloatToString(num , arr);
    string_print(arr);
    return 0;
}

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
    int i= 0, j= 0, k= 0, rep_index= 0,rep2_index =0, z= 0, new_str_index= 0, check= 0, length= 0;
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
            for( k = 0 ; find[k] ; k++, rep_index ++)
            {
                if(str[rep_index] != find[k])
                {
                    check ++ ;
                }
            }
            if(check == 0)
            {
                for( z = 0  ; replace[z] ; z++)
                {
                    new_str[new_str_index] = replace[z];
                    new_str_index ++ ;
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
            }
            rep_index = j ;
            rep2_index = j ;
            j = i+1 ;
            length = 0 ;
        }
    }
    new_str[new_str_index]=0 ;
}
int main ()
{
    char arr[]="ali mohamed ali ali";
    char find[]="ali";
    char replace[]="ayman";
    char new_arr[100]= {0};
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
    char arr[]="word,3,times,4";
    string_print(arr);
    string_print_word_times(arr);
    return 0;
}
