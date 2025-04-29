#include <stdio.h>
#include "nbtrees.h"

int main(){
    Isi_Tree F;
    Create_tree(F, 0);

    if (IsEmpty(F)) {
        printf("Tree Gagal Dibuat");
        return 0;
    }

    int PilihMenu;
    while(1){
        printf("\n==========================\n");
        printf(" 1. Traversal PreOrder\n"
               " 2. Traversal InOrder\n"
               " 3. Traversal PostOrder\n"
               " 4. Traversal Level Order\n"
               " 5. Print Tree\n"
               " 6. Search Node Tree\n"
               " 7. Jumlah Daun/Leaf\n"
               " 8. Mencari Level Node Tree\n"
               " 9. Kedalaman Tree\n"
               "10. Membandingkan 2 Node Tree\n"
               "11. Exit\n");
        printf("Pilih Menu: ");
        scanf("%d", &PilihMenu);

        switch (PilihMenu) {
            case 1:
                PreOrder(F);
                printf("\n\n");
                break;
            case 2:
                InOrder(F);
                printf("\n\n");
                break;
            case 3:
               
                break;
            case 4:
                
                break;
            case 5:
                
                break;
            case 6:
                
                break;
            case 7:
              
                break;
            case 8:
                
                break;
            case 9:
            
                break;
            case 10:
                
                break;
            case 11:
                printf("Program selesai.\n");
                return 0;
            default:
                printf("Input tidak valid.\n");
                break;
        }
    }
}
