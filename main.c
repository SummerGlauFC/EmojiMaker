#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <memory.h>
#include <ctype.h>
#include <gtk/gtk.h>


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
            { 1, 1, 1, 1 },
            { 1, 0, 0, 0 },
            { 1, 0, 0, 0 },
            { 1, 0, 0, 0 },
            { 1, 1, 1, 1 }
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
            { 1, 1, 0, 0 },
            { 1, 0, 1, 0 },
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
            { 1, 1, 1, 1, 1 },
            { 1, 0, 1, 0, 1 },
            { 1, 0, 1, 0, 1 },
            { 1, 0, 1, 0, 1 },
            { 1, 0, 1, 0, 1 }
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
            { 1, 0, 1, 0 },
            { 1, 1, 0, 1 }
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
            { 1, 0, 0, 1 },
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
        memcpy(letter,Z,sizeof(Z));
    }
    else if(inp == '?'){
        int QU[5][5] = {
            { 1, 1, 1, 1 },
            { 0, 0, 0, 1 },
            { 0, 1, 1, 1 },
            { 0, 0, 0, 0 },
            { 0, 1, 0, 0 }
        };  
        memcpy(letter,QU,sizeof(QU));
    }
    else if(inp == '1'){
        int One[5][5] = {
            { 1, 1, 1, 0 },
            { 0, 1, 1, 0 },
            { 0, 1, 1, 0 },
            { 0, 1, 1, 0 },
            { 1, 1, 1, 1 }
        };  
        memcpy(letter,One,sizeof(One));
    }
}

typedef struct {
    GtkWidget *inputw;
    GtkWidget *emoji1;
    GtkWidget *emoji2;
    GtkClipboard *clipb;
}widgets;

static void getEmoteText (GtkWidget *widget,
                         widgets *mydata,
                         gpointer   data)
{
    int row, col;
    const char* word = gtk_entry_get_text(GTK_ENTRY(mydata->inputw));
    const char* emote1 = gtk_entry_get_text(GTK_ENTRY(mydata->emoji1));
    const char* emote2 = gtk_entry_get_text(GTK_ENTRY(mydata->emoji2)); 
    
    int max;
    char string[5000];
    memset(string, 0, sizeof(string));
    memmove(string,".\n",2);
    int strcount = 2;
    int em1len = strlen(emote1);
    int em2len = strlen(emote2);
    int letter[5][5];
    memset(letter, 0, sizeof(letter[0][0]) * 5 * 5);
    for(row = 0; row < 5; row++){
        for(int i = 0; i < strlen(word); i++){
            max = 4;
            if(toupper(word[i]) == 'W' || toupper(word[i]) == 'M')
            max = 5;
            getLetter(word[i],letter);
            for(col = 0; col < max; col++){
                if(letter[row][col] == 1){
                    memmove(string+strcount,emote1,em1len);
                    strcount += em1len;
                    printf("%s",emote1);
                }
                else if(letter[row][col] == 0){
                    printf("%s",emote2);
                    memmove(string+strcount,emote2,em2len);
                    strcount += em2len;
                }
            }
            if(i < strlen(word)-1){
                printf("%s",emote2);
                memmove(string+strcount,emote2,em2len);
                strcount += em2len;
            }
        }
        printf("\n");
        memmove(string+strcount,"\n",1);
        strcount += 1;
    }
    gtk_clipboard_set_text(mydata->clipb,string,-1);
    printf("\n");

}



int main(int argc, char *argv[])
{
    GtkWidget *window;
    GtkWidget *button;
    GtkWidget *inputw;
    GtkWidget *emoji1;
    GtkWidget *emoji2;
    GtkWidget *grid;
    GtkClipboard *clipb;
    
    widgets data;
    
    
    gtk_init (&argc, &argv);
    
    grid = gtk_grid_new ();
    
    window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    
    inputw = gtk_entry_new ();
    emoji1 = gtk_entry_new ();
    emoji2 = gtk_entry_new ();
    clipb = gtk_clipboard_get (GDK_SELECTION_CLIPBOARD);
    
    data.inputw = inputw;
    data.emoji1 = emoji1;
    data.emoji2 = emoji2;
    data.clipb = clipb;
    
    
    gtk_entry_set_placeholder_text(GTK_ENTRY(inputw), "Word to Convert");
    gtk_entry_set_placeholder_text(GTK_ENTRY(emoji1), "Emote for Text");
    gtk_entry_set_placeholder_text(GTK_ENTRY(emoji2), "Emote for Blank");

    gtk_window_set_title(GTK_WINDOW(window), "EmojiMaker");
    button = gtk_button_new_with_label("Convert Text");
    
    g_signal_connect(window, "destroy", G_CALLBACK(gtk_main_quit),NULL);
    g_signal_connect(button,"clicked",G_CALLBACK(getEmoteText),&data);
    
    
    gtk_container_set_border_width(GTK_CONTAINER(window), 40);
    gtk_container_add(GTK_CONTAINER(window), grid);
    
    
    gtk_grid_attach (GTK_GRID (grid), inputw, 0, 0, 2, 1);
    gtk_grid_attach (GTK_GRID (grid), emoji1, 0, 1, 1, 1);
    gtk_grid_attach (GTK_GRID (grid), emoji2, 1, 1, 1, 1);
    gtk_grid_attach (GTK_GRID (grid), button, 0, 2, 2, 1);


    
    gtk_widget_show_all(window);
    gtk_main();
    return 0;
}
