#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int* data;
    int size;
    int capacity;
} List;


List* createList(int initialCapacity) {
    List* list = (List*) malloc(sizeof(List));
    list->data = (int*) malloc(initialCapacity * sizeof(int));
    list->size = 0;
    list->capacity = initialCapacity;
    return list;
}

void insert(List* list, int num) {
    if (list->size == list->capacity) {

        list->capacity *= 2;
        list->data = (int*) realloc(list->data, list->capacity * sizeof(int));
    }
    list->data[list->size] = num;
    list->size++;
}

void printList(List* list) {
    for (int i = 0; i < list->size; i++) {
        printf("%d ", list->data[i]);
    }
    printf("\n");
}


int main() {
	         printf("192211572,S.rohith\n"); 
    List* list = createList(5);
    insert(list, 10);
    insert(list, 20);
    insert(list, 30);
    insert(list, 40);
    insert(list, 50);
    insert(list, 60); 
    printList(list);
    return 0;
}
