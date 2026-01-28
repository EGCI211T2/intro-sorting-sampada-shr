#include <iomanip>
void swap(int &a, int &b);
void sort(int *a, int N);
void display(int *a, int N);

void swap(int &a,int &b){
    int hold;
    hold= a;
    a=b;
    b=hold;
}

void sort(int *a,int N){
    int i,j;
    for (j=0;j<N-1;j++){
        for (i=0;i<N-1;i++){
            if (a[i]>a[i+1]) 
            {swap(a[i],a[i+1]);}
    }
    }
        
}

void display(int *a,int N){
    for (int i=0;i<N;i++){
        cout<<setw(5)<<a[i];
    }
    cout<<endl;
}
