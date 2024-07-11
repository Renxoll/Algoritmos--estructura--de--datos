#include "iostream"
#include "conio.h"
#include "fstream"

using namespace std;

int main(){
	string line;
	
	cout << "Ejemplo de lectura y escritura de archivos" << endl;
	
	ifstream archivo("archivo.txt");
	if(archivo.is_open()){
		while(getline(archivo,line)){
			cout << line << "\n";
		}
		archivo.close();
	}
	
	
	_getch();
	return 0;
}
