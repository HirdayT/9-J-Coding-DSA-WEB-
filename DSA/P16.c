#include <stdio.h>

#define MAX 20

int adj[MAX][MAX];
int visited[MAX];
int n = 0; // number of vertices

// function to display the adjacency matrix graph
void display_graph() {
    if (n == 0) {
        printf("\ngraph is not created yet!\n");
        return;
    }
    printf("\nadjacency matrix representation:\n     ");
    for (int i = 0; i < n; i++) {
        printf("%d ", i);
    }
    printf("\n   ------------------\n");
    for (int i = 0; i < n; i++) {
        printf(" %d | ", i);
        for (int j = 0; j < n; j++) {
            printf("%d ", adj[i][j]);
        }
        printf("\n");
    }
}

// function to create graph using edge prompts (y/n)
void create_graph() {
    printf("enter number of vertices: ");
    scanf("%d", &n);

    // initialize matrix to 0
    for (int i = 0; i < n; i++) {
        visited[i] = 0;
        for (int j = 0; j < n; j++) {
            adj[i][j] = 0;
        }
    }

    printf("\nenter edges (y/n) when prompted:\n");
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            char choice;
            printf("is there an edge between vertex %d and %d? (y/n): ", i, j);
            scanf(" %c", &choice); // space before %c consumes newline
            if (choice == 'y' || choice == 'Y') {
                adj[i][j] = 1;
                adj[j][i] = 1;
            }
        }
    }
    printf("graph created successfully!\n");
    display_graph();
}

// function for breadth-first search (bfs)
void bfs() {
    if (n == 0) {
        printf("\ngraph is not created yet!\n");
        return;
    }

    int start;
    printf("enter starting vertex (0 to %d): ", n - 1);
    scanf("%d", &start);

    if (start < 0 || start >= n) {
        printf("invalid starting vertex!\n");
        return;
    }

    int queue[MAX], front = 0, rear = 0;

    for (int i = 0; i < n; i++) {
        visited[i] = 0;
    }

    printf("\nbfs traversal: ");
    visited[start] = 1;
    queue[rear++] = start;

    while (front < rear) {
        int current = queue[front++];
        printf("%d ", current);

        for (int i = 0; i < n; i++) {
            if (adj[current][i] == 1 && !visited[i]) {
                visited[i] = 1;
                queue[rear++] = i;
            }
        }
    }
    printf("\n");
}

// helper function for depth-first search (dfs)
void dfs_util(int current) {
    visited[current] = 1;
    printf("%d ", current);

    for (int i = 0; i < n; i++) {
        if (adj[current][i] == 1 && !visited[i]) {
            dfs_util(i);
        }
    }
}

// function for depth-first search (dfs)
void dfs() {
    if (n == 0) {
        printf("\ngraph is not created yet!\n");
        return;
    }

    int start;
    printf("enter starting vertex (0 to %d): ", n - 1);
    scanf("%d", &start);

    if (start < 0 || start >= n) {
        printf("invalid starting vertex!\n");
        return;
    }

    for (int i = 0; i < n; i++) {
        visited[i] = 0;
    }

    printf("\ndfs traversal: ");
    dfs_util(start);
    printf("\n");
}

int main() {
    int choice;

    // menu loop
    do {
        printf("\n--- graph operations (adjacency matrix) ---\n");
        printf("1. create graph\n");
        printf("2. display graph\n");
        printf("3. bfs traversal\n");
        printf("4. dfs traversal\n");
        printf("5. exit\n");
        printf("enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: create_graph(); break;
            case 2: display_graph(); break;
            case 3: bfs(); break;
            case 4: dfs(); break;
            case 5: printf("exiting...\n"); break;
            default: printf("invalid choice!\n");
        }
    } while (choice != 5);

    return 0;
}