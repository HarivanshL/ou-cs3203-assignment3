#include <iostream>
#include <vector>
using namespace std;

int sum(vector<int> vec){
    int total = 0;
    for(int i =0; i <vec.size();++i){
        total+= vec[i];
    }
    return total;
}

int product(vector<int> vec){
    int total =1;
    for(int i =0; i <vec.size();++i){
        vec[i] = vec[i] * total;
    }
    return total;
}

int main(int argc, char *argv[])
{
    vector<int> vec;
    int num =0;
    while(cin>>num){
        vec.push_back(num);
    }
    int sumval = sum(vec);
    int productval = product(vec);
    cout<< "Sum: " << sumval <<endl;
    cout<< "Product: " << productval <<endl;
   
}