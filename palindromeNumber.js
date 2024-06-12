/**
 * @param {number} x
 * @return {boolean}
 */
var isPalindrome = function(x) {
    let actualNumber=x.toString()
    let theReverseOfTheActualNumber=[...x.toString()].reverse().join("")
    if(actualNumber===theReverseOfTheActualNumber){
        console.log(x+" is a palindrome number")
        return true
    }else{
        console.log(x+" is not a palindrome number")

        return false
    }
};
isPalindrome(-121)