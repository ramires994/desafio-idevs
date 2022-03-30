#include<stdio.h>

int main(){
//declaração de variaveis
    int n=0, c1=0, c2=0, c3=0, parar=0, soma=0;
    
    scanf("%d", &n);
    
    int primos[n], divisores[n];
//calcular quantos divisores cada numero tem até N e armazena-los no vetor "divisores"   
    for(c1=0;c1<n; c1++){
        divisores[c1]=0;
        for(c2=1; c2<=c1; c2++){
            if(c1%c2 == 0){
                divisores[c1]= divisores[c1]+1;    
            }
        }
    }
/*salvar todos os numeros que tem 2 divisores no vetor "primos", pois se um numero tem 2 divisores significa que ele so é divisivel por ele mesmo e por 1,
os outros numeros serão armazenados como 0 para que nao influenciem na soma*/     
    for(c1=0; c1<n; c1++){
        primos[c1]=0;
        if(divisores[c1] == 2){
            primos[c1]=c1;
        }
    }
//somando todos os numeros primos até que ultrapasse N
    for(c1=0;soma<=n;c1++){
        soma = soma + primos[c1];
    }
/*subtraindo um numero primo por vez em ordem decrecente iniciando pelo ultimo somado, testando se o resultado não é um primo,
e se for ele sera imprimido no console*/    
    c3 = c1;
    for(c1;parar==0;c1--){
        for(c2=0;c2<=n;c2++){
            if(soma==primos[c2]){
                parar = 1;
                printf("%d = ", soma);
                c3 = primos[c1+1];
            }    
        }
        soma = soma - primos[c1];
    }
//imprimindo no console a soma feita para chegar ao resultado    
    printf("2");
    for(c1=3;primos[c1]<c3;c1++){
        if(primos[c1] == 0){
        }
        else{
            printf(" + %d", primos[c1]);
        }
    }
    
    return 0;
}
