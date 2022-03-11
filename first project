#include <stdio.h>
#include <stdlib.h>


typedef struct{
char nom[2];
float note[2];
char identifient[2];
float math,pc,ang ;
float moyenne[2];

}student;




int main()
{



    student x1[2];
 int i;
 int k;
 float M[2];
 int s=0;
 char identifient;
 /*la partie de saisie */
 printf("******************* *****                 projet monsieur saidi     *********************************\n");
 for(i=0;i<2;i++){
 	printf("saisir les informationd de l etudient numero %d \n",i+1);
 	printf("saisir son nom \n");
 	scanf("%s",&x1[i].nom);
 	printf("saisir son identifient  \n");
 	scanf("%s",&x1[i].identifient);
 	printf("sasir la note du math \n");
 	scanf("%f",&x1[i].math);
 	printf("sasir la note du pc \n");
 	scanf("%f",&x1[i].pc);
 	printf("sasir la note du ang \n");
 	scanf("%f",&x1[i].ang);
 	s=x1[i].math+x1[i].pc+x1[i].ang;
 	M[i]=s/3;
 
 }

 /*la partie des informations */
 printf("************ voisi les infos des etudient ********************************* \n");
 for(i=0;i<2;i++){
 	printf("le nom de l etudient numero %d \n",i+1);
 	printf("%s \n",&x1[i].nom);
 	

 }
 	for(i=0;i<2;i++){
	 
 	printf("la moyenne d etudiant numero %d est = %f \n",i+1,M[i]);
 }
 		printf("saisir l identinfient ");
 		scanf("%s",&identifient);
 	for(i=0;i<2;i++){
 	
 		if(identifient==x1[i].identifient){
 			printf(" voisi son nom : %s \n",x1[i].nom);
 		printf("voisi ces notes \n");
 			printf("%f \n",x1[i].math);
 			printf("%f \n",x1[i].pc);
 			printf("%f \n",x1[i].ang);		
		 }
	 }
	 int b;
	 
	 for(i=0;i<2;i++){
	 	for(b=i+1;b<2;b++){
	 		if(M[i]<M[b])
	 	M[i]=M[b];
		 }
	 }
	 /*la partie de triage */
	 printf("****************************le triage des etudient par la moyenne general****************************\n");
 
 for(i=0;i<2;i++){
 	
 	printf("%d \n",M[i]);
 }
 
    return 0;
}
