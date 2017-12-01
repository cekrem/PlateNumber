var Observable = require("FuseJS/Observable");
var Context = require("Modules/Context");
var status = Observable("loading");

Context.loadProfile()
    .then(() => status.value = "ready",
    () => status.value = "empty")

module.exports = {
    profile: Context.profile,
    status: status
};