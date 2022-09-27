#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;
void gera_cartela(int cartela[])
{
int preen = 0;
while(preen < 15){
    int veri = 1;
    int num = 1 + rand()%90;
    for(int i = 0; i < preen; i++){
        if(num == cartela[i]){
            veri = 0;
        }
    }
    if(veri == 1){
        cartela[preen] = num;
        preen++;
        }
   }
}
void inpre_cart(int cartela[], int cont)
{
cout << endl << "cartela " << cont << endl ;
for ( int i=0; i<15; i++){
if( i%5 == 0){
        cout << endl;
        cout << cartela[i] << "|";
}
    else  cout << cartela[i] << "|";
}
cout << endl;
}
int sorteio(int cart_macar[])
{
cout << endl << "sorteando os numeros" << endl;
int parada = 0;
int preen = 0;
 while(preen < 90){
        int veri = 1;
        int num = 1 + rand()%90;
        for(int i = 0; i < preen; i++){
            if(num == cart_macar[i]){
                veri = 0;
            }
        }
        if(veri == 1){
            cart_macar[preen] = num;
            preen++;
}
 }
return 0;
}
void zera_cart(int veri_cartela[], int parametro)
{
 for(int i = 0; i < parametro; i++){
    veri_cartela[i] = 0;
}
}
void verifica_cartela( int vet_cart[], int veri_vet_cart[],int vet_cart1[],int  veri_vet_cart1[],int vet_cart2[],int  veri_vet_cart2[],int vet_cart3[],int veri_vet_cart3[], int macar , int ganha, int ganha1, int ganha2, int ganha3, int print_marc[], int sort_macar[] )
{for(int j = 0;j < 90; j++){
macar = sort_macar[j];
print_marc[macar-1] = macar;
for(int i = 0; i < 15; i++){
if(macar == vet_cart[i] ){
            veri_vet_cart[i] = 1;
            ganha++;
}
if(macar == vet_cart1[i] ){
            veri_vet_cart1[i] = 1;
            ganha1++;
}
if(macar == vet_cart2[i] ){
            veri_vet_cart2[i] = 1;
            ganha2++;
}
if(macar == vet_cart3[i] ){
            veri_vet_cart3[i] = 1;
            ganha3++;
}
if( ganha == 15){
    return;
}
if(ganha1 == 15){
    return;
}
if(ganha2 == 15){
    return;
}
if(ganha3 == 15){
    return;
}
}
}
}
int verifica_ganhador(int cartela[], int veri_cartela[], int cart,int print_marc[])
{
if(veri_cartela[0] == 1 && veri_cartela[1] == 1 && veri_cartela[2] == 1 && veri_cartela[3] == 1 && veri_cartela[4] == 1 && veri_cartela[5] == 1 && veri_cartela[6] == 1 && veri_cartela[7] == 1 && veri_cartela[8] == 1 && veri_cartela[9] == 1 && veri_cartela[10] == 1 && veri_cartela[11] == 1 &&  veri_cartela[12] == 1 && veri_cartela[13] == 1 && veri_cartela[14] == 1){
    cout << endl   << endl <<  "participante " << cart << " venceu" << endl << endl << "sua cartela era essa" << endl;
    for( int i =0; i < 15; i++){
        if(i%5 == 0){
            cout << endl;
            cout << cartela[i] << "|";
        }
        else cout << cartela[i] << "|";
    }
    cout << endl << endl<< "sua cartela de verificao" << endl;
    for( int i =0; i < 15; i++){
        if(i%5 == 0){
            cout << endl;
            cout << veri_cartela[i] << "|";
        }
        else cout << veri_cartela[i] << "|";
}

    cout << endl << endl << "cartela de marcacao" << endl << endl;
    for(int i = 0; i < 90;i++){
        if( i%10 == 0){
            cout << endl << print_marc[i] << "|";
        }
        else cout << print_marc[i] << "|";
    }
}
 return 0;
}
int main()
{
srand(time(NULL));
int vet_cart[15],vet_cart1[15],vet_cart2[15],vet_cart3[15], print_marc[90];
int veri_vet_cart[15], veri_vet_cart1[15], veri_vet_cart2[15], veri_vet_cart3[15];
int macar, sort_macar[90];
int ganha = 0, ganha1 = 0, ganha2 = 0, ganha3 = 0, paramentro = 0, cont = 0;
cont = 1;
gera_cartela(vet_cart);
inpre_cart(vet_cart, cont);
cont = 2;
gera_cartela(vet_cart1);
inpre_cart(vet_cart1,cont);
cont = 3;
gera_cartela(vet_cart2);
inpre_cart(vet_cart2,cont);
cont = 4;
gera_cartela(vet_cart3);
inpre_cart(vet_cart3,cont);
sorteio(sort_macar);
paramentro = 15;
zera_cart(veri_vet_cart,paramentro);
zera_cart(veri_vet_cart1, paramentro);
zera_cart(veri_vet_cart2, paramentro);
zera_cart(veri_vet_cart3, paramentro);
paramentro = 90;
zera_cart(print_marc, paramentro);
verifica_cartela(vet_cart, veri_vet_cart,vet_cart1, veri_vet_cart1,vet_cart2, veri_vet_cart2,vet_cart3, veri_vet_cart3, macar,ganha, ganha1, ganha2, ganha3, print_marc,sort_macar);
int cart = 1;
verifica_ganhador(vet_cart, veri_vet_cart,cart, print_marc);
cart = 2;
verifica_ganhador(vet_cart1, veri_vet_cart1,cart, print_marc);
cart = 3;
verifica_ganhador(vet_cart2, veri_vet_cart2,cart,print_marc);
cart = 4;
verifica_ganhador(vet_cart3, veri_vet_cart3,cart,print_marc);
}
