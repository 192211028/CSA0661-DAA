#include <stdio.h>
#include <stdlib.h>
struct Item {
    int value;
    int weight;
};
int compare(const void *a, const void *b) {
    double ratioA = (double)(((struct Item*)a)->value / (double)((struct Item*)a)->weight);
    double ratioB = (double)(((struct Item*)b)->value / (double)((struct Item*)b)->weight);
    return (ratioB - ratioA);
}
void knapsack_greedy(struct Item items[], int n, int capacity) {
    qsort(items, n, sizeof(struct Item), compare);

    int current_weight = 0;  
    double total_value = 0.0; 
    for (int i = 0; i < n; i++) {
        if (current_weight + items[i].weight <= capacity) {
            current_weight += items[i].weight;
            total_value += items[i].value;
        }
        else {
            int remaining_capacity = capacity - current_weight;
            total_value += items[i].value * ((double) remaining_capacity / items[i].weight);
            break; 
        }
    }
    printf("Total value in Knapsack = %.2lf\n", total_value);
}

int main() {
    int n, capacity;
    printf("Enter number of items: ");
    scanf("%d", &n);
    printf("Enter capacity of knapsack: ");
    scanf("%d", &capacity);

    struct Item items[n];
    printf("Enter value and weight of each item:\n");
    for (int i = 0; i < n; i++) {
        printf("Item %d: ", i + 1);
        scanf("%d %d", &items[i].value, &items[i].weight);
    }
    knapsack_greedy(items, n, capacity);
    return 0;
}
