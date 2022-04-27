#include <iostream>
#include <cstdlib>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	 double n,sum=0;
    while(cin >> n){
        sum+=(n*n);
        if(cin.peek()==','||cin.peek()==';'||cin.peek()=='$'){
            cin.ignore();
        }
        else if(cin.peek() =='\n'|| cin.peek()=='\r'){
            break;
        }
    }
    cout << sum;
	return 0;
}
