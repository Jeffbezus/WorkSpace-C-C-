#include <iostream>
using namespace std;

int const maximumSize = 10;
int stack[maximumSize];
int top = -1;

bool emptyStack(){
    if (top == -1){
        return true;
    }
    else{
        return false;
    }
}

bool fullStack(){
    if (top == (maximumSize - 1)){
        return true;
    }
    else{
        return false;
    }
}


int queryStack(){
    if (emptyStack()){
        cout << "Empty Stack";
    }
    else{
        for(int i = 0; i <= top; i++){
            cout << stack[i];
        }
    }
    return 0;
}

int push(){
    if(fullStack()){
        cout << "Full Stack";
    }else{
        int value;
        cout << "Enter the value: ";
        cin >> value;
        top++;
        stack[top] = value;
        
    }
    return 0;
}

int pop(){
    if(emptyStack()){
        cout << "Empty Stack"; 
    }else{
        top--; 
    }
    return 0;
}

int main(){
int option = 1;
    
    while(option != 0){
	
	    cout << "####### Stack Menu #######\n \n";	    
	
	    cout << "0 - Close \n";
	    cout << "1 - Push \n";
	    cout << "2 - Pop \n";
	    cout << "3 - Query \n";
	    cout << "\n";
	    cout << "Options:";
	    cin >> option;
	
	    if (option == 0){ 
	       cout << "Closed";
	    }
	    if (option == 1){ 
	       push();
	    }
	    if (option == 2){ 
	       pop();
	    }
	    if (option == 3){ 
	       queryStack();	       
	    }
	    if (option > 3){ 
	       cout <<"Invalid Option";
	    }
	    system("PAUSE");
	    system("cls");
    }
}