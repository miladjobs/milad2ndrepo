#include <iostream>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;
int main(int argc, char** argv) {
	int i;
	int a;
	cin>>a;
	while(a>0){
		for(i=0;(pow(2,i))<=a;i++){
		}
		cout<<i<<endl;
		a=a-pow(2,i-1);
	}
	return 0;
}
