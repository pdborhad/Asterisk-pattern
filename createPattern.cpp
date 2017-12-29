/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int
main ()
{
    
    char astr = '*';
    int no = 0;
    
    do{
        cout << "Enter Odd Numberof Starts : ";
        cin >> no;
        cout << endl;
    }while(no%2 ==0);
    
    int index = (no + 1) / 2;
    int count = 1;
    int space = ((no+1)/2)-1;
    
    for (int i = 0; i < no; i++){
        for(int k = 0; k < space; k++){
            cout << " ";
        }
        for(int l = 0; l < count; l++){
            cout << "*";
        }
        cout << endl;
        
        if (i < index-1){
	        count += 2;
	        space--;
	    }
        else{
    	    count -= 2;
    	    space++;
	    }
    }
    return 0;
}
    
