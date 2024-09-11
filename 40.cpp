#include <stdio.h>
#include <stdbool.h>

#define V 5 

bool isSafe(int v, int graph[V][V], int path[], int pos) {
    if (graph[path[pos - 1]][v] == 0)
        return false;

    for (int i = 0; i < pos; i++)
        if (path[i] == v)
            return false;

    return true;
}

bool hamiltonianCycleUtil(int graph[V][V], int path[], int pos) {
    if (pos == V) {
        if (graph[path[pos - 1]][path[0]] == 1)
            return true;
        else
            return false;
    }

    for (int v = 1; v < V; v++) {
        if (isSafe(v, graph, path, pos)) {
            path[pos] = v;

            if (hamiltonianCycleUtil(graph, path, pos + 1))
                return true;

            path[pos] = -1;
        }
    }

    return false;
}

void printSolution(int path[]) {
    printf("Hamiltonian cycle: ");
    for (int i = 0; i < V; i++)
        printf("%d ", path[i]);
    printf("%d\n", path[0]);
}

int main() {
	         printf("192211479,E.Leeladhar sai\n"); 
    int graph[V][V] = {
        {0, 1, 1, 1, 0},
        {1, 0, 1, 0, 1},
        {1, 1, 0, 1, 1},
        {1, 0, 1, 0, 1},
        {0, 1, 1, 1, 0}
    };

    int path[V];
    for (int i = 0; i < V; i++)
        path[i] = -1;

    path[0] = 0;

    if (hamiltonianCycleUtil(graph, path, 1)) {
        printSolution(path);
    } else {
        printf("No Hamiltonian cycle exists\n");
    }

    return 0;
}
