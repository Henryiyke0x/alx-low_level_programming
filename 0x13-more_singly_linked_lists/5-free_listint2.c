
 listint_t *temp;

 if (head == NULL)
 return;

 while (*head)
 {
 temp = (*head)->next;
 free(*head);
 *head = temp;
 }

 *head = NULL;
}
