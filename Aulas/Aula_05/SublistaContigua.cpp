//Questão 04 - Lista 01
#include <iostream>

unsigned int sublista (int a[], int n){         //Notação BIG(O)
    unsigned int ans = 1, current = 1;          //4
    for (int i=1; i<n; ++i){                    //2
        if (a[i-1] > a[i]){                     //n
            current = 1;                        //2n -2
        } else {                                //4n-4
                current = current + 1;          //n-1    
        }                                       //2n-2    
        if (current > ans) ans = current;       //2
    }                                           //1
    return ans;                                 //10n-1 --->> O(n)
}

int main(){
    
    int n;
    std::cin >> n;
    int a[n];
    for (int &x: a) std::cin >> x; //forEach
    auto result = sublista (a, n);
    std::cout << result << std::endl;
    return 0;
}