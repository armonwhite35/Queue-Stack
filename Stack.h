//
// Created by armon on 4/28/2020.
//

#ifndef INHERITEDLISTS_STACK_H
#define INHERITEDLISTS_STACK_H

#include "LinkedList.h"


class Stack : public LinkedList {
private:

public:
    Stack();
    void push_head(Data &d);
    bool pop_head();

};

#endif //INHERITEDLISTS_STACK_H
