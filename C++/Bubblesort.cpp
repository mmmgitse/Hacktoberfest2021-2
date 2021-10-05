#include <iostream>

#include<vector>

using namespace std;

//Global variable declaration so that the variables can be used/accessed within any of the methods
int n;
//Separate method to print the list provided by the calling method
void printElems(vector < int > list) {
    int i;
    for (i = 0; i < n; i++)
        cout << list[i] << "  ";

}

//The Optimized Bubble sort logic
void bubbleSort(vector < int > & a) {
    int i, j, k, swap, flag;
    int len = a.size();

    for (int i = len; i > 0; i--) {

        //initializing flag to 0 after each pass to check if swapping happens or not in a particular pass
        flag = 0;

        //Any number of variables can be used within the loop provided the syntax is correct.
        for (j = 0, k = 1; k < i; j++, k++) {
            if (a[j] > a[k]) {
                //Swap the elements as they are in opposite order
                swap = a[j];
                a[j] = a[k];
                a[k] = swap;

                // if swapping happens update flag to 1
                flag = 1;
            }

        }

        cout << "\n\nThe elements of the list after Pass " << n - i + 1 << " are  : ";
        printElems(a);

        if (flag == 0) {
            cout << "\n\nTerminating in the " << n - i + 1 << " pass out of " << n << " passes due to the optimized logic\n\n" << endl;
            break;
        }

    }

}

int main() {
    int i, num;

    //Declaring the Vector to store the integer elements to be sorted
    vector < int > v;

    cout << "\n\n\n =====  Program to implement the Optimized Bubble sort algo using Vectors, in CPP  ===== \n\n";

    //taking input from the command line (user)
    cout << " Enter the number of integers you want to sort : ";
    cin >> n;
    cout << "\n\n";

    for (i = 0; i < n; i++) {
        cout << "Enter number" << i + 1 << " :  ";
        cin >> num;
        v.push_back(num);

    }

    cout << "\n\nThe elements of the list before applying the Optimized Bubble sort algorithm are : ";

    //Calling the method to print the actual list
    printElems(v);

    //Calling the bubble sort algorithm
    bubbleSort(v);

    cout << "\n\nThe elements of the list after applying the Optimized Bubble sort algorithm are  : ";

    //Calling the method to print the sorted list
    printElems(v);

    cout << "\n\n\n";

    return 0;
}
