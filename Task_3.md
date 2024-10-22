After Downlading the CSV file in the GitHub_task folder, terminal was opened and following commands were used to push the file:-

cd ~/GitHub_task
git init
git add Employee.csv
git config --global user.email "shirajkumarbadhai@gmailcom"
git config --global user.name "ShirajB"
git commit -m "Commiting CSV file"
git pull --rebase origin main //git pull was use as I lost my original PAT and had to regenerate it again, so to update repo git pull was used
git remote -v //repo already added
git push -u origin main

FILE SUCCESSFULY PUSHED
