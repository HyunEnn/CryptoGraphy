#include <iostream>

using namespace std;

int main(void)
{
	int q, r1, r2, r, s1, s2, s, t1, t2, t;
	int a, b;
	cin >> a >> b;

	r1 = a, r2 = b;
	s1 = 1, s2 = 0, t1 = 0, t2 = 1;

	while (true)
	{
		if (r1 > r2) {
			q = r1 / r2;
			r = r1 - (q * r2);
			s = s1 - (q * s2);
			t = t1 - (q * t2);

		}
		else {
			q = r2 / r1;
			r = r2 - (q * r1);
			s = s2 - (q * s1);
			t = t2 - (q * t1);
		}
		if (r == 0)
		{
			cout << "s : " << s2 << '\n';
			cout << "t : " << t2 << '\n';
			break;
		}

		r1 = r2;
		r2 = r;
		s1 = s2;
		s2 = s;
		t1 = t2;
		t2 = t;
	}

	return 0;
}