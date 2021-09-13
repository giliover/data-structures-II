/*-----------------------------------
Efetua a leitura do vetor
-------------------------------------*/
void initArrayWithYourIndex(int Array[], int lengthArray)
{
    srand(time(NULL));

    for (int index = 0; index < lengthArray; index++)
        Array[index] = index;
}
