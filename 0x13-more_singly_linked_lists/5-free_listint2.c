#include "lists.h"
void free_listint(listint_t *head)
{
listint_t *initial = head;
while ( initial != NULL )
{
listint_t *temporary = initial;
initial = initial->next;
free(temporary);
}
*head = NULL;
}
