#include "projecy.h"
#include <iostream>
#include <sstream>
#include <fstream>
#include <vector>

using namespace std;
projecy::projecy()
{
}

void projecy::multiples_3_and_5()
{
int sum = 0;

    for(int i = 0; i < 1000; i++)
    {
        if(i%3 == 0 || i%5 == 0)
        {
            sum += i;
        }
    }

    cout << sum << endl;
}

void projecy::even_fibonacce()
{
    int sum = 0, present = 1, previous = 1, temp;
        while(present < 4000000)
        {
            if(present%2 == 0)
            {
                sum += present;
            }

            temp = present;
            present += previous;
            previous = temp;
        }

        cout << "The sum of all even numbers is: " << sum << endl;
}

void projecy::largest_prime_factor()
{
    long long int i,j,n=600851475143LL;
    while(n>=4)
    {
        if(n%2==0)
        {
            n=n/2;
            i=2;
        }

        else
        {
            i=3;
            j=0;
            while(j==0)
            {
                if(n%i==0)
                {
                    j=1;
                    n=n/i;
                }
                i=i+2;
            }
            i-=2;
        }
    }
    cout<<"Largest Prime Factor: "<<i<<endl;
}

void projecy::largest_palindrome_product()
{
    int numbers[2];
    int largest[2];

    for(int i = 10; i < 1000; i++)
    {
        numbers[0] = i;
        for(int k = 10; k < 100; k++)
        {
            ostringstream convert;
            string palindrome;
            string final_palindrome = "";
            numbers[1] = k;
            int product = numbers[0]*numbers[1];
            convert << product;
            palindrome = convert.str();
            int range = palindrome.length();
            for(int x = 0; x < range; x++)
            {
                final_palindrome = palindrome.at(x) + final_palindrome;
                if(palindrome == final_palindrome)
                {
                    for(int j = 0; j < 2; j++)
                    {
                        largest[j] = numbers[j];
                    }
                }
            }
        }
    }

    for(int i = 0; i < 2; i++)
    {
        cout << largest[i] << endl;
    }

}

void projecy::smallest_multiple()
{
    int i = 1;
    bool c = false;
    while(!c)
    {
        for(int k = 1; k <= 20; k++)
        {

            if(i%k == 0)
            {
                if(k == 20)
                {
                    c = true;
                    break;
                }
            }

            else
            {
                break;
            }
        }
        i++;
    }
    i--;
    cout << i << endl;
}

void projecy::sum_square_diff()
{
    int sum = 0;
    int sqr = 0;
    int temp = 0;
    for(int i = 1; i <= 100; i++)
    {
        sum += i;
        temp = i*i;
        sqr += temp;
    }

    sum *= sum;
    cout << sum - sqr << endl;

}

void projecy::the_10001st_prime()
{
    int x = 2;
    for(int i = 0; i < 10001; i++)
    {
        bool a = 0;
        while(!a)
        {
            for(int k = 2; k <= x; k++)
            {

                if(k == x)
                {
                    a = true;
                    break;
                }

                else if(x%k == 0)
                {
                    break;
                }

            }
            x++;
        }
    }
    x--;
    cout << x << endl;
}

void projecy::largest_product_in_series()
{

    ifstream ReadFile;
    string line, str;
    string numbers = "";
    int index = 0;
    int temp = 0;
    int y = 0;
    int product = 1;
    int product2 = 1;
    int getnumber[5];
    int highestproduct[5];
    ReadFile.open("4digits.txt");

    while(ReadFile.good())
    {
        getline(ReadFile, line);
        str = line;
        numbers += str;
    }
        string a;
        for(int i = 0; i < 1000 - 4;i++)
        {
            product2 = 1;

            index = i;
            for(int k = 0; k < 5; k++)
            {
                a = numbers.at(index);
                stringstream(a) >> temp;
                y = temp;
                getnumber[k] = y;
                product2 *= getnumber[k];
                index++;
             }

            if(product < product2)
            {
                product = product2;
                for(int k = 0; k < 5; k++)
                {
                    highestproduct[k] = getnumber[k];
                }
            }

        }
      cout << product << endl;

}

void projecy::special_pytho_triplet()
{
    int a,b,c;
    int ans=0;
    for (a=1;a<500;a++){
  for (b=1;b<500;b++){
    for (c=1;c<500;c++){
      if (a+b+c==1000){
        if((a*a)+(b*b)==(c*c)){
          ans=a*b*c;
          break;
                                }
                  }
          }
  }
     }

printf("%d\n",ans);

}


void projecy::summation_of_primes()

{
    long long sum = 0LL;
    int range = 2000000;
    int x = 2;
    int y = 2;

    for(int i = 2; i < range; i++)
    {
        for(int k = 2; k <= i; k++)
        {
            if(k == i)
            {

                sum += i;
            }

            else if(i%k == 0)
            {
                break;
            }
        }
    }
    cout << sum << endl;
}
