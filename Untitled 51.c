#include<stdio.h>


int main(){
//declaração de variaveis     
     char tamanho[100];
     int i,j=0;
//escaneando a palavra     
     scanf("%[^\n]s", tamanho);  
//adicionando pontos respectivos a cada letra     
     for(i=0;tamanho[i] != '\0'; i++){
         if(tamanho[i] == 'A' || tamanho[i] == 'a' || tamanho[i] == 'E' || tamanho[i] == 'e' || tamanho[i] == 'I' || tamanho[i] == 'i' || tamanho[i] == 'O' || tamanho[i] == 'o' || tamanho[i] == 'U' || tamanho[i] == 'u' || tamanho[i] == 'L' || tamanho[i] == 'l' || tamanho[i] == 'N' || tamanho[i] == 'n' || tamanho[i] == 'R' || tamanho[i] == 'r' || tamanho[i] == 'S' || tamanho[i] == 's' || tamanho[i] == 'T' || tamanho[i] == 't'){
             j=j+1; 
        }
         else if(tamanho[i] == 'D' || tamanho[i] == 'd' || tamanho[i] == 'G' || tamanho[i] == 'g'){
             j=j+2;
        }
        else if(tamanho[i] == 'B' || tamanho[i] == 'b' || tamanho[i] == 'C' || tamanho[i] == 'c' || tamanho[i] == 'M' || tamanho[i] == 'm' || tamanho[i] == 'P' || tamanho[i] == 'p'){
            j=j+3;
        }
        else if(tamanho[i] == 'F' || tamanho[i] == 'f' || tamanho[i] == 'H' || tamanho[i] == 'h' || tamanho[i] == 'V' || tamanho[i] == 'v' || tamanho[i] == 'W' || tamanho[i] == 'w' || tamanho[i] == 'Y' || tamanho[i] == 'y'){
            j=j+4;
        }
        else if(tamanho[i] == 'K' || tamanho[i] == 'k'){
            j=j+5;
        }
        else if(tamanho[i] == 'J' || tamanho[i] == 'j' || tamanho[i] == 'X' || tamanho[i] == 'x'){
            j=j+8;
        }
        else if(tamanho[i] == 'Q' || tamanho[i] == 'q' || tamanho[i] == 'Z' || tamanho[i] == 'z'){
            j=j+10;
        }
    }
//imprimindo a pontuação
    printf("%d", j);
    
    return 0;
         
 }
