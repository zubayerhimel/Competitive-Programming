// method 1
const findVowels = str => {
    let numberOfOccurance = 0
    str = str.split('')
    str.forEach(element => {
        if(element == 'a' || element == 'e' || element == 'i' || element == 'o' || element == 'u')
        {
            numberOfOccurance++
        }
    });
    console.log(numberOfOccurance)
}


// method 2
const findVowels = str => {
    const vowels = ['a', 'e', 'i', 'o', 'u']
    let count = 0
    for(let occurance of str.toLowerCase())
    {
        if(vowels.includes(occurance))
        {
            count++
        }
    }
    console.log(count)
}

findVowels('hello')