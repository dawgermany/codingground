#include <iostream>

using namespace std;

int main()
{
    int x;
    while (x!=1)
    {
        cin >> x;
        if (x!=1)
        {
            cout << "Zugriff verwehrt" << endl;
            cout << "erneut versuchen" << endl;
        }
    }
    
    
    cout << "Richtig" << endl;
    cout << "Zugriff getattet" << endl;
    
    
    
    
    
    cout << x << endl;
   return 0;
}

 
