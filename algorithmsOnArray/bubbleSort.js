let list =[8,434,232,334,22]
let lengthOfList=list.length
function bubbleSort(list){
    for(let i=0;i<lengthOfList-1;i++){
        for(let j=0;j<lengthOfList-i-1;j++){
            if(list[j]>list[j+1]){
                [list[j],list[j+1]]=[list[j+1],list[j]]

            }
        }
    }
    return list
}

console.log(bubbleSort(list))