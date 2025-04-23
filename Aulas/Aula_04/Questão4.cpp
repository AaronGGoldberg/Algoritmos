#include <iostream>
using namespace std;
int main(){
    int mTotais;
    int dPostes;
    int postes = 1;

    cin >> mTotais >> dPostes;

    if(mTotais % dPostes == 0){
        postes += mTotais / dPostes;
        cout << "O total de postes é " << postes << " a distância entre os dois ultimos postes é " << dPostes << endl;
    }
    else{
        postes += (mTotais / dPostes) + 1;
        cout << "O total de postes é " << postes << " a distância entre os dois ultimos postes é " << mTotais % dPostes << endl;
    }


}