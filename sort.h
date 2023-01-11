#ifndef SORT_H
#define SORT_H
#include <stdio.h>
#include <stdlib.h>
/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
    const int n;
    struct listint_s *prev;
    struct listint_s *next;
} listint_t;
void insertion_sort_list(listint_t **list);
void print_list(const listint_t *list);
void print_array(const int *array, size_t size);
listint_t *add_nodeint_at_index(listint_t **head, int n, int index);
listint_t *get_nodeint_at_index(listint_t *head, int index);
int remove_nodeint_at_index(listint_t **head, int index);
void quick_sort(int *array, size_t size);
void lomuto(int *array, size_t size, int *array_print, size_t size_print);
#endif
