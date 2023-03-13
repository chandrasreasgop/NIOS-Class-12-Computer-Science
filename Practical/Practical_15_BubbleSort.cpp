// Write a C++ program to accept eight numbers in an array. Sort the numbers in
// ascending order using Bubble sort method. Also insert a number in the sorted
// array.


// Name: Soutrika Das
// Enrollment No: M22074223063

#include <iostream>
using namespace std;
void bubbleSort(int arr[], int n) {
  for (int i = 0; i < n - 1; i++) {
    for (int j = 0; j < n - i - 1; j++) {
      if (arr[j] > arr[j + 1]) {
        int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }
}
void insertNumber(int arr[], int &n, int num) {
  int i;
  for (i = n - 1; i >= 0 && arr[i] > num; i--) {
    arr[i + 1] = arr[i];
  }
  arr[i + 1] = num;
  n++;
}
int main() {
  int n = 8;
  int arr[n];
  cout << "Enter eight numbers: ";
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  bubbleSort(arr, n);
  cout << "Sorted array: ";
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
  int num;
  cout << "Enter the number to insert: ";
  cin >> num;
  insertNumber(arr, n, num);
  cout << "Array after inserting " << num << ": ";
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
  return 0;
}
