// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYROBOTTASKCALLLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYROBOTTASKCALLLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyvmsapi20170525
{
namespace Models
{
  class QueryRobotTaskCallListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryRobotTaskCallListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CallResult, callResult_);
      DARABONBA_PTR_TO_JSON(Called, called_);
      DARABONBA_PTR_TO_JSON(DialogCountFrom, dialogCountFrom_);
      DARABONBA_PTR_TO_JSON(DialogCountTo, dialogCountTo_);
      DARABONBA_PTR_TO_JSON(DurationFrom, durationFrom_);
      DARABONBA_PTR_TO_JSON(DurationTo, durationTo_);
      DARABONBA_PTR_TO_JSON(HangupDirection, hangupDirection_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryRobotTaskCallListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CallResult, callResult_);
      DARABONBA_PTR_FROM_JSON(Called, called_);
      DARABONBA_PTR_FROM_JSON(DialogCountFrom, dialogCountFrom_);
      DARABONBA_PTR_FROM_JSON(DialogCountTo, dialogCountTo_);
      DARABONBA_PTR_FROM_JSON(DurationFrom, durationFrom_);
      DARABONBA_PTR_FROM_JSON(DurationTo, durationTo_);
      DARABONBA_PTR_FROM_JSON(HangupDirection, hangupDirection_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    QueryRobotTaskCallListRequest() = default ;
    QueryRobotTaskCallListRequest(const QueryRobotTaskCallListRequest &) = default ;
    QueryRobotTaskCallListRequest(QueryRobotTaskCallListRequest &&) = default ;
    QueryRobotTaskCallListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryRobotTaskCallListRequest() = default ;
    QueryRobotTaskCallListRequest& operator=(const QueryRobotTaskCallListRequest &) = default ;
    QueryRobotTaskCallListRequest& operator=(QueryRobotTaskCallListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->callResult_ == nullptr
        && return this->called_ == nullptr && return this->dialogCountFrom_ == nullptr && return this->dialogCountTo_ == nullptr && return this->durationFrom_ == nullptr && return this->durationTo_ == nullptr
        && return this->hangupDirection_ == nullptr && return this->ownerId_ == nullptr && return this->pageNo_ == nullptr && return this->pageSize_ == nullptr && return this->resourceOwnerAccount_ == nullptr
        && return this->resourceOwnerId_ == nullptr && return this->taskId_ == nullptr; };
    // callResult Field Functions 
    bool hasCallResult() const { return this->callResult_ != nullptr;};
    void deleteCallResult() { this->callResult_ = nullptr;};
    inline string callResult() const { DARABONBA_PTR_GET_DEFAULT(callResult_, "") };
    inline QueryRobotTaskCallListRequest& setCallResult(string callResult) { DARABONBA_PTR_SET_VALUE(callResult_, callResult) };


    // called Field Functions 
    bool hasCalled() const { return this->called_ != nullptr;};
    void deleteCalled() { this->called_ = nullptr;};
    inline string called() const { DARABONBA_PTR_GET_DEFAULT(called_, "") };
    inline QueryRobotTaskCallListRequest& setCalled(string called) { DARABONBA_PTR_SET_VALUE(called_, called) };


    // dialogCountFrom Field Functions 
    bool hasDialogCountFrom() const { return this->dialogCountFrom_ != nullptr;};
    void deleteDialogCountFrom() { this->dialogCountFrom_ = nullptr;};
    inline string dialogCountFrom() const { DARABONBA_PTR_GET_DEFAULT(dialogCountFrom_, "") };
    inline QueryRobotTaskCallListRequest& setDialogCountFrom(string dialogCountFrom) { DARABONBA_PTR_SET_VALUE(dialogCountFrom_, dialogCountFrom) };


    // dialogCountTo Field Functions 
    bool hasDialogCountTo() const { return this->dialogCountTo_ != nullptr;};
    void deleteDialogCountTo() { this->dialogCountTo_ = nullptr;};
    inline string dialogCountTo() const { DARABONBA_PTR_GET_DEFAULT(dialogCountTo_, "") };
    inline QueryRobotTaskCallListRequest& setDialogCountTo(string dialogCountTo) { DARABONBA_PTR_SET_VALUE(dialogCountTo_, dialogCountTo) };


    // durationFrom Field Functions 
    bool hasDurationFrom() const { return this->durationFrom_ != nullptr;};
    void deleteDurationFrom() { this->durationFrom_ = nullptr;};
    inline string durationFrom() const { DARABONBA_PTR_GET_DEFAULT(durationFrom_, "") };
    inline QueryRobotTaskCallListRequest& setDurationFrom(string durationFrom) { DARABONBA_PTR_SET_VALUE(durationFrom_, durationFrom) };


    // durationTo Field Functions 
    bool hasDurationTo() const { return this->durationTo_ != nullptr;};
    void deleteDurationTo() { this->durationTo_ = nullptr;};
    inline string durationTo() const { DARABONBA_PTR_GET_DEFAULT(durationTo_, "") };
    inline QueryRobotTaskCallListRequest& setDurationTo(string durationTo) { DARABONBA_PTR_SET_VALUE(durationTo_, durationTo) };


    // hangupDirection Field Functions 
    bool hasHangupDirection() const { return this->hangupDirection_ != nullptr;};
    void deleteHangupDirection() { this->hangupDirection_ = nullptr;};
    inline string hangupDirection() const { DARABONBA_PTR_GET_DEFAULT(hangupDirection_, "") };
    inline QueryRobotTaskCallListRequest& setHangupDirection(string hangupDirection) { DARABONBA_PTR_SET_VALUE(hangupDirection_, hangupDirection) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline QueryRobotTaskCallListRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int32_t pageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0) };
    inline QueryRobotTaskCallListRequest& setPageNo(int32_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline QueryRobotTaskCallListRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline QueryRobotTaskCallListRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline QueryRobotTaskCallListRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline QueryRobotTaskCallListRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    // The call result. Valid values:
    // 
    // *   **200002**: The line is busy.
    // *   **200005**: The called party cannot be connected.
    // *   **200010**: The phone of the called party is powered off.
    // *   **200011**: The called party is out of service.
    // *   **200012**: The call is lost.
    std::shared_ptr<string> callResult_ = nullptr;
    // The called number.
    std::shared_ptr<string> called_ = nullptr;
    // The minimum number of conversation rounds in the call.
    std::shared_ptr<string> dialogCountFrom_ = nullptr;
    // The maximum number of conversation rounds in the call.
    std::shared_ptr<string> dialogCountTo_ = nullptr;
    // The minimum call duration.
    std::shared_ptr<string> durationFrom_ = nullptr;
    // The maximum call duration.
    std::shared_ptr<string> durationTo_ = nullptr;
    // The party who hangs up. Valid values:
    // 
    // *   **0**: the called party.
    // *   **1**: the robot.
    std::shared_ptr<string> hangupDirection_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The page number.
    std::shared_ptr<int32_t> pageNo_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // The unique ID of the robocall task. You can call the [CreateRobotTask](https://help.aliyun.com/document_detail/393531.html) operation to obtain the task ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> taskId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyvmsapi20170525
#endif
