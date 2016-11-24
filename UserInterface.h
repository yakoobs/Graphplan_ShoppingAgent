//
// Created by Kuba Sokolowski on 20/11/2016.
//

#ifndef GRAPHPLAN_SHOPPINGAGENT_USERINTERFACE_H
#define GRAPHPLAN_SHOPPINGAGENT_USERINTERFACE_H


#include "Shop.h"
#include "Parser.h"
#include "ShoppingAgent.h"

class UserInterface {
public:
    void startProgram();

private:
    ShoppingAgent agent;

    Shops getTest2ShopsWith3Products();
    Shops askUserForShops();
    Products askUserForProductsInTheShop(const string shopName);
    void showRequirementsSummary(Shops shops);
    void showCreatedPredicates(Shops shops);
    void showOperators();
};


#endif //GRAPHPLAN_SHOPPINGAGENT_USERINTERFACE_H
