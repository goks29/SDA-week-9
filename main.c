#include <stdio.h>
#include "nbtrees.h"

int main(){
    Isi_Tree F;
    Create_tree(F,0);
    printf("%c",F[1].info);
}