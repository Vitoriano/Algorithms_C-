#include <iostream>
#include <iomanip>

using namespace std;


void swap(int vetor[], int i, int j){
    int aux = vetor[i];
    vetor[i] = vetor[j];
    vetor[j] = aux;
}

int main()
{
    int n;
    int count = 0;
    
    cin >> n;

    int nums[n];

    while (count < n)
    {
         cin >> nums[count];
         count++;
    }

    for(int i =0; i< n / 2; i++){
        swap(nums, i, n - i -1);
    }
    

    for(int i =0; i<n; i++){
        cout << nums[i] << " ";
    }

    cout << endl;
    
}

