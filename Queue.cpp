//
// Created by armon on 4/28/2020.
//

#include "Queue.h"
Queue::Queue(){
    tail = nullptr;
}
void Queue::enqueue_tail(Data &d) {
    if (tail == nullptr) {
        Node *tmp = new Node(d, nullptr);
        tail = tmp;
        head = tmp;
    } else {
        Node *tmp = new Node(d, nullptr);
        tail->next = tmp;
        tail = tmp;

    }
}
bool Queue::dequeue_head() {
    if(head != nullptr){
        Node *ptr = head;
        head = head->next;
        delete(ptr);
        return true;
    }else{
        return false;
    }
}