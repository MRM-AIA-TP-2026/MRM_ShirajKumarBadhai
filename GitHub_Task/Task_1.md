TO PUSH A FILE TO GIT REPOSITORY

Commad Used:-
cd ~/GitHub_task
git init
git add Git_task.c
git config --global user.email "shirajkumarbadhai@gmail.com"
git config --global user.name "ShirajB"
git commit -m "First Commit"
git remote add origin https://github.com/MRM-AIA-TP-2026/MRM_ShirajKumarBadhai
git remote -v
git push -u origin main
