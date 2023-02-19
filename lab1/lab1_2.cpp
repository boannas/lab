#include <iostream>
using namespace std ;

int x =0, y=0, i;
int arr[] = {1, 2, 1, 3, 1, 2, 2, 1, 3, 2, 4, 1, 2, 3, 1, 4, 1, 2, 1, 3, 1, 2, 1, 1, 4};
int main() {
    for(i=0;i<sizeof(arr)/4;i++){
        // cout << i << endl;
        switch(arr[i]) {
            case 1:
                y += 1 ;
                break ;
            case 2:
                x -= 1 ;
                break ;  
            case 3:
                y -= 1 ;
                break ;
            case 4:
                x += 1 ;
                break ;
            default :
                break;
        switch(x){
            case 0:
                switch(y){
                    case 0:
                        x = 1;
                        y = 1;
                        break ;
                    default :
                    break ;
                }
                break;
            default :
            break; 
        }
            
        }
        
        
        // cout << arr[i] << endl;
    }
    cout << "x : " << x << "\t" <<"y : "<< y << endl;
}