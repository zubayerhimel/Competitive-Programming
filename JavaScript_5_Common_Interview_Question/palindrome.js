const palindrome = givenString => {
    givenString = givenString.toUpperCase();

    if (givenString == givenString.split('').reverse().join('')) {
        console.log('Palindrome string')
    }
    else {
        console.log('Not a palindrome string')
    }
}

palindrome('racecar')