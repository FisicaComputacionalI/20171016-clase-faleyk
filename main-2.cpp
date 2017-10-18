//programa que suma los números impares entre el 1 y el 10
//Autor: Fabiola Canete
//18 octubre 2017
#include <iostream>

using namespace std;

int main()
{
    int sum=0, count =1;

    while (count < 20) {
        if ((count%2)<1){
            sum=sum+count;
        }
        count++;
    }
    cout << "Sum = " << sum<<endl;
    return 0;

}
