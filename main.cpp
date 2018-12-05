#include <iostream>
#include <cstdlib>
#include <ctime>
#include "functions.cpp"

using namespace std;

int main()
{
    int list1[5000];
    int list2[5000];
    int list3[5000];
    
    int compBubbleSort = 0, compSelectionSort = 0, compInsertionSort = 0;
    int assignBubbleSort = 0, assignSelectionSort = 0, assignInsertionSort = 0;
    
    fillArray(list1, 5000);
    copyArray(list1, list2, 5000);
    copyArray(list1, list3, 5000);
    
    bubbleSort(list1, 5000, compBubbleSort, assignBubbleSort);
    selectionSort(list2, 5000, compSelectionSort, assignSelectionSort);
    insertionSort(list3, 5000, compInsertionSort, assignInsertionSort);
    
    cout << "Number of comparisons---" << endl;
    cout << "  Bubble sort: " << compBubbleSort << endl;
    cout << "  Selection sort: " << compSelectionSort << endl;
    cout << "  Insertion sort: " << compInsertionSort << endl << endl;
    
    cout << "Number of item assignments---" << endl;
    cout << "  Bubble sort: " << assignBubbleSort << endl;
    cout << "  Selection sort: " << assignSelectionSort << endl;
    cout << "  Insertion sort: " << assignInsertionSort << endl << endl;
    
    
    return 0;   
}
