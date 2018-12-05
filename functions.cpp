#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

inline void fillArray(int list[], int length)
{
    srand(time(0));
    
    for (int i = 0; i < length; i++)
        list[i] = rand() % 20000;
}

inline void copyArray(int list1[], int list2[], int length)
{
    for (int i = 0; i < length; i++)
        list2[i] = list1[i];
}

inline void bubbleSort(int list[], int length, int& comp, int& assign)
{

for (int iteration = 1; iteration < length; iteration++)
{
    for (int index = 0; index < length-iteration;index++)
    {
        //increment comparisons by one
        comp++;
        if (list[index] > list[index + 1])
        {
            int temp = list[index];
            list[index] = list[index + 1];
            list[index + 1] = temp;
            //increment itemAssignments value by one
            assign++;
}
}

    
    
    // write a function using bubble sort to sort the provided array
    
    
    // assign "comp" to the number of comparisons required
    
    // assign "assign" to the number of item assignments

}
    
    inline void selectionSort(int list[], int length, int& comp, int& assign)
    {
        
        //local variables
        int index;
        int smallestIndex;
        int location;
        int temp;
        
        for (index = 0; index < length-1;index++)
        {
            smallestIndex = index;
            for (location = index +1; location < length;location++)
            {
                //increment comparisons by one
                comp++;
                if (list[location] < list[smallestIndex])
                {
                    smallestIndex = location;
                }
            } //end of location loop
            
            temp = list[smallestIndex];
            list[smallestIndex] = list[index];
            //increment assignments by three
            assign=assign+3;
            list[index] = temp;
        } //end of index for loop
        
        
    // write a function using selection sort to sort the provided array
    
    // assign "comp" to the number of comparisons required
    
    // assign "assign" to the number of item assignments
}
inline void insertionSort(int list[], int listLength, int& comp, int& assign)
{
    
    
    //local declarations of variables
    int firstOutOfOrder,location;
    int temp;
    
    for (firstOutOfOrder = 1; firstOutOfOrder < listLength; firstOutOfOrder++)
    {
        //increment comparisons value by one
        comp++;
        if (list[firstOutOfOrder] < list[firstOutOfOrder-1])
        {
            comp++;
            temp = list[firstOutOfOrder];
            location = firstOutOfOrder;
            //increment assignment value by two
            assign = assign+2;
            
            do
            {
                list[location] = list[location-1];
                assign++;
                location--;
                comp++;
            } while(location > 0 && list[location -1] > temp);
            list[location] = temp;
            assign++;
        }
    }
    
    // write a function using insertion sort to sort the provided array
    
    // assign "comp" to the number of comparisons required
    
    // assign "assign" to the number of item assignments
}
