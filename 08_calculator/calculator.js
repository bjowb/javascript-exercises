const add = function(a,b) {
  return a+b;
};

const subtract = function(a,b) {
	return a-b;
};

const sum = function(arr) {
  let sum = 0;
  for (let i = 0; i < arr.length; i++) {
    sum += arr[i];
  }
  return sum;
};

const multiply = function(arr) {
  let prod = 1;
  for (let i = 0; i < arr.length; i++) {
    prod *= arr[i];
  }
  return prod;
};

const power = function(a,b) {
	return Math.pow(a,b);
};

const factorial = function(a) {
	let prod = 1;
  if(a == 0){
      return prod;
  }
  else{
    for (let i = 1; i <= a; i++) {
      prod *= i;
    }
    return prod;
  }
};

// Do not edit below this line
module.exports = {
  add,
  subtract,
  sum,
  multiply,
  power,
  factorial
};
