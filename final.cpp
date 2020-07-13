#include <iostream>
using namespace std;

//Estructura para ingresar los productos en un solo arreglo 
const int longCad = 20;
struct costoPorArticulo
{
    char nombreArticul[longCad + 1];
    int cantidad;
    float precio;
    float costoPorArticulo;
} nombre;

/* funcion en la cual se ingresa el nombre, la cantidad de productos
 y el precio de cada uno de los productos */
float productos(int m, struct costoPorArticulo arreglo[])
{
    int i;
    for (i = 0; i < m; i++)
    {
        cout << "Ingrese el nombre del producto: " << endl;
        cin >> arreglo[i].nombreArticul;
        cout << "Ingrese la cantidad de productos: " << endl;
        cin >> arreglo[i].cantidad;
        cout << "Ingrese el precio del producto: " << endl;
        cin >> arreglo[i].precio;
    }
}

// En esta funcio se saba el subtotal de cada articulo multiplicando la cantidad de productos por el precio
float costoxarticulo( int m , struct costoPorArticulo arreglo[])
{
    int i;
    for (i = 0; i < m; i++)
    {
        arreglo[i].costoPorArticulo = arreglo[i].cantidad * arreglo[i].precio;
    } 
}

//Aqui se muestran todos los pruductos y el subtotal de cada uno de ellos
float mostrar( int m, struct costoPorArticulo arreglo[])
{
    int i;  
    for ( i = 0; i < m; i++)
    {
        cout<<"......................."<<endl;
        cout<<"Nombre articulo: "<<arreglo[i].nombreArticul<<endl;
        cout<<"cantidad: "<<arreglo[i].cantidad<<endl;
        cout<<"precio: "<<arreglo[i].precio<<endl;
        cout<<"subtotal: "<<arreglo[i].costoPorArticulo<<endl;
        cout<<"......................."<<endl;
    }
    
}

//se hace la funciona para mostrar el total retornando en la variable prototal el total de los gastado
float total( int m, struct costoPorArticulo arreglo[])
{
    int i;
    float prototal=0;
    for ( i = 0; i < m; i++)
    {
        prototal = arreglo[i].costoPorArticulo+prototal;
    }
    return prototal;
    
}


/*se pide la cantidad de difentes productos que se van a ingresar 
luego se llama a cada una de las funciones para mostrar la funcion de cada una de ellas
y por ultimo de la funcion total se retorne el prototal y se ingresa en el cout para 
que se muestre el total de toda la compra */
int main()
{
    int m;

    cout << "Ingrese la cantidad de productos: " << endl;
    cin >> m;
    struct costoPorArticulo arreglo[m];
    productos(m, arreglo);
    costoxarticulo(m, arreglo);
    mostrar(m,arreglo) ;
    total(m, arreglo);   
    cout<<"el total es : $"<<total(m, arreglo)<<endl;
    
}