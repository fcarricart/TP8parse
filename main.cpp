#include "parsecmd.h"
#include "parsecallback.h"
#include <iostream>
using namespace std;
int main(int argc, char ** argv)
{
	pCallback p = parseCallback;
	userData myinfo;

	myinfo.key[0]  = (char*)"PATH";//habria que ubicarlo en un class
	myinfo.key[1] = (char*)"THRESHOLD";

	int result = parseCmdLine(argc, argv, p, &myinfo);

	if (result == ERROR1)
		cout << "Error tipo 1, se ha ingresado una opcion sin valor" << endl;
	else if (result == ERROR2)
		cout << "Error tipo 2, se ha ingresado una opcion sin clave" << endl;
	else if (result == ERROR3)
		cout << "Error tipo 3, los datos ingresados no son validos" << endl;
	else
		cout << "path:" << myinfo.value[0] << endl;
		cout << "threshold:" <<myinfo.value[1] << endl;



	system("pause");
	return 0;
}