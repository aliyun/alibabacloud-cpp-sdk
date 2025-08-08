// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATETASKTIMEVARIABLESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATETASKTIMEVARIABLESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class UpdateTaskTimeVariablesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateTaskTimeVariablesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
      DARABONBA_PTR_TO_JSON(Tid, tid_);
      DARABONBA_PTR_TO_JSON(TimeVariables, timeVariables_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateTaskTimeVariablesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
      DARABONBA_PTR_FROM_JSON(Tid, tid_);
      DARABONBA_PTR_FROM_JSON(TimeVariables, timeVariables_);
    };
    UpdateTaskTimeVariablesRequest() = default ;
    UpdateTaskTimeVariablesRequest(const UpdateTaskTimeVariablesRequest &) = default ;
    UpdateTaskTimeVariablesRequest(UpdateTaskTimeVariablesRequest &&) = default ;
    UpdateTaskTimeVariablesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateTaskTimeVariablesRequest() = default ;
    UpdateTaskTimeVariablesRequest& operator=(const UpdateTaskTimeVariablesRequest &) = default ;
    UpdateTaskTimeVariablesRequest& operator=(UpdateTaskTimeVariablesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->nodeId_ != nullptr
        && this->tid_ != nullptr && this->timeVariables_ != nullptr; };
    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline string nodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
    inline UpdateTaskTimeVariablesRequest& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


    // tid Field Functions 
    bool hasTid() const { return this->tid_ != nullptr;};
    void deleteTid() { this->tid_ = nullptr;};
    inline int64_t tid() const { DARABONBA_PTR_GET_DEFAULT(tid_, 0L) };
    inline UpdateTaskTimeVariablesRequest& setTid(int64_t tid) { DARABONBA_PTR_SET_VALUE(tid_, tid) };


    // timeVariables Field Functions 
    bool hasTimeVariables() const { return this->timeVariables_ != nullptr;};
    void deleteTimeVariables() { this->timeVariables_ = nullptr;};
    inline string timeVariables() const { DARABONBA_PTR_GET_DEFAULT(timeVariables_, "") };
    inline UpdateTaskTimeVariablesRequest& setTimeVariables(string timeVariables) { DARABONBA_PTR_SET_VALUE(timeVariables_, timeVariables) };


  protected:
    // The ID of the task node. You can call the [GetTaskInstanceRelation](https://help.aliyun.com/document_detail/424711.html) operation to query the node ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> nodeId_ = nullptr;
    // The ID of the tenant.
    // 
    // > :To view the ID of the tenant, go to the Data Management (DMS) console and move the pointer over the profile picture in the upper-right corner. For more information, see [View information about the current tenant](https://help.aliyun.com/document_detail/181330.html).
    std::shared_ptr<int64_t> tid_ = nullptr;
    // The time variables configured for the node. The value of this parameter must be a JSON string.
    // 
    // This parameter is required.
    std::shared_ptr<string> timeVariables_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
