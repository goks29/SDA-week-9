#include <stdio.h>
#include "nbtrees.h"

int main(){
    Isi_Tree F;
    Create_tree(F,0);
    InOrder(F,1);
    int PilihMenu;
    if (IsEmpty(F))
    {
        printf("Tree Gagal Dibuat");
        return;
    }
    
    while(1){
        printf( " 1. Traversal PreOrder\n "
                "2. Traversal InOrder\n "
                "3. Traversal PostOrder\n "
                "4. Traversal Level Order\n"
                " 5. Print Tree\n "
                "6. Search Node Tree\n" 
                " 7. Jumlah Daun/Leaf\n "
                "8. Mencari Level Node Tree\n" 
                " 9. Kedalaman Tree\n"
                "10. Membandingkan 2 Node Tree\n" 
                "11. Exit");
        printf("\nPilih Menu : ");
        scanf("%d",&PilihMenu);

        if(PilihMenu == 1){
            PreOrder(F,1);
            printf("\n\n");
        }else if(PilihMenu == 2){
            
        }else if(PilihMenu == 3){

        }else if(PilihMenu == 4){

        }else if(PilihMenu == 5){

        }else if(PilihMenu == 6){
            
        }else if(PilihMenu == 7){
            
        }else if(PilihMenu == 8){
            
        }else if(PilihMenu == 9){
            
        }else if(PilihMenu == 10){
            
        }else if(PilihMenu == 11){
            
        }else{
            printf("\nInput Tidak Valid\n");
        };
    };

}