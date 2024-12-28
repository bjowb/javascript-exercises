const findTheOldest = function(people) {
    let oldage = 0;
    let ans = "";
    for (let i in people) {
        let birth = people[i].yearOfBirth;  
        let death = people[i].yearOfDeath;  
        
        
        if (!death) {
            death = new Date().getFullYear();
        }

        let age = death - birth;

        if (oldage < age) {
            oldage = age;
            ans = people[i].name;
        }
    }
    return ans;
};

const people = [
    {
    name: "Carly",
    yearOfBirth: 1942,
    yearOfDeath: 1970,
    },
    {
    name: "Ray",
    yearOfBirth: 1962,
    yearOfDeath: 2011,
    },
    {
    name: "Jane",
    yearOfBirth: 1912,
    yearOfDeath: 1941,
    },
]
findTheOldest(people);
// Do not edit below this line
module.exports = findTheOldest;
