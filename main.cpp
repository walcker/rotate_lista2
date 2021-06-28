#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <string>
#include <fstream>
#include <iostream>
#include <new>

using namespace std;

int main ()
{
   char vetor1[10], vetor2[10], e, aux;

   cout <<"Entre com os elementos a serem invertidos" << endl;
   for(int i = 0; i < 10; i++) {
      cin >> vetor1[i];
   }

    cout<<endl;

    cout <<"Entre com o elemento que deve ir para a frente." << endl;
    cin >> e;

    for( int i = 0; i < 10; i++){
        if(vetor1[i] != e){
          aux = vetor1[i];
            for(int j = 0; j < 10; j++){
              vetor1[j] = vetor1[j+1];
              vetor1[9 - i] = aux;
              //cout << vetor1[i];
            }
        }
    }

    for(int i = 0; i < 10; i++){
        cout << vetor1[i];
    }

    cout << endl;

    return 0;
    }
