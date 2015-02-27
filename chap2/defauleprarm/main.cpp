#include <iostream>
using namespace std;

#include "add.h"
using namespace iotek;

int main(int argc, char *argv[])
{
	int val = add();//add(5,6,7);	
	cout << val << endl;
	return 0;
}
