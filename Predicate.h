//
// Created by Kuba Sokolowski on 09/11/2016.
//

#ifndef GRAPHPLAN_SHOPPINGAGENT_PREDICATE_H
#define GRAPHPLAN_SHOPPINGAGENT_PREDICATE_H

#import <string>
#include <vector>

using  namespace std;

typedef string PredicateName;
typedef string PredicateArgument;
typedef vector <PredicateArgument> PredicateArguments;

struct Predicate {
    Predicate(const PredicateName &name, const PredicateArguments &arguments, bool isPositive);

    PredicateName name;
    PredicateArguments arguments;
    bool isPositive = true;

    string description();
};


#endif //GRAPHPLAN_SHOPPINGAGENT_PREDICATE_H
