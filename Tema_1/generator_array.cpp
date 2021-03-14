#include<iostream>
#include<fstream>
using namespace std;

int main()
{   cout<<"nr de teste:";
    int nr;
    cin>>nr;
    ofstream f("teste_sortari.txt");
    f<<nr<<endl;
    for(int i=0;i<nr;i++)
    {
    int dim, max;
    cout<<"Dimensiunea array::";
    cin>>dim;
    cout<<"maxim numar:";
    cin>>max;
    f<<dim<<endl<<max<<endl;
    int u[dim];
    for(int i=0;i<dim;i++)
    {
      u[i]=rand()%max;
      f<<u[i]<<", ";
    }
    f<<endl;
    } 
    f.close();
    return 0;
}