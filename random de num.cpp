#include <stdlib.h>
#include <time.h>
#include<iostream>
using namespace std;
 
int main()
{
    int num, c;
    srand(time(NULL));
    
    for(c = 1; c <= 200; c++)
    {
        num = 1 + rand() % (200 - 1);
        cout << num<<endl;
    }
    
    return 0;
}

