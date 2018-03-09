//first git 
#include <iostream>

#include <math.h>
using namespace std;



void hanoi(int x ,int dsknum, int aLocation, int bLocaion, int cLocation)
{	/*x tedad disk ha&dsknum=shomare disk be tartib az bozorg(=1)bekoochak
	aLocation=mile e avaliye&cLocation mile maghsad&bLocation=mile komaki*/
	
	
	int counter =0;
	int temp;

for(int i=0;i<pow(2,x);i++){


	if (dsknum == 0);
	else
	{
    	if (dsknum%2!=0)
    	{
        	cout << aLocation << "->" << bLocaion << endl;
        	cout << aLocation << "->" << cLocation << endl;
        	cout << bLocaion << "->" << cLocation << endl;
        	temp=cLocation;
        	cLocation=bLocaion;
        	bLocaion=temp;
        	dsknum --;
    	}
    	else if (dsknum%2==0)
    	{
        	counter++;
        	if (counter%2==0)
            	cout << cLocation << "->" << aLocation << endl;
        	else
            	cout << aLocation << "->" << cLocation << endl;
        	temp=aLocation;
        	aLocation=bLocaion;
        	bLocaion=temp;
        	dsknum --;
    	}
	}
}
}

int main()
{
int x, j;
cout << "Enter number of disks: ";
cin >> x;
j = pow(2, x-1)-1;
if (x%2==0)
    hanoi(x,j, 1, 2, 3);
else
    hanoi(x,j, 1, 3, 2);
return 0;
}
