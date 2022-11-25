/* Class: LinkedList
 * Author: Samuel Cho                                                           
 * Description: Very basic singly linked List class with single head 
 * class for use with "Data" object. It is meant to be inherited for
 * more complex linked lists. (Comes with Node class.)
 */

#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include <iostream>
#include "Data.h"
using namespace std;

class Node {
public:
    Data dat; // object at node
    Node *next; // pointer to next node

    Node(const Data &d, Node *n);
};

class LinkedList {
protected:
    Node *head;
public:
    LinkedList();
    void print(ostream &os);
    void pop_head();
    ~LinkedList();
};

#endif //LINKEDLIST_H
