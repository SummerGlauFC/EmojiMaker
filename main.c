#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <memory.h>
#include <ctype.h>


void getLetter(char let, int letter[5][5]){
    char inp = toupper(let);
    if(inp == 'A'){
        int A[5][5] = {
            { 0, 1, 1, 0 },
            { 1, 0, 0, 1 },
            { 1, 1, 1, 1 },
            { 1, 0, 0, 1 },
            { 1, 0, 0, 1 }
        };  
        memcpy(letter,A,sizeof(A));
    }
    else if(inp == 'B'){
        int B[5][5] = {
            { 1, 1, 1, 1 },
            { 1, 0, 0, 1 },
            { 1, 1, 1, 0 },
            { 1, 0, 0, 1 },
            { 1, 1, 1, 1 }
        };  
        memcpy(letter,B,sizeof(B));
    }
    else if(inp == 'C'){
        int C[5][5] = {
            { 0, 1, 1, 1 },
            { 1, 0, 0, 0 },
            { 1, 0, 0, 0 },
            { 1, 0, 0, 0 },
            { 0, 1, 1, 1 }
        };  
        memcpy(letter,C,sizeof(C));
    }
    else if(inp == 'D'){
        int D[5][5] = {
            { 1, 1, 1, 0 },
            { 1, 0, 0, 1 },
            { 1, 0, 0, 1 },
            { 1, 0, 0, 1 },
            { 1, 1, 1, 0 }
        };  
        memcpy(letter,D,sizeof(D));
    }
    else if(inp == 'E'){
        int E[5][5] = {
            { 1, 1, 1, 1 },
            { 1, 0, 0, 0 },
            { 1, 1, 1, 1 },
            { 1, 0, 0, 0 },
            { 1, 1, 1, 1 }
        };  
        memcpy(letter,E,sizeof(E));
    }
    else if(inp == 'F'){
        int F[5][5] = {
            { 1, 1, 1, 1 },
            { 1, 0, 0, 0 },
            { 1, 1, 1, 1 },
            { 1, 0, 0, 0 },
            { 1, 0, 0, 0 }
        };  
        memcpy(letter,F,sizeof(F));
    }
    else if(inp == 'G'){
        int G[5][5] = {
            { 1, 1, 1, 1 },
            { 1, 0, 0, 0 },
            { 1, 0, 1, 1 },
            { 1, 0, 0, 1 },
            { 1, 1, 1, 1 }
        };  
        memcpy(letter,G,sizeof(G));
    }
    else if(inp == 'H'){
        int H[5][5] = {
            { 1, 0, 0, 1 },
            { 1, 0, 0, 1 },
            { 1, 1, 1, 1 },
            { 1, 0, 0, 1 },
            { 1, 0, 0, 1 }
        };  
        memcpy(letter,H,sizeof(H));
    }
    else if(inp == 'I'){
        int I[5][5] = {
            { 1, 1, 1, 1 },
            { 0, 1, 1, 0 },
            { 0, 1, 1, 0 },
            { 0, 1, 1, 0 },
            { 1, 1, 1, 1 }
        };  
        memcpy(letter,I,sizeof(I));
    }
    else if(inp == 'J'){
        int J[5][5] = {
            { 1, 1, 1, 1 },
            { 0, 1, 1, 0 },
            { 0, 1, 1, 0 },
            { 0, 1, 1, 0 },
            { 1, 1, 1, 0 }
        };  
        memcpy(letter,J,sizeof(J));
    }
    else if(inp == 'K'){
        int K[5][5] = {
            { 1, 0, 0, 1 },
            { 1, 0, 1, 0 },
            { 1, 1, 0, 1 },
            { 1, 0, 1, 1 },
            { 1, 0, 0, 1 }
        };  
        memcpy(letter,K,sizeof(K));
    }
    else if(inp == 'L'){
        int L[5][5] = {
            { 1, 0, 0, 0 },
            { 1, 0, 0, 0 },
            { 1, 0, 0, 0 },
            { 1, 0, 0, 0 },
            { 1, 1, 1, 1 }
        };  
        memcpy(letter,L,sizeof(L));
    }
    else if(inp == 'M'){
        int M[5][5] = {
            { 0, 1, 0, 1, 0 },
            { 1, 0, 1, 0, 1 },
            { 1, 0, 1, 0, 1 },
            { 1, 0, 1, 0, 1 },
            { 1, 0, 0, 0, 1 }
        };  
        memcpy(letter,M,sizeof(M));
    }
    else if(inp == 'N'){
        int N[5][5] = {
            { 1, 0, 0, 1 },
            { 1, 1, 0, 1 },
            { 1, 1, 1, 1 },
            { 1, 0, 1, 1 },
            { 1, 0, 0, 1 }
        };  
        memcpy(letter,N,sizeof(N));
    }
    else if(inp == 'O'){
        int O[5][5] = {
            { 1, 1, 1, 1 },
            { 1, 0, 0, 1 },
            { 1, 0, 0, 1 },
            { 1, 0, 0, 1 },
            { 1, 1, 1, 1 }
        };  
        memcpy(letter,O,sizeof(O));
    }
    else if(inp == 'P'){
        int P[5][5] = {
            { 1, 1, 1, 1 },
            { 1, 0, 0, 1 },
            { 1, 1, 1, 1 },
            { 1, 0, 0, 0 },
            { 1, 0, 0, 0 }
        };  
        memcpy(letter,P,sizeof(P));
    }
    else if(inp == 'Q'){
        int Q[5][5] = {
            { 1, 1, 1, 1 },
            { 1, 0, 0, 1 },
            { 1, 0, 0, 1 },
            { 1, 0, 1, 1 },
            { 1, 1, 1, 1 }
        };  
        memcpy(letter,Q,sizeof(Q));
    }
    else if(inp == 'R'){
        int R[5][5] = {
            { 1, 1, 1, 1 },
            { 1, 0, 0, 1 },
            { 1, 1, 1, 0 },
            { 1, 0, 1, 0 },
            { 1, 0, 0, 1 }
        };  
        memcpy(letter,R,sizeof(R));
    }
    else if(inp == 'S'){
        int S[5][5] = {
            { 1, 1, 1, 1 },
            { 1, 0, 0, 0 },
            { 1, 1, 1, 1 },
            { 0, 0, 0, 1 },
            { 1, 1, 1, 1 }
        };  
        memcpy(letter,S,sizeof(S));
    }
    else if(inp == 'T'){
        int T[5][5] = {
            { 1, 1, 1, 1 },
            { 0, 1, 1, 0 },
            { 0, 1, 1, 0 },
            { 0, 1, 1, 0 },
            { 0, 1, 1, 0 }
        };  
        memcpy(letter,T,sizeof(T));
    }
    else if(inp == 'U'){
        int U[5][5] = {
            { 1, 0, 0, 1 },
            { 1, 0, 0, 1 },
            { 1, 0, 0, 1 },
            { 1, 0, 0, 1 },
            { 1, 1, 1, 1 }
        };  
        memcpy(letter,U,sizeof(U));
    }
    else if(inp == 'V'){
        int V[5][5] = {
            { 1, 0, 0, 1 },
            { 1, 0, 0, 1 },
            { 1, 0, 0, 1 },
            { 0, 1, 1, 0 },
            { 0, 1, 1, 0 }
        };  
        memcpy(letter,V,sizeof(V));
    }
    else if(inp == 'W'){
        int W[5][5] = {
            { 1, 0, 0, 0, 1 },
            { 1, 0, 1, 0, 1 },
            { 1, 0, 1, 0, 1 },
            { 1, 0, 1, 0, 1 },
            { 0, 1, 1, 1, 0 }
        };  
        memcpy(letter,W,sizeof(W));
    }
    else if(inp == 'X'){
        int X[5][5] = {
            { 1, 0, 0, 1 },
            { 0, 1, 1, 0 },
            { 0, 1, 1, 0 },
            { 0, 1, 1, 0 },
            { 1, 0, 0, 1 }
        };  
        memcpy(letter,X,sizeof(X));
    }
    else if(inp == 'Y'){
        int Y[5][5] = {
            { 1, 0, 0, 1 },
            { 1, 0, 0, 1 },
            { 0, 1, 1, 0 },
            { 0, 1, 1, 0 },
            { 0, 1, 1, 0 }
        };  
        memcpy(letter,Y,sizeof(Y));
    }
    else if(inp == 'Z'){
        int Z[5][5] = {
            { 1, 1, 1, 1 },
            { 0, 0, 0, 1 },
            { 0, 1, 1, 0 },
            { 1, 0, 0, 0 },
            { 1, 1, 1, 1 }
        };  
        memcpy(letter,Z,sizeof(letter));
    }
}

int main()
{
    int row, col;
    char word[500];
    char emote1[25];
    char emote2[25];

    printf("%s\n","Enter the word");
    scanf("%s",word);

    printf("%s\n","Enter first emoticon with colons. This will be used for the Letters.");
    scanf("%s",emote1);

    printf("%s\n","Enter first emoticon with colons. This will be used for the Blank Space.");
    scanf("%s",emote2);
    printf("\n");
    
    int max; 
    int length = (4*strlen(word)) + strlen(word)-1;
    int letter[5][5];
    memset(letter, 0, sizeof(letter[0][0]) * 5 * 5);
    int fcol = 0;
    for(row = 0; row < 5; row++){
        fcol = 0;
        for(int i = 0; i < strlen(word); i++){
            max = 4;
            if(toupper(word[i]) == 'W' || toupper(word[i]) == 'M')
            max = 5;
            getLetter(word[i],letter);
            for(col = 0; col < max; col++){
                if(letter[row][col] == 1){
                    printf("%s",emote1);
                }
                else if(letter[row][col] == 0){
                    printf("%s",emote2);
                }
            }
            if(i < strlen(word)-1)
            printf("%s",emote2);
        }
        printf("\n");
    }

    return 0;
}
