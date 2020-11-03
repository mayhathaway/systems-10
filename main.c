#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "cities.h"

int main(){
    srand(time(NULL));

    struct city *new_york_city = new_city("New York City", rand());
    struct city *los_angeles = new_city("Los Angeles", rand());
    struct city *shanghai = new_city("Shanghai", rand());

    printf("printing cities: \n");
    print_city(new_york_city);
    print_city(los_angeles);
    print_city(shanghai);

    printf("changing populations: \n");
    change_city(new_york_city, 8336817);
    change_city(los_angeles, 4015940);
    change_city(shanghai, 24862000);

    printf("testing nodes: \n");

    printf("print list new york: \n");
    print_list(new_york_city);

    printf("inserting lisbon in front of shanghai\n");
    insert_front(shanghai, "Lisbon", 504718);

    printf("removing los angeles\n");
    remove_node(los_angeles, "Los Angeles", 4015940);

    printf("freeing shanghai\n");
    free_list(shanghai);
}
