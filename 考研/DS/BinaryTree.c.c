// 1.统计度为i的结点的个数
int count(BiTree *p){
  if (p == NULL)
    return 0;
  int current = 0;
  int leftcount = count(p->left);
  int rightcount = count(p->right);
  if(p->left == NULL && p->right != NULL || (p->left != NULL && p->right ==NULL )){
    current = 1;
  }
  return current + leftcount + rightcount;
}

// 2.get the height
 int getHeight(struct TreeNode* root) {
    // 如果树为空，高度为0
    if (root == NULL) {
        return 0;
    }
    
    // 递归计算左右子树的高度
    int leftHeight = getHeight(root->left);
    int rightHeight = getHeight(root->right);
    
    // 返回左右子树中较大的高度加1(当前节点)
    return (leftHeight > rightHeight ? leftHeight : rightHeight) + 1;
}

// 3.get the width
int getWidth(struct TreeNode* root) {
    if (root == NULL) {
        return 0;
    }
    
    // 创建队列
    struct TreeNode* queue[MAX_SIZE];
    int front = 0;
    int rear = 0;
    int maxWidth = 1;  // 记录最大宽度
    
    // 根节点入队
    queue[rear++] = root;
    
    while (front < rear) {
        // 当前层的节点数
        int levelSize = rear - front;
        
        // 更新最大宽度
        if (levelSize > maxWidth) {
            maxWidth = levelSize;
        }
        
        // 处理当前层的所有节点
        for (int i = 0; i < levelSize; i++) {
            struct TreeNode* node = queue[front++];
            
            // 将下一层的节点入队
            if (node->left) {
                queue[rear++] = node->left;
            }
            if (node->right) {
                queue[rear++] = node->right;
            }
        }
    }
    
    return maxWidth;
}
// 4.delete all the leaf nodes
struct TreeNode* deleteLeaves(struct TreeNode* root) {
    // 如果是空节点，直接返回NULL
    if (root == NULL) {
        return NULL;
    }
    
    // 如果是叶子节点，删除并返回NULL
    if (root->left == NULL && root->right == NULL) {
        free(root);
        return NULL;
    }
    
    // 递归处理左右子树
    root->left = deleteLeaves(root->left);
    root->right = deleteLeaves(root->right);
    
    return root;
}

// 5.check the height of *p 
// 假设节点结构体中只有左右子节点指针和值
int getLevel(struct TreeNode* root, struct TreeNode* p) {
    // 如果树为空或目标节点为空，返回0表示未找到
    if (root == NULL || p == NULL) {
        return 0;
    }
    
    // 用辅助函数进行递归查找
    return findLevel(root, p, 1);
}

int findLevel(struct TreeNode* root, struct TreeNode* p, int level) {
    // 如果当前节点为空，返回0表示未找到
    if (root == NULL) {
        return 0;
    }
    
    // 如果找到目标节点，返回当前层次
    if (root == p) {
        return level;
    }
    
    // 在左子树中查找
    int leftLevel = findLevel(root->left, p, level + 1);
    if (leftLevel != 0) {
        return leftLevel;
    }
    
    // 在右子树中查找
    return findLevel(root->right, p, level + 1);
}

// 6. get the maximum
int findMax(struct TreeNode* root) {
    // 如果树为空，返回最小整数值（或根据具体需求定义）
    if (root == NULL) {
        return INT_MIN;  // 需要包含 limits.h
    }
    
    // 获取左右子树的最大值
    int leftMax = findMax(root->left);
    int rightMax = findMax(root->right);
    
    // 找出当前节点值、左子树最大值和右子树最大值中的最大者
    int max = root->val;
    if (leftMax > max) {
        max = leftMax;
    }
    if (rightMax > max) {
        max = rightMax;
    }
    
    return max;
}

// 7.exchange the two childs
struct TreeNode* swapChildren(struct TreeNode* root) {
   // 如果是空节点或叶子节点，直接返回
   if (root == NULL || (root->left == NULL && root->right == NULL)) {
       return root;
   }
   
   // 交换左右子节点
   struct TreeNode* temp = root->left;
   root->left = root->right;
   root->right = temp;
   
   // 递归处理原来的左右子树
   swapChildren(root->left);
   swapChildren(root->right);
   
   return root;
}



void printNodeAndLevel(struct TreeNode* root, int level) {
   // 如果是空节点，直接返回
   if (root == NULL) {
       return;
   }
   
   // 先序遍历：先打印当前节点值和层次
   printf("值: %d, 层次: %d\n", root->val, level);
   
   // 递归处理左右子树，层次加1
   printNodeAndLevel(root->left, level + 1);
   printNodeAndLevel(root->right, level + 1);
}

// 使用时从根节点开始，层次为1：
// printNodeAndLevel(root, 1);
