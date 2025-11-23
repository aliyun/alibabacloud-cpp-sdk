// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTASKSINTASKFLOWRESPONSEBODYTASKSTASK_HPP_
#define ALIBABACLOUD_MODELS_LISTTASKSINTASKFLOWRESPONSEBODYTASKSTASK_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ListTasksInTaskFlowResponseBodyTasksTask : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTasksInTaskFlowResponseBodyTasksTask& obj) { 
      DARABONBA_PTR_TO_JSON(GraphParam, graphParam_);
      DARABONBA_PTR_TO_JSON(NodeConfig, nodeConfig_);
      DARABONBA_PTR_TO_JSON(NodeContent, nodeContent_);
      DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
      DARABONBA_PTR_TO_JSON(NodeName, nodeName_);
      DARABONBA_PTR_TO_JSON(NodeOutput, nodeOutput_);
      DARABONBA_PTR_TO_JSON(NodeType, nodeType_);
      DARABONBA_PTR_TO_JSON(TimeVariables, timeVariables_);
    };
    friend void from_json(const Darabonba::Json& j, ListTasksInTaskFlowResponseBodyTasksTask& obj) { 
      DARABONBA_PTR_FROM_JSON(GraphParam, graphParam_);
      DARABONBA_PTR_FROM_JSON(NodeConfig, nodeConfig_);
      DARABONBA_PTR_FROM_JSON(NodeContent, nodeContent_);
      DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
      DARABONBA_PTR_FROM_JSON(NodeName, nodeName_);
      DARABONBA_PTR_FROM_JSON(NodeOutput, nodeOutput_);
      DARABONBA_PTR_FROM_JSON(NodeType, nodeType_);
      DARABONBA_PTR_FROM_JSON(TimeVariables, timeVariables_);
    };
    ListTasksInTaskFlowResponseBodyTasksTask() = default ;
    ListTasksInTaskFlowResponseBodyTasksTask(const ListTasksInTaskFlowResponseBodyTasksTask &) = default ;
    ListTasksInTaskFlowResponseBodyTasksTask(ListTasksInTaskFlowResponseBodyTasksTask &&) = default ;
    ListTasksInTaskFlowResponseBodyTasksTask(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTasksInTaskFlowResponseBodyTasksTask() = default ;
    ListTasksInTaskFlowResponseBodyTasksTask& operator=(const ListTasksInTaskFlowResponseBodyTasksTask &) = default ;
    ListTasksInTaskFlowResponseBodyTasksTask& operator=(ListTasksInTaskFlowResponseBodyTasksTask &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->graphParam_ == nullptr
        && return this->nodeConfig_ == nullptr && return this->nodeContent_ == nullptr && return this->nodeId_ == nullptr && return this->nodeName_ == nullptr && return this->nodeOutput_ == nullptr
        && return this->nodeType_ == nullptr && return this->timeVariables_ == nullptr; };
    // graphParam Field Functions 
    bool hasGraphParam() const { return this->graphParam_ != nullptr;};
    void deleteGraphParam() { this->graphParam_ = nullptr;};
    inline string graphParam() const { DARABONBA_PTR_GET_DEFAULT(graphParam_, "") };
    inline ListTasksInTaskFlowResponseBodyTasksTask& setGraphParam(string graphParam) { DARABONBA_PTR_SET_VALUE(graphParam_, graphParam) };


    // nodeConfig Field Functions 
    bool hasNodeConfig() const { return this->nodeConfig_ != nullptr;};
    void deleteNodeConfig() { this->nodeConfig_ = nullptr;};
    inline string nodeConfig() const { DARABONBA_PTR_GET_DEFAULT(nodeConfig_, "") };
    inline ListTasksInTaskFlowResponseBodyTasksTask& setNodeConfig(string nodeConfig) { DARABONBA_PTR_SET_VALUE(nodeConfig_, nodeConfig) };


    // nodeContent Field Functions 
    bool hasNodeContent() const { return this->nodeContent_ != nullptr;};
    void deleteNodeContent() { this->nodeContent_ = nullptr;};
    inline string nodeContent() const { DARABONBA_PTR_GET_DEFAULT(nodeContent_, "") };
    inline ListTasksInTaskFlowResponseBodyTasksTask& setNodeContent(string nodeContent) { DARABONBA_PTR_SET_VALUE(nodeContent_, nodeContent) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline string nodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
    inline ListTasksInTaskFlowResponseBodyTasksTask& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


    // nodeName Field Functions 
    bool hasNodeName() const { return this->nodeName_ != nullptr;};
    void deleteNodeName() { this->nodeName_ = nullptr;};
    inline string nodeName() const { DARABONBA_PTR_GET_DEFAULT(nodeName_, "") };
    inline ListTasksInTaskFlowResponseBodyTasksTask& setNodeName(string nodeName) { DARABONBA_PTR_SET_VALUE(nodeName_, nodeName) };


    // nodeOutput Field Functions 
    bool hasNodeOutput() const { return this->nodeOutput_ != nullptr;};
    void deleteNodeOutput() { this->nodeOutput_ = nullptr;};
    inline string nodeOutput() const { DARABONBA_PTR_GET_DEFAULT(nodeOutput_, "") };
    inline ListTasksInTaskFlowResponseBodyTasksTask& setNodeOutput(string nodeOutput) { DARABONBA_PTR_SET_VALUE(nodeOutput_, nodeOutput) };


    // nodeType Field Functions 
    bool hasNodeType() const { return this->nodeType_ != nullptr;};
    void deleteNodeType() { this->nodeType_ = nullptr;};
    inline string nodeType() const { DARABONBA_PTR_GET_DEFAULT(nodeType_, "") };
    inline ListTasksInTaskFlowResponseBodyTasksTask& setNodeType(string nodeType) { DARABONBA_PTR_SET_VALUE(nodeType_, nodeType) };


    // timeVariables Field Functions 
    bool hasTimeVariables() const { return this->timeVariables_ != nullptr;};
    void deleteTimeVariables() { this->timeVariables_ = nullptr;};
    inline string timeVariables() const { DARABONBA_PTR_GET_DEFAULT(timeVariables_, "") };
    inline ListTasksInTaskFlowResponseBodyTasksTask& setTimeVariables(string timeVariables) { DARABONBA_PTR_SET_VALUE(timeVariables_, timeVariables) };


  protected:
    // The position of the node on the Directed Acyclic Graph (DAG).
    std::shared_ptr<string> graphParam_ = nullptr;
    // The advanced configuration for the node.
    std::shared_ptr<string> nodeConfig_ = nullptr;
    // The configuration for the node.
    std::shared_ptr<string> nodeContent_ = nullptr;
    // The ID of the node.
    std::shared_ptr<string> nodeId_ = nullptr;
    // The name of the node.
    std::shared_ptr<string> nodeName_ = nullptr;
    // The output variables for the task.
    std::shared_ptr<string> nodeOutput_ = nullptr;
    // The type of the node. For more information about the valid values for this parameter, see [NodeType parameter](https://help.aliyun.com/document_detail/424705.html).
    std::shared_ptr<string> nodeType_ = nullptr;
    // The time variables configured for the node.
    std::shared_ptr<string> timeVariables_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
