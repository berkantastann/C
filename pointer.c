 #include<stdio.h>
// int main()
// {
   
//    int var =10;
//    int *p;
//    p= &var;
    
//     printf("Address of var is: %p",&var);
//     printf("\nAddress of var is: %p",p);
  
//     printf("\nValue of var is: %d",var);
//     printf("\nValue of var is: %d",*p);
//     printf("\nValue of var is: %d",*(&var));

//     printf("\nValue of var is: %p",*p);
//     printf("\nAddress of var is: %p",&p);
//     return 0;
// }

                                                        //2

// int main()
// {
//     int a,b,*aptr,*bptr,sum;
    
//     scanf("%d%d",a,b);
//     aptr=&a;
//     bptr=&b;
//     sum=*aptr+*bptr;
//     printf("sum= %d",sum);
//     return 0;
// }

                                                                        //3


// int main()
// {
    
//     int i,boyut,*arrayP;
//     printf("arrayin boyutunu giriniz: ");
//     scanf("%d",&boyut);
//     int array[boyut];
//     arrayP=&array;
//     for(i=0;i<boyut;i++)
//     {
//         printf("degeri giriniz array [%d]",i);
//         scanf("%d",&arrayP[i]);
//     }
//     for(i=0;i<boyut;i++)
//     {

//         printf("%d\n",*(arrayP+i));
//     }

//     return 0;
// }
                                                                //4
int main()
{
    int i,*strPtr,length;
    char string[100];
    printf("kelimeyi girin:");
    scanf("%c",string);

    strPtr=&string;
    while(string[i]="\0")
    {
        i++;
    }
    length=i-1;
    
    



    return 0;
}