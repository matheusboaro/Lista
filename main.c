#include <stdio.h>
#include <stdlib.h>

typedef struct _list_{
    struct _node_ *head;
    int qtd;
}list;
typedef struct _dado_{
    int a;
}dado;
typedef struct _node_{
    dado dados;
    struct _node_ *next;
}node;

list *createList(){
    list *l;
    l=(list*)malloc(sizeof(list));
    if(l!=NULL){
        l->head=NULL;
        l->qtd=0;

        return l;
    }
    return NULL;
}

int addDataFirstP(list *a,dado d){
    if(a!=NULL){
        node *no;
        no=(node*)malloc(sizeof(node));
        if(a->head==NULL){
            no->dados=d;
            no->next=NULL;
        }else{
            no->dados=d;
            no->next=a->head;

        }
        a->head=no;
        a->qtd+=1;
        return 1;
    }
    return 0;
}

int addDataLastP(list *l, dado d){
    if(l!=NULL){
        node *no,*last;
        no=(node*)malloc(sizeof(no));
        if(l->head==NULL){
            no->dados=d;
            no->next=NULL;
            l->head=no;
            l->qtd+=1;
        }else{
            no->dados=d;
            no->next=NULL;
            last=l->head;
            while(last->next!=NULL){
                last=last->next;
            }
            last->next=no;
            l->qtd+=1;
        }
        return 1;
    }
    return 0;
}

dado *returnData(list *l, int i){
    if(l!=NULL){
        if(l->head!=NULL){
                node *aux=l->head;
            while(aux!=NULL){
                if(aux->dados.a==i){
                    return &aux->dados;
                }else{
                    aux=aux->next;
                }
            }
        }
    }
    return NULL;
}

int compareData(int a, int b){

}

dado *removeData(lista *l, int key){
    if(l!=NULL}{


    }

}

int main(){
    dado d,d1,d2,d4;
    dado *d3;
    d.a=12;
    d1.a=13;
    d2.a=14;
    d4.a=1;
    list *l;
    node *aux;
    l=createList();
    int log;
    log=addDataFirstP(l,d);
    log=addDataFirstP(l,d1);
    log=addDataFirstP(l,d2);
    log=addDataLastP(l,d4);
    aux=l->head;
    while(aux!=NULL){
        log=aux->dados.a;
        aux=aux->next;
        printf("%i\n",log);
    }
}
