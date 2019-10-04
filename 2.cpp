#include <iostream>
using namespace std;

int duplo(int numero){
	if ((numero==0)or(numero==1)){
		return 1;
	}
	else{
		return (numero*duplo(numero-2));
	}
}

int main(){
	int n;
	cin>>n;
	cout<<duplo(n);
}
