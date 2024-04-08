# 第一次使用git

```git bash
14974@▒▒▒ѩ MINGW64 /c/esnow (master)
$ git config --global user.name "EmbroiderSnow"

14974@▒▒▒ѩ MINGW64 /c/esnow (master)
$ git config --global user.email 1497411439@qq.com

14974@▒▒▒ѩ MINGW64 /c/esnow (master)
$ git config --list
diff.astextplain.textconv=astextplain
filter.lfs.clean=git-lfs clean -- %f
filter.lfs.smudge=git-lfs smudge -- %f
filter.lfs.process=git-lfs filter-process
filter.lfs.required=true
http.sslbackend=openssl
http.sslcainfo=D:/Git/mingw64/etc/ssl/certs/ca-bundle.crt
core.autocrlf=true
core.fscache=true
core.symlinks=false
pull.rebase=false
credential.helper=manager
credential.https://dev.azure.com.usehttppath=true
init.defaultbranch=master
core.editor="D:\Microsoft VS Code\bin\code" --wait
user.name=EmbroiderSnow
user.email=1497411439@qq.com
core.repositoryformatversion=0
core.filemode=false
core.bare=false
core.logallrefupdates=true
core.symlinks=false
core.ignorecase=true

14974@▒▒▒ѩ MINGW64 /c/esnow (master)
$ git commit -m "初始版本"
[master (root-commit) 153c91a] 初始版本
 1 file changed, 0 insertions(+), 0 deletions(-)
 create mode 100644 README.md

14974@▒▒▒ѩ MINGW64 /c/esnow (master)
$ quit
bash: quit: command not found

14974@▒▒▒ѩ MINGW64 /c/esnow (master)
$ ssh-keygen -t rsa -C "1497411439@qq.com"
Generating public/private rsa key pair.
Enter file in which to save the key (/c/Users/14974/.ssh/id_rsa): /c/Users/14974/desktop/sshkey.txt
/c/Users/14974/desktop/sshkey.txt already exists.
Overwrite (y/n)? y
Enter passphrase (empty for no passphrase):
Enter same passphrase again:
Passphrases do not match.  Try again.
Enter passphrase (empty for no passphrase):
Enter same passphrase again:
Your identification has been saved in /c/Users/14974/desktop/sshkey.txt
Your public key has been saved in /c/Users/14974/desktop/sshkey.txt.pub
The key fingerprint is:
SHA256:lhydgfOIR0Tij5lwxNt0pnpgHA91MX2bd2ipbmoiDsY 1497411439@qq.com
The key's randomart image is:
+---[RSA 3072]----+
|     .o++.=o     |
|     o+.=oo+. .  |
|    ..oX.Bo  . = |
|     o***o.   * o|
|     .++S    o ..|
|   .  ...   .    |
|    E  .   .     |
|   . .. . . o    |
|     ... o.o     |
+----[SHA256]-----+

14974@▒▒▒ѩ MINGW64 /c/esnow (master)
$ ssh -T git@github.com
The authenticity of host 'github.com (20.205.243.166)' can't be established.
ED25519 key fingerprint is SHA256:+DiY3wvvV6TuJJhbpZisF/zLDA0zPMSvHdkr4UvCOqU.
This key is not known by any other names.
Are you sure you want to continue connecting (yes/no/[fingerprint])? yes
Warning: Permanently added 'github.com' (ED25519) to the list of known hosts.
git@github.com: Permission denied (publickey).

14974@▒▒▒ѩ MINGW64 /c/esnow (master)
$ ssh -T git@github.com
git@github.com: Permission denied (publickey).

14974@▒▒▒ѩ MINGW64 /c/esnow (master)
$ ^C

14974@▒▒▒ѩ MINGW64 /c/esnow (master)
$ ls -al ~/.ssh
total 13
drwxr-xr-x 1 14974 197609  0 Apr  8 19:42 ./
drwxr-xr-x 1 14974 197609  0 Apr  8 19:42 ../
-rw-r--r-- 1 14974 197609 92 Apr  8 19:42 known_hosts

14974@▒▒▒ѩ MINGW64 /c/esnow (master)
$ ssh -T git@github.com
git@github.com: Permission denied (publickey).

14974@▒▒▒ѩ MINGW64 /c/esnow (master)
$ ssh-keygen -t rsa -C "1497411439@qq.com"
Generating public/private rsa key pair.
Enter file in which to save the key (/c/Users/14974/.ssh/id_rsa):
Enter passphrase (empty for no passphrase):
Enter same passphrase again:
Your identification has been saved in /c/Users/14974/.ssh/id_rsa
Your public key has been saved in /c/Users/14974/.ssh/id_rsa.pub
The key fingerprint is:
SHA256:VhxfAcoZzwSBKynP48kdogCu7dInCbSI5l8J83+yhKs 1497411439@qq.com
The key's randomart image is:
+---[RSA 3072]----+
|         .=oo.o. |
|        .o X .   |
|       . .* +    |
|..  . o ..       |
|=..o + .S        |
|++. + B..        |
|++ o O * .       |
|o.= + B...       |
| ooE.. o+        |
+----[SHA256]-----+

14974@▒▒▒ѩ MINGW64 /c/esnow (master)
$ ssh -T git@github.com
Hi EmbroiderSnow! You've successfully authenticated, but GitHub does not provide shell access.

14974@▒▒▒ѩ MINGW64 /c/esnow (master)
$ git remote add origin git@github.com:EmbroiderSnow/esnow.git

14974@▒▒▒ѩ MINGW64 /c/esnow (master)
$ git config --list
diff.astextplain.textconv=astextplain
filter.lfs.clean=git-lfs clean -- %f
filter.lfs.smudge=git-lfs smudge -- %f
filter.lfs.process=git-lfs filter-process
filter.lfs.required=true
http.sslbackend=openssl
http.sslcainfo=D:/Git/mingw64/etc/ssl/certs/ca-bundle.crt
core.autocrlf=true
core.fscache=true
core.symlinks=false
pull.rebase=false
credential.helper=manager
credential.https://dev.azure.com.usehttppath=true
init.defaultbranch=master
core.editor="D:\Microsoft VS Code\bin\code" --wait
user.name=EmbroiderSnow
user.email=1497411439@qq.com
core.repositoryformatversion=0
core.filemode=false
core.bare=false
core.logallrefupdates=true
core.symlinks=false
core.ignorecase=true
remote.origin.url=git@github.com:EmbroiderSnow/esnow.git
remote.origin.fetch=+refs/heads/*:refs/remotes/origin/*

14974@▒▒▒ѩ MINGW64 /c/esnow (master)
$ git commit README.md -m "远程链接成功"
On branch master
nothing to commit, working tree clean

14974@▒▒▒ѩ MINGW64 /c/esnow (master)
$ git init
Reinitialized existing Git repository in C:/esnow/.git/

14974@▒▒▒ѩ MINGW64 /c/esnow (master)
$ git add README.md

14974@▒▒▒ѩ MINGW64 /c/esnow (master)
$ git commit README.md -m "现在提交到HEAD"
On branch master
nothing to commit, working tree clean

14974@▒▒▒ѩ MINGW64 /c/esnow (master)
$ git add README.md

14974@▒▒▒ѩ MINGW64 /c/esnow (master)
$ git commit -m "初始化？"
On branch master
nothing to commit, working tree clean

14974@▒▒▒ѩ MINGW64 /c/esnow (master)
$ ^C

14974@▒▒▒ѩ MINGW64 /c/esnow (master)
$ git add README.md

14974@▒▒▒ѩ MINGW64 /c/esnow (master)
$ git commit -m "小改一下"
[master b20850c] 小改一下
 1 file changed, 1 insertion(+)

14974@▒▒▒ѩ MINGW64 /c/esnow (master)
$ git push origin master
ERROR: Repository not found.
fatal: Could not read from remote repository.

Please make sure you have the correct access rights
and the repository exists.

14974@▒▒▒ѩ MINGW64 /c/esnow (master)
$ git clone /path/to/repository
Cloning into 'repository'...
fatal: 'D:/Git/path/to/repository' does not appear to be a git repository
fatal: Could not read from remote repository.

Please make sure you have the correct access rights
and the repository exists.

14974@▒▒▒ѩ MINGW64 /c/esnow (master)
$ ^C

14974@▒▒▒ѩ MINGW64 /c/esnow (master)
$ git remote -v
origin  git@github.com:EmbroiderSnow/esnow.git (fetch)
origin  git@github.com:EmbroiderSnow/esnow.git (push)

14974@▒▒▒ѩ MINGW64 /c/esnow (master)
$ git remote add
usage: git remote add [<options>] <name> <url>

    -f, --[no-]fetch      fetch the remote branches
    --[no-]tags           import all tags and associated objects when fetching
                          or do not fetch any tag at all (--no-tags)
    -t, --[no-]track <branch>
                          branch(es) to track
    -m, --[no-]master <branch>
                          master branch
    --[no-]mirror[=(push|fetch)]
                          set up remote as a mirror to push to or fetch from


14974@▒▒▒ѩ MINGW64 /c/esnow (master)
$ ^C

14974@▒▒▒ѩ MINGW64 /c/esnow (master)
$ git remote rm origin

14974@▒▒▒ѩ MINGW64 /c/esnow (master)
$ git remote -v

14974@▒▒▒ѩ MINGW64 /c/esnow (master)
$ git remote add origin git@github.com:EmbroiderSnow/Homework_2024Sp.git

14974@▒▒▒ѩ MINGW64 /c/esnow (master)
$ git add CArray3D.cpp

14974@▒▒▒ѩ MINGW64 /c/esnow (master)
$ git commit CArray3D.cpp -m "memset拼尽全力也不能战胜，下一版大改"
[master 332e201] memset拼尽全力也不能战胜，下一版大改
 1 file changed, 158 insertions(+)
 create mode 100644 CArray3D.cpp

14974@▒▒▒ѩ MINGW64 /c/esnow (master)
$ git push origin master
Enumerating objects: 9, done.
Counting objects: 100% (9/9), done.
Delta compression using up to 20 threads
Compressing objects: 100% (5/5), done.
Writing objects: 100% (9/9), 1.65 KiB | 1.65 MiB/s, done.
Total 9 (delta 0), reused 0 (delta 0), pack-reused 0 (from 0)
remote:
remote: Create a pull request for 'master' on GitHub by visiting:
remote:      https://github.com/EmbroiderSnow/Homework_2024Sp/pull/new/master
remote:
To github.com:EmbroiderSnow/Homework_2024Sp.git
 * [new branch]      master -> master

```
