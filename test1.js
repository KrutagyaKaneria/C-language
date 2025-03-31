const fs = require('fs');

// Initialize the array with numbers from 1 to 14 (if not already stored in file)
let originalArray = loadState('originalArray.json') || Array.from({ length: 14 }, (_, i) => i + 1);
let removedNumbers = loadState('removedNumbers.json') || []; // To store the numbers that have been removed

function loadState(filename) {
    try {
        // Try to read the state from the file
        let data = fs.readFileSync(filename, 'utf8');
        return JSON.parse(data);
    } catch (error) {
        return null; // If the file doesn't exist or can't be read, return null
    }
}

function saveState(filename, data) {
    // Save the state to the file
    fs.writeFileSync(filename, JSON.stringify(data), 'utf8');
}

function getRandomNumbers() {
    if (originalArray.length === 0) {
        console.log("Array is empty.");
        console.log("Removed numbers:", removedNumbers);
        return;
    }

    // Select two random numbers if there are at least two numbers left
    let numsToDraw = Math.min(2, originalArray.length);
    let selectedNumbers = [];

    for (let i = 0; i < numsToDraw; i++) {
        let randomIndex = Math.floor(Math.random() * originalArray.length);
        let selectedNum = originalArray.splice(randomIndex, 1)[0];
        selectedNumbers.push(selectedNum);
        removedNumbers.push(selectedNum);
    }

    // Save the current state back to files
    saveState('originalArray.json', originalArray);
    saveState('removedNumbers.json', removedNumbers);

    console.log("Selected numbers:", selectedNumbers);
    console.log("Remaining numbers in array:", originalArray);
}

// Call this function once to get two random numbers from the array and persist the state
getRandomNumbers();