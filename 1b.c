#include<stdio.h>
#include<string.h>

#define size 100

struct stack {
    int top;
    char array[size];
} st;

void push(char item) {
    if (st.top < size - 1) {
        st.top++;
        st.array[st.top] = item;
    } else {
        printf("Stack Overflow\n");
    }
}

char pop() {
    if (st.top == -1) {
        return '\0';
    } else {
        return st.array[st.top--];
    }
}

int checkParentheses(char *expr) {
    for (int i = 0; expr[i] != '\0'; i++) {
        if (expr[i] == '(') {
            push('(');
        } else if (expr[i] == ')') {
            if (pop() != '(') {
                return 0;
            }
        }
    }
    return st.top == -1;
}

int main() {
    char expr[size];
    printf("Enter an expression with parentheses: ");
    scanf("%s", expr);

    if (checkParentheses(expr)) {
        printf("Parentheses are properly nested.\n");
    } else {
        printf("Parentheses are not properly nested.\n");
    }

    return 0;
}