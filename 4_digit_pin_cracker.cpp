#include <iostream>
#include <string>
int main(){
    std::string pin = "1204";
    
    for (int i=0; i <=9; i++){
        for (int j=0; j <=9; j++){
            for(int k=0; k <=9;k++ ){
                for (int l =0; l <=9; l++){
                    std::string val = "";
                    char digit_one = '0' + i;
                    char digit_two = '0' + j;
                    char digit_three = '0' + k;
                    char digit_four = '0'+l;
                    val += digit_one;
                    val += digit_two;
                    val += digit_three;
                    val += digit_four;
                    bool is_Same = true;
                    for (int a = 0; a <= pin.size()-1; a++){
                        if(pin[a] != val[a]){
                            is_Same = false;
                        } 
                    }
                    if (is_Same){
                        std::cout << "Match found: " << val;
                    }
                        

                }
            }
            
        }
    }
}