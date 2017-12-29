#include <iostream>

using namespace std;

int
main ()
{
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
    
