int calculator(int operation, int first_number, int second_number)
{
    int a;
    switch(operation)
    {
        case 1:
        a= first_number + second_number;
        break;

        case 2:
        a= first_number - second_number;
        break;

        case 3:
        a= first_number * second_number;
        break;

        case 4:
        a= first_number / second_number;
        break;
    }
    return a;
}
