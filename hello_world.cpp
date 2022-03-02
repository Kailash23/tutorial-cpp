#include <iostream>
using namespace std;

int main()
{
  // Data Type
  // Name of Array
  // [] -> Square Brackets
  // () -> Parentheses or curved bracket
  // {} -> Curly Brackets
  // Size of int -> 4 Bytes
  // 1 Byte -> 8 Bits
  // Array Index
  int arr[] = {0, 7, 2, 5, 4, 7, 1, 3, 6, 78, 1};
  //           0  1  2  3  4  5  6  7  8  9   10
  // cout << arr[1]; // 7
  // cout << sizeof(arr);                  // 40 Bytes
  // cout << sizeof(arr[0]);               // 4 Bytes
  int n = sizeof(arr) / sizeof(arr[0]); // 10
  // Here n is the number of elements in array
  // cout << n;
  // Program to print the last element in the array
  // cout << arr[n - 1]; // Here n is the number of elements in the array.
  // x -> 5th element -> arr[x - 1];
  // cout << arr; // 10x7ff7bfa75400
  // Array name is the memory location of the first element of the array
  // cout << arr[0] << "\n";
  // cout << arr[1] << "\n";
  // cout << arr[2] << "\n";
  // cout << arr[3] << "\n";

  for (int i = arr[0]; i < arr[n - 1]; i++)
  {
    cout << i << endl;
  }
}

// WAP to print all the elements of array in different line.
/**
 * 0
 * 7
 * 2
 * 5
 * 4
 * 7
 * 1
 * 3
 * 6
 * 78
 * 1
 */