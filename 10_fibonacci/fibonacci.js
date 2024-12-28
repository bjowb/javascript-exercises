const fibonacci = function(a) {
    if(a < 0){
        return "OOPS";
    }
    else if(a == 0){
        return 0;
    }
    else if(a < 3){
        return 1;
    }
    else{
        let x = 1;
        let y = 1;
        for(let i = 3; i <= a; i++){
            let c = x + y;
            x = y;
            y = c;
        }
        return y;
    }

};

// Do not edit below this line
module.exports = fibonacci;
