const sumAll = function(a,b) {
    if (!Number.isInteger(a) || !Number.isInteger(b)) return "ERROR";
    if (a < 0 || b < 0) return "ERROR";
    let l = min(a,b);
    let h = max(a,b);
    let sum = 0;
    for(let i = l; i <= h; i++){
        sum += i;
    }
    return sum;
};

// Do not edit below this line
module.exports = sumAll;
