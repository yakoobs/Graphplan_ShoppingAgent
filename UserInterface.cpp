//
// Created by Kuba Sokolowski on 20/11/2016.
//

#include "UserInterface.h"
#include <iostream>

using namespace std;


void UserInterface::startProgram() {

    cout << "Graphplan: Agent Zakupowy 1.0 \nAutor: Jakub Sokołowski" << endl;
//    Shops shops = askUserForShops(shopsCount);
    Shops shops = getTest2ShopsWith3Products();
    showRequirementsSummary(shops);
    showCreatedPredicates(shops);
}

Shops UserInterface::askUserForShops() {
    int shopsCount = 0;
    cout << "Podaj liczbę sklepów:"<<endl;
    cin >> shopsCount;
    cin.get();

    Shops shops;
    for (int i = 0; i < shopsCount; ++i) {
        string shopName = "";

        cout << "Podaj nazwę sklepu nr: " << i + 1 << endl;
        getline(cin, shopName);

        Products products = askUserForProductsInTheShop(shopName);
        shops.push_back(Shop(shopName, products));
    }
    return shops;
}

Products UserInterface::askUserForProductsInTheShop(const string shopName) {
    Products products;
    int productsCount = 0;
    cout << "Podaj liczbę produktów potrzebnych ze sklepu \""<< shopName << "\":"<<endl;
    cin >> productsCount;
    cin.get();

    for (int i = 0; i < productsCount; ++i) {
        string productName = "";
        cout << "Podaj nazwę produktu nr: " << i+1 << " w sklepie " << shopName << ":" << endl;
        getline(cin, productName);

        if (!productName.empty()) {
            products.push_back(productName);
        }
    }

    return products;
}

void UserInterface::showRequirementsSummary(Shops shops) {
    cout << "Podsumowując:" << endl;

    for (int i = 0; i < shops.size(); ++i) {
        Shop shop = shops[i];
        cout << "Ze sklepu \"" << shop.name << "\" agent ma kupić: " << endl;
        for (int j = 0; j < shop.products.size(); ++j) {
            cout << shop.products[j] << endl;
        }
        cout << endl;
    }
}

void UserInterface::showOperators() {

}

void UserInterface::showCreatedPredicates(Shops shops) {
    agent.prepareInitialPredicatesAndGoalsForShops(shops);

    cout<< "Utworzone predykaty początkowe:" << endl;
    for (int i = 0; i < agent.initialPredicates.size(); ++i) {
        cout << "-> " << agent.initialPredicates[i].description() << endl;
    }

    cout<< endl << "Cele do osiągnięcia:" << endl;
    for (int i = 0; i < agent.goals.size(); ++i) {
        cout << "-> " << agent.goals[i].description() << endl;
    }
}

Shops UserInterface::getTest2ShopsWith3Products() {
    Shop shop = Shop("Biedronka",{"mleko", "szynka"});
    Shop shop1 = Shop("Lidl",{"kawa"});
    return {shop, shop1};
}


