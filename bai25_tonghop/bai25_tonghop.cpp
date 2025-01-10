// bai25_tonghop.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    int so, sochan = 0, sole = 0, giaithua = 1, so1 = 0, so2 = 1, tong = { so1 + so2 },songuyento =0 ;
    cout << "tong hop\n";
    cout << "nhap so "; cin >> so;
    for (int i = 1; i < so; i++)
    {
        if ( i % 2 == 0 )
        {
            sochan += i;            
        }
    }
    cout << " tong so chang la : " << sochan << endl ;
    for (int j = 1; j < so ; j++)
    {
        if (j % 2 != 0)
        {
            sole += j ;
        }
    }
    cout << " tong so le la : " << sole << endl ;
    for (int h = 1; h <= so ; h++)
    {
        giaithua = giaithua * h ;
    }
    cout << "giai thua la : " << giaithua << endl;
    cout << so1 << " " << so2<< " ";
    for (int t = 0; t <so -2 ; t++)
    {
        cout << tong << " ";
        so1 = so2;
        so2 = tong;
        tong = so1 + so2;
    }
    cout << " so nguyen to la : "; 
    for (int y = 1; y < so; y++)
    {
        if (so % y == 0)
        {
            songuyento++;
        }
    }
    if (songuyento == 2  )
    {
        cout << songuyento << " "; 
    }
   
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
