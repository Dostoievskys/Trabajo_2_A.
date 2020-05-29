void quicksort(Carrera ,float,float);
//lala

void quicksort(Carrera x,float prim,float ult) // quicksort(21041,0,vacantes-1);
{
    Estudiante aux; //Requiere clase Estudiante dentro de Clase Carrera
    int j,i,pivot;  //En teoria que postulantes[Vacantes] sea de tipo estudiante
                    //Estudiante: Atributos Pond y rut
                    //Funcion necesaria "GetPond" y "SetPond"
                    //El agregar al final en el fichero general seguirìa en pie, slds <3
    if(first<last){
         pivot=prim;
         i=prim;
         j=ult;

         while(i<j){
             while(x.GetPostulantes[i].GetPond <= x.GetPostulantes[pivot].GetPond &&i<ult){
                 i++;}
             while(x.GetPostulantes[j].GetPond>x.GetPostulantes[pivot].GetPond){
                 j--;}
             if(i<j){
                 aux=x.GetPostulantes[i];
                  x.SetPostulantes[i]=x.GetPostulantes[j];
                  x.SetPostulantes[j]=aux;
             }
         } 
         aux=x.GetPostulantes[pivot];
         x.SetPostulantes[pivot]=x.GetPostulantes[j];
         x.SetPostulantes[j]=aux;
         quicksort(x,prim,j-1);
         quicksort(x,j+1,ult);
    }
}