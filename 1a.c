1)
#include<stdio.h>
#define size 6

struct stack {
    int top;
    int array[size];
} st;

int top = -1;

void push(int item) {
    if (st.top > size - 1) {
        printf("Stack is overflow\n");
    } else {
        st.top++;
        st.array[st.top] = item;
    }
}

int pop() {
    int item;
    if (st.top == -1) {
        printf("Stack is underflow\n");
    } else {
        item = st.array[st.top];
        st.top--;
    }
    return item;
}

void display() {
    if (st.top == -1) {
        printf("The stack is empty\n");
    } else {
        for (int i = 0; i <= st.top; i++) {
            printf("%d ", st.array[i]);
        }
        printf("\n");
    }
}

int main() {
    int n, value;
    printf("Enter number of elements in the list: ");
    scanf("%d", &n);

    printf("Enter the numbers: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &value);
        push(value);
    }

    printf("Reversed list: ");
    while (st.top != -1) {
        printf("%d ", pop());
    }

    return 0;
}