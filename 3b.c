#include <stdio.h>
#include <stdlib.h>
struct Node {
int data;
struct Node *next;
};
struct Node *head1 = NULL;
struct Node *head2 = NULL;
void insert(struct Node **head, int data) {
struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
newNode->data = data;
newNode->next = NULL;
}
if (*head == NULL) {
*head = newNode;
} else {
struct Node *current = *head;
while (current->next != NULL) {
current = current->next;
}
current->next = newNode;
}
void display(struct Node *head) {
struct Node *current = head;
if (current == NULL) {
printf("The list is empty.\n");
return;
}
}
while (current != NULL) {
printf("%d ", current->data);
current = current->next;
}
printf("\n");
struct Node* mergeLists(struct Node *list1, struct Node *list2) {struct Node dummy;
struct Node *tail = &dummy;
dummy.next = NULL;
while (list1 != NULL && list2 != NULL) {
if (list1->data <= list2->data) {
tail->next = list1;
list1 = list1->next;
} else {
tail->next = list2;
list2 = list2->next;
}
tail = tail->next;
}
if (list1 != NULL) {
tail->next = list1;
} else {
tail->next = list2;
}
}
return dummy.next;
int main() {
int n1, n2, i, data;
printf("Enter the number of elements for the first list: ");
scanf("%d", &n1);
printf("Enter the elements for the first list (sorted):\n");
for (i = 0; i < n1; i++) {
scanf("%d", &data);
insert(&head1, data);
}
printf("Enter the number of elements for the second list: ");
scanf("%d", &n2);
printf("Enter the elements for the second list (sorted):\n");
for (i = 0; i < n2; i++) {
scanf("%d", &data);
insert(&head2, data);
}
printf("The first list is:\n");
display(head1);
printf("The second list is:\n");
display(head2);
struct Node *mergedList = mergeLists(head1, head2);
printf("The merged list is:\n");
display(mergedList);
}
return 0;