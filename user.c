//
// Created by Kriszta Oniga on 5/4/2022.
//
#include "user.h"
#include "stdio.h"
#include "stdlib.h"
#include "string.h"

void createUser(User **user) {
    *user = malloc(sizeof (User));
    if(!(*user)){
        printf("MEMORY_ALLOCATION");
    }
}

User * setUsersData(
        User * user,
        char *name,
        float kg) {
    if (!user) {
        printf("NULL_POINTER_EXCEPTION");
    }
    user->kg = kg;
    strcpy(user->name, name);
}

void printUser(User *user, char *destination) {
    if(!user) {
        printf("NULL_POINTER_EXCEPTION");
    }
    freopen(destination, "w", stdout);
    printf("\n\tName: %s "
           "\n\t\t - KG: %f\n",
           user->name,
           user->kg);
    printf("\n");
    freopen("CON", "w", stdout);
}

void deleteUser(User **user){
    if(*user != NULL){
        //deleteProductArray(&(*user)->myProducts);
        free(*user);
        *user = NULL;
    }
}


