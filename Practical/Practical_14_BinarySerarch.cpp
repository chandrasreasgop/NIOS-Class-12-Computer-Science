// Write a C++ program to accept ten numbers using an array. Search for a number
// in an array using binary search method.

// Name: Soutrika Das
// Enrollment No: M22074223063

#include <iostream>
#include <algorithm>
using namespace std;
int binarySearch(int arr[], int n, int key) {
  int left = 0;
  int right = n - 1;

  while (left <= right) {
    int mid = (left + right) / 2;

    if (arr[mid] == key) {
      return mid;
    } else if (arr[mid] < key) {
      left = mid + 1;
    } else {
      right = mid - 1;
    }
  }

  return -1;
}

int main() {
  int n = 10;
  int arr[n];

  cout << "Enter ten numbers: ";
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  sort(arr, arr + n);

  int key;
  cout << "Enter the number to search for: ";
  cin >> key;

  int result = binarySearch(arr, n, key);

  if (result == -1) {
    cout << key << " was not found in the array." << endl;
  } else {
    cout << key << " was found at index " << result << "." << endl;
  }

  return 0;
}