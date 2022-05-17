#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<conio.h>

int main(){
    srand(time(NULL));
    int zar1,zar2,i,j,zarToplam,puan;
    
    zar1=1+rand()%6;
    zar2=1+rand()%6;

    zarToplam=zar1+zar2;
        
            if(zarToplam==11 || zarToplam==7)
            printf("zar1=%d  zar2=%d  zarlarin toplami=%d oyuncu kazandi",zar1,zar2,zarToplam);
    
            else if(zarToplam==3 || zarToplam==12)
            printf("zar1=%d zar2=%d zarlarin toplami=%d oyuncu kaybetti",zar1,zar2,zarToplam);

            else if (zarToplam==4||zarToplam==5||zarToplam==6||zarToplam==8||zarToplam==9||zarToplam==10)
            {
                puan=zarToplam;
                printf("puaniniz=%d\n",puan);
                printf("tekar zar atiniz\n");
                getch();
            
                
                zar1=1+rand()%6;
                zar2=1+rand()%6;
                zarToplam=zar1+zar2;
                if(zarToplam==7)
                     printf("zar1=%d  zar2=%d  zarlarin toplami=%d oyunu kaybettiniz",zar1,zar2,zarToplam);
                else if(zarToplam==puan)
                     printf("puan=%d zar1=%d zar2=%d zarlarin toplami=%d oyunu kazandiniz",puan,zar1,zar2,zarToplam);
            
                 else
                {
                    while(1)
                    {                       
                        printf("zar toplami=%d\n",zarToplam);
                        printf("tekrar zar atiniz\n");
                        getch();
                        zar1=1+rand()%6;
                        zar2=1+rand()%6;  
                        zarToplam=zar1+zar2;
                        if(zarToplam==7)
                        {   
                            printf("zar1=%d  zar2=%d  zarlarin toplami=%d oyunu kaybettiniz",zar1,zar2,zarToplam);
                             break;                    
                        }
                        else if (zarToplam==puan)
                        {
                             printf("puan=%d zar1=%d zar2=%d zarlarin toplami=%d oyunu kazandiniz",puan,zar1,zar2,zarToplam);
                            break;
                        }
                        else
                        continue;   
                             
                        break;     
                    }
                } 
           }
    getchar();
    return 0;
}