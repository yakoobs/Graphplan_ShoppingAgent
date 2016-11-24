//
// Created by Kuba Sokolowski on 23/11/2016.
//

#include "Predicate.h"

string Predicate::description() {
    string prefix = isPositive ? "" : "¬";
    string desc = prefix + name + "(";
    int numel = arguments.size();
    for (int i = 0; i < numel; ++i) {
        desc = desc + arguments[i];
        if (i < numel - 1) {
            desc = desc + ", ";
        }
    }
    return desc +")";
}

Predicate::Predicate(const PredicateName &name,
                     const PredicateArguments &arguments,
                     bool isPositive) : name(name),
                                        arguments(arguments),
                                        isPositive(isPositive) {}
