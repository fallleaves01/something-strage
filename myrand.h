#include<ctime>
#include<cstdlib>
namespace mrd//myrand
{
    using namespace std;
    typedef long long ll;
    void randomize(void)
    {
	srand(time(0));
    }
    int random(void)
    {
	return rand();
    }
    int random(int l)//1~l
    {
	return rand()%l+1;
    }
    ll random(ll l)
    {
	return (((ll)(rand())<<32)|rand())%l+1;
    }
}
