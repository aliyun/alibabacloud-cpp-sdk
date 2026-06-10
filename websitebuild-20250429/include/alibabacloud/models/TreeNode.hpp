// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TREENODE_HPP_
#define ALIBABACLOUD_MODELS_TREENODE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/TreeNode.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WebsiteBuild20250429
{
namespace Models
{
  class TreeNode : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TreeNode& obj) { 
      DARABONBA_PTR_TO_JSON(Children, children_);
      DARABONBA_PTR_TO_JSON(FinalStepNo, finalStepNo_);
      DARABONBA_PTR_TO_JSON(FinishTime, finishTime_);
      DARABONBA_PTR_TO_JSON(IsContainerNode, isContainerNode_);
      DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
      DARABONBA_PTR_TO_JSON(NodeName, nodeName_);
      DARABONBA_PTR_TO_JSON(NodeStatus, nodeStatus_);
      DARABONBA_PTR_TO_JSON(OperatorRole, operatorRole_);
      DARABONBA_PTR_TO_JSON(ParentNodeId, parentNodeId_);
      DARABONBA_PTR_TO_JSON(StepNo, stepNo_);
    };
    friend void from_json(const Darabonba::Json& j, TreeNode& obj) { 
      DARABONBA_PTR_FROM_JSON(Children, children_);
      DARABONBA_PTR_FROM_JSON(FinalStepNo, finalStepNo_);
      DARABONBA_PTR_FROM_JSON(FinishTime, finishTime_);
      DARABONBA_PTR_FROM_JSON(IsContainerNode, isContainerNode_);
      DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
      DARABONBA_PTR_FROM_JSON(NodeName, nodeName_);
      DARABONBA_PTR_FROM_JSON(NodeStatus, nodeStatus_);
      DARABONBA_PTR_FROM_JSON(OperatorRole, operatorRole_);
      DARABONBA_PTR_FROM_JSON(ParentNodeId, parentNodeId_);
      DARABONBA_PTR_FROM_JSON(StepNo, stepNo_);
    };
    TreeNode() = default ;
    TreeNode(const TreeNode &) = default ;
    TreeNode(TreeNode &&) = default ;
    TreeNode(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TreeNode() = default ;
    TreeNode& operator=(const TreeNode &) = default ;
    TreeNode& operator=(TreeNode &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->children_ == nullptr
        && this->finalStepNo_ == nullptr && this->finishTime_ == nullptr && this->isContainerNode_ == nullptr && this->nodeId_ == nullptr && this->nodeName_ == nullptr
        && this->nodeStatus_ == nullptr && this->operatorRole_ == nullptr && this->parentNodeId_ == nullptr && this->stepNo_ == nullptr; };
    // children Field Functions 
    bool hasChildren() const { return this->children_ != nullptr;};
    void deleteChildren() { this->children_ = nullptr;};
    inline const vector<TreeNode> & getChildren() const { DARABONBA_PTR_GET_CONST(children_, vector<TreeNode>) };
    inline vector<TreeNode> getChildren() { DARABONBA_PTR_GET(children_, vector<TreeNode>) };
    inline TreeNode& setChildren(const vector<TreeNode> & children) { DARABONBA_PTR_SET_VALUE(children_, children) };
    inline TreeNode& setChildren(vector<TreeNode> && children) { DARABONBA_PTR_SET_RVALUE(children_, children) };


    // finalStepNo Field Functions 
    bool hasFinalStepNo() const { return this->finalStepNo_ != nullptr;};
    void deleteFinalStepNo() { this->finalStepNo_ = nullptr;};
    inline int32_t getFinalStepNo() const { DARABONBA_PTR_GET_DEFAULT(finalStepNo_, 0) };
    inline TreeNode& setFinalStepNo(int32_t finalStepNo) { DARABONBA_PTR_SET_VALUE(finalStepNo_, finalStepNo) };


    // finishTime Field Functions 
    bool hasFinishTime() const { return this->finishTime_ != nullptr;};
    void deleteFinishTime() { this->finishTime_ = nullptr;};
    inline int64_t getFinishTime() const { DARABONBA_PTR_GET_DEFAULT(finishTime_, 0L) };
    inline TreeNode& setFinishTime(int64_t finishTime) { DARABONBA_PTR_SET_VALUE(finishTime_, finishTime) };


    // isContainerNode Field Functions 
    bool hasIsContainerNode() const { return this->isContainerNode_ != nullptr;};
    void deleteIsContainerNode() { this->isContainerNode_ = nullptr;};
    inline bool getIsContainerNode() const { DARABONBA_PTR_GET_DEFAULT(isContainerNode_, false) };
    inline TreeNode& setIsContainerNode(bool isContainerNode) { DARABONBA_PTR_SET_VALUE(isContainerNode_, isContainerNode) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline string getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
    inline TreeNode& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


    // nodeName Field Functions 
    bool hasNodeName() const { return this->nodeName_ != nullptr;};
    void deleteNodeName() { this->nodeName_ = nullptr;};
    inline string getNodeName() const { DARABONBA_PTR_GET_DEFAULT(nodeName_, "") };
    inline TreeNode& setNodeName(string nodeName) { DARABONBA_PTR_SET_VALUE(nodeName_, nodeName) };


    // nodeStatus Field Functions 
    bool hasNodeStatus() const { return this->nodeStatus_ != nullptr;};
    void deleteNodeStatus() { this->nodeStatus_ = nullptr;};
    inline string getNodeStatus() const { DARABONBA_PTR_GET_DEFAULT(nodeStatus_, "") };
    inline TreeNode& setNodeStatus(string nodeStatus) { DARABONBA_PTR_SET_VALUE(nodeStatus_, nodeStatus) };


    // operatorRole Field Functions 
    bool hasOperatorRole() const { return this->operatorRole_ != nullptr;};
    void deleteOperatorRole() { this->operatorRole_ = nullptr;};
    inline string getOperatorRole() const { DARABONBA_PTR_GET_DEFAULT(operatorRole_, "") };
    inline TreeNode& setOperatorRole(string operatorRole) { DARABONBA_PTR_SET_VALUE(operatorRole_, operatorRole) };


    // parentNodeId Field Functions 
    bool hasParentNodeId() const { return this->parentNodeId_ != nullptr;};
    void deleteParentNodeId() { this->parentNodeId_ = nullptr;};
    inline string getParentNodeId() const { DARABONBA_PTR_GET_DEFAULT(parentNodeId_, "") };
    inline TreeNode& setParentNodeId(string parentNodeId) { DARABONBA_PTR_SET_VALUE(parentNodeId_, parentNodeId) };


    // stepNo Field Functions 
    bool hasStepNo() const { return this->stepNo_ != nullptr;};
    void deleteStepNo() { this->stepNo_ = nullptr;};
    inline int32_t getStepNo() const { DARABONBA_PTR_GET_DEFAULT(stepNo_, 0) };
    inline TreeNode& setStepNo(int32_t stepNo) { DARABONBA_PTR_SET_VALUE(stepNo_, stepNo) };


  protected:
    shared_ptr<vector<TreeNode>> children_ {};
    shared_ptr<int32_t> finalStepNo_ {};
    shared_ptr<int64_t> finishTime_ {};
    shared_ptr<bool> isContainerNode_ {};
    shared_ptr<string> nodeId_ {};
    shared_ptr<string> nodeName_ {};
    shared_ptr<string> nodeStatus_ {};
    shared_ptr<string> operatorRole_ {};
    shared_ptr<string> parentNodeId_ {};
    shared_ptr<int32_t> stepNo_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WebsiteBuild20250429
#endif
