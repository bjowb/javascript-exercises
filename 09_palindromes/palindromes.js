const { lowerCase } = require("case-anything");

function isAlphanumeric(str) {
    return /^[a-z0-9]+$/i.test(str);
}

const palindromes = function (a) {
    a = lowerCase(a);
    let b = "";
    for(let x in a){
        if(isAlphanumeric(a[x])){
            b += a[x];
        }
    }
    let i = 0, j = b.length - 1;
    while (i < j) {
        if (b[i++] !== b[j--]) {
            return false;
        }
    }
    return true;
};
// Do not edit below this line
module.exports = palindromes;
