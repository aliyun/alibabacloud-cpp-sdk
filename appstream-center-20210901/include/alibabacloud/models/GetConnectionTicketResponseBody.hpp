// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCONNECTIONTICKETRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCONNECTIONTICKETRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class GetConnectionTicketResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetConnectionTicketResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AppInstanceGroupId, appInstanceGroupId_);
      DARABONBA_PTR_TO_JSON(AppInstanceId, appInstanceId_);
      DARABONBA_PTR_TO_JSON(AppInstancePersistentId, appInstancePersistentId_);
      DARABONBA_PTR_TO_JSON(AvatarId, avatarId_);
      DARABONBA_PTR_TO_JSON(BizRegionId, bizRegionId_);
      DARABONBA_PTR_TO_JSON(OsType, osType_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(TaskStatus, taskStatus_);
      DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
      DARABONBA_PTR_TO_JSON(Ticket, ticket_);
    };
    friend void from_json(const Darabonba::Json& j, GetConnectionTicketResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AppInstanceGroupId, appInstanceGroupId_);
      DARABONBA_PTR_FROM_JSON(AppInstanceId, appInstanceId_);
      DARABONBA_PTR_FROM_JSON(AppInstancePersistentId, appInstancePersistentId_);
      DARABONBA_PTR_FROM_JSON(AvatarId, avatarId_);
      DARABONBA_PTR_FROM_JSON(BizRegionId, bizRegionId_);
      DARABONBA_PTR_FROM_JSON(OsType, osType_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(TaskStatus, taskStatus_);
      DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
      DARABONBA_PTR_FROM_JSON(Ticket, ticket_);
    };
    GetConnectionTicketResponseBody() = default ;
    GetConnectionTicketResponseBody(const GetConnectionTicketResponseBody &) = default ;
    GetConnectionTicketResponseBody(GetConnectionTicketResponseBody &&) = default ;
    GetConnectionTicketResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetConnectionTicketResponseBody() = default ;
    GetConnectionTicketResponseBody& operator=(const GetConnectionTicketResponseBody &) = default ;
    GetConnectionTicketResponseBody& operator=(GetConnectionTicketResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appInstanceGroupId_ == nullptr
        && this->appInstanceId_ == nullptr && this->appInstancePersistentId_ == nullptr && this->avatarId_ == nullptr && this->bizRegionId_ == nullptr && this->osType_ == nullptr
        && this->requestId_ == nullptr && this->taskId_ == nullptr && this->taskStatus_ == nullptr && this->tenantId_ == nullptr && this->ticket_ == nullptr; };
    // appInstanceGroupId Field Functions 
    bool hasAppInstanceGroupId() const { return this->appInstanceGroupId_ != nullptr;};
    void deleteAppInstanceGroupId() { this->appInstanceGroupId_ = nullptr;};
    inline string getAppInstanceGroupId() const { DARABONBA_PTR_GET_DEFAULT(appInstanceGroupId_, "") };
    inline GetConnectionTicketResponseBody& setAppInstanceGroupId(string appInstanceGroupId) { DARABONBA_PTR_SET_VALUE(appInstanceGroupId_, appInstanceGroupId) };


    // appInstanceId Field Functions 
    bool hasAppInstanceId() const { return this->appInstanceId_ != nullptr;};
    void deleteAppInstanceId() { this->appInstanceId_ = nullptr;};
    inline string getAppInstanceId() const { DARABONBA_PTR_GET_DEFAULT(appInstanceId_, "") };
    inline GetConnectionTicketResponseBody& setAppInstanceId(string appInstanceId) { DARABONBA_PTR_SET_VALUE(appInstanceId_, appInstanceId) };


    // appInstancePersistentId Field Functions 
    bool hasAppInstancePersistentId() const { return this->appInstancePersistentId_ != nullptr;};
    void deleteAppInstancePersistentId() { this->appInstancePersistentId_ = nullptr;};
    inline string getAppInstancePersistentId() const { DARABONBA_PTR_GET_DEFAULT(appInstancePersistentId_, "") };
    inline GetConnectionTicketResponseBody& setAppInstancePersistentId(string appInstancePersistentId) { DARABONBA_PTR_SET_VALUE(appInstancePersistentId_, appInstancePersistentId) };


    // avatarId Field Functions 
    bool hasAvatarId() const { return this->avatarId_ != nullptr;};
    void deleteAvatarId() { this->avatarId_ = nullptr;};
    inline string getAvatarId() const { DARABONBA_PTR_GET_DEFAULT(avatarId_, "") };
    inline GetConnectionTicketResponseBody& setAvatarId(string avatarId) { DARABONBA_PTR_SET_VALUE(avatarId_, avatarId) };


    // bizRegionId Field Functions 
    bool hasBizRegionId() const { return this->bizRegionId_ != nullptr;};
    void deleteBizRegionId() { this->bizRegionId_ = nullptr;};
    inline string getBizRegionId() const { DARABONBA_PTR_GET_DEFAULT(bizRegionId_, "") };
    inline GetConnectionTicketResponseBody& setBizRegionId(string bizRegionId) { DARABONBA_PTR_SET_VALUE(bizRegionId_, bizRegionId) };


    // osType Field Functions 
    bool hasOsType() const { return this->osType_ != nullptr;};
    void deleteOsType() { this->osType_ = nullptr;};
    inline string getOsType() const { DARABONBA_PTR_GET_DEFAULT(osType_, "") };
    inline GetConnectionTicketResponseBody& setOsType(string osType) { DARABONBA_PTR_SET_VALUE(osType_, osType) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetConnectionTicketResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline GetConnectionTicketResponseBody& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // taskStatus Field Functions 
    bool hasTaskStatus() const { return this->taskStatus_ != nullptr;};
    void deleteTaskStatus() { this->taskStatus_ = nullptr;};
    inline string getTaskStatus() const { DARABONBA_PTR_GET_DEFAULT(taskStatus_, "") };
    inline GetConnectionTicketResponseBody& setTaskStatus(string taskStatus) { DARABONBA_PTR_SET_VALUE(taskStatus_, taskStatus) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline int64_t getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, 0L) };
    inline GetConnectionTicketResponseBody& setTenantId(int64_t tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    // ticket Field Functions 
    bool hasTicket() const { return this->ticket_ != nullptr;};
    void deleteTicket() { this->ticket_ = nullptr;};
    inline string getTicket() const { DARABONBA_PTR_GET_DEFAULT(ticket_, "") };
    inline GetConnectionTicketResponseBody& setTicket(string ticket) { DARABONBA_PTR_SET_VALUE(ticket_, ticket) };


  protected:
    // The ID of the delivery group.
    shared_ptr<string> appInstanceGroupId_ {};
    // The ID of the application instance.
    shared_ptr<string> appInstanceId_ {};
    // The ID of the persistent session.
    shared_ptr<string> appInstancePersistentId_ {};
    // The avatar ID.
    shared_ptr<string> avatarId_ {};
    // The region ID.
    shared_ptr<string> bizRegionId_ {};
    // The operating system.
    // 
    // Valid value:
    // 
    // *   Windows: the Windows operating system
    shared_ptr<string> osType_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The task ID.
    shared_ptr<string> taskId_ {};
    // The task status.
    // 
    // Valid values:
    // 
    // *   Finished: The task is complete.
    // *   Failed: The task failed.
    // *   Running: The task is being executed.
    shared_ptr<string> taskStatus_ {};
    // The ID of the Alibaba Cloud account.
    shared_ptr<int64_t> tenantId_ {};
    // The credential that is used to connect to App Streaming.
    // 
    // >  This parameter is displayed for calls other than the first call to this operation.
    shared_ptr<string> ticket_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
