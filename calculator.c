int calculator(int oprt , int first_number , int second_number )
{
    int value;
    switch(oprt)
    {
 case 1:
    value=first_number + second_number;
    break;
 case 2:
    value=first_number - second_number;
    break;
 case 3:
    value=first_number * second_number;
    break;
 case 4:
    value=first_number / second_number;
    break;
    }
}
