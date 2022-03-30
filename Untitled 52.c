#include <stdio.h>

int main(){
//declaração de variaveis
    int i=0,j=0, v[10000];
//calculando quantos divisores cada numero tem    
    for(i=0; i<10000; i++){
        for(j=i; j>0;j--){
            if(i%j==0){
                v[i] = v[i]+1;    
            }
        }
    }
//testando se um numero tem a mesma quantidade de divisores do seu sucessor, e imprimindo os que passam no teste
    for(i=0; i<10000; i++){
        if(v[i] == v[i+1]){
            printf("%d ", i);
        }
    }
    return 0;
}
