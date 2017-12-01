var Observable = require("FuseJS/Observable");
var Context = require("Modules/Context");

var plateNum = Observable("");

load();

function load() {
    Context.load('profile');
}

function save() {
    Context.save('profile');
}

function plateSearch(plateNum) {
    console.log("running plateSearch: " + plateNum);

    return fetch("http://127.0.0.1:5000/plate/" + plateNum)
        .then(res => res.json())
        .then(res => console.dir(res));
}

module.exports = {
    profile: Context.store.profile,
    profileJson: Context.store.profile.map(obj => JSON.stringify(obj)),
    load: load,
    clear: () => Context.store.profile.value = {},
    save: save,
    plateSearch: plateSearch,
    status: status,
    plateNum: plateNum
};