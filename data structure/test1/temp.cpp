#define MAXLEN 200005
#define INPUT

/*
bool InitList(sqList &L,int size_)
{
    L.arr=(elemType *) malloc(MAXLEN * size_ * sizeof(elemType));
    if (!L.arr)
        return false ;
    L.length=0 ;
    L.listSize=MAXLEN ;
    return true ;
}
*/
/*
bool CreatList(sqList &L,int size_)
{
    if (!InitList(L,size_))
        return false ;
    //printf("please input some numbers  end by 0\n");
    elemType e;
    scanf("%d",&e);
    while (e)
    {
        if (L.length>=L.listSize)
            return false;
        L.arr[L.length++] = e ;
        scanf("%d",&e);
    }
    return true ;
}
*/
/*
void print(sqList L)
{
    //puts("number is ");
    for(int i=0;i<L.length;i++)
    {
        printf("%d ",L.arr[i]);
    }
    printf("\n");
    return ;
}
*/
/*
int main()
{
    get_num();
    #ifdef INPUT
    freopen("d:\\in.txt","r",stdin);
    freopen("d:\\out.txt","w",stdout);
    #endif // INPUT

    sqList list1,list2,list3;
    CreatList(list1,1);
    CreatList(list2,1);
    InitList(list3,2);
    //print(list1),print(list2);
    unite(list1,list2,list3);
    print(list3);
    fclose(stdin);
    fclose(stdout);
    judge_k();
    return 0;
}
*/
