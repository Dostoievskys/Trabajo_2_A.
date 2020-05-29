void quicksort(Carrera ,float,float);

void quicksort(Carrera x,float prim,float ult) /// quicksort(21041,0,vacantes-1);
{
    Estudiante aux;
    int j,i,pivot;

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