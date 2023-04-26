#include <iostream>
using namespace std;


int const maximumSize = 10;
int queue[maximumSize];
int first = 0, last = 0;


bool emptyQueue(){
    if( first == last){
        return true;
    }
    else{
        return false;
    }
}
bool fullQueue(){
    if(last == (maximumSize - 1)){
        return true;
    }
    else{
        return false;
    }
}
int consultQueue(){
    if(emptyQueue()){
        cout << "Empty Queue!" << "\n";
    }
    else{
        for (int i = 0; i < last; i++){
            cout << queue[i] << "\n";
        }
    }
    return 0;
}

int enqueue(){
    if (fullQueue()){
        cout << "Full Queue!" << "\n";
    }
    else{
        int valor;
        cout << "Insira o valor:";
        cin >> valor;
        queue[last] = valor;
        last++;
    }
    return 0;
}

int dequeue(){
    if (emptyQueue()){
        cout << "Empty Queue!" << "\n";
    }
    else{
        for (int i = 0; i < maximumSize; i++){
            int x = queue[i+1];
            queue[i] = x;
            
        }
        last--;
    }
    return 0;
}

int main()
{

    int opcao = 1;
    
    while(opcao != 0){
	
	    cout << "####### Queue Menu #######\n \n";
	
	    cout << "0 - Close \n";
	    cout << "1 - Enqueue \n";
	    cout << "2 - Dequeue \n";
	    cout << "3 - Consult Queue \n";
	    cout << "\n";
	    cout << "Option:";
	    cin >> opcao;
	
	    if (opcao == 0){ 
	       cout << "Closed";
	    }
	    if (opcao == 1){ 
	       enqueue();
	    }
	    if (opcao == 2){ 
	       dequeue();
	    }
	    if (opcao == 3){ 
	       consultQueue();	       
	    }
	    if (opcao > 3){ 
	       cout <<"Invalid Option";
	    }
	    system("PAUSE");
	    system("cls");
	}
    return 0;
}