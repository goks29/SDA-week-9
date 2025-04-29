#include "nbtrees.h"
#include <stdio.h>
#include <stdlib.h>

void Create_tree(Isi_Tree X, int Jml_Node){
    //1
    X[1].info = 'A';
    X[1].ps_fs = 2;
    X[1].ps_nb = nil;
    X[1].ps_pr = nil;

    //2
    X[2].info = 'B';
    X[2].ps_fs = 4;
    X[2].ps_nb = 3;
    X[2].ps_pr = 1;

    //3
    X[3].info = 'C';
    X[3].ps_fs = 6;
    X[3].ps_nb = nil;
    X[3].ps_pr = 1;

    //4
    X[4].info = 'D';
    X[4].ps_fs = nil;
    X[4].ps_nb = 5;
    X[4].ps_pr = 2;

    //5
    X[5].info = 'E';
    X[5].ps_fs = 9;
    X[5].ps_nb = nil;
    X[5].ps_pr = 2;

    //6
    X[6].info = 'F';
    X[6].ps_fs = nil;
    X[6].ps_nb = 7;
    X[6].ps_pr = 3;

    //7
    X[7].info = 'G';
    X[7].ps_fs = nil;
    X[7].ps_nb = 8;
    X[7].ps_pr = 3;

    //8
    X[8].info = 'H';
    X[8].ps_fs = nil;
    X[8].ps_nb = nil;
    X[8].ps_pr = 3;

    //9
    X[9].info = 'I';
    X[9].ps_fs = nil;
    X[9].ps_nb = 10;
    X[9].ps_pr = 5;

    //10
    X[10].info = 'J';
    X[10].ps_fs = nil;
    X[10].ps_nb = nil;
    X[10].ps_pr = 5;
}

boolean IsEmpty (Isi_Tree P){
    if (P[1].ps_fs == nil)
    {
        return true;
    }else{
        return false;
    }
}

/***** Traversal *****/
void PreOrder (Isi_Tree P){
    
}

void InOrder (Isi_Tree P){
    int current = 1;
    boolean resmi = true;

    while (current != nil) {
        if (P[current].ps_fs != nil && resmi) {
            current = P[current].ps_fs;
            resmi = true;
        } else {
            printf("%c -> ",P[current].info);
        
            if(P[current].ps_nb != nil) {
                current = P[current].ps_nb;
                resmi = true;
            } else {
                current = P[current].ps_pr;
                resmi = false;
            }
        }
    }    
}

void PostOrder (Isi_Tree P){

}

void Level_order(Isi_Tree P, int Maks_node){
    int queue[jml_maks];
    int child, current;
    int front = 0, rear = 0;

    if (Maks_node == nil) {
        return;
    }

    rear++;
    queue[rear] = Maks_node;

    while (front < rear) {
        front++;
        current = queue[front]; 
        printf("%c -> ", P[current].info);
        child = P[current].ps_fs;
        while (child != nil) {
            rear++;
            queue[rear] = child;
            child = P[child].ps_nb;
        }
    }
    
}

void PrintTree (Isi_Tree P){

}

boolean Search (Isi_Tree P, infotype X){

}

/***** Fungsi Lain *****/
int nbElmt (Isi_Tree P){

}

int nbDaun (Isi_Tree P){

}

int Level (Isi_Tree P, infotype X){

}

int Depth (Isi_Tree P){

}

int Max (infotype Data1, infotype Data2){

}
