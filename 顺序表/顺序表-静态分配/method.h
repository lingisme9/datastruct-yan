#include"static.h"
Status randomElem();
Status initSqlist(Sqlist &L);
void destroySqlist(Sqlist &L);
void clearSqlist(Sqlist &L);
Status getLength(Sqlist &L);
Status isEmpty(Sqlist &L);
Status getElem(Sqlist &L, int i, ElemType &e);
Status locationElem(Sqlist &L,ElemType &e);
Status insertSqlist(Sqlist &L,int i,ElemType &e);
Status deleteElem(Sqlist &L,int i);
void printSqlist(Sqlist &L);
void createSqlist(Sqlist &L,int n = 10);
