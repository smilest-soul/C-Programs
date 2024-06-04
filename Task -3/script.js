function convertTemp() {
    const tempInput = document.getElementById('tempInput').value;
    const scaleInput = document.getElementById('scaleInput').value;
    const resultDiv = document.getElementById('result');
    const effectsDiv = document.getElementById('effects');

    effectsDiv.innerHTML = '';

    if (tempInput === '') {
        resultDiv.textContent = 'Please enter a temperature.';
        return;
    }

    let convertedTemp;
    let newScale;
    let backgroundColor;

    if (scaleInput === 'celsius') {
        convertedTemp = (tempInput * 9/5) + 32;
        newScale = 'Fahrenheit';
    } else {
        convertedTemp = (tempInput - 32) * 5/9;
        newScale = 'Celsius';
    }

    convertedTemp = convertedTemp.toFixed(2);
    resultDiv.textContent = `${tempInput}° ${scaleInput.charAt(0).toUpperCase() + scaleInput.slice(1)} is ${convertedTemp}° ${newScale}.`;

    if (scaleInput === 'celsius') {
        if (tempInput < 0) {
            backgroundColor = '#00f'; // cold: blue
            addSnowflakes();
        } else if (tempInput >= 0 && tempInput < 20) {
            backgroundColor = '#add8e6'; // cool: light blue
        } else if (tempInput >= 20 && tempInput < 30) {
            backgroundColor = '#ffd700'; // warm: gold
        } else {
            backgroundColor = '#ff4500'; // hot: orange-red
            addHeatWave();
        }
    } else {
        if (tempInput < 32) {
            backgroundColor = '#00f'; // cold: blue
            addSnowflakes();
        } else if (tempInput >= 32 && tempInput < 68) {
            backgroundColor = '#add8e6'; // cool: light blue
        } else if (tempInput >= 68 && tempInput < 86) {
            backgroundColor = '#ffd700'; // warm: gold
        } else {
            backgroundColor = '#ff4500'; // hot: orange-red
            addHeatWave();
        }
    }

    document.body.style.backgroundColor = backgroundColor;
    resultDiv.classList.add('highlight');
    setTimeout(() => resultDiv.classList.remove('highlight'), 1000);
}

function addSnowflakes() {
    const effectsDiv = document.getElementById('effects');

    for (let i = 0; i < 50; i++) {
        const snowflake = document.createElement('div');
        snowflake.className = 'snowflake';
        snowflake.style.left = `${Math.random() * 100}vw`;
        snowflake.style.width = `${Math.random() * 5 + 5}px`;
        snowflake.style.height = snowflake.style.width;
        snowflake.style.animationDuration = `${Math.random() * 3 + 7}s`;

        effectsDiv.appendChild(snowflake);
    }
}

function addHeatWave() {
    const effectsDiv = document.getElementById('effects');
    const heatwave = document.createElement('div');
    heatwave.className = 'heatwave';

    effectsDiv.appendChild(heatwave);
}
