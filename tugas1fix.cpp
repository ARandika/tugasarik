/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
int main()
{

    	//int a = 0;
    	int repeat = 0;
    do 
    {
    	int a = 0;
    	
    	
    	cout << "WELCOME TO THE CALOR PROGRAM!" << endl;
    	cout << "This program made by Ariq Athallah" << endl;
    	cout << "Mechanical Engineering, 23rd TPB class" << endl;
    	cout << "Choose your choice " << endl;
    	cout << "1. Q" << endl;
    	cout << "2. m" << endl;
    	cout << "3. c" << endl;
    	cout << "4. T2" << endl;
    	cout << "5. T1" << endl;
    	
    
    	
    	cin >> a;
    
        int q[1], m[1], c[1], t1[1], t2[1];
        int b;
        int d;
        int e;
        int f;
        int g;
        // char repeat = '1';
    
       // cout << "debug:" << a << endl;
        
            if(a == 1)
            {
                
                cout << "Input m " << endl;
                cin >> m[1] ;
                cout << "Input c " << endl;
                cin >> c[1] ;
                cout << "Input t1 " << endl;
                cin >> t1[1] ;
                cout << "Input t2 " << endl;
                cin >> t2[1] ;
        
                b=m[1]*c[1]*(t2[1]-t1[1]);
        
                cout << "The value of Q is " << b << " J" << endl;
        
            }
            else if(a == 2)
            {
                
                cout << "Input Q " << endl;
                cin >> q[1] ;
                cout << "Input c " << endl;
                cin >> c[1] ;
                cout << "Input t1 " << endl;
                cin >> t1[1] ;
                cout << "Input t2 " << endl;
                cin >> t2[1] ;
        
                d=q[1]/c[1]*(t2[1]-t1[1]);
        
                cout << "The value of m is " << d << " kg" << endl;
                
            }
            
            else if(a == 3)
            {
            	cout << "Input Q " << endl;
                cin >> q[1] ;
                cout << "Input m " << endl;
                cin >> m[1] ;
                cout << "Input t1 " << endl;
                cin >> t1[1] ;
                cout << "Input t2 " << endl;
                cin >> t2[1] ;
        
                e=q[1]/m[1]*(t2[1]-t1[1]);
        
                cout << "The value of c is " << e << " J/kg.K" << endl;
        	}
        	
        	
            else if(a == 4)
            {
            	cout << "Input Q " << endl;
                cin >> q[1] ;
                cout << "Input m " << endl;
                cin >> m[1] ;
                cout << "Input c " << endl;
                cin >> c[1] ;
                cout << "Input t1 " << endl;
                cin >> t1[1] ;
        
                f=q[1]/m[1]*c[1]+t1[1];
        
                cout << "The value of T2 is " << f << " K" << endl;
        	}
        	
        	else if (a == 5)
        	{
            	cout << "Input Q " << endl;
                cin >> q[1] ;
                cout << "Input m " << endl;
                cin >> m[1] ;
                cout << "Input c " << endl;
                cin >> c[1] ;
                cout << "Input t2 " << endl;
                cin >> t2[1] ;
        
                g=t2[1]-q[1]/m[1]*c[1];
        
                cout << "The value of T1 is " << g << " K" << endl;
        	}
        	else
        	{
        	    cout<< "Please input correct value" << endl;
        	}
        	
        cout<<endl<<"-------------------------------------"<<endl;
    	cout<< "Do you want to repeat? " << endl;
    	cout<< "1. Yes, I do" << endl;
    	cout<< "2. No, enough for today" << endl;
    	cin>>repeat;
	
    } while (repeat == 1);

	cout<<endl<<"HATUR NUHUN"<<endl;

	 
	return 0;
}
