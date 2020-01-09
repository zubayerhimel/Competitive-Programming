const anagram = (string1, string2) =>{
    return string1.split('').sort().join('') === string2.split('').sort().join('')
}

console.log(anagram('listen', 'silent'))