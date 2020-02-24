#include <iostream>
using namespace std;
#define MAX_SIZE 100

// Function declarations
int Findmaxnumber(int array[], int index, int len);
int Findminnumber(int array[], int index, int len);


int main()
{
    int array[MAX_SIZE], Num, max, min;
    int i;

    // Inputting size and elements of array
    cout<<"Enter size of the array: ";
    cin>>Num;
    cout<<"Enter " <<Num <<" elements in array: \n";
    for(i=0; i<Num; i++)
    {
       cin>>array[i];
    }

    max = Findmaxnumber(array, 0, Num);
    min = Findminnumber(array, 0, Num);

    cout<<"Minimum element in array: "<<min<<endl;
    cout<<"Maximum element in array: "<<max<<endl;

    return 0;
}


 //Recursive function to find maximum element in the given array.
int Findmaxnumber(int array[], int index, int len)
{
    int max;
    if(index >= len-2)
    {
        if(array[index] > array[index + 1])
            return array[index];
        else
            return array[index + 1];
    }

    max = Findmaxnumber(array, index + 1, len);

    if(array[index] > max)
        return array[index];
    else
        return max;
}

//Recursive function to find minimum element in the array
int Findminnumber(int array[], int index, int len)
{
    int min;

    if(index >= len-2)
    {
        if(array[index] < array[index + 1])
            return array[index];
        else
            return array[index + 1];
    }

    min = Findminnumber(array, index + 1, len);

    if(array[index] < min)
        return array[index];
    else
        return min;
}
