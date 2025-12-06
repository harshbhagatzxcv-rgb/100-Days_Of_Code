\\ Write a Program to take a sorted array(say nums[]) and an integer (say target) as inputs. 
  The elements in the sorted array might be repeated. You need to print the first and last occurrence of the target and print the index of first and last occurrence.
  print -1, -1 if the target is not present.

#include <stdio.h>

int main() {
    int n, target;
    int nums[100];
    int first = -1, last = -1;
  
    printf("Enter number of elements: ");
    scanf("%d", &n);
  
    printf("Enter %d sorted elements:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &nums[i]);

    printf("Enter target element: ");
    scanf("%d", &target);

    for (int i = 0; i < n; i++) {
        if (nums[i] == target) {
            if (first == -1)
                first = i;
            last = i;
        }
    }

    if (first == -1)
        printf("Target not found: %d\nFirst index = -1, Last index = -1\n", target);
    else {
        printf("Target %d found.\n", target);
        printf("First occurrence = %d (index %d)\n", nums[first], first);
        printf("Last occurrence  = %d (index %d)\n", nums[last], last);
    }

    return 0;
}

