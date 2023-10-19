#include <stdio.h>
#include <stdlib.h>

#define MAX_NODES 100

typedef struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
} Node;

typedef struct Stack
{
    Node* data[MAX_NODES];
    int top;
} Stack;

void push(Stack* stack, Node* node)
{
    if (stack->top == MAX_NODES)
    {
        printf("Stack overflow!\n");
        exit(1);
    }
    stack->data[stack->top++] = node;
}

Node* pop(Stack* stack)
{
    if (stack->top == 0)
    {
        printf("Stack underflow!\n");
        exit(1);
    }
    return stack->data[--stack->top];
}

int is_empty(Stack* stack)
{
    return stack->top == 0;
}

void dfs_iterative(Node* node)
{
    if (node == NULL)
    {
        return;
    }

    Stack stack = {0};
    push(&stack, node);

    while (!is_empty(&stack))
    {
        Node* current = pop(&stack);

        printf("%d ", current->data);

        if (current->right != NULL)
        {
            push(&stack, current->right);
        }
        if (current->left != NULL)
        {
            push(&stack, current->left);
        }
    }
}

Node* create_node(int data)
{
    Node* node = (Node*)malloc(sizeof(Node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return node;
}

Node* build_tree()
{
    int data;
    printf("Enter the data for the root node: ");
    scanf("%d", &data);
    Node* root = create_node(data);

    Stack stack = {0};
    push(&stack, root);

    while (!is_empty(&stack))
    {
        Node* current = pop(&stack);

        int right_data;
        printf("Enter the data for the right child of %d (or -1 for no right child): ", current->data);
        scanf("%d", &right_data);
        if (right_data != -1)
        {
            current->right = create_node(right_data);
            push(&stack, current->right);
        }

        int left_data;
        printf("Enter the data for the left child of %d (or -1 for no left child): ", current->data);
        scanf("%d", &left_data);
        if (left_data != -1)
        {
            current->left = create_node(left_data);
            push(&stack, current->left);
        }
    }

    return root;
}

int main() {

    Node* root = build_tree();

    printf("Iterative DFS: ");
    dfs_iterative(root);
    printf("\n");

    return 0;
}
