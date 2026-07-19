"==================================================
" Leader
"==================================================

let mapleader = " "

"==================================================
" Insert Mode
"==================================================

" 快速退出插入模式
imap jj <Esc>

"==================================================
" Save
"==================================================

nmap <leader>w :w<CR>

"==================================================
" Search
"==================================================

" 搜索后居中
nmap n nzzzv
nmap N Nzzzv
nmap * *zzzv
nmap # #zzzv

" 清除搜索高亮
nmap <Esc> :nohlsearch<CR>

"==================================================
" Better Movement
"==================================================

" 大跳
nmap J 5j
nmap K 5k

" 行首行尾
nmap H ^
nmap L $

"==================================================
" Tabs
"==================================================

nmap <S-l> gt
nmap <S-h> gT

"==================================================
" Window Navigation
"==================================================

nmap <C-h> <C-w>h
nmap <C-j> <C-w>j
nmap <C-k> <C-w>k
nmap <C-l> <C-w>l

"==================================================
" Paste
"==================================================

xnoremap p "_dP

"==================================================
" Markdown
"==================================================

" 标题跳转
nmap ]] /^#<CR>
nmap [[ ?^#<CR>

"==================================================
" Obsidian Commands
"==================================================

" Quick Switcher
exmap quickswitch obcommand app:quick-switcher:open
nmap <leader>o :quickswitch<CR>

" Search
exmap search obcommand app:open-search
nmap <leader>f :search<CR>

" Command Palette
exmap commandpalette obcommand command-palette:open
nmap <leader>p :commandpalette<CR>

" Backlinks
exmap backlinks obcommand backlinks:open
nmap <leader>b :backlinks<CR>

" Daily Notes
exmap today obcommand daily-notes
nmap <leader>td :today<CR>

" Graph View
exmap graph obcommand graph:open
nmap <leader>g :graph<CR>

" Toggle Left Sidebar
exmap leftsidebar obcommand app:toggle-left-sidebar
nmap <leader>e :leftsidebar<CR>

" Toggle Right Sidebar
exmap rightsidebar obcommand app:toggle-right-sidebar
nmap <leader>r :rightsidebar<CR>

"==================================================
" Folding
"==================================================

nmap za za
nmap zR zR
nmap zM zM
