# learning-git
Learning git for VCS (Version Control System)
It's useful for collaborate together building some project

Here is a command list that you may wouldn't want missed:
git init . -> set current folder to git 
git checkout <branch name> -b "branch_name"-> switch branches, -b -> add branches with given name
git add <filename> <. (all file)> -> add to staging after modded files
git commit <filename> <. (all file)> -m "Message notes" -> commit to current branches. -m -> commit message notes
git checkout <commmit number> -n ->  rewind branches by commit number (temporarry), usually to 
lookup codes and experiment. -n -> rewind branches by number starting from 1 (first commmit)
git reset --soft --mixed --hard -> reset current branches into modified status and delete afterward commit
git revert <commit number> -n -> rewind branches by commit number into commit status. It is safer than git reset
because it is'nt remove afterward commit
git branch add "branch_name" -> add branches with given name
git log -oneline -> view commit log, -oneline view simple oneline log
git diff <commit code> <commit code> -> compare commit code (only showing different part).
git remote add <remote_name> <branches_name>-> add current folder and branches into remote list
git remote -v -> show all added remote
git remote remove <remote_name> <branches_name> -> remove remote_name with branches_name
git push <remote_name> <branches_name> -> push remote_name and branches_name into repository
git fetch ->
git pull ->
git clone ->
