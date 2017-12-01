var Context = require("Modules/Context");
Context.loadProfile()
    .catch(err => {
        // Prompt for reg nr
    })

module.exports = {
	profile: null
};