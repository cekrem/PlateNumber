const Observable = require("FuseJS/Observable");
const Storage = require("FuseJS/Storage");

const store = {
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
    store,
    load,
    save
};