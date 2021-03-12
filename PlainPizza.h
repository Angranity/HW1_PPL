#pragma once

typedef struct PlainPizza
{
	char** toppings;
	int numOfToppings;
} PlainPizza;

PlainPizza* initPlainPizza();
void addOlives(PlainPizza *plainPizza);
void preparePizza(PlainPizza* plainPizza);
