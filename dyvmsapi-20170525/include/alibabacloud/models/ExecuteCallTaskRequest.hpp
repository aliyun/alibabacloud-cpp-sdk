// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXECUTECALLTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_EXECUTECALLTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyvmsapi20170525
{
namespace Models
{
  class ExecuteCallTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExecuteCallTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FireTime, fireTime_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, ExecuteCallTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FireTime, fireTime_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    ExecuteCallTaskRequest() = default ;
    ExecuteCallTaskRequest(const ExecuteCallTaskRequest &) = default ;
    ExecuteCallTaskRequest(ExecuteCallTaskRequest &&) = default ;
    ExecuteCallTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExecuteCallTaskRequest() = default ;
    ExecuteCallTaskRequest& operator=(const ExecuteCallTaskRequest &) = default ;
    ExecuteCallTaskRequest& operator=(ExecuteCallTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fireTime_ == nullptr
        && return this->ownerId_ == nullptr && return this->resourceOwnerAccount_ == nullptr && return this->resourceOwnerId_ == nullptr && return this->status_ == nullptr && return this->taskId_ == nullptr; };
    // fireTime Field Functions 
    bool hasFireTime() const { return this->fireTime_ != nullptr;};
    void deleteFireTime() { this->fireTime_ = nullptr;};
    inline string fireTime() const { DARABONBA_PTR_GET_DEFAULT(fireTime_, "") };
    inline ExecuteCallTaskRequest& setFireTime(string fireTime) { DARABONBA_PTR_SET_VALUE(fireTime_, fireTime) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ExecuteCallTaskRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ExecuteCallTaskRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ExecuteCallTaskRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ExecuteCallTaskRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline int64_t taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, 0L) };
    inline ExecuteCallTaskRequest& setTaskId(int64_t taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    // The time when the call task is executed, in the yyyy-MM-dd HH:mm:ss format.
    // 
    // > You can leave this parameter empty.
    std::shared_ptr<string> fireTime_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // The task state. Valid values:
    // 
    // *   **RUNNING**
    // *   **STOP**
    // *   **CANCEL**
    // 
    // This parameter is required.
    std::shared_ptr<string> status_ = nullptr;
    // The task ID. You can call the [CreateCallTask](~~CreateCallTask~~) operation to obtain the task ID.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> taskId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyvmsapi20170525
#endif
