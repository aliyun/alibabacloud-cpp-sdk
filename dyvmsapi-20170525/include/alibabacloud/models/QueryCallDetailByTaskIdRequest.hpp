// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYCALLDETAILBYTASKIDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYCALLDETAILBYTASKIDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyvmsapi20170525
{
namespace Models
{
  class QueryCallDetailByTaskIdRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryCallDetailByTaskIdRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Callee, callee_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(QueryDate, queryDate_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryCallDetailByTaskIdRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Callee, callee_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(QueryDate, queryDate_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    QueryCallDetailByTaskIdRequest() = default ;
    QueryCallDetailByTaskIdRequest(const QueryCallDetailByTaskIdRequest &) = default ;
    QueryCallDetailByTaskIdRequest(QueryCallDetailByTaskIdRequest &&) = default ;
    QueryCallDetailByTaskIdRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryCallDetailByTaskIdRequest() = default ;
    QueryCallDetailByTaskIdRequest& operator=(const QueryCallDetailByTaskIdRequest &) = default ;
    QueryCallDetailByTaskIdRequest& operator=(QueryCallDetailByTaskIdRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->callee_ == nullptr
        && return this->ownerId_ == nullptr && return this->queryDate_ == nullptr && return this->resourceOwnerAccount_ == nullptr && return this->resourceOwnerId_ == nullptr && return this->taskId_ == nullptr; };
    // callee Field Functions 
    bool hasCallee() const { return this->callee_ != nullptr;};
    void deleteCallee() { this->callee_ = nullptr;};
    inline string callee() const { DARABONBA_PTR_GET_DEFAULT(callee_, "") };
    inline QueryCallDetailByTaskIdRequest& setCallee(string callee) { DARABONBA_PTR_SET_VALUE(callee_, callee) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline QueryCallDetailByTaskIdRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // queryDate Field Functions 
    bool hasQueryDate() const { return this->queryDate_ != nullptr;};
    void deleteQueryDate() { this->queryDate_ = nullptr;};
    inline int64_t queryDate() const { DARABONBA_PTR_GET_DEFAULT(queryDate_, 0L) };
    inline QueryCallDetailByTaskIdRequest& setQueryDate(int64_t queryDate) { DARABONBA_PTR_SET_VALUE(queryDate_, queryDate) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline QueryCallDetailByTaskIdRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline QueryCallDetailByTaskIdRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline QueryCallDetailByTaskIdRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    // The called number. You can view the outbound call records of only one called number.
    // 
    // This parameter is required.
    std::shared_ptr<string> callee_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The start time of the outbound robocall task. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> queryDate_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // The unique ID of the outbound robocall task. The task ID is returned after the outbound robocall task is successfully delivered. You can view the task ID on the [Task Management](https://dyvms.console.aliyun.com/job/list) page of the Voice Messaging Service console, or call the **BatchRobotSmartCall** operation to obtain the **task ID**.
    // 
    // This parameter is required.
    std::shared_ptr<string> taskId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyvmsapi20170525
#endif
