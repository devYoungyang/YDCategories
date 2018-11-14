# YDCategories
lib support cocoapods


- 代码提交到远程仓库
- `git tag 0.0.1` 	 加标签
- `git push —tags`
- `pod spec create YDCategories`  创建.podspec文件
- `pod trunk register 1170172872@qq.com` 注册账号
- `pod lib lint --allow-warnings` 验证podspec文件
- `pod trunk push YDCategories.podspec —allow-warnings` 提交本地索引库
- 命令行 `pod setup` ， 创建本地索引库
- `pod search YDCategories`搜索库 
-  搜索报错 [!] Unable to find a pod with name, author, summary, or description matching YDCategories. 解决方案：删除 `~/资源库/Caches/CocoaPods/search_index.json`
-  `pod search YDCategories`搜索库 
- 删除本地标签 `git tag -d 1.1.0 `
- 删除远程标签 'git push origin :refs/tags/1.1.0'