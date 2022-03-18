#include <iostream>

  using namespace std;
int X=0;
int O=0;
int NOWIN = 0;
 // 9 variables qui indique la position de numero 
 char c1='1',c2='2',c3='3',c4='4',c5='5',c6='6',c7='7',c8='8',c9='9';
 // fonction permet de designer la table 
 void draw();
 // fonction replace permet de remplacer le numero par X ou O selon le numero choisi
 void replace(int i,char c);

 // current player c est le role de joueur actuel 
 char currentplayer='X';
// verification que X est gagne ou no 
 bool checkwinnerXX();
 // verification que le joueur  O est gagne ou pas
 bool checkwinnerOO();

 // fonction qui traite est que est ce que X est gagner si oui la fonction return la valeur 0 cad true
 bool checkwinnerX();

 // fonction qui traite est que est ce que 0 est gagner si oui la fonction return la valeur 0 cad true
 bool checkwinnerO();

// la fonction verifie le cas quand il n ya aucun joueur est gagne 
 bool checknowin();
void draw(){
cout<<"\t" << c1 <<"\t |"<<"\t" << c2 <<"\t |"<<"\t" << c3 <<"\t |"<< endl;
cout <<"--------------------------------------------------"<<endl;
cout<<"\t" << c4 <<"\t |"<<"\t" << c5 <<"\t |"<<"\t" << c6 <<"\t |"<< endl;
cout <<"--------------------------------------------------"<<endl;
cout<<"\t" << c7 <<"\t |"<<"\t" << c8 <<"\t |"<<"\t" << c9 <<"\t |"<< endl;

}
void replace (int i,char c){
    switch (i)
    {
    case 1:
    c1=c;

        break;
        case 2:
    c2=c;

        break;
        case 3:
    c3=c;

        break;
        case 4:
    c4=c;

        break;
        case 5:
    c5=c;

        break;
        case 6:
    c6=c;

        break;
        case 7:
    c7=c;

        break;
        case 8:
    c8=c;

        break;
        case 9:
    c9=c;

        break;
       
    
    }
    
}
bool checkwinnerX(){
    bool row1=(c1=='X'&&c2=='X'&&c3=='X');
     bool row2=(c4=='X'&&c5=='X'&&c6=='X');
bool row3 =(c7=='X'&&c8=='X'&&c9=='X');
 bool cln1=(c1=='X'&&c4=='X'&&c7=='X');
   bool cln2=(c2=='X'&&c5=='X'&&c8=='X');
     bool cln3=(c3=='X'&&c6=='X'&&c9=='X');

 bool dia2=(c3=='X'&&c5=='X'&&c7=='X');
   bool dia1=(c1=='X'&&c5=='X'&&c9=='X');
    if(row1||row2||row3||cln1||cln2||dia2||dia1){
       
         return true;
    }
   
    else 
    return false;


}
bool checkwinnerO(){
    bool row1=(c1=='O'&&c2=='O'&&c3=='O');
     bool row2=(c4=='O'&&c5=='O'&&c6=='O');
bool row3 =(c7=='O'&&c8=='O'&&c9=='O');
 bool cln1=(c1=='O'&&c4=='O'&&c7=='O');
   bool cln2=(c2=='O'&&c5=='O'&&c8=='O');
     bool cln3=(c3=='O'&&c6=='O'&&c9=='O');

 bool dia2=(c3=='O'&&c5=='O'&&c7=='O');
   bool dia1=(c1=='O'&&c5=='O'&&c9=='O');
    if(row1||row2||row3||cln1||cln2||dia2||dia1){
   
  
   return true;
    }
    else 
    return false;


}
bool checkwinnerXX(){
 if(checkwinnerX()==true && checkwinnerO()==false ){
 X++;
 cout << "the winners is X \n" ;
 }
 

 
}
bool checkwinnerOO(){
 if(checkwinnerX()==false && checkwinnerO()==true ){
 O++;
 cout << "the winners is O \n" ;
 }

}
bool checknowin() {
 
if(checkwinnerX()==false && checkwinnerO()==false){
NOWIN++;
cout << "no winner \n";
}

}



