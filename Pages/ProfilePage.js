var Observable = require("FuseJS/Observable");
var Context = require("Modules/Context");

var status = Observable("loading");
var plateNum = Observable("");

Context.loadProfile()
    .then(() => status.value = "ready",
    () => status.value = "empty")
    .then(() => console.dir(status))

function plateSearch() {
    Context.plateSearch(plateNum.value);
}

module.exports = {
    profile: Context.profile,
    profileJson: Context.profile.map(obj => JSON.stringify(obj)),
    load: Context.loadProfile,
    clear: () => Context.profile.value = {},
    save: Context.saveProfile,
    plateSearch: plateSearch,
    status: status,
    plateNum: plateNum
};