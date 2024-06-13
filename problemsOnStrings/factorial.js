let list=[]
let number=5
function Factorial(number){
for(let i=number;i>=1;i--){
    if(number<=0){
        return 0;
    }else{
 list.push(i)
    }
   
}
let joinedList=list.join("*")
let calculation=eval(joinedList)
console.log(calculation)
}