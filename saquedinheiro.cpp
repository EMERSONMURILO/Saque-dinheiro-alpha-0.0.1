    #include <iostream>
    #define valormaximo 100000
    using namespace std;
    int main(){
     int  n, cem, cemmod, cinquenta, cinquentamod,
          vinte, vintemod, dez, dezmod, cinco, cincomod,
          dois, doismod, um;

     cout << "-Digite o valor que deseja sacar:\n" << "-Note que: o valor máximo é R$100.000,00 reais!\n" << "-Se voce quiser R$ 150,00 reais, Digite '150' ";
          cout << "  \n";
          cin >> n;
     if (n<=valormaximo & n>0){
     cout << "\n\nMuito bem, você digitou um numero valido!";
     cout << "\nVocê digitou " << n;
     cout << "\n \n";
      int cem = n/100;
      int cemmod = n%100;
      int cinquenta = cemmod/50;
      int cinquentamod = cemmod%50;
      int vinte = cinquentamod/20;
      int vintemod = cinquentamod%20;
      int dez = vintemod/10;
      int dezmod = vintemod%10;
      int cinco = dezmod/5;
      int cincomod = dezmod%5;
      int dois = cincomod/2;
      int doismod = cincomod%2;
      int um = doismod/1;
     cout << cem << " Notas de CEM reais\n";
     cout << cinquenta << " Notas de CINQUENTA reais\n";
     cout << vinte << " Notas de VINTE reais\n";
     cout << dez << " Notas de DEZ reais\n";
     cout << cinco <<" Notas de CINCO reais\n";
     cout << dois << " Notas de DOIS reais\n";
     cout << um << " Notas de UM real\n";
     }
     else{
     cout <<"Você digitou um numero invalido, reinicie o programa\n\n" << "\nValor digitado: " <<n;}
    }
