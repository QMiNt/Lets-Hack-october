#include<iostream>
using namespace std;
void CreateArray(int *arr,int n){
    for(int i = 0;i<n;i++){
        cout << "Enter Element" << i+1 << " : ";
        cin >> arr[i];
    }

}

void PrintArray(int *arr,int n){
    for(int i=0;i<n;i++){
        cout << arr[i] << ", ";
    }
    cout << "\n";
}

void UpdateElemet(int *arr,int n,int i){
    if(i>=n){
        cout << "Invalid Index";
        return;
    }
    cout << "Enter new Element : ";
    cin >> arr[i];
}
int DeteteElemet(int *arr,int n,int i){
    for(int x = i;x<n-1;x++){
        arr[x] = arr[x+1];
    }
    return --n;
}

int main(){
    int n;
    cout << "Enter the number of elements in array: ";
    cin >> n;
    int arr[n];
    CreateArray(arr,n);
    PrintArray(arr,n);
    UpdateElemet(arr,n,2);
    PrintArray(arr,n);
    n = DeteteElemet(arr,n,3);
    PrintArray(arr,n);
    return 0;

}
