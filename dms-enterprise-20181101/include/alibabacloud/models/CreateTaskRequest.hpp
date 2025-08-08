// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATETASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class CreateTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DagId, dagId_);
      DARABONBA_PTR_TO_JSON(GraphParam, graphParam_);
      DARABONBA_PTR_TO_JSON(NodeContent, nodeContent_);
      DARABONBA_PTR_TO_JSON(NodeName, nodeName_);
      DARABONBA_PTR_TO_JSON(NodeOutput, nodeOutput_);
      DARABONBA_PTR_TO_JSON(NodeType, nodeType_);
      DARABONBA_PTR_TO_JSON(Tid, tid_);
      DARABONBA_PTR_TO_JSON(TimeVariables, timeVariables_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DagId, dagId_);
      DARABONBA_PTR_FROM_JSON(GraphParam, graphParam_);
      DARABONBA_PTR_FROM_JSON(NodeContent, nodeContent_);
      DARABONBA_PTR_FROM_JSON(NodeName, nodeName_);
      DARABONBA_PTR_FROM_JSON(NodeOutput, nodeOutput_);
      DARABONBA_PTR_FROM_JSON(NodeType, nodeType_);
      DARABONBA_PTR_FROM_JSON(Tid, tid_);
      DARABONBA_PTR_FROM_JSON(TimeVariables, timeVariables_);
    };
    CreateTaskRequest() = default ;
    CreateTaskRequest(const CreateTaskRequest &) = default ;
    CreateTaskRequest(CreateTaskRequest &&) = default ;
    CreateTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTaskRequest() = default ;
    CreateTaskRequest& operator=(const CreateTaskRequest &) = default ;
    CreateTaskRequest& operator=(CreateTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dagId_ != nullptr
        && this->graphParam_ != nullptr && this->nodeContent_ != nullptr && this->nodeName_ != nullptr && this->nodeOutput_ != nullptr && this->nodeType_ != nullptr
        && this->tid_ != nullptr && this->timeVariables_ != nullptr; };
    // dagId Field Functions 
    bool hasDagId() const { return this->dagId_ != nullptr;};
    void deleteDagId() { this->dagId_ = nullptr;};
    inline int64_t dagId() const { DARABONBA_PTR_GET_DEFAULT(dagId_, 0L) };
    inline CreateTaskRequest& setDagId(int64_t dagId) { DARABONBA_PTR_SET_VALUE(dagId_, dagId) };


    // graphParam Field Functions 
    bool hasGraphParam() const { return this->graphParam_ != nullptr;};
    void deleteGraphParam() { this->graphParam_ = nullptr;};
    inline string graphParam() const { DARABONBA_PTR_GET_DEFAULT(graphParam_, "") };
    inline CreateTaskRequest& setGraphParam(string graphParam) { DARABONBA_PTR_SET_VALUE(graphParam_, graphParam) };


    // nodeContent Field Functions 
    bool hasNodeContent() const { return this->nodeContent_ != nullptr;};
    void deleteNodeContent() { this->nodeContent_ = nullptr;};
    inline string nodeContent() const { DARABONBA_PTR_GET_DEFAULT(nodeContent_, "") };
    inline CreateTaskRequest& setNodeContent(string nodeContent) { DARABONBA_PTR_SET_VALUE(nodeContent_, nodeContent) };


    // nodeName Field Functions 
    bool hasNodeName() const { return this->nodeName_ != nullptr;};
    void deleteNodeName() { this->nodeName_ = nullptr;};
    inline string nodeName() const { DARABONBA_PTR_GET_DEFAULT(nodeName_, "") };
    inline CreateTaskRequest& setNodeName(string nodeName) { DARABONBA_PTR_SET_VALUE(nodeName_, nodeName) };


    // nodeOutput Field Functions 
    bool hasNodeOutput() const { return this->nodeOutput_ != nullptr;};
    void deleteNodeOutput() { this->nodeOutput_ = nullptr;};
    inline string nodeOutput() const { DARABONBA_PTR_GET_DEFAULT(nodeOutput_, "") };
    inline CreateTaskRequest& setNodeOutput(string nodeOutput) { DARABONBA_PTR_SET_VALUE(nodeOutput_, nodeOutput) };


    // nodeType Field Functions 
    bool hasNodeType() const { return this->nodeType_ != nullptr;};
    void deleteNodeType() { this->nodeType_ = nullptr;};
    inline string nodeType() const { DARABONBA_PTR_GET_DEFAULT(nodeType_, "") };
    inline CreateTaskRequest& setNodeType(string nodeType) { DARABONBA_PTR_SET_VALUE(nodeType_, nodeType) };


    // tid Field Functions 
    bool hasTid() const { return this->tid_ != nullptr;};
    void deleteTid() { this->tid_ = nullptr;};
    inline int64_t tid() const { DARABONBA_PTR_GET_DEFAULT(tid_, 0L) };
    inline CreateTaskRequest& setTid(int64_t tid) { DARABONBA_PTR_SET_VALUE(tid_, tid) };


    // timeVariables Field Functions 
    bool hasTimeVariables() const { return this->timeVariables_ != nullptr;};
    void deleteTimeVariables() { this->timeVariables_ = nullptr;};
    inline string timeVariables() const { DARABONBA_PTR_GET_DEFAULT(timeVariables_, "") };
    inline CreateTaskRequest& setTimeVariables(string timeVariables) { DARABONBA_PTR_SET_VALUE(timeVariables_, timeVariables) };


  protected:
    // The ID of the task flow. You can call the [ListTaskFlow](https://help.aliyun.com/document_detail/424565.html) or [ListLhTaskFlowAndScenario](https://help.aliyun.com/document_detail/426672.html) operation to query the task flow ID.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> dagId_ = nullptr;
    // The position of the node on the Directed Acyclic Graph (DAG).
    std::shared_ptr<string> graphParam_ = nullptr;
    // The configuration of the node.
    std::shared_ptr<string> nodeContent_ = nullptr;
    // The name of the node that you want to create.
    // 
    // This parameter is required.
    std::shared_ptr<string> nodeName_ = nullptr;
    // The output variables configured for the task.
    std::shared_ptr<string> nodeOutput_ = nullptr;
    // The type of the node that you want to create. For more information about the valid values for this parameter, see [NodeType parameter](https://help.aliyun.com/document_detail/424705.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> nodeType_ = nullptr;
    // The tenant ID.
    // 
    // >  To view the tenant ID, move the pointer over the profile picture in the upper-right corner of the Data Management (DMS) console. For more information, see the "View information about the current tenant" section of the [Manage DMS tenants](https://help.aliyun.com/document_detail/181330.html) topic.
    std::shared_ptr<int64_t> tid_ = nullptr;
    // The time variables configured for the node.
    std::shared_ptr<string> timeVariables_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
