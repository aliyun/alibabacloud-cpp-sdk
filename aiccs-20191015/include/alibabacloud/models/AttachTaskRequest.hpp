// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ATTACHTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ATTACHTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20191015
{
namespace Models
{
  class AttachTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AttachTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CallString, callString_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, AttachTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CallString, callString_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    AttachTaskRequest() = default ;
    AttachTaskRequest(const AttachTaskRequest &) = default ;
    AttachTaskRequest(AttachTaskRequest &&) = default ;
    AttachTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AttachTaskRequest() = default ;
    AttachTaskRequest& operator=(const AttachTaskRequest &) = default ;
    AttachTaskRequest& operator=(AttachTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->callString_ == nullptr
        && this->ownerId_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->taskId_ == nullptr; };
    // callString Field Functions 
    bool hasCallString() const { return this->callString_ != nullptr;};
    void deleteCallString() { this->callString_ = nullptr;};
    inline string getCallString() const { DARABONBA_PTR_GET_DEFAULT(callString_, "") };
    inline AttachTaskRequest& setCallString(string callString) { DARABONBA_PTR_SET_VALUE(callString_, callString) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline AttachTaskRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline AttachTaskRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline AttachTaskRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline int64_t getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, 0L) };
    inline AttachTaskRequest& setTaskId(int64_t taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    // The calling string (callee information and parameter list). Valid values:
    // 
    // - **LIST**: Use this type when the script has no input variables. In this case, only the callee numbers need to be provided. Example: `0571****5678,0571****5679`.
    // - **JSON**: Use this type when the script includes input variables. You must provide the variable names, callee numbers, and variable values. Example: `{"ParamNames":["name","age"],"CalleeList":[{"Callee":"181****0000","Params":["Zhang San","20"]},{"Callee":"181****0001","Params":["Li Si","21"]}]}`. **ParamNames** represents the list of parameter names; **Params** represents the list of parameter values.
    // 
    // > You can view the script input variables on the [**Script Management**](https://aiccs.console.aliyun.com/patter/list) > **View** > **Input and Output Parameters** interface.
    shared_ptr<string> callString_ {};
    shared_ptr<int64_t> ownerId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The job ID. You can obtain the job ID from the [Task Management](https://aiccs.console.aliyun.com/job/list) interface.
    // 
    // This parameter is required.
    shared_ptr<int64_t> taskId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif
