#include <iostream>
#include "Duck.h"
#include "MallarDuck.h"
#include "TurkeyAdapter.h"
#include "WildTurkey.h"
using namespace std;

void testDuck(Duck* duck) {
    duck->quack();
    duck->fly();
}

int main()
{
    MallarDuck* duck = new MallarDuck();
    WildTurkey* turkey = new WildTurkey();
    Duck* adapter = new TurkeyAdapter(turkey);

    cout << "The Turkey says..." << endl;
    turkey->gobble();
    turkey->fly();

    cout << "The Duck says..." << endl;
    testDuck(duck);

    cout << "The TurkeyAdapter says..." << endl;
    testDuck(adapter);

    delete duck, turkey, adapter;

    return 0;
}