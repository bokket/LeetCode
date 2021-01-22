//
// Created by bokket on 2021/1/22.
//

//target存在
//p1=str
//当p1存在
//p1begin=p1 p2=target
//当p1 p2 p1==p2
//p1++ p2++
//如果p2==NULL 返回p1begin
//如果p2!=NULL p1=p1begin+1
char* StrStr(const char* str,const char* target)
{
    if(*target== nullptr)
        return str;

    char* p1=(char*)str;
    while(*p1)
    {
        char* p1begin=(char *)p1;
        char* p2=(char*)target;

        while(*p1 && *p2 && *p1==*p2)
        {
            p1++;
            p2++;
        }

        if(*p2== nullptr)
            return p1begin;

        p1=p1begin+1;
    }
    return nullptr;
}