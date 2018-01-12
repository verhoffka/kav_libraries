
char * round_off (float value, int decimalplaces) {
    // local variables
    int integer = (int) value;
    int fraction = (int) ((value - (float)integer) * 10^decimalplaces);
    
    
    return snprintf (value_buffer, sizeof(value_buffer), "%d.%d", integer, fraction);
}
