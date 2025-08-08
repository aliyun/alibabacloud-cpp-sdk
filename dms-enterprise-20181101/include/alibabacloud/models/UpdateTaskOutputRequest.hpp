// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATETASKOUTPUTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATETASKOUTPUTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class UpdateTaskOutputRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateTaskOutputRequest& obj) { 
      DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
      DARABONBA_PTR_TO_JSON(NodeOutput, nodeOutput_);
      DARABONBA_PTR_TO_JSON(Tid, tid_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateTaskOutputRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
      DARABONBA_PTR_FROM_JSON(NodeOutput, nodeOutput_);
      DARABONBA_PTR_FROM_JSON(Tid, tid_);
    };
    UpdateTaskOutputRequest() = default ;
    UpdateTaskOutputRequest(const UpdateTaskOutputRequest &) = default ;
    UpdateTaskOutputRequest(UpdateTaskOutputRequest &&) = default ;
    UpdateTaskOutputRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateTaskOutputRequest() = default ;
    UpdateTaskOutputRequest& operator=(const UpdateTaskOutputRequest &) = default ;
    UpdateTaskOutputRequest& operator=(UpdateTaskOutputRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->nodeId_ != nullptr
        && this->nodeOutput_ != nullptr && this->tid_ != nullptr; };
    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline string nodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
    inline UpdateTaskOutputRequest& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


    // nodeOutput Field Functions 
    bool hasNodeOutput() const { return this->nodeOutput_ != nullptr;};
    void deleteNodeOutput() { this->nodeOutput_ = nullptr;};
    inline string nodeOutput() const { DARABONBA_PTR_GET_DEFAULT(nodeOutput_, "") };
    inline UpdateTaskOutputRequest& setNodeOutput(string nodeOutput) { DARABONBA_PTR_SET_VALUE(nodeOutput_, nodeOutput) };


    // tid Field Functions 
    bool hasTid() const { return this->tid_ != nullptr;};
    void deleteTid() { this->tid_ = nullptr;};
    inline int64_t tid() const { DARABONBA_PTR_GET_DEFAULT(tid_, 0L) };
    inline UpdateTaskOutputRequest& setTid(int64_t tid) { DARABONBA_PTR_SET_VALUE(tid_, tid) };


  protected:
    // The ID of the node. You can call the [GetTaskInstanceRelation](https://help.aliyun.com/document_detail/424711.html) operation to query the node ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> nodeId_ = nullptr;
    // The output variables for the task.
    std::shared_ptr<string> nodeOutput_ = nullptr;
    // The ID of the tenant.
    // 
    // >  To view the ID of the tenant, go to the Data Management (DMS) console and move the pointer over the profile picture in the upper-right corner. For more information, see [View information about the current tenant](https://help.aliyun.com/document_detail/181330.html).
    std::shared_ptr<int64_t> tid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
