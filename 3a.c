#include <stdio.h>
#include <stdlib.h>
struct Element {
int value;
struct Element *next;
};
struct Element *start = NULL;
void addToEnd(int data) {
struct Element *newElement = (struct Element*)malloc(sizeof(struct Element));
newElement->value = data;
newElement->next = NULL;
}
if (start == NULL) {
start = newElement;
} else {
struct Element *last = start;
while (last->next != NULL) {
last = last->next;
}
last->next = newElement;
}
void deleteDuplicates() {
struct Element *current = start;
}
while (current != NULL) {
struct Element *next = current;
while (next->next != NULL) {
if (next->next->value == current->value) {
struct Element *duplicate = next->next;
next->next = next->next->next;
free(duplicate);
} else {
next = next->next;
}
}
current = current->next;
}
void showList() {
struct Element *current = start;
while (current != NULL) {
printf("%d ", current->value);
current = current->next;
}
printf("\n");
}
int main() {
int totalElements, i;
printf("Enter the number of elements: ");
scanf("%d", &totalElements);printf("Enter the elements:\n");
for (i = 0; i < totalElements; i++) {
int element;
scanf("%d", &element);
addToEnd(element);
}
printf("The list before removing duplicates:\n");
showList();
deleteDuplicates();
printf("The list after removing duplicates:\n");
showList();
}
return 0;