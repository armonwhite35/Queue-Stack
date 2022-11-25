//
// Created by armon on 4/28/2020.
//

#ifndef INHERITEDLISTS_QUEUE_H
#define INHERITEDLISTS_QUEUE_H

#include "LinkedList.h"


class Queue : public LinkedList {
private:
    Node *tail;
public:
    Queue();
    void enqueue_tail(Data &d);
    bool dequeue_head();
};


#endif //INHERITEDLISTS_QUEUE_H
