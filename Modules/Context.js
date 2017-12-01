var Observable = require("FuseJS/Observable");
var Storage = require("FuseJS/Storage");

var profile = Observable();

function loadProfile() {
    return Storage.read('profile.json')
        .then(res=> profile.replaceAll(res));
}

module.exports = {
    profile: profile,
    loadProfile: loadProfile
};