#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "declarations.h"

int main(){
    Position root=NULL;
    Position extra=NULL;
    int comNum=0, check=0;
    while(1){
        printf("\n1. Insert"
                "\n2. Inorder print"
                "\n3. Preorder print"
                "\n4. Postorder print"
                "\n5. Levelorder print"
                "\n7. Exit"
                "\n----------------------------"
                "\nInput command number:\t");
        scanf(" %d", &comNum);

        switch(comNum){
            case 1: 
                extra=createElem();
                if(extra==NULL){
                    return -1;
                }
                root=insert(root, extra);
                break;
            case 2:
                InOrderPrint(root);
                break;
            case 3:
                PreOrderPrint(root);
                break;
            case 4:
                PostOrderPrint(root);
                break;
            case 5:
                check=LevelOrderPrint(root);
                if(check<0)
                    return 0;
                break;
            case 7:
                freeTree(root);
                return 0;          
            default:
                printf("Wrong input!");
        }
    }

    return 0;
}
