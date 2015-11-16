#include <iostream>

using namespace std;

int main()
{
    int x;
    int pw;
    x=15;
    cout << "HAXXXX" << endl;
    while (pw!=x)
    {
        cout << "type correct password pw:";
        cin >> pw;
        cout << endl;
        if (pw!=x)
        {
            cout << "Zugriff verwehrt" << endl;
            cout << "erneut versuchen" << endl;
            if(pw<x)
            {
                cout << "Passwort ist größer!" << endl;
            }
            if(pw>x)
            {
                cout << "Passwort ist kleiner!" << endl;
            }
            //if(pw== "quit" )
            //{
            //    return(0);
            //}
        }
    }
    
    
    cout << "Richtig" << endl;
    cout << "Zugriff getattet" << endl;
    
    
    
    
    
    cout << x << endl;
   return 0;
}

 

}

 
