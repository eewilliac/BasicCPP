#include <iostream>

using namespace std;

void handleSomeBusiness(char* msg){
	cout<<"Taking care of buisiness";
	cout<<"o hai:"<<msg<<endl;
}

void cbContainer(char* amsg,void(*cbfp)(char* msg)){
	cbfp(amsg);
}

int main(int argc, char* argv[]){
	char p;
	cout << "Simple Program";
	cbContainer("Ettienne",handleSomeBusiness);
	cin>>p;
}