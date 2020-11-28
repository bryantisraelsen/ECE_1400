#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    int row, col, x, final, c, q, u, t, p, m;
    char howdy[10][10];
    for (row = 0; row < 10; row++)
        for (col = 0; col < 10; col++) {
            howdy[row][col] = 46;
        }
    srand((unsigned)time(NULL));
    q = 0;
    u = 0;
    t = 1;
    final = 65;
	x = 0;
	howdy[0][0] = 65;
    while (t == 1) {
        if (final == 90) {
            final = 64;
        }
        else {}
        m = rand();
		x = m % 4;
        if (x == 0) {
            if (q > 0) {
				if (howdy[q-1][u] != 46) {
				}
				else {
				q--;
				final++;
				howdy[q][u] = final;
				}
            }
            else {}
        }
        else {
            if (x == 1) {
                if (q < 9) {
					if (howdy[q+1][u] != 46) {
					}
					else {
					q++;
					final++;
					howdy[q][u] = final;
					}
                }
                else {}
            }
            else {
                if (x == 2) {
                    if (u > 0) {
						if (howdy[q][u-1] != 46) {
						}
						else {
						u--;
						final++;
						howdy[q][u] = final;
						}
                    }
                    else {}
                }
                else {
					if (u < 9) {
						if (howdy[q][u+1] != 46) {
						}
						else {
						u++;
						final++;
						howdy[q][u] = final;
						}
                    }
                    else {}
                }
            }
        }
		if (howdy[q][u+1] != 46||u==9){
			if (howdy[q][u-1] != 46||u==0){
				if (howdy[q+1][u] != 46||q==9){
					if (howdy[q-1][u] != 46||q==0){
						t = 0;
					}
					else{}
				}
				else{}
			}
			else{}
		}
		else{}
		
    }
    p = 0;
    while (p < 10) {
        printf("%c ", howdy[0][p]);
        p++;
    }
    p = 0;
    printf("\n");
    while (p < 10) {
        printf("%c ", howdy[1][p]);
        p++;
    }
    p = 0;
    printf("\n");
    while (p < 10) {
        printf("%c ", howdy[2][p]);
        p++;
    }
    p = 0;
    printf("\n");
    while (p < 10) {
        printf("%c ", howdy[3][p]);
        p++;
    }
    p = 0;
    printf("\n");
    while (p < 10) {
        printf("%c ", howdy[4][p]);
        p++;
    }
    p = 0;
    printf("\n");
    while (p < 10) {
        printf("%c ", howdy[5][p]);
        p++;
    }
    p = 0;
    printf("\n");
    while (p < 10) {
        printf("%c ", howdy[6][p]);
        p++;
    }
    p = 0;
    printf("\n");
    while (p < 10) {
        printf("%c ", howdy[7][p]);
        p++;
    }
    p = 0;
    printf("\n");
    while (p < 10) {
        printf("%c ", howdy[8][p]);
        p++;
    }
    p = 0;
    printf("\n");
    while (p < 10) {
        printf("%c ", howdy[9][p]);
        p++;
    }
	
    return 0;
	
}