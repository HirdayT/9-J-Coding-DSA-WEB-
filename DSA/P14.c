#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define MAX 100

char stack[MAX];
int top = -1;

// stack push function
void push(char c) {
    if (top < MAX - 1) {
        stack[++top] = c;
    }
}

// stack pop function
char pop() {
    if (top >= 0) {
        return stack[top--];
    }
    return -1;
}

// return precedence of operators
int precedence(char c) {
    if (c == '+' || c == '-') {
        return 1;
    }
    if (c == '*' || c == '/') {
        return 2;
    }
    return 0;
}

// function to convert infix to postfix
void infix_to_postfix(char infix[], char postfix[]) {
    int i = 0, j = 0;
    char c;

    while ((c = infix[i++]) != '\0') {
        if (c == ' ' || c == '\t') {
            continue; // skip whitespace
        }

        // if operand, add to postfix expression
        if (isalnum(c)) {
            postfix[j++] = c;
        }
        // if '(', push to stack
        else if (c == '(') {
            push(c);
        }
        // if ')', pop and output from stack until '('
        else if (c == ')') {
            while (top != -1 && stack[top] != '(') {
                postfix[j++] = pop();
            }
            if (top != -1 && stack[top] == '(') {
                pop(); // remove '('
            }
        }
        // if operator
        else {
            while (top != -1 && precedence(stack[top]) >= precedence(c)) {
                postfix[j++] = pop();
            }
            push(c);
        }
    }

    // pop remaining operators from stack
    while (top != -1) {
        postfix[j++] = pop();
    }
    postfix[j] = '\0';
}

int main() {
    char infix[MAX], postfix[MAX];

    printf("enter infix expression: ");
    fgets(infix, MAX, stdin);
    infix[strcspn(infix, "\n")] = '\0';

    infix_to_postfix(infix, postfix);
    printf("postfix expression: %s\n", postfix);

    return 0;
}