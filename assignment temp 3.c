//array1

/*

#include<stdio.h>

int main(){



int arr[2][2] = {{1,2,},{3,4}};

for(int i = 0;i<=1;i++){


   for(int j =0;j<=1;j++)

   {

     printf("%d",arr[i][j]);


    

   }

 printf("\n");


}




}

*/
/************************************************************************************/


//arr2

/*

#include<stdio.h>

int main(){

int size = 4;
    
    int greatest;
   
    
    //printf("Enter the size of the array");
    //scanf("%d",&size);
    
    int arr[size];
    
    
     printf("Please enter %d array elements separated by whitespaces :", size );
        
        
    for(int i =0;i<=size-1;i++){
        
       
        scanf("%d",&arr[i]);
    }
    
    

for(int i = 0;i<=size-1;i++){

     int is_great = 0;
     

     for(int j = 0;j<=size-1;j++){

         if(arr[i] > arr[j] && (i != j)){

            is_great += 1;



         }


        if(is_great == size-1){

         greatest = arr[i];


        }
         


     }







}

printf("Greatest %d : ",greatest);






}

*/


/********************************************************************************************/

//arr3

/*


#include<stdio.h>

int main(){

int size = 4;
    
    int greatest;
    int smallest;
    
    //printf("Enter the size of the array");
    //scanf("%d",&size);
    
    int arr[size];
    
    
     printf("Please enter %d array elements separated by whitespaces :", size );
        
        
    for(int i =0;i<=size-1;i++){
        
       
        scanf("%d",&arr[i]);
    }
    
    

for(int i = 0;i<=size-1;i++){

     int is_great = 0;
     

     for(int j = 0;j<=size-1;j++){

         if(arr[i] > arr[j] && (i != j)){

            is_great += 1;



         }


        if(is_great == size-1){

         greatest = arr[i];


        }
          else if(is_great == 0){

               
         smallest = arr[i];


          }



     }







}

printf("Greatest %d : ",greatest);
printf("Smallest %d :",smallest);





}

*/



/*********************************************************************************************************/



//arr4 average

//array avaerage


/*


#include<stdio.h>

int main(){

int size = 4;
    
    int sum;
    
    //printf("Enter the size of the array");
    //scanf("%d",&size);
    
    int arr[size];
    
    
     printf("Please enter %d array elements separated by whitespaces :", size );
        
        
    for(int i =0;i<=size-1;i++){
        
       
        scanf("%d",&arr[i]);
    }
    

for(int i =0;i<= size-1;i++){

   sum += arr[i];


}

printf("The average is : %d ",sum/size);


}

*/

/*************************************************************************/


//arr ascending


/*








#include<stdio.h>

int main(){

int size = 4;

    
    int arr[size];
    int sorted[size];
    
    
     printf("Please enter %d array elements separated by whitespaces :", size );
        
        
    for(int i =0;i<=size-1;i++){
        
       
        scanf("%d",&arr[i]);
    }
    

for(int i =0;i<= size-1;i++){

int sorting_index = 0;
   
      for(int j =0;j<=size-1;j++){

          
         if(arr[i] > arr[j] && (i!=j)){


              sorting_index += 1;
               

         }

        


      }

 sorted[sorting_index] = arr[i];



}




   printf("The array in ascending order is : ");


for(int k =0;k<=size-1;k++){




  printf("%d ,",sorted[k]);



}




}


*/


/**************************************************************************/

//arr descending


/*




#include<stdio.h>

int main(){

int size = 4;

    
    int arr[size];
    int sorted[size];
    
    
     printf("Please enter %d array elements separated by whitespaces :", size );
        
        
    for(int i =0;i<=size-1;i++){
        
       
        scanf("%d",&arr[i]);
    }
    

for(int i =0;i<= size-1;i++){

int sorting_index = 0;
   
      for(int j =0;j<=size-1;j++){

          
         if(arr[i] > arr[j] && (i!=j)){


              sorting_index += 1;
               

         }

        


      }

 sorted[size - sorting_index -1] = arr[i];



}




   printf("The array in descending order is : ");


for(int k =0;k<=size-1;k++){




  printf("%d ,",sorted[k]);



}




}

*/

/***************************************************************************/

//merge arrays


/*

//merge array





#include<stdio.h>

int main(){

int size = 4;

    
    int arr[size];
    int arr2[size];  
    int merged[2*size];  
    
     printf("Please enter %d elements  of 1st array  separated by whitespaces :", size );
        
        
    for(int i =0;i<=size-1;i++){
        
       
        scanf("%d",&arr[i]);
    }

    
     printf("Please enter %d elements of 2nd array e separated by whitespaces :", size );
        
        
    for(int i =0;i<=size-1;i++){
        
       
        scanf("%d",&arr2[i]);
    }
    

   

//merging
for(int i =0;i<= (2*size)-1;i++){

     if(i<= size-1){
         
         merged[i] = arr[i];
     }
     else if(i > size-1)
       {
          merged[i] = arr2[i - size];

   
     } 


}


printf("The combined array is : ");

for(int k =0;k<=size*2-1;k++){




  printf("%d ,",merged[k]);



}

      

 




}
*/


/*******************************************************************************************************************/



