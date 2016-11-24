//
// Created by Kuba Sokolowski on 23/11/2016.
//

#ifndef GRAPHPLAN_SHOPPINGAGENT_SHOPPINGAGENT_H
#define GRAPHPLAN_SHOPPINGAGENT_SHOPPINGAGENT_H


#include "Operator.h"
#include "Shop.h"

class ShoppingAgent {
public:
    Predicates initialPredicates;
    Predicates goals;
    
    void prepareInitialPredicatesAndGoalsForShops(Shops shops);

};


#endif //GRAPHPLAN_SHOPPINGAGENT_SHOPPINGAGENT_H
