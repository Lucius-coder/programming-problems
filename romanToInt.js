/**
 * @param {string} s
 * @return {number}
 */
var romanToInt = function(s) {
  
    
let romanToInteger={
    "I":1,
    "V":5,
    "X":10,
    "L":50,
    "C":100,
    "D":500,
    "M":1000,
}
let character=s.split("")
let addRomanIntegers=0
let previousNumber=0
character.forEach(ch=>{
    let currentNumber=romanToInteger[ch.toUpperCase()]

if(previousNumber<currentNumber){
    addRomanIntegers+=currentNumber-2*previousNumber

}else{
    addRomanIntegers+=currentNumber
    
}

previousNumber=currentNumber
})

return addRomanIntegers
};
console.log("the answer is "+romanToInt("MCMXCIV"))
