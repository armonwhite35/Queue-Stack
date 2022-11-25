/* Class: LinkedList
 * Author: Samuel Cho                                                           
 * Description: Very basic singly linked List class with single head 
 * class for use with "Data" object. It is meant to be inherited for
 * more complex linked lists.
 */

#include <iostream>
#include "LinkedList.h"
#include "Data.h"
using namespace std;

Node::Node(const Data &d, Node *n) {
    dat = d;
    next = n;
}

LinkedList::LinkedList() {
    head = nullptr; // empty list
}

void LinkedList::print(ostream &os) {
    // start at the head of the list
    Node *curr = head;
    while (curr != nullptr) {
        os << curr->dat << endl; // use overloaded output operator to print
        curr = curr->next; // go to next node in list
    }
}
void LinkedList::pop_head() {
    // if not an empty list
    if (head != nullptr) {
        // save location of where head points
        Node *curr = head;
        // head points to next node
        head = head->next;
        // delete node where head originally pointed
        delete curr;
    }
}
LinkedList::~LinkedList() {
    // keep popping until empty list
    while (head != nullptr) {
        pop_head();
    }
}
