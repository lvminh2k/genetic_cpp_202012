#include <iostream>
using namespace std;
void display_array_vertial(int* A, int N){
    for (int i=0; i<N; i++){
        cout << "A[" << i << "]= " << A[i] << endl;
    }
}
void display_array_horizontal(int* A, int N){
    for (int i=0; i<N; i++){
        cout << A[i] << " ";
    }
    cout << endl;
}
void bubble_sort(int* A, int N){
    for (int i=0 ; i < N-1; i++){
        for (int j = i+1; j<N; j++){
            if (A[i] > A[j]){
                int t = A[i];
                A[i] = A[j];
                A[j] = t;
            }
        }
    }
}
int normal_search(int* A, int N, int k){
    int i;
    for (i =0; i<N; i++){
        if (A[i] == k){
            cout << "loop " << i << endl;
            return 1;
        }
    }
    cout << "loop " << i << endl;
    return 0;
}
int binary_seach(int* A, int N, int k){
    int left = 0;
    int right = N-1;
    int i = 0;
    while (left <= right){
        int mid = (left + right) / 2;
        cout << left << " " << mid << " " << A[mid] << " " << right << endl;
        if (A[mid] == k){
            cout << "loop " << i << endl;
            return 1;
        }
        else if (A[mid] < k){
            left = mid + 1;
        }
        else if (A[mid] > k){
            right = mid - 1;
        }
        i++;
    }
    cout << "loop " << i << endl;
    return 0;
}
int main(){
    int N;
    cout << "hello, input number: ";
    cin >> N;
    int* A = new int[N];
    cout << "input " << N << " integers." << endl;
    for (int i=0; i<N; i++){
        cout << "A[" << i << "]= ";
        cin >> A[i];
    }
    //display_array_vertial(A, N);
    cout << "display array: ";
    display_array_horizontal(A, N);
    int k;
    cout << "input search k: ";
    cin >> k;
    int result;
    result = normal_search(A, N, k);
    if (result) {
        cout << "found " << k << " in list" << endl;
    }
    else{
        cout << "not found " << k << " in list" << endl;
    }
    bubble_sort(A, N);
    cout << "display array after sort: ";
    display_array_horizontal(A, N);
    result = binary_seach(A, N, k);
    if (result) {
        cout << "found " << k << " in list" << endl;
    }
    else{
        cout << "not found " << k << " in list" << endl;
    }
    return 0;
}