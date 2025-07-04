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

void PrintAwal(Isi_Tree X){
    int i;
    for(i=1;i<11;i++){
        printf("--> indeks ke %d\n",i);
        printf("----------------------------");
        printf("\nInfo Array ke-%d : %c",i,X[i].info);
        printf("\nfirst son array ke-%d : %d",i,X[i].ps_fs);
        printf("\nnext brother array ke-%d : %d",i,X[i].ps_nb);
        printf("\nparent array ke-%d : %d",i,X[i].ps_pr);
        printf("\n----------------------------\n\n");
    }
}

/***** Traversal *****/
void PreOrder (Isi_Tree P){
    int current;
    boolean resmi;

    current = 1;
    resmi = true;
    printf("%c -> ",P[current].info);

    while(current != nil){
        if(P[current].ps_fs != nil && resmi){
            current = P[current].ps_fs;
            printf("%c -> ",P[current].info);
        }else if(P[current].ps_nb != nil){
            current = P[current].ps_nb;
            printf("%c -> ",P[current].info);
            resmi = true;
        }else{
            current = P[current].ps_pr;
            resmi = false;
        }
    }
}

void InOrder(Isi_Tree P){
    int current = 1;
    boolean resmi = true;

    while (current != nil) {
        if (P[current].ps_fs != nil && resmi) {
            current = P[current].ps_fs;
        } else {
            if (resmi) {
                printf("%c -> ", P[current].info);
            }
            if (current == P[P[current].ps_pr].ps_fs) {
                printf("%c -> ", P[P[current].ps_pr].info);
            }
            if (P[current].ps_nb != nil) {
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
    int current;
    boolean resmi;

    current = 1;
    resmi = false;
    while(current != nil){
        if(P[current].ps_fs != nil && !resmi){
            current = P[current].ps_fs;
        }else{
            printf("%c -> ",P[current].info);
            if(P[current].ps_nb != nil){
                current = P[current].ps_nb;
                resmi = false;
            }else{
                current = P[current].ps_pr;
                resmi = true;
            }
        }
    }
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

void PrintTreeHelper(Isi_Tree P, int index, int level) {
    if (index == nil || P[index].info == '\0'){
        return;
    } 
    
    if (index == nil || P[index].info == '\0'){
        return;
    } 

    for (int i = 0; i < level; i++) {
        printf("  ");
    }
    printf("%c\n", P[index].info);

    PrintTreeHelper(P,P[index].ps_fs, level + 1); 
    PrintTreeHelper(P,P[index].ps_nb, level);     
}

void PrintTree(Isi_Tree P) {
    PrintTreeHelper(P,1, 0); 
}

boolean Search (Isi_Tree P, infotype X){
    for (int current = 1; current != jml_maks;current++){
        if (P[current].info == X) {
            return true;
        }
    }
    return false;
    
}

/***** Fungsi Lain *****/
int nbElmt (Isi_Tree P){
    int current,jmlnode;
    boolean resmi;
    jmlnode = 0;
    current = 1;
    resmi = false;

    while(current != nil){
        if(P[current].ps_fs != nil && !resmi){
            current = P[current].ps_fs;
        }else{
            jmlnode++;
            if(P[current].ps_nb != nil){
                current = P[current].ps_nb;
                resmi = false;
            }else{
                current = P[current].ps_pr;
                resmi = true;
            }
        }
    }
    return jmlnode;
}

int nbDaun (Isi_Tree P){
    int current = 1;
    int Jml_Daun = 0;
    boolean resmi = true;

    while (current != nil) {
        if (P[current].ps_fs != nil && resmi) {
            current = P[current].ps_fs;
            resmi = true;
        } else {
            if (P[current].ps_fs == nil) {
                Jml_Daun++;
            }

            if (P[current].ps_nb != nil) {
                current = P[current].ps_nb;
                resmi = true;
            } else {
                current = P[current].ps_pr;
                resmi = false;
            }
        }
    }
    return Jml_Daun;
}


int Level (Isi_Tree P, infotype X){
    int index = 1;
    int depth = 0;

    while (index <= jml_maks && P[index].info != X) {
        index++;
    }

    if (index > jml_maks) {
        return nil;
    }

    while (P[index].ps_pr != nil) {
        index = P[index].ps_pr;
        depth++;
    }

    return depth;
}


int Depth_Rekursif(Isi_Tree P, int node) {
    if (node == nil) {
        return 0;
    } 

    int max = 0;
    int child = P[node].ps_fs;

    while (child != nil) {
        int d = Depth_Rekursif(P, child);
        if (d > max) {
            max = d;
        } 
        child = P[child].ps_nb;
    }

    return 1 + max;
}

int Depth(Isi_Tree P) {
    return Depth_Rekursif(P, 1);
}

int Max (Isi_Tree P, infotype Data1, infotype Data2){
    int data1 = Level(P,Data1);
    int data2 = Level(P,Data2);

    if (data1 == nil || data2 == nil) {
        return nil;
    }
    
    if (data1 == data2) {
        return 0;
    } else if (data1 > data2){
        return Data1;
    } else {
        return Data2;
    }
}
