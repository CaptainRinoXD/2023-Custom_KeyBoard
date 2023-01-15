# 2023-Custom_KeyBoard
This repository main puporse is for development and documentation of my take at QMK docs.
For further question, please seek help at r/olkb and QMK Oficall Discord.

# Creating new local-to-repo
1. open Git Bash and cd to your local file
2. git init - Initialize local a new repository
```
git int
```
3. git status -shows what you have in you staging area
```
git status
```
4. git add <file> - adds files and folders to the staging area - note: adding all file in the local machine. If any file-changes happened after "git add ." you need to re-add by using "git add .":
```
git add .
``` 
5. git commit - commits files in staging area to local repository -note: commit to add all the file
```
example: git commit -m "Your custome note"
```
6. git remote add origin <repo url> -  adding the repository url
```
git remote add origin https://github.com/CaptainRinoXD/*****.git
```
7. git push -u origin <branch name> example: - (the repo brand is master)- to understand more open config in .git folder (hidden)
```
git push -u origin master
```
8. Git crash course: https://www.youtube.com/watch?v=SWYqp7iY_Tc  https://www.youtube.com/watch?v=qMck70tLDuo&t=620s



# Pushing new file to the repo
1. open Git Bash and cd to your local file
2. adding all the file:
```
git add .
```
3. Get the stauts of the file that has been added
```
git status
```
4. comminting to the adding process
```
git commit -m "second commit"
```
5. pushing the file to Github repo
```
git push
```

* Create a repo on github
* set a remote
* Add your github credentials

* git pull - Pull latest changes from remote repository
* git clone - Clone repo from github

# More information writing on Github
https://docs.github.com/en/get-started/writing-on-github/working-with-advanced-formatting/organizing-information-with-tables

