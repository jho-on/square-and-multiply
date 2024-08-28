#include <stdio.h>

long long  pow(long long  num, long long  mod){
    return (num * num) % mod;
}

long long  mul(long long  num1, long long  num2, long long  mod){
    return (num1 * num2) % mod;
}

long long  sam(long long  base, long long  exp, long long  mod){
    if(exp == 0){
        return 1;
    }else if(exp % 2 == 0){
        return pow(sam(base, exp / 2, mod), mod);
    }else{
        return mul(base, sam(base, exp - 1, mod), mod);
    }
}

int main(){
    long long  base, exp, mod;

    printf("Qual o número da base:");
    scanf("%lld", &base);

    printf("Qual o número do expoente:");
    scanf("%lld", &exp);
   
    printf("Qual o número do módulo:");
    scanf("%lld", &mod);

    long long  res = sam(base, exp, mod);
   
    printf("%lld^%lld mod %lld = %lld mod %lld", base, exp, mod, res, mod);
    return 0;
}