/**
 * @param {number} n
 * @param {number} t
 * @return {number}
 */
function DigitalProd(num){
    let prod = 1;
    while(num>0){
        prod *= num%10;
        num = Math.floor(num/10);
    }
    return prod;
}
var smallestNumber = function(n, t) {
    for(let num = n;;num++){
        if(DigitalProd(num)%t===0){
            return num;
        }
    }
};