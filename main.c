#include <stdio.h>
#include "nbtrees.h"

int main(){
    Isi_Tree F;
    Create_tree(F,0);
    if (IsEmpty(F))
    {
        printf("Tree Gagal Dibuat");
        return;
    }
    
    PreOrder(F,1);
    
}