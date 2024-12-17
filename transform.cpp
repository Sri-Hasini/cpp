transform(str.begin(), str.end(), str.begin(), [](unsigned char c) { return tolower(c); });
//inorder to change whole string to lowercase we will use this above syntax
// it is like using lambda function
// we will change the entire string into lower case and then we will insert that at the begin( pased as 3rd parameter) 
