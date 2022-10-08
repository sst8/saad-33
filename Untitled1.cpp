#include <iostream>
using namespace std;
int **Myarr;
int size;
void Createarray ()
{
        Myarr = new int*[size];
        for(int i = 0; i < size; i++)
                Myarr[i] = new int(i);
}
void resizearray(int** arr)
{
        int **resize;
        resize = new int*[size*2];

        for(int i = 0; i < size; i++)
                resize[i] = new int(*arr[i]);
        cout << endl;
        arr = resize;
        size *= 2;
        delete[] resize;
}
int main()
{
         size = 10;
        Createarray ();
        for(int i = 0; i < size; i++)
                cout << *Myarr[i] << endl;
        resizearray(Myarr);

        cout << endl;
        for(int i = (size / 2); i < size; i++)
                Myarr[i] = new int(i);
        for(int i = 0; i < size; i++)
                cout << *Myarr[i] << endl;
}

