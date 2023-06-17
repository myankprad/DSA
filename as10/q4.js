// Given a string calculate length of the string using recursion.

function strLen(str){
    if (str.length = "")
    return 0;
    else{
        return strLen(str.substring(1)) + 1 ;
    }
}