//#include <iostream>
//#include <cmath>
//
//using namespace std;
//
//int evalPoly(int* const coef, int deg, int x) {
//    int res = 0;
//    for (int i = 0; i <= deg; ++i) {
//        res += coef[i] * pow(x, deg - i);
//    }
//    return res;
//}
//
//void syntheticDivision(int*& coef, int& deg, int root) {
//    int* newCoef = new int[deg];
//    newCoef[0] = coef[0]; 
//
//    for (int i = 1; i < deg; ++i) {
//        newCoef[i] = coef[i] + newCoef[i - 1] * root; 
//    }
//
//    delete[] coef;
//    coef = newCoef;
//    deg--; 
//}
//
//void findRoots(int*& coef, int& deg, int& rng, int*& roots, int& rootCount) {
//    for (int x = -rng; x <= rng; ++x) {
//        if (evalPoly(coef, deg, x) == 0) {
//           
//            int* newRoots = new int[rootCount + 1];
//            for (int i = 0; i < rootCount; ++i) {
//                newRoots[i] = roots[i];
//            }
//            newRoots[rootCount] = x;
//            delete[] roots;
//            roots = newRoots;
//            rootCount++;
//
//            
//            syntheticDivision(coef, deg, x);
//
//            
//            findRoots(coef, deg, rng, roots, rootCount);
//            break; 
//        }
//    }
//}
//
//int main() {
//    int deg;
//    cout << "Enter the Degree of the Polynomial: ";
//    cin >> deg;
//    const int deg2 = deg;
//    int* coef = new int[deg + 1];
//    cout << "Enter the Coefficients of Equation (highest to lowest) :\n";
//    for (int i = 0; i <= deg; ++i) {
//        cout << "Coefficient [" << i << "] : \t";
//        cin >> coef[i];
//    }
//
//     int* const concoef = new int[deg + 1];
//    for (int i = 0; i <= deg; i++)
//    {
//        concoef[i] = coef[i];
//    }
//   
//    int rng;
//    cout << "Enter the Interval Range for Root Finding (Would be Taken as -ve to +ve of that Number) : \t";
//    cin >> rng;
//
//    int rootCount = 0;
//    int* roots = nullptr;
//
//    findRoots(coef, deg, rng, roots, rootCount);
//
//    if (rootCount > 0) {
//        cout << "Roots : \t";
//        for (int i = 0; i < rootCount; ++i) {
//            cout << roots[i] << " ";
//        }
//        cout << endl;
//        int Uchiha = 0;         //Signature
//        cout << "\n\nPlease Enter 1 if you want to check the Roots(Or any Other Number to close!) : \t";
//        cin >> Uchiha;
//        while (Uchiha == 1){
//            int x;
//            cout << "Enter the Root to Test : \t";
//            cin >> x;
//            int res = evalPoly(concoef, deg2, x);
//            cout << "f(" << x << ") = " << res << endl;
//            cout << "\n\nPlease Enter 1 if you want to Test the Roots(Or any Other Number to close!) : \t";
//            cin >> Uchiha;
//        }
//        
//    }
//    else {
//        cout << "\nNo Real Roots Found!!\n" << endl;
//    }
//
//    
//
//    delete[] concoef;
//    delete[] coef;
//    delete[] roots;
//
//    return 0;
//}
