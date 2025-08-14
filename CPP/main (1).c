//Proyecto Final
//Michel Ramos
//07/12/2016

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct agenda {
    
    char nom[10];
    int tf;
    int tm;
    char dir[20], email[20], grupos[10];
    
} matrix[100];

int cont=0;
void agregar();
void buscar();
void contactos();

int main(){
    
    int opc;
    
    do{
        system("clear");
        printf("PROYECTO FINAL\n");
        printf("Michel A. Ramos Soto\n");
        printf("\n");
        printf("Menu\n");
        printf("1.Agregar\n");
        printf("2.Buscar\n");
        printf("3.Ver todos los contactos\n");
        printf("4.Cargar base de datos\n");
        printf("5.Guardar base de datos\n");
        printf("6.Salir\n");
        scanf("%d", &opc);
        
        switch(opc){
                
            case 1:
                
                agregar();
                system("pause");
                break;
                
            case 2:
                
                buscar();
                system("pause");
                break;
                
            case 3:
                
                contactos();
                system("pause");
                break;
        }
        
    }while(opc!=4);
    
    return 0;
}

void agregar(){
    
    system("clear");
    fflush(stdin);
    
    printf("\n%d.Nombre de contacto:", (cont+1));
    
    gets(matrix[cont].nom); //La funcion gets recibe como argumento la variable
    // en la que debe almacenarse una entrada de usuario tipo char.
    fflush(stdin); //Limpiar el buffer
    printf("\nTelefono fijo:");
    scanf("%d", &matrix[cont].tf);
    fflush(stdin);
    printf("\nTelefono movil:");
    scanf("%d", &matrix[cont].tm);
    fflush(stdin);
    printf("\nDireccion:");
    gets(matrix[cont].dir);
    fflush(stdin);
    printf("\nE-mail:");
    gets(matrix[cont].email);
    fflush(stdin);
    printf("\nGrupo:");
    gets(matrix[cont].grupos);
    cont++;
}

void buscar(){
    char busca[15];
    int i;
    system("clear");
    fflush(stdin);
    printf("\nBuscar contacto\nIngrese el nombre del contacto:");
    gets(busca);
    for(i=0;i<cont;i++){
        if(strcmp(busca,matrix[i].nom)==0){
            printf("\nNombre: %s\n", matrix[i].nom);
            printf("Tel\202fono fijo: %d\n", matrix[i].tf);
            printf("Tel\202fono m\242vil: %d\n", matrix[i].tm);
            printf("Direcci\242n: %s\n", matrix[i].dir);
            printf("E-mail: %s\n", matrix[i].email);
            printf("Grupo: %s\n", matrix[i].grupos);
        }
    }
}

void contactos(){
    
    int aux, i, j;
    char auxc[50];
    system("clear");
    for(i=0;i<cont-1;i++){
        for(j=0;j<cont-1-i;j++){
            if(strcmp(matrix[j].nom,matrix[j+1].nom)>0){
                strcpy(auxc,matrix[j].nom);
                strcpy(matrix[j].nom,matrix[j+1].nom);
                strcpy(matrix[j+1].nom,auxc);
                aux = matrix[j].tf;
                matrix[j].tf = matrix[j+1].tf;
                matrix[j+1].tf = aux;
                aux = matrix[j].tm;
                matrix[j].tm = matrix[j+1].tm;
                matrix[j+1].tm = aux;
                strcpy(auxc,matrix[j].dir);
                strcpy(matrix[j].dir,matrix[j+1].dir);
                strcpy(matrix[j+1].dir,auxc);
                strcpy(auxc,matrix[j].email);
                strcpy(matrix[j].email,matrix[j+1].email);
                strcpy(matrix[j+1].email,auxc);
                strcpy(auxc,matrix[j].grupos);
                strcpy(matrix[j].grupos,matrix[j+1].grupos);
                strcpy(matrix[j+1].grupos,auxc);
            }
        }
    }
    
    printf("\nAgenda.\n");
    for(i=0;i<cont;i++){
        printf("\n%d.Nombre: %s\n",(i+1), matrix[i].nom);
        printf("Tel\202fono fijo: %d\n", matrix[i].tf);
        printf("Tel\202fono m\242vil: %d\n", matrix[i].tm);
        printf("Direcci\242n: %s\n", matrix[i].dir);
        printf("E-mail: %s\n", matrix[i].email);
        printf("Grupo: %s\n", matrix[i].grupos);
    }
}
