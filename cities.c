#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "cities.h"

struct city * new_city(char *name, int population) {
    struct city *nc;
    nc = malloc (sizeof(struct city));
    strncpy(nc->name, name, sizeof(nc->name)-1);
    nc->population = population;
    return nc;
  }

void change_city(struct city * c, int new_population) {
  c->population = new_population;
  printf("%s now has %d people living in it\n", c->name, c->population);
}

void print_city(struct city *c) {
  printf("the name of this city is %s\n", c->name);
  printf("%s has a population of %d\n", c->name, c->population);
}

void print_list(struct city * c) {
  while (c != NULL) {
    printf("population: %d", c->population);
    c = c->next;
  }
}

struct node * insert_front(struct node * c, char * name, int population) {
  struct city *c2 = new_city(name, population);
  c2->next = c;
  return c2;
}

struct city * free_list(struct node * c) {
  while (c != NULL) {
    free(c);
    c = c->next;
  }
  return NULL;
}

struct city * remove_node(struct node * c, char * name, int population) {
  struct city * front = c;
  while (c != NULL) {
    if (strcmp(c->name, name) == 0) {
      if (c->population == population) {
        free(c);
      }
    }
    c = c->next;
  }
  return front;
}
