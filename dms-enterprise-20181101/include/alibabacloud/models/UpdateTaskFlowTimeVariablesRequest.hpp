// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATETASKFLOWTIMEVARIABLESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATETASKFLOWTIMEVARIABLESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class UpdateTaskFlowTimeVariablesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateTaskFlowTimeVariablesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DagId, dagId_);
      DARABONBA_PTR_TO_JSON(Tid, tid_);
      DARABONBA_PTR_TO_JSON(TimeVariables, timeVariables_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateTaskFlowTimeVariablesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DagId, dagId_);
      DARABONBA_PTR_FROM_JSON(Tid, tid_);
      DARABONBA_PTR_FROM_JSON(TimeVariables, timeVariables_);
    };
    UpdateTaskFlowTimeVariablesRequest() = default ;
    UpdateTaskFlowTimeVariablesRequest(const UpdateTaskFlowTimeVariablesRequest &) = default ;
    UpdateTaskFlowTimeVariablesRequest(UpdateTaskFlowTimeVariablesRequest &&) = default ;
    UpdateTaskFlowTimeVariablesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateTaskFlowTimeVariablesRequest() = default ;
    UpdateTaskFlowTimeVariablesRequest& operator=(const UpdateTaskFlowTimeVariablesRequest &) = default ;
    UpdateTaskFlowTimeVariablesRequest& operator=(UpdateTaskFlowTimeVariablesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dagId_ == nullptr
        && this->tid_ == nullptr && this->timeVariables_ == nullptr; };
    // dagId Field Functions 
    bool hasDagId() const { return this->dagId_ != nullptr;};
    void deleteDagId() { this->dagId_ = nullptr;};
    inline int64_t getDagId() const { DARABONBA_PTR_GET_DEFAULT(dagId_, 0L) };
    inline UpdateTaskFlowTimeVariablesRequest& setDagId(int64_t dagId) { DARABONBA_PTR_SET_VALUE(dagId_, dagId) };


    // tid Field Functions 
    bool hasTid() const { return this->tid_ != nullptr;};
    void deleteTid() { this->tid_ = nullptr;};
    inline int64_t getTid() const { DARABONBA_PTR_GET_DEFAULT(tid_, 0L) };
    inline UpdateTaskFlowTimeVariablesRequest& setTid(int64_t tid) { DARABONBA_PTR_SET_VALUE(tid_, tid) };


    // timeVariables Field Functions 
    bool hasTimeVariables() const { return this->timeVariables_ != nullptr;};
    void deleteTimeVariables() { this->timeVariables_ = nullptr;};
    inline string getTimeVariables() const { DARABONBA_PTR_GET_DEFAULT(timeVariables_, "") };
    inline UpdateTaskFlowTimeVariablesRequest& setTimeVariables(string timeVariables) { DARABONBA_PTR_SET_VALUE(timeVariables_, timeVariables) };


  protected:
    // The ID of the task node. You can call the [GetTaskInstanceRelation](https://help.aliyun.com/document_detail/424711.html) operation to query the node ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> dagId_ {};
    // The ID of the tenant.
    // 
    // > :To view the ID of the tenant, go to the Data Management (DMS) console and move the pointer over the profile picture in the upper-right corner. For more information, see [View information about the current tenant](https://help.aliyun.com/document_detail/181330.html).
    shared_ptr<int64_t> tid_ {};
    // The time variables for the task flow.
    // 
    // This parameter is required.
    shared_ptr<string> timeVariables_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
