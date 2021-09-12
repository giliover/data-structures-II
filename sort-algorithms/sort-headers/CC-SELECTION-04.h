void swap(int *firtelement, int *secondelement)
{
    int temp = *firtelement;
    *firtelement = *secondelement;
    *secondelement = temp;
}