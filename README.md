# wxl-itemdbc-ditcher

WXL patcher module that removes the WoW 3.3.5a (12340) client's dependency on the `Item.dbc` file.

## What it does

The stock client uses a hardcoded global ObjectManager singleton (`0x00AD3D64`) and inline GUID-range checks to look up game objects and read their descriptor fields (`+0x14`, `+0x18`, `+0x1C`) directly from the `Item.dbc`-backed object array. This means any item not present in the client-side DBC will fail to resolve, causing invisible items, broken tooltips, and UI glitches for custom or server-side items, but with our patch fix that doesn't happen.

## Targets

| Field | Value |
|---|---|
| Client | WoW 3.3.5a (build 12340) |
| Input | Clean, unmodified `Wow.exe` (7,704,216 bytes) |
| Patch regions | 56 edits, 571 bytes |
| Sections touched | `.text`, `.rdata` |

## Build

Drop the `patcher/` directory into your WXL source tree. The module self-registers.

## License

https://github.com/Hextv/wxl-itemdbc-ditcher/blob/main/LICENSE
