# Zed Configuration

Backup of this machine's Zed setup. Live config lives at `~/.config/zed/`.

## Files

- `settings.json` — editor settings
- `keymap.json` — keybindings
- `sql-formatter.json` — SQL formatter options (referenced from settings)
- `extensions.md` — installed extensions manifest

## How to restore

Copy the files into `~/.config/zed/`:

```bash
cp keymap.json settings.json sql-formatter.json ~/.config/zed/
```

**Not committed by design:**

- `context_servers` in `settings.json` — requires your `github_personal_access_token` and `context7_api_key`. Set those up in Zed's Settings UI (`zed: Open Settings`) after restoring.
- Ruffle Python formatter path is absolute (Zed's bundled ruff is not on PATH). On a new machine, update the `command` path in `settings.json`'s `languages.Python` block to match Zed's installed ruff location.
