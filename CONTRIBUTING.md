## How to getting started contributing and create Pull Requests

There is a step by step guide to get started contributing and make your first pull request and keep going.
Kindly follow the instructions carefully.

------------------------------------------------------------------------------------------------------

### 0. Register for Hacktoberfest

https://hacktoberfest.digitalocean.com/

### 1. Give this Project a Star :star:

You can appreciate the work of this project by giving a star to the Repository.
![image](https://user-images.githubusercontent.com/72457759/137008609-0ac589f2-dc10-4a9c-adae-bdc732c7e86f.png)

If you liked working on this repo, please share this repo as much as you can and spread love for opensource.
It will help beginners to contribute in open source projects like this one.

### 2. Fork Repository

Click on the fork button to fork a repository.
![image](https://user-images.githubusercontent.com/72457759/137007456-7ea87fdc-9644-4200-8daf-a47f781a7f4d.png)
You have to a fork repository in which you want to contribute.
fork means, it create a copy of the main repository in your github account.

### 3. Clone Repository

after forking, copy link of the forked repository.

![image](https://user-images.githubusercontent.com/72457759/137008150-bae4a99a-903c-47b7-bf8a-f145a71bef1f.png)


Then, type following *git clone* command in terminal to clone into your machine locally.

```
git clone "git@github.com:your-username/Competitive-Coding-Solutions.git"
```

instead of "git@github.com:your-username/Competitive-Coding-Solutions.git" paste the link that you've copied.


### 4. Create branch (Separate branch for your code)

It's required to make separate branch for your code. It avoids creating mess in main branch.

Type following command in terminal window

```
git checkout -b new-branch-name
```

### 5. Make your Changes in Code (Coding Time)

At this step you need add your original code in this repository.
Make sure your code files must be in respective folder. 
By doing this repository will be organized and well maintained.
hope you follow this proper manner and respect this project to make a original valid Pull Request.

### 6. Commit Changes (Save your code)

Now, it's time to commit the changes you've made to the repository.

Type following commands

```
git add .
```
```
git commit -m "A good commit message that describes the changes you've made."
```

### 7. Configure a Remote for the Fork

Next, you’ll have to specify a new remote upstream repository for us to sync with the fork. This will be the original repository that you forked from. You’ll have to do this with the `git remote add` command.

```
git remote add upstream git@github.com:ALLINONE4298/Competitive-Coding-Solutions.git
```

In this example, `upstream` is the shortname we have supplied for the remote repository since in terms of Git, “upstream” refers to the repository that you cloned from. If you want to add a remote pointer to the repository of a collaborator, you may want to provide that collaborator’s username or a shortened nickname for the shortname.

### 8. Pull Updated/Latest Code

Now before pushing your changes to maintainer's repository, you need to fetch the latest/updated version of code to avoid merge conflicts.

Type following command to Pull latest code

```
git pull upstream dev
```

### 9. Push your code to Github

Now its time to push your code to forked repository.
Type following command

```
git push --set-upstream origin new-branch-name
```

### 10. Create Pull Request

After pushing code to forked repository, You will see a popup like below.
![image](https://user-images.githubusercontent.com/72457759/137017674-61fd3e75-306d-47f8-bf9f-59c36a4521fc.png)
Then click on green button which says compare & pull request.

At this point, you are ready to make a pull request to the original repository.
![image](https://user-images.githubusercontent.com/72457759/137018731-ee7e167e-edcc-4452-9f67-51be0b4f1d0e.png)
It's recommended that you should provide proper description about what you've done and attach output to it if so.
It will help maintainer to review the code and see what you've did and what needs to change.


### 11. And wait for owner to merge

After all of that, you just need to wait for this PR to be reviewed by maintainer.
If there is no merge conflict then maintainer will merge your pull request or ask you to do changes.
Have patience and contribute more.

## Hurray!! You just successfully create your first pull request

But even after this you can keep contributing and add more changes to the repository and make it better.

------------------------------------------------------------------------------------------------------------

### Wanna Contribute Again? (Then Follow Along)
Now, you have to do pretty much the same process as before.

### Create another branch for another Pull Request

It's required to make separate branch for your code. It avoids creating mess in main branch.

Type following command in terminal window

```
git checkout -b new-branch-name
```

This branch name should be different than previous one.

### Repeat Step 5 and 6

Add your changes to the repository and commit changes same as before.

### Update your forked Repository

Now it's important to update your forked Repository before pulling latest/updated code.
![image](https://user-images.githubusercontent.com/72457759/137009953-fb1318d9-13b4-435e-b7ea-e788e5b437e9.png)

This will fetch all commits done on main repo and update your forked repo in your github account.

### Repeat Step 8, 9 and 10
Then,
* Pull the latest/updated code from the forked repository.
* Push your code to the forked Repository.
* Create the Pull Request and Wait for the Pull Request to Merge.
Do Same as Before.

------------------------------------------------------------------------------

That's it, you done it again. Well done! You're doing great. 
That's the process to contribute in almost every open source project.
Keep Doing that, That's contributing in open source be like.
