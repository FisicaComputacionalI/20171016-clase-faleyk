//programa que suma los números pares entre el 1 y el 20, incluyendo el 20.
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
