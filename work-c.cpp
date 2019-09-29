#include <iostream>
#include <windows.h>
using namespace std;

void pushX(int num){
    for(int i=0;i<num;i++)
        cout<<" ";
}
main() {
	
	char nama[3][30]= {"Dea Tamara Sarira","Muhammad Daffa Prayodi","Yudha Alfriyand"};

    for(int ab=0;ab<=2;ab++){
    	for(int j=0;j<80;j++){
        system("CLS");
        pushX(j);
        cout<<nama[ab];
        Sleep(80);
    }
}

}

//emdpdev.com
