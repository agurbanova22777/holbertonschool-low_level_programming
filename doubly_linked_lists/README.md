# Doubly linked lists

This project contains exercises for working with **doubly linked lists** in C using the `dlistint_t` data structure.

## Data structure

```c
/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 */
typedef struct dlistint_s
{
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;
```

## Files

- `lists.h` - Header file containing the `dlistint_t` struct definition and function prototypes.
- `0-print_dlistint.c` - Function that prints all elements of a `dlistint_t` list and returns the number of nodes.