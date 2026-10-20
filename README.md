# system-design-resources

Curated system design study materials: upstream learning repos as [git submodules](https://git-scm.com/book/en/v2/Git-Tools-Submodules), plus local notes and references in this repository.

## Submodules

| Path | Upstream |
| --- | --- |
| `awesome-system-design-resources` | [ashishps1/awesome-system-design-resources](https://github.com/ashishps1/awesome-system-design-resources) |
| `distsys-class` | [aphyr/distsys-class](https://github.com/aphyr/distsys-class) |
| `karanpratapsingh-system-design` | [karanpratapsingh/system-design](https://github.com/karanpratapsingh/system-design) |
| `liquidslr-system-design-notes` | [liquidslr/system-design-notes](https://github.com/liquidslr/system-design-notes) |
| `system-design-primer` | [donnemartin/system-design-primer](https://github.com/donnemartin/system-design-primer) |

### Clone with submodules

```bash
git clone --recurse-submodules https://origin.cursor.com/mihir-karandikar/system-design-resources.git
```

If you already cloned without submodules:

```bash
git submodule update --init --recursive
```

### Update submodules to latest upstream

```bash
git submodule update --remote --merge
```

## Local content

- `LLD/` — low-level design exercises (e.g. elevator system)
- Root `*.txt` / `*.pdf` — bookmarks, papers, and reference links
