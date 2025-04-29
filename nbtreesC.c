#include "nbtrees.h"
#include <stdio.h>
#include <stdlib.h>

void Create_tree(Isi_Tree X, int Jml_Node){
    //1
    X[1].info = 'A';
    X[1].ps_fs = 1;
    X[1].ps_nb = 3;
    X[1].ps_pr = 0;

    //2
    X[2].info = 'B';
    X[2].ps_fs = 0;
    X[2].ps_nb = 0;
    X[2].ps_pr = 0;

    //3
    X[2].info = 'C';
    X[2].ps_fs = 0;
    X[2].ps_nb = 0;
    X[2].ps_pr = 0;

    //4
    X[2].info = 'D';
    X[2].ps_fs = 0;
    X[2].ps_nb = 0;
    X[2].ps_pr = 0;

    //5
    X[2].info = 'E';
    X[2].ps_fs = 0;
    X[2].ps_nb = 0;
    X[2].ps_pr = 0;

    //6
    X[2].info = 'F';
    X[2].ps_fs = 0;
    X[2].ps_nb = 0;
    X[2].ps_pr = 0;

    //7
    X[2].info = 'G';
    X[2].ps_fs = 0;
    X[2].ps_nb = 0;
    X[2].ps_pr = 0;

    //8
    X[2].info = 'H';
    X[2].ps_fs = 0;
    X[2].ps_nb = 0;
    X[2].ps_pr = 0;

    //9
    X[2].info = 'I';
    X[2].ps_fs = 0;
    X[2].ps_nb = 0;
    X[2].ps_pr = 0;

    //10
    X[2].info = 'J';
    X[2].ps_fs = 0;
    X[2].ps_nb = 0;
    X[2].ps_pr = 0;
}

boolean IsEmpty (Isi_Tree P){

}


/***** Traversal *****/
void PreOrder (Isi_Tree P){

}

void InOrder (Isi_Tree P){

}

void PostOrder (Isi_Tree P){

}

void Level_order(Isi_Tree X, int Maks_node){

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
