# 2023-Custom_KeyBoard
This repository main puporse is for development and documentation of my take at QMK docs.
For further question, please seek help at r/olkb and QMK Oficall Discord.

# Creating new local-to-repo
1. open Git Bash and cd to your local file
2. git init - Initialize local a new repository
3. git status -shows what you have in you staging area
4. git add <file> - adds files and folders to the staging area
	example: git add . 
    (adding all file in the local machine)
	note: if any file-changes happened after "git add ." you need to re-add by using "git add ."
5. git commit - commits files in staging area to local repository
	example: git commit -m "Your custome note" 
    (commit to add all the file)
6. git remote add origin <repo url> -  adding the repository url
7. git push -u origin <branch name> example: 
	
	git push -u origin master 

    (the repo brand is master)- to understand more open config in .git folder (hidden)
8. Git crash course: https://www.youtube.com/watch?v=SWYqp7iY_Tc

# Pushing new file to the repo
1. open Git Bash and cd to your local file
2. git add .
3. git status
4. git commit -m "second commit"
5. git push -u origin master

Create a repo on github
set a remote
Add your github credentials

git pull - Pull latest changes from remote repository
git clone - Clone repo from github