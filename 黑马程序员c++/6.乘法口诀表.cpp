#include <iostream>

using namespace std;
int main(int argc, char *argv[]) {
	for(int i=1;i<=9;i++)
	{
		for(int j=1;j<=i;j++)
		{
			printf("%d*%d=%d ",i,j,i*j);
		}
		cout<<endl;
	}
	return 0;
}