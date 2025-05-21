local config = {
    cmd = { vim.fn.expand('~/.local/share/nvim/mason/bin/jdtls') },
    root_dir = vim.fs.dirname(vim.fs.find({'gradlew', '.git', 'mvnw'}, { upward = true })[1]),
    init_options = {
        bundles = {
		vim.fn.glob('~/.local/share/nvim/mason/share/java-debug-adapter/com.microsoft.java.debug.plugin-*.jar', 1)
	}
    },
}

-- Extend the bundles with additional JAR files
local additional_bundles = vim.split(vim.fn.glob('~/.local/share/nvim/mason/share/java-test/*.jar', 1), '\n')
vim.list_extend(config.init_options.bundles, additional_bundles)

require('jdtls').start_or_attach(config)
