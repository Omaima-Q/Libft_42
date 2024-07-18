void ft_lstclear(t_list **lst, void (*del)(void *)) {
    if (!lst || !del) {
        return;
    }

    t_list *current = *lst;
    t_list *next;

    while (current != NULL) {
        next = current->next;
        del(current->content);  // Delete content of current node
        free(current);          // Free current node
        current = next;         // Move to next node
    }

    *lst = NULL;  // Set head pointer to NULL
}

void del_data(void *data)
{
    free(data);
}

int main() {
    // Create a linked list with dummy data
    t_list *node1 = malloc(sizeof(t_list));
    node1->content = malloc(sizeof(int));
    *((int *)node1->content) = 10;

    t_list *node2 = malloc(sizeof(t_list));
    node2->content = malloc(sizeof(int));
    *((int *)node2->content) = 20;

    node1->next = node2;
    node2->next = NULL;

    t_list *head = node1;

    // Print the initial content of the linked list
    printf("Before clearing:\n");
    t_list *current = head;
    while (current != NULL) {
        printf("%d -> ", *((int *)current->content));
        current = current->next;
    }
    printf("NULL\n");

    // Clear the linked list
    ft_lstclear(&head, &del_data);

    // Print the content after clearing (should be NULL)
    printf("After clearing:\n");
    current = head;
    if (current == NULL) {
        printf("NULL\n");
    } else {
        while (current != NULL) {
            printf("%d -> ", *((int *)current->content));
            current = current->next;
        }
        printf("NULL\n");
    }

    // Free the remaining memory allocated for the nodes and their contents
    free(node1->content);
    free(node1);
    free(node2->content);
    free(node2);

    return 0;
}
