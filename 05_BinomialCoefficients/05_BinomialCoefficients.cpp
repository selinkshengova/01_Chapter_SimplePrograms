// Exercise 5
// Print the binomial coefficients C(n, k)
// Solution 1: Using factorials
// Solution 2: Using the recurrence formula


#include <iostream>

int binomialCoefficient(int n,int k)
{
    int resultNK=1, resultK=1, resultN=1;
    for (int i = 1 ;i<=n;i++)
    {
		 resultN = resultN * i;
	}
    for (int j = 1; j <= k; j++)
    {
         resultK = resultK * j;
    } 
   
    for (int i = 1; i <= n - k; i++)
    {
        resultNK *= i;
    }
    
    int result = resultN /( resultK* resultNK);
	return result;
}


int main()
{
    std::cout << "Write the n's count: ";

    std::cout << "\nUsing factorials:\n";   
    int n;
    std::cin >> n;
    if (n <= 0)
    {
        std::cout << "Please enter a positive number.";
        return 0;
    }
    for (int k = 0; k <= n; k++)
    {
        std::cout << binomialCoefficient(n, k) << " ";
		
    }
    std::cout << "\n\nUsing the recurrence formula:\n";
    std::cout << "C(n, k + 1) = C(n, k) * (n - k) / (k + 1)\n";
    int coefficient = 1;

    for (int k = 0; k <= n; k++)
    {
        std::cout << coefficient << " ";

        coefficient = coefficient * (n - k) / (k + 1);
    }
       
	return 0;   
    

}


