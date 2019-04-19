

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <vector>
#include <map>
#include <string>
#include <ctime>


using namespace std;

void apresentacao(){

	while(true){
	
    	cout << "██████╗ ███████╗███╗   ███╗    ██╗   ██╗██╗███╗   ██╗██████╗  ██████╗ "<<endl;
        cout << "██╔══██╗██╔════╝████╗ ████║    ██║   ██║██║████╗  ██║██╔══██╗██╔═══██╗"<<endl;
        cout << "██████╔╝█████╗  ██╔████╔██║    ██║   ██║██║██╔██╗ ██║██║  ██║██║   ██║"<<endl;
        cout << "██╔══██╗██╔══╝  ██║╚██╔╝██║    ╚██╗ ██╔╝██║██║╚██╗██║██║  ██║██║   ██║"<<endl;
        cout << "██████╔╝███████╗██║ ╚═╝ ██║     ╚████╔╝ ██║██║ ╚████║██████╔╝╚██████╔╝"<<endl;
	cout << "╚═════╝ ╚══════╝╚═╝     ╚═╝      ╚═══╝  ╚═╝╚═╝  ╚═══╝╚═════╝  ╚═════╝ "<<endl;
        cout << "À LOCALIZE CAR"<<endl;
        cout<<" "<<endl;
        cout << "COMO VOCÊ DESEJA SEGUIR?"<<endl;
        cout << "(1) PESQUISAR/ALUGAR"<<endl;
        cout << "(2) DEVOLVER"<<endl;
        cout << "(3) SAIR" <<endl;
    	int opcao;

        cin >> opcao;

        if (opcao == 3)
        {
            break;
        }
        else if (opcao == 1)
        {
            break;
        }
        else if (opcao == 2)
        {
           break;
        }
        else
        {
            cout << "SELECIONE UMA OPÇAO VALIDA!"<<endl;
            cout<<" "<<endl;
        }
    }
	
}


int main()
{
 apresentacao();

return 0;
}
