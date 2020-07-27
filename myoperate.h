#include<vector>
namespace opr
{
	FILE *init;
	class opr,player;
	struct pr{short x,y;};

	class opr
	{
		private:
			std::vector<pr> ch;
			int loc,def,atl,atn;//location,defence,attack
			std::vector<pr> spc;//special check
		public:
			int check(std::vector<int> &a)
			{
				int size=ch.size(),lim=a.size();
				for (int i=0;i<size;i++)
				{
					if (ch[i].x>lim) return -1;
					if (a[ch[i].x]+ch[i].y<0) return 0;
				}
				return 1;
			}
			int change(std::vector<int> &a)
			{
				int size=ch.size(),lim=a.size();
				for (int i=0;i<size;i++)
				{
					if (ch[i].x>=lim) return -1;
					a[ch[i].x]+=ch[i].y;
				}
				return 0;
			}
			int action(player *p)
			{
				return p->move(loc,def,atl,atn);
			}
	};

	class player
	{
		private:
			int loc,def,atl,atn;
			bool dead=false;
		public:
			std::vector<int> sv;
			int move(int a,int b,int c,int d)
			{
				loc=a,def=b,atl=c,atn=d;
				return 0;
			}
	}
}
