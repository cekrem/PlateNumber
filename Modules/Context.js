var Observable = require("FuseJS/Observable");
var Storage = require("FuseJS/Storage");

var store = {
    profile: Observable()
};

function load(key) {
    return Storage.read(key + '.json')
        .then(res => store[key].value = JSON.parse(res));
}

function save(key) {
    return Storage.write(key + '.json', JSON.stringify(store[key].value))
        .then(res => console.log(res ? 'Saved successfully!' : 'Save failed!'))
}

module.exports = {
    store: store,
    load: load,
    save: save,
    plateSearch: plateSearch
};