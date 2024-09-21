/**
 * @param {number} n
 * @return {number[]}
 */
var lexicalOrder = function(n) {
    let k = [];
    for(i=1; i<=n; i++){
        k.push(i);
    }
    k.sort();
    return k;
};