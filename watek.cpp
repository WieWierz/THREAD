#include <iostream>
#include <vector>
#include <thread>

using namespace std;

void czy_pierwsza() {

   for(int n=0;n<8000000;n++){
   if(n<2) 
		
	for(int i=2;i*i<=n;i++)
		if(n%i!=0)
			cout<<n<<endl;
	}
}

unsigned long fibb(int n)
{
  if( n <= 1 ) return n;
  else return watekFibo ( n - 2 ) + watekFibo ( n - 1 );
  
  for(unsigned int i=1; i<=n; ++i){
        cout << fibonacci(i) << endl;
    }
    cout << fibonacci(n)<<endl;
}


int main()
{
    vector <thread *> threads1;

    thread *watek = new thread(czy_pierwsza);
    threads1.push_back(watek);


    thread *watek2 = new thread(fibb,100);
    threads1.push_back(watek2);

    for (vector<thread *>::iterator it = threads1.begin(); it != threads1.end(); ++it) {
        (*it)->join();
        delete *it;
    }

    return 0;
}
