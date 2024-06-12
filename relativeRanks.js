/**
 * @param {number[]} score
 * @return {string[]}
 */
var findRelativeRanks = function(score) {
    let sortedScore=score.sort((a,b)=>{
        return b-a
    })
    let rankMedal=["Gold Medal","Silver Medal","Bronze medal"]
    let output=[]
    console.log(sortedScore)
    for (let i=0; i<sortedScore.length;i++){
        if (i<=rankMedal.length-1){
    output.push(rankMedal[i])
        }else{
            output.push(i.toString())
        }

    }
    console.log(output)
   let copyOfScore=[...score]
   
};
findRelativeRanks([9,3,5,200])
