#include <iomanip>
void swap(int &a, int &b);
void selectionsort(int *a, int N);
void bubblesort(int *a, int N);
void display(int *a, int N);

void swap(int &a,int &b){
    int hold;
    hold= a;
    a=b;
    b=hold;
}

/*oid sort(int *a,int N){
    int i,j;
    for (j=0;j<N-1;j++){
        for (i=0;i<N-1;i++){
            if (a[i]>a[i+1]) 
            {swap(a[i],a[i+1]);}
    }
    }
        
}*/

void bubblesort(int *a, int N) {
    int i, j;
    // Outer loop: Tells the program how many passes to make
    for (j = 0; j < N - 1; j++) {
        // Inner loop: Does the actual swapping for one pass
        for (i = 0; i < N - 1; i++) {
            if (a[i] > a[i + 1]) {
                swap(a[i], a[i + 1]);
            }
        }
    }
}

void selectionsort(int *a, int N) {
    int i,j,mi;
    for (j=0;j<N-1;j++){
        mi=j;
        for (i=1+j;i<N;i++){
        if (a[i]<a[mi]){
            mi=i;
        }
    }
    if (mi!=j){
    swap(a[j],a[mi]);
    }
    }
}

void display(int *a,int N){
    for (int i=0;i<N;i++){
        cout<<" "<<a[i];
    }
    cout<<endl;
}
