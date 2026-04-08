#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int val;
    struct node * next;
} node_t;

void print_list(node_t * head) {
    node_t * current = head;

    while (current != NULL) {
        printf("%d\n", current->val);
        current = current->next;
    }
}

int pop(node_t ** head) {
    int retval = -1;
    node_t * next_node = NULL;

    if (*head == NULL) {
        return -1;
    }

    next_node = (*head)->next;
    retval = (*head)->val;
    free(*head);
    *head = next_node;

    return retval;
}

// Remove a value from a linkedList using that value.
int remove_by_value(node_t ** head, int val) {
    /* TODO: fill in your code here */
    // Current head
    node_t *current = *head;
    // temp value to store
    node_t *temp = NULL;

    // Case 1: List is empty
    if (*head == NULL) {
        return -1;
    }

    // if it's the first element in the list
    if(current->next->val == val){
        return pop(head);
    }


    // Find the element in list
    while(current->next != NULL){
        // Check for the element
        if(current->next->val == val){
            temp = current->next; // Adding the value pointer to temp
            current->next = temp->next; // Updating current pointer to point to the value after our target value
            free(temp); // free the target
            return val; // val
        }
        current = current->next; // keep moving till the end if not found

    }

    // Not in list
    return -1;
}

int main() {

    node_t * test_list = (node_t *) malloc(sizeof(node_t));
    test_list->val = 1;
    test_list->next = (node_t *) malloc(sizeof(node_t));
    test_list->next->val = 2;
    test_list->next->next = (node_t *) malloc(sizeof(node_t));
    test_list->next->next->val = 3;
    test_list->next->next->next = (node_t *) malloc(sizeof(node_t));
    test_list->next->next->next->val = 4;
    test_list->next->next->next->next = NULL;

    remove_by_value(&test_list, 3);

    print_list(test_list);
}