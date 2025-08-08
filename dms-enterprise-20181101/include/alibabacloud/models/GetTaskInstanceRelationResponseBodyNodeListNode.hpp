// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTASKINSTANCERELATIONRESPONSEBODYNODELISTNODE_HPP_
#define ALIBABACLOUD_MODELS_GETTASKINSTANCERELATIONRESPONSEBODYNODELISTNODE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class GetTaskInstanceRelationResponseBodyNodeListNode : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTaskInstanceRelationResponseBodyNodeListNode& obj) { 
      DARABONBA_PTR_TO_JSON(BusinessTime, businessTime_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(ExecuteTime, executeTime_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
      DARABONBA_PTR_TO_JSON(NodeName, nodeName_);
      DARABONBA_PTR_TO_JSON(NodeType, nodeType_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, GetTaskInstanceRelationResponseBodyNodeListNode& obj) { 
      DARABONBA_PTR_FROM_JSON(BusinessTime, businessTime_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(ExecuteTime, executeTime_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
      DARABONBA_PTR_FROM_JSON(NodeName, nodeName_);
      DARABONBA_PTR_FROM_JSON(NodeType, nodeType_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    GetTaskInstanceRelationResponseBodyNodeListNode() = default ;
    GetTaskInstanceRelationResponseBodyNodeListNode(const GetTaskInstanceRelationResponseBodyNodeListNode &) = default ;
    GetTaskInstanceRelationResponseBodyNodeListNode(GetTaskInstanceRelationResponseBodyNodeListNode &&) = default ;
    GetTaskInstanceRelationResponseBodyNodeListNode(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTaskInstanceRelationResponseBodyNodeListNode() = default ;
    GetTaskInstanceRelationResponseBodyNodeListNode& operator=(const GetTaskInstanceRelationResponseBodyNodeListNode &) = default ;
    GetTaskInstanceRelationResponseBodyNodeListNode& operator=(GetTaskInstanceRelationResponseBodyNodeListNode &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->businessTime_ != nullptr
        && this->endTime_ != nullptr && this->executeTime_ != nullptr && this->id_ != nullptr && this->message_ != nullptr && this->nodeId_ != nullptr
        && this->nodeName_ != nullptr && this->nodeType_ != nullptr && this->status_ != nullptr; };
    // businessTime Field Functions 
    bool hasBusinessTime() const { return this->businessTime_ != nullptr;};
    void deleteBusinessTime() { this->businessTime_ = nullptr;};
    inline string businessTime() const { DARABONBA_PTR_GET_DEFAULT(businessTime_, "") };
    inline GetTaskInstanceRelationResponseBodyNodeListNode& setBusinessTime(string businessTime) { DARABONBA_PTR_SET_VALUE(businessTime_, businessTime) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline GetTaskInstanceRelationResponseBodyNodeListNode& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // executeTime Field Functions 
    bool hasExecuteTime() const { return this->executeTime_ != nullptr;};
    void deleteExecuteTime() { this->executeTime_ = nullptr;};
    inline int64_t executeTime() const { DARABONBA_PTR_GET_DEFAULT(executeTime_, 0L) };
    inline GetTaskInstanceRelationResponseBodyNodeListNode& setExecuteTime(int64_t executeTime) { DARABONBA_PTR_SET_VALUE(executeTime_, executeTime) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline GetTaskInstanceRelationResponseBodyNodeListNode& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetTaskInstanceRelationResponseBodyNodeListNode& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline int64_t nodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, 0L) };
    inline GetTaskInstanceRelationResponseBodyNodeListNode& setNodeId(int64_t nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


    // nodeName Field Functions 
    bool hasNodeName() const { return this->nodeName_ != nullptr;};
    void deleteNodeName() { this->nodeName_ = nullptr;};
    inline string nodeName() const { DARABONBA_PTR_GET_DEFAULT(nodeName_, "") };
    inline GetTaskInstanceRelationResponseBodyNodeListNode& setNodeName(string nodeName) { DARABONBA_PTR_SET_VALUE(nodeName_, nodeName) };


    // nodeType Field Functions 
    bool hasNodeType() const { return this->nodeType_ != nullptr;};
    void deleteNodeType() { this->nodeType_ = nullptr;};
    inline int32_t nodeType() const { DARABONBA_PTR_GET_DEFAULT(nodeType_, 0) };
    inline GetTaskInstanceRelationResponseBodyNodeListNode& setNodeType(int32_t nodeType) { DARABONBA_PTR_SET_VALUE(nodeType_, nodeType) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline GetTaskInstanceRelationResponseBodyNodeListNode& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The business time of the node.
    std::shared_ptr<string> businessTime_ = nullptr;
    // The time when the execution of the task flow was complete. The time is displayed in the yyyy-MM-DD HH:mm:ss format.
    std::shared_ptr<string> endTime_ = nullptr;
    // The amount of time consumed for running the node. Unit: milliseconds.
    std::shared_ptr<int64_t> executeTime_ = nullptr;
    // The ID of the execution record of the task flow.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The description of the task.
    std::shared_ptr<string> message_ = nullptr;
    // The ID of the node.
    std::shared_ptr<int64_t> nodeId_ = nullptr;
    // The name of the node.
    std::shared_ptr<string> nodeName_ = nullptr;
    // The type of the node. For more information about the valid values for this parameter, see [NodeType parameter](https://help.aliyun.com/document_detail/424705.html).
    std::shared_ptr<int32_t> nodeType_ = nullptr;
    // The status of the node. Valid values:
    // 
    // *   **0**: The node is waiting to be scheduled.
    // *   **1**: The node is running.
    // *   **2**: The node is suspended.
    // *   **3**: The node failed to run.
    // *   **4**: The node is run.
    // *   **5**: The node is complete.
    std::shared_ptr<int32_t> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
