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

/*void selectionsort(int *a, int N) {
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
}*/

void selectionsort(int *a, int N) {
    int i,j;
    int *m;
    for (j=0;j<N-1;j++){
        m=&a[j];
        for (i=1+j;i<N;i++){
        if (a[i]<*m){
            m=&a[i];
        }
    }
    swap(a[j],*m);
    }
}

void insertionsort(int *a, int n){
    int i,j,new_number;
    for (j=1;j<n;j++){
        cout<<"==Round "<<j<<endl;
        new_number=a[j];
        for (i=j-1;i>=0;i--){
        if (new_number<a[i]) a[i+1]=a[i];
        else break;
        display(a,n);
        }
        display (a,n);
        a[i+1]=new_number;
    }
}

void display(int *a,int N){
    for (int i=0;i<N;i++){
        cout<<" "<<a[i];
    }
    cout<<endl;
}
