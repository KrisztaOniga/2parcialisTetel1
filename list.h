//
// Created by Kriszta Oniga on 5/4/2022.
//

#ifndef INC_2PARCIALISTETEL1_LIST_H
#define INC_2PARCIALISTETEL1_LIST_H

#include "user.h"
typedef struct UserNode {
    User* userValue;
    struct UserNode* next;
}UserNode;

void createUserNode(UserNode** userNode, User* userValue);
void printUserList(UserNode* userNode, char* destination);
User* findElementInList(UserNode* userNode, int userId);
void insertFirst(UserNode** userNode, User* userValue);
void insertLast(UserNode* userNode, User* userValue);

User* removeFirst(UserNode** userNode);
User* removeLast(UserNode* userNode);
void deleteUserList(UserNode** userNode);
void deleteUserNode(UserNode **userNode, User * userValue);


#endif //INC_2PARCIALISTETEL1_LIST_H
