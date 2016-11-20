//
// Created by Kuba Sokolowski on 09/11/2016.
//

#ifndef GRAPHPLAN_SHOPPINGAGENT_OPERATOR_H
#define GRAPHPLAN_SHOPPINGAGENT_OPERATOR_H

#include "Predicate.h"

typedef vector <Predicate*> Predicates;
typedef string ActionName;

class Operator {
    ActionName actionName;
    Predicates preconditions;
    Predicates effects;
};


#endif //GRAPHPLAN_SHOPPINGAGENT_OPERATOR_H
