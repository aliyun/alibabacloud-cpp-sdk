// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYROBOTTASKCALLDETAILREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYROBOTTASKCALLDETAILREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyvmsapi20170525
{
namespace Models
{
  class QueryRobotTaskCallDetailRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryRobotTaskCallDetailRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Callee, callee_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(QueryDate, queryDate_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryRobotTaskCallDetailRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Callee, callee_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(QueryDate, queryDate_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    QueryRobotTaskCallDetailRequest() = default ;
    QueryRobotTaskCallDetailRequest(const QueryRobotTaskCallDetailRequest &) = default ;
    QueryRobotTaskCallDetailRequest(QueryRobotTaskCallDetailRequest &&) = default ;
    QueryRobotTaskCallDetailRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryRobotTaskCallDetailRequest() = default ;
    QueryRobotTaskCallDetailRequest& operator=(const QueryRobotTaskCallDetailRequest &) = default ;
    QueryRobotTaskCallDetailRequest& operator=(QueryRobotTaskCallDetailRequest &&) = default ;
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
    inline QueryRobotTaskCallDetailRequest& setCallee(string callee) { DARABONBA_PTR_SET_VALUE(callee_, callee) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline QueryRobotTaskCallDetailRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // queryDate Field Functions 
    bool hasQueryDate() const { return this->queryDate_ != nullptr;};
    void deleteQueryDate() { this->queryDate_ = nullptr;};
    inline int64_t queryDate() const { DARABONBA_PTR_GET_DEFAULT(queryDate_, 0L) };
    inline QueryRobotTaskCallDetailRequest& setQueryDate(int64_t queryDate) { DARABONBA_PTR_SET_VALUE(queryDate_, queryDate) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline QueryRobotTaskCallDetailRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline QueryRobotTaskCallDetailRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline int64_t taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, 0L) };
    inline QueryRobotTaskCallDetailRequest& setTaskId(int64_t taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    // The called number.
    // 
    // This parameter is required.
    std::shared_ptr<string> callee_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The timestamp of the time at which the call details you want to query.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> queryDate_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // The unique ID of the robocall task. You can call the [CreateRobotTask](https://help.aliyun.com/document_detail/393531.html) operation to obtain the task ID.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> taskId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyvmsapi20170525
#endif
