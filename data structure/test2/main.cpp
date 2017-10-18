#include "all_head.h"

int main()
{
    int Case=-1,flag=0,e;
    int SIZE_TIME=1;
    sqList L;
    Lnode Node;
    while (true)
    {
        Draw();
        scanf("%d",&Case);
        switch (Case)
        {
            case 1:
                Clear();
                CreatList(L,SIZE_TIME);
                flag=1;Clear();
                break;
            case 2:
                if (!flag) break;
                Clear();
                print(L);
                printf("Press any key to continue.\n");
                getchar();getchar();
                Clear();
                break;
            case 3:
                if (!flag) break;
                Clear();
                printf("which number you want search \n");
                scanf("%d",&e);
                if (Search(L,Node,e))
                    printf("succeed \n");
                else
                    printf("fase \n");
                printf("Press any key to continue.\n");
                getchar();getchar();
                Clear();
                break;
            case 4:
                if (!flag) break;
                Clear();
                printf("which number you want delete \n");
                scanf("%d",&e);
                Delete(L,Node,e);
                printf("END \n");
                printf("Press any key to continue.\n");
                getchar();getchar();
                Clear();
                break;
            case 5:
                if (!flag) break;
                Clear();
                printf("input member you want insert \n");
                InputNode(Node);
                Insert(L,Node,SIZE_TIME);
                printf("END \n");
                printf("Press any key to continue.\n");
                getchar();getchar();
                Clear();
                break;
            case 6:
                if (!flag) break;
                Clear();
                print(Node);
                printf("Press any key to continue.\n");
                getchar();getchar();
                Clear();
                break;
            default :
                flag = -1;
                break;
        }
        if (flag==-1) break;
    }
    return 0;
}

