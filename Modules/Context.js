var Observable = require("FuseJS/Observable");
var Storage = require("FuseJS/Storage");

var profile = Observable();

function loadProfile() {
    return Storage.read('profile.json')
        .then(res => profile.value = JSON.parse(res));
}

function saveProfile() {
    return Storage.write('profile.json', JSON.stringify(profile.value))
        .then(res => console.dir(res ? 'Saved successfully!' : 'Save failed!'))
}

function plateSearch(plateNum) {
    saveProfile();
    console.log("running plateSearch: " + plateNum);

    return fetch("http://127.0.0.1:5000/plate/" + plateNum)
        .then(res => res.json())
        .then(res => profile.value = res);
}

module.exports = {
    profile: profile,
    loadProfile: loadProfile,
    saveProfile: saveProfile,
    plateSearch: plateSearch
};