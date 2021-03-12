#include <stdio.h>
#include <stdlib.h>
#include "PlainPizza.h"

PlainPizza* initPlainPizza() {
	PlainPizza* plainPizza = (PlainPizza*)malloc(sizeof(PlainPizza));
	if (!plainPizza)
		return NULL;

	plainPizza->toppings = (char**)malloc(sizeof(char*));
	if (!plainPizza->toppings)
		return NULL;

	plainPizza->numOfToppings = 0;

	return plainPizza;
}

void addOlives(PlainPizza* plainPizza) {
	plainPizza->toppings = (char**)realloc(plainPizza->toppings, (plainPizza->numOfToppings + 1) * sizeof(char*));
	if (!plainPizza->toppings)
		return;

	plainPizza->toppings[plainPizza->numOfToppings++] = "olives";
}

void preparePizza(PlainPizza* plainPizza) {
	addOlives(plainPizza);
}