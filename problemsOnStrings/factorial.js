let list=[]
let number=-1
function Factorial(number){
for(let i=number;i>=1;i--){
    if(number<=0){
        list=[0]
    }else{
 list.push(i)
    }
   
}
let joinedList=list.join("*")
let calculation=eval(joinedList)
console.log(calculation)
}
console.log(Factorial(number))