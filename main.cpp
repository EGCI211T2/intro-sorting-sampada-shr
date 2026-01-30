//
//  main.cpp
//  First arg
//
//  Created by Mingmanas Sivaraksa on 2/1/2567 BE.
//

#include <iostream>
using namespace std;
#include "sorting.h"

int main(int argc, char * argv[]) {
    int i, N;
    int *a;
    a = new int [argc - 1];
    for (i = 1; i < argc; i++) {
        a[i - 1] = atoi(argv[i]);
    }

    N = argc - 1;

    
    display(a, N);
    insertionsort(a, N);
    display(a, N);

    delete[] a;
    return 0;
}