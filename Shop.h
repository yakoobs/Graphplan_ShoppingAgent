//
// Created by Kuba Sokolowski on 20/11/2016.
//

#ifndef GRAPHPLAN_SHOPPINGAGENT_SHOP_H
#define GRAPHPLAN_SHOPPINGAGENT_SHOP_H

#include "Predicate.h"

typedef string Brand;
typedef string Product;
typedef vector <string> Products;

struct Shop {
    Shop(Brand name, Products products) : name(name), products(products) {}
    Brand name;
    Products products;
};

typedef vector <Shop> Shops;

#endif //GRAPHPLAN_SHOPPINGAGENT_SHOP_H
