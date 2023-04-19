#include "TurkeyAdapter.h"

TurkeyAdapter::TurkeyAdapter(Turkey *turkey) {
	this->turkey = turkey;
}

void TurkeyAdapter::fly() {
	for (int i = 0; i < 5; i++) {
		turkey->fly();
	}
}

void TurkeyAdapter::quack() {
	turkey->gobble();
}