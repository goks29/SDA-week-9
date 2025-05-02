#include <stdio.h>
#include "nbtrees.h"

int main(){
    char huruf;
    int hasil,TDaun;
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
                PostOrder(F);
                printf("\n\n");
                break;
            case 4:
                Level_order(F,1);
                break;
            case 5:
                printf("\n");
                PrintTree(F);
                printf("\n\n");
                break;
            case 6:
                char huruf; 
                boolean cari;
                printf("Masukan huruf node yang ingin dicari : ");
                scanf(" %c",&huruf);
                getchar();
                cari = Search(F,huruf);

                if (cari == true) {
                    printf("node %c ada",huruf);
                } else {
                    printf("node %c tidak ada", huruf);
                }
                break;
            case 7:
                TDaun = nbDaun(F);
                printf("Jumlah Leaf Pada Tree : %d",TDaun);
                printf("\n\n");
                break;
            case 8:
                printf("\nMasukan huruf yang ingin dicari level nya : ");
                scanf(" %c",&huruf);
                hasil = Level(F,huruf);
                getchar();
                Level(F,huruf);

                if (hasil == nil) {
                    printf("Huruf %c tidak ditemukan di tree.\n", huruf);
                } else {
                    printf("Kedalaman huruf %c adalah %d\n", huruf, hasil);
                }

                break;
            case 9:
                hasil = Depth(F);
                printf("Kedalaman tree ini adalah : %d \n",hasil);
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
