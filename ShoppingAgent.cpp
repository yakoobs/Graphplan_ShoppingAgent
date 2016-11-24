//
// Created by Kuba Sokolowski on 23/11/2016.
//

#include "ShoppingAgent.h"

const static string kShopPredicateName = "Sprzedaje";
const static string kToBeInPredicateName = "W";
const static string kHomePredicateArgument = "dom";
const static string kHavePredicateName = "Ma";

void ShoppingAgent::prepareInitialPredicatesAndGoalsForShops(Shops shops) {
    Predicates tempInitial;
    Predicates tempGoals;

    Predicate initialPosition = Predicate(kToBeInPredicateName, {kHomePredicateArgument}, true);
    tempInitial.push_back(initialPosition);
    for (int i = 0; i < shops.size(); ++i) {
        Shop shop = shops[i];
        for (int j = 0; j < shop.products.size(); ++j) {
            //Initial
            Product product = shop.products[j];
            PredicateArguments arguments = {shop.name, product};
            Predicate predicate1 = Predicate(kHavePredicateName,{product}, false);
            tempInitial.push_back(predicate1);
            Predicate predicate = Predicate(kShopPredicateName, arguments, true);
            tempInitial.push_back(predicate);

            //Goal
            Predicate goal = Predicate(kHavePredicateName,{product}, true);
            tempGoals.push_back(goal);
        }
    }
    initialPredicates = tempInitial;
    goals = tempGoals;
}


