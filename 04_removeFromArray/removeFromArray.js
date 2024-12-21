const removeFromArray = function(a,...arg) {
    const b = new Array();
    for (let i = 0; i < a.length; i++) {
        if (!arg.includes(a[i])) {
            b.push(a[i]);
        }
    }
    return b;
};

// Do not edit below this line
module.exports = removeFromArray;
