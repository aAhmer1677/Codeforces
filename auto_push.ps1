$folder = "C:\Bulu Ahmer\Codeforces"
cd $folder

Write-Host "Monitoring $folder directly for changes..." -ForegroundColor Cyan

# This loop checks your folder every 5 seconds for modified files
while ($true) {
    # Check if there are any unstaged or untracked changes
    $status = git status --porcelain
    
    if ($status) {
        Write-Host "Changes detected! Pushing to GitHub..." -ForegroundColor Yellow
        
        # Run git commands directly so we can see any errors
        git add .
        git commit -m "Auto-commit: $(Get-Date)"
        git push origin main
        
        Write-Host "Push complete. Resuming monitor..." -ForegroundColor Green
    }
    
    Start-Sleep -Seconds 5
}
