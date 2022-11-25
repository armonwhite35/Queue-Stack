//
// Created by armon on 4/28/2020.
//

#include "Stack.h"
Stack::Stack(){
    head = nullptr;
}
void Stack::push_head(Data &d) {
    if(head == nullptr){
        Node *tmp = new Node(d, nullptr);
        head = tmp;
    }else{
        Node *tmp = new Node(d, head);
        head = tmp;
    }

}
bool Stack::pop_head() {
    Node *ptr = head;
    head = head->next;
    delete(ptr);
    if ( head->next != nullptr){
     return true;
    } else{
        return false;
    }
}