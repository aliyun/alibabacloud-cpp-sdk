// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTASKFLOWGRAPHRESPONSEBODYTASKFLOWGRAPHNODESNODE_HPP_
#define ALIBABACLOUD_MODELS_GETTASKFLOWGRAPHRESPONSEBODYTASKFLOWGRAPHNODESNODE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class GetTaskFlowGraphResponseBodyTaskFlowGraphNodesNode : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTaskFlowGraphResponseBodyTaskFlowGraphNodesNode& obj) { 
      DARABONBA_PTR_TO_JSON(DagId, dagId_);
      DARABONBA_PTR_TO_JSON(GraphParam, graphParam_);
      DARABONBA_PTR_TO_JSON(NodeConfig, nodeConfig_);
      DARABONBA_PTR_TO_JSON(NodeContent, nodeContent_);
      DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
      DARABONBA_PTR_TO_JSON(NodeName, nodeName_);
      DARABONBA_PTR_TO_JSON(NodeType, nodeType_);
      DARABONBA_PTR_TO_JSON(TimeVariables, timeVariables_);
    };
    friend void from_json(const Darabonba::Json& j, GetTaskFlowGraphResponseBodyTaskFlowGraphNodesNode& obj) { 
      DARABONBA_PTR_FROM_JSON(DagId, dagId_);
      DARABONBA_PTR_FROM_JSON(GraphParam, graphParam_);
      DARABONBA_PTR_FROM_JSON(NodeConfig, nodeConfig_);
      DARABONBA_PTR_FROM_JSON(NodeContent, nodeContent_);
      DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
      DARABONBA_PTR_FROM_JSON(NodeName, nodeName_);
      DARABONBA_PTR_FROM_JSON(NodeType, nodeType_);
      DARABONBA_PTR_FROM_JSON(TimeVariables, timeVariables_);
    };
    GetTaskFlowGraphResponseBodyTaskFlowGraphNodesNode() = default ;
    GetTaskFlowGraphResponseBodyTaskFlowGraphNodesNode(const GetTaskFlowGraphResponseBodyTaskFlowGraphNodesNode &) = default ;
    GetTaskFlowGraphResponseBodyTaskFlowGraphNodesNode(GetTaskFlowGraphResponseBodyTaskFlowGraphNodesNode &&) = default ;
    GetTaskFlowGraphResponseBodyTaskFlowGraphNodesNode(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTaskFlowGraphResponseBodyTaskFlowGraphNodesNode() = default ;
    GetTaskFlowGraphResponseBodyTaskFlowGraphNodesNode& operator=(const GetTaskFlowGraphResponseBodyTaskFlowGraphNodesNode &) = default ;
    GetTaskFlowGraphResponseBodyTaskFlowGraphNodesNode& operator=(GetTaskFlowGraphResponseBodyTaskFlowGraphNodesNode &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dagId_ != nullptr
        && this->graphParam_ != nullptr && this->nodeConfig_ != nullptr && this->nodeContent_ != nullptr && this->nodeId_ != nullptr && this->nodeName_ != nullptr
        && this->nodeType_ != nullptr && this->timeVariables_ != nullptr; };
    // dagId Field Functions 
    bool hasDagId() const { return this->dagId_ != nullptr;};
    void deleteDagId() { this->dagId_ = nullptr;};
    inline int64_t dagId() const { DARABONBA_PTR_GET_DEFAULT(dagId_, 0L) };
    inline GetTaskFlowGraphResponseBodyTaskFlowGraphNodesNode& setDagId(int64_t dagId) { DARABONBA_PTR_SET_VALUE(dagId_, dagId) };


    // graphParam Field Functions 
    bool hasGraphParam() const { return this->graphParam_ != nullptr;};
    void deleteGraphParam() { this->graphParam_ = nullptr;};
    inline string graphParam() const { DARABONBA_PTR_GET_DEFAULT(graphParam_, "") };
    inline GetTaskFlowGraphResponseBodyTaskFlowGraphNodesNode& setGraphParam(string graphParam) { DARABONBA_PTR_SET_VALUE(graphParam_, graphParam) };


    // nodeConfig Field Functions 
    bool hasNodeConfig() const { return this->nodeConfig_ != nullptr;};
    void deleteNodeConfig() { this->nodeConfig_ = nullptr;};
    inline string nodeConfig() const { DARABONBA_PTR_GET_DEFAULT(nodeConfig_, "") };
    inline GetTaskFlowGraphResponseBodyTaskFlowGraphNodesNode& setNodeConfig(string nodeConfig) { DARABONBA_PTR_SET_VALUE(nodeConfig_, nodeConfig) };


    // nodeContent Field Functions 
    bool hasNodeContent() const { return this->nodeContent_ != nullptr;};
    void deleteNodeContent() { this->nodeContent_ = nullptr;};
    inline string nodeContent() const { DARABONBA_PTR_GET_DEFAULT(nodeContent_, "") };
    inline GetTaskFlowGraphResponseBodyTaskFlowGraphNodesNode& setNodeContent(string nodeContent) { DARABONBA_PTR_SET_VALUE(nodeContent_, nodeContent) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline int64_t nodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, 0L) };
    inline GetTaskFlowGraphResponseBodyTaskFlowGraphNodesNode& setNodeId(int64_t nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


    // nodeName Field Functions 
    bool hasNodeName() const { return this->nodeName_ != nullptr;};
    void deleteNodeName() { this->nodeName_ = nullptr;};
    inline string nodeName() const { DARABONBA_PTR_GET_DEFAULT(nodeName_, "") };
    inline GetTaskFlowGraphResponseBodyTaskFlowGraphNodesNode& setNodeName(string nodeName) { DARABONBA_PTR_SET_VALUE(nodeName_, nodeName) };


    // nodeType Field Functions 
    bool hasNodeType() const { return this->nodeType_ != nullptr;};
    void deleteNodeType() { this->nodeType_ = nullptr;};
    inline int64_t nodeType() const { DARABONBA_PTR_GET_DEFAULT(nodeType_, 0L) };
    inline GetTaskFlowGraphResponseBodyTaskFlowGraphNodesNode& setNodeType(int64_t nodeType) { DARABONBA_PTR_SET_VALUE(nodeType_, nodeType) };


    // timeVariables Field Functions 
    bool hasTimeVariables() const { return this->timeVariables_ != nullptr;};
    void deleteTimeVariables() { this->timeVariables_ = nullptr;};
    inline string timeVariables() const { DARABONBA_PTR_GET_DEFAULT(timeVariables_, "") };
    inline GetTaskFlowGraphResponseBodyTaskFlowGraphNodesNode& setTimeVariables(string timeVariables) { DARABONBA_PTR_SET_VALUE(timeVariables_, timeVariables) };


  protected:
    // The ID of the task flow.
    std::shared_ptr<int64_t> dagId_ = nullptr;
    // The position of the node in the DAG.
    std::shared_ptr<string> graphParam_ = nullptr;
    // The advanced configuration of the node.
    std::shared_ptr<string> nodeConfig_ = nullptr;
    // The configuration of the node.
    std::shared_ptr<string> nodeContent_ = nullptr;
    // The ID of the node.
    std::shared_ptr<int64_t> nodeId_ = nullptr;
    // The name of the node.
    std::shared_ptr<string> nodeName_ = nullptr;
    // The type of the node. For more information about the valid values for this parameter, see [NodeType parameter](https://help.aliyun.com/document_detail/424705.html).
    std::shared_ptr<int64_t> nodeType_ = nullptr;
    // The time variables for the node.
    std::shared_ptr<string> timeVariables_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
