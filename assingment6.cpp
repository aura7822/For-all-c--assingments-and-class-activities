//1d 2d 3d arrays with macro and user prompt
/*
AUTHOR : AURA P.JOSHUA
REG NO : BSE-05-0180/2024
GROUP : 3
GITHUB USERNAME : aura7822
DATE : 3rd MARCH
SESSION : LESSON 6
*/
#include<iostream>
#define SIZE 3

using namespace std;

int main(){
    int arr1[SIZE];
    cout<<"Enter "<<SIZE<<" elements of the 1d array :\n ";
    for(int i = 0; i < SIZE; i++){
        cin>>arr1[i];
    }
    int arr2D[SIZE][SIZE];
    cout << "\nEnter " << SIZE * SIZE << " elements for 2D array:\n";
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            cin >> arr2D[i][j];
        }       
}
int arr3D[SIZE][SIZE][SIZE];
cout << "\nEnter " << SIZE * SIZE * SIZE << " elements for 3D array:\n";
for (int i = 0; i < SIZE; i++) {
    for (int j = 0; j < SIZE; j++) {
        for (int k = 0; k < SIZE; k++) {
            cin >> arr3D[i][j][k];
        }
    }
}
cout << "\n1D Array: ";
for (int i = 0; i < SIZE; i++) {
    cout << arr3D[i] << " ";
}

cout << "\n\n2D Array:\n";
for (int i = 0; i < SIZE; i++) {
    for (int j = 0; j < SIZE; j++) {
        cout << arr2D[i][j] << " ";
    }
    cout << endl;
}

cout << "\n3D Array:\n";
for (int i = 0; i < SIZE; i++) {
    cout << "Layer " << i + 1 << ":\n";
    for (int j = 0; j < SIZE; j++) {
        for (int k = 0; k < SIZE; k++) {
            cout << arr3D[i][j][k] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

return 0;
}

