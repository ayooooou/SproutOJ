#include <iostream>

int max(int* iptr[], int n);
 
int main() {
    int n;
    int array[100];
    int* iptr[100];

    std::cin >> n;

    for (int i = 0; i < n; i++) {
        std::cin >> array[(i + 3) % n];
        iptr[i] = &(array[(i + 3) % n]);
    }
    std::cout << max(iptr, n) << "\n";
    return 0;
}

/* Your code goes here */
int max(int* iptr[], int n){
    int max_ptr = *iptr[0];
    for (int i = 0; i < n; i++) {
        if( *iptr[i] > max_ptr){
            max_ptr = *iptr[i];
        }
    }
    return max_ptr;
}