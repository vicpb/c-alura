#define CIMA 'w'
#define BAIXO 's'
#define DIREITA 'd'
#define ESQUERDA 'a'
#define BOMBA 'b'

void move(char direcao);
int acabou();

int ehDirecao(char direcao);

void fantasmas();

int praOndeFantasmaVai(int xatual, int yatual, int* xdestino, int*ydestino);

void explodePilula(int x, int y, int qtd);