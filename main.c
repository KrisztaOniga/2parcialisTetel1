#include <stdio.h>
#include <stdlib.h>
#include "list.h"

int main() {
    int n;
    scanf("%i", &n);

    FILE *fin = fopen("szemelyek.txt", 'r');
    if(!fin){
        printf("Sikertelen file megnyitas!\n");
    }

    int x;
    fscanf(fin, "%i", &x);
    UserNode *userNode;
    User *user1;
    fscanf(fin, "%s %i",user1->name, &user1->kg);


    return 0;
}
