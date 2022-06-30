#ifndef MYVEC_H
#define MYVEC_H
template <typename t>
class MyVector
{
public:
MyVector()
{
    this->first = new t[size];
}
MyVector (int size)
{
    this->size = size;
    this->first = new t[size];
}
MyVector (int size,const t sim)
{
    this->size = size;
    first = new t[this->size];
    for (int i =0; i<size; i++)
    {
        first[i] = sim;
    }
}
t* GetArr()
{
    return this->first;
}
int GetSize()
{
    return this->size;
}
MyVector Copy()
{
    MyVector out;
    t *p_end = this->first+this->size;
    for (; this->first<p_end; this->first++)
    {
        out.first[out.size] = *this->first;
        out.size++;
    }
    return out;
}
MyVector Push_Back(t arg)
{
    MyVector out(this->size+1);
    out = this->Copy();
    out.first[size] = arg;
    return out;
}
MyVector PopBack()
{
    MyVector out;
    t *p_end = this->first+this->size-1;
    for (; this->first<p_end; this->first++)
    {
        out.first[out.size] = *this->first;
        out.size++;
    }
    return out;
}

private:
t * first;
int size = 0;
};
#endif // MYVEC_H
