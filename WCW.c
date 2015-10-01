//http://br.spoj.com/problems/WCW/
#include <stdio.h>

#define hip 10001

int v1[hip];
int v2[hip];

int main() {
        int tam, i, cont, dna, j;

        scanf("%d", &dna);

        for (j = 1; j <= dna; j++) {
                scanf("%d", &tam);
                cont = 0;
                for (i = 1; i <= tam; i++) {
                        scanf("%d", &v1[i]);
                        v2[v1[i]] = i;
                }

                for (i = 1; i <= tam; i++) {
                        if (v1[i] != i) {
                                v1[v2[i]] = v1[i];
                                v2[v1[i]] = v2[i];
                                v1[i] = v2[i] = i;
                                cont++;
                        }
                }

                printf("\n%d\n", cont);
        }

        return 0;
}
