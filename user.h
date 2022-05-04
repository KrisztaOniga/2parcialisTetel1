//
// Created by Kriszta Oniga on 5/4/2022.
//

#ifndef INC_2PARCIALISTETEL1_USER_H
#define INC_2PARCIALISTETEL1_USER_H

typedef struct {
    char name[50];
    char *pName;
    float kg;
}User;

void createUser( User ** user);

User * setUsersData(
        User * user,
        char *name,
        float kg
);

void printUser(User *user, char *destination);

void deleteUser(User **user);

#endif //INC_2PARCIALISTETEL1_USER_H
