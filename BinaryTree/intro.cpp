struct TreeNode {
    // 
    int key;
    TreeNode* left;
    TreeNode* right;

    // 생성자: 키 값과 왼쪽, 오른쪽 서브트리의 포인터를 매개변수로 받아 초기화
    TreeNode(int k, TreeNode* l, TreeNode* r) {
        key = k; left = l; right = r;
    }
    // 생성자: 키 값만을 매개변수로 받고, 왼쪽과 오른쪽 서브트리의 포인터를 nullptr로 초기화
    TreeNode(int k) : key(k), left(nullptr), right(nullptr) {}

    // 소멸자: 특별한 동작이 정의되어 있지 않음
    ~TreeNode(){}
};
using tree = TreeNode*;

// case1 : 할당한 포인터를 t라는 포인터에 저장 
TreeNode* t = new TreeNode(9);
// case2 : 별칭인 tree를 사용해 값을 할당
tree t = new TreeNode(9);

// 이 방식에는 위의 노드로 갈 수가 없다 (이전을 가리키는 걸 좌우로 바꾸었기 때문)
// DLL과의 차이 : DLL은 수평이동 (앞,뒤 노드 방문) 이건 아래 노드로만 가지만 좌우이동 가능