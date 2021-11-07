#include <cstdio>

struct titik{
	int x, y;
};

titik a, b;

int main(){
	a.x = 3;
	a.y = 27;
	
	b.x = 5;
	b.y = 9;
	
	printf("%d %d\n", a.x, a.y);
	printf("%d %d\n", b.x, b.y);
}
