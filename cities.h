#ifndef CITY
#define CITY

struct city {
  char name[256];
  int population;
  struct city *next;
};


struct city * new_city(char * name, int population);
void change_city(struct city * c, int new_population);
void print_city(struct city * c);
void print_list(struct node *);
struct node * insert_front(struct node *, char * name, int population);
struct node * free_list(struct node *);
struct node * remove_node(struct node *front, char * name, int population);

#endif
