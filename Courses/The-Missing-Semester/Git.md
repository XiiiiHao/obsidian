# Git

## data structure
```
type blob = array <byte>
type tree = map <string ,tree | blog>
type commit = struct {
    parents:array<commit>
    author:string
    message:string
    snapshot:tree
}
type object = blob | tree | commit
objects = map<string,object>

```
