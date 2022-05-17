#include<stdio.h>
#include<time.h>
int main(void){
    clock_t start_t, end_t;
    int id1, id2;
    start_t = clock();
    for(id1=0; id1<20000000; id1++){
        for(id2=0; id2<100; id2++){}
    }
    end_t = clock();
    printf("start_t değeri: %lu\n", start_t);
    printf("end_t değeri: %lu\n", end_t);
    printf("dongu calisma suresi: %.3f", (double)(end_t - start_t) / CLOCKS_PER_SEC);
    return 0;
}