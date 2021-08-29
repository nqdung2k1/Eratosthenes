// Sang so nguyen to Eratosthenes
// Thuat toan
// + Danh dau tat ca cac so deu la so nguyen to
// + Voi moi so nguyen to nho hon sqrt(n):
//   + Danh dau cac boi lon hon no la so nguyen to

#include<stdio.h>

void sieve(int N){
    int isPrime[N+1];
    for(int i = 0; i <= N; ++i){
        isPrime[i] = 1;
    }
    isPrime[0] = 0;
    isPrime[1] = 0;
    for(int i = 2; i*i <= N; ++i){
        if(isPrime[i] == 1){
            for(int j = i*i; j <= N; j+=i){
                isPrime[j] = 0;
            }
        }
    }
    //In ra
    for(int i = 0; i <= N; ++i){
        if(isPrime[i] == 1) printf("\n%d", i);
    }
}

int main(){
    int n;
    printf("\nNhap n: ");
    scanf("%d", &n);
    sieve(n);
    return 0;
}