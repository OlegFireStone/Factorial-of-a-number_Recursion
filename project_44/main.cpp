#include <iostream>
using namespace std;
//��������� �����. ��������
int fun(int F){ 

	if (F==1){
		return 1;
	}
	else if(F==0){
		return 0;
	}
	
	return F * fun(F-1);
}


void main(){
	setlocale(0,"rus");
	int F;
	cout<<"������� ����� ��� ���������� ����������: ";
	cin>>F;
	
	cout<<"�����: "<<fun(F)<<endl;
	cin.get();
	cin.get();
}