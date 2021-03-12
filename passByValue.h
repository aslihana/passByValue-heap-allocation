#ifndef passByValue_h
#define passByValue_h
#define arrayDimension 5
int i, input;

/* defined as macro
void enterArrayDimension()
{
    printf("Enter the arrays' dimension: \n");
    scanf("%d",&arrayDimension);
}
*/

int array1[arrayDimension];
int array2[arrayDimension];
int *ptr1[arrayDimension];
int *ptr2[arrayDimension];

void enterArrayElements()
{
    for(i = 0; i < arrayDimension; i++)
    {
        printf("Enter a value to array1 \n");
        scanf("%d",&input);
        array1[i] = input;
    }
    
    for(i = 0; i < arrayDimension; i++)
    {
        printf("Enter a value to array2 \n");
        scanf("%d",&input);
        array2[i] = input;
    }
}

void showEnteredElements()
{
    printf("You were entered elements all of arrays. Your elements before become equivalent: \n");
    
    printf("\n array1's elements: \n");

    for(i = 0; i < arrayDimension; i++)
        printf("%d \t", array1[i]);
    
    printf("\n array2's elements: \n");

    for(i = 0; i < arrayDimension; i++)
        printf("%d \t", array2[i]);
}

void changeElements()
{
    printf("\n Which number of array1 and also array2 would you like to change and with what? \n (Don't Forget!: \n Array elements starts with 0.) \n");
    scanf("%d %d",&i, &input);
    
    array1[i] = input;
    
    printf("\n Arrays has been equivalented and updated to your changes. \n");
}

void showChangedVersionOfElements()
{
    printf("\n array1's elements: \n");
    for(i = 0; i < arrayDimension; i++)
        printf("%d \t", *ptr1[i]);

    printf("\n array2's elements: \n");
    for(i = 0; i < arrayDimension; i++)
        printf("%d \t", *ptr2[i]);
}

void passByValue()
{

    enterArrayElements();

    showEnteredElements();

    
    for(i = 0; i < arrayDimension; i++)
        ptr1[i] = &array1[i];
    
    for(i = 0; i < arrayDimension; i++)
        ptr2[i] = &array2[i];
    
    for(i = 0; i < arrayDimension; i++)
        ptr2[i] = ptr1[i];

    changeElements();

    showChangedVersionOfElements();
    
    
}

#endif /* passByValue_h */