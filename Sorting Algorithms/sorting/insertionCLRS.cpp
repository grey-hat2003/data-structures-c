#include<bits_stdc++.h>
using namespace std;
 
void insertion_sort(int arr[])//, int size)
{
    int i, j, size = (sizeof(arr) - sizeof(arr[0]));

    for(i = 1; i < size; i++)
    {
        int key = arr[i];
        j = i - 1;

        while(i >= 0 && arr[j] > key)
        {
            arr[j+1] = arr[j];
            j -= 1;
        }
        arr[j+1] = key;
    }

}

// int main()
// {
//     int a[] = {6, 2, 1, 5, 7};
//     insertion_sort(a);

//     for (int i = 0; i<5; i++)
//         printf("\n%d", a[i]);

//     return 0;
// }

// int main()
// {
//     int a[] = {6, 2, 1, 5, 7};
//     cout << sizeof(a) << endl << sizeof(a[0]); 
//     //       20                     4                 

//     cout << endl <<     *(&a + 1)    << endl <<     a      << endl <<      (&a + 1)     << endl << &a[0];
//     //                0x7ffee77166e4           x7ffee77166d0            0x7ffee77166e4 



//     /* 
//        1) a == &a[0] --> true

//        2) *(&a + 1) and (&a + 1) give same values, but their data type is different
//     */

//     // int *p = *(&a+1);
//     // int p2 = (&a+1);



 

//     return 0;
// }