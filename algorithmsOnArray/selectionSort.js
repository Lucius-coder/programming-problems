let list =[2,6,1,99,44]
let lengthOfList=list.length
for (let i=0; i<lengthOfList-1;i++){
    let minimumIndex=i
for (let j=i+1;j<lengthOfList;j++){
if (list[j]<list[minimumIndex]){
    minimumIndex=j
}
}
[list[i],list[minimumIndex]]=[list[minimumIndex],list[i]]
}
console.log("the list sorted by selectionSort is ",list)
