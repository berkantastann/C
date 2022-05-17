#include<stdio.h>
#include<stdlib.h>
// int main(void)
// {
//     int n,i,*ptr,sum=0;
//     printf("kaç sayi toplanicak:\n",n);
//     scanf("%d",&n);

//     ptr=(int*)malloc(n*sizeof(int));

//     for(i=0;i<n;i++)
//     {
//         scanf("%d",ptr+i);
//         sum+=*(ptr+i);
//     }

//     printf("sum=%d",sum);

// }




// int main(void)
// {
//     int n,i,*ptr,sum=0;
//     printf("kac sayi toplanicak:\n",n);
//     scanf("%d",&n);

//     ptr=(char*)calloc(n,sizeof(char));

//     for(i=0;i<n;i++)
//     {
//         scanf("%d",ptr+i);
//         sum+=*(ptr+i);
//     }

//     printf("%d",sum);

//     free(ptr);


// }

// int main(void)
// {
//     int n1,n2,*ptr;
//     printf("bellekte kac adet yer ayrilicak:");
//     scanf("%d",&n1);

//     ptr=(int*)malloc(n1*sizeof(int));

//     for(int i=0;i<n1;i++)
//     {
//         printf("address:%p\n",ptr+i);
//     }
//     printf("how many new addresses:");
//     scanf("%d",&n2);

//     ptr=(int*)realloc(ptr,n2*sizeof(int));

//     for(int i=0;i<n2;i++)
//     {
//         printf("new address:%p\n",ptr+i);
//     }
//     free(ptr);
// }



// int main() {
//   int n;
//   double *data,n2=0;
//   printf("Enter the total number of elements: ");
//   scanf("%d", &n);

//   // Allocating memory for n elements
//   data = (double *)calloc(n, sizeof(double));
//   if (data == NULL) {
//   printf("Error!!! memory not allocated.");
//   exit(0);
//   }

//   // Storing numbers entered by the user.
//   for (int i = 0; i < n; ++i) {
//   printf("Enter number%d: ", i + 1);
//   scanf("%lf", data + i);
//   }
//     printf("data deneme:%d\n",*data);
//   // Finding the largest number
//   for (int i = 1; i < n;i++) {
//     if (n2 < *(data + i))
//      {
//       n2 = *(data + i);
//      }
//   }
//   printf("Largest number = %.2lf", n2);

//   free(data);

//   return 0;
// }

// int main(void)
// {
//   int i,j,T=0,C=0,*tek,*cift;
//   int ogrenci_numarasi;
//   printf("ogrenci numarasini giriniz :");
//   scanf("%d",&ogrenci_numarasi);
//   tek=(int*)malloc(1*sizeof(int));
//   cift=(int*)malloc(1*sizeof(int));
//   for(i=0;i<10;i++)
//   {
//     if(ogrenci_numarasi%2==0)
//     {
//       C++;
//       cift=(int*)realloc(cift,C*sizeof(int));
//       cift[C-1]=ogrenci_numarasi%10;
//       ogrenci_numarasi=ogrenci_numarasi/10;   
//     }
//     else
//     {
//       T++;
//       tek=(int*)realloc(tek,T*sizeof(int));
//       tek[T-1]=ogrenci_numarasi%10;
//       ogrenci_numarasi=ogrenci_numarasi/10;
//     }

//   }
//   for(j=0;j<T;j++)
//   {
//     printf("tek sayilar:");
//     printf("%d\n",*(tek+j));
//   }
//   for(int k=0;k<C;k++)
//   {
//     printf("cift sayilar :");
//     printf("%d\n",*(cift+k));
//   }
//   free(tek);
//   free(cift);
// }

// int topla(int x)
// { 
//   int sum=0;
//   sum=(2+4*1)+topla(x-1);
//   return sum;

// }
// int main(void)
// {
  
//   printf("%d",topla(5));




// }




#include<stdio.h>
int max(int,int,int,int);
int main(void)
{
    int maxi,num1,num2,num3,num4;
    scanf("%d%d%d%d",&num1,&num2,&num3,&num4);
    maxi=max(num1,num2,num3,num4);
    printf("maximum number: %d",maxi);
    
    
    
    
}
int max(int a,int b,int c,int d)
{
    int max=0;
        
        if(a>b)
        {
            max=a;
        }
        else 
        {
            max=b;
        }
        if(max>c)
        {
            max=max;
        }   
        else
        {
            max=c;
        }
        if (max>d)
        {
            max=max;
        }
        else
        {
            max=d;
        }
    return max;  
}
