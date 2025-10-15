// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCONNECTIONTICKETRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCONNECTIONTICKETRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetConnectionTicketResponseBodyBindQueueInfo.hpp>
#include <alibabacloud/models/GetConnectionTicketResponseBodyPolicy.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210903
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
      DARABONBA_PTR_TO_JSON(BindQueueInfo, bindQueueInfo_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(LoginToken, loginToken_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(NextPollIntervalMs, nextPollIntervalMs_);
      DARABONBA_PTR_TO_JSON(OsType, osType_);
      DARABONBA_PTR_TO_JSON(Policy, policy_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RetryTimes, retryTimes_);
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
      DARABONBA_PTR_FROM_JSON(BindQueueInfo, bindQueueInfo_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(LoginToken, loginToken_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(NextPollIntervalMs, nextPollIntervalMs_);
      DARABONBA_PTR_FROM_JSON(OsType, osType_);
      DARABONBA_PTR_FROM_JSON(Policy, policy_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RetryTimes, retryTimes_);
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
        && return this->appInstanceId_ == nullptr && return this->appInstancePersistentId_ == nullptr && return this->avatarId_ == nullptr && return this->bindQueueInfo_ == nullptr && return this->code_ == nullptr
        && return this->loginToken_ == nullptr && return this->message_ == nullptr && return this->nextPollIntervalMs_ == nullptr && return this->osType_ == nullptr && return this->policy_ == nullptr
        && return this->regionId_ == nullptr && return this->requestId_ == nullptr && return this->retryTimes_ == nullptr && return this->taskId_ == nullptr && return this->taskStatus_ == nullptr
        && return this->tenantId_ == nullptr && return this->ticket_ == nullptr; };
    // appInstanceGroupId Field Functions 
    bool hasAppInstanceGroupId() const { return this->appInstanceGroupId_ != nullptr;};
    void deleteAppInstanceGroupId() { this->appInstanceGroupId_ = nullptr;};
    inline string appInstanceGroupId() const { DARABONBA_PTR_GET_DEFAULT(appInstanceGroupId_, "") };
    inline GetConnectionTicketResponseBody& setAppInstanceGroupId(string appInstanceGroupId) { DARABONBA_PTR_SET_VALUE(appInstanceGroupId_, appInstanceGroupId) };


    // appInstanceId Field Functions 
    bool hasAppInstanceId() const { return this->appInstanceId_ != nullptr;};
    void deleteAppInstanceId() { this->appInstanceId_ = nullptr;};
    inline string appInstanceId() const { DARABONBA_PTR_GET_DEFAULT(appInstanceId_, "") };
    inline GetConnectionTicketResponseBody& setAppInstanceId(string appInstanceId) { DARABONBA_PTR_SET_VALUE(appInstanceId_, appInstanceId) };


    // appInstancePersistentId Field Functions 
    bool hasAppInstancePersistentId() const { return this->appInstancePersistentId_ != nullptr;};
    void deleteAppInstancePersistentId() { this->appInstancePersistentId_ = nullptr;};
    inline string appInstancePersistentId() const { DARABONBA_PTR_GET_DEFAULT(appInstancePersistentId_, "") };
    inline GetConnectionTicketResponseBody& setAppInstancePersistentId(string appInstancePersistentId) { DARABONBA_PTR_SET_VALUE(appInstancePersistentId_, appInstancePersistentId) };


    // avatarId Field Functions 
    bool hasAvatarId() const { return this->avatarId_ != nullptr;};
    void deleteAvatarId() { this->avatarId_ = nullptr;};
    inline string avatarId() const { DARABONBA_PTR_GET_DEFAULT(avatarId_, "") };
    inline GetConnectionTicketResponseBody& setAvatarId(string avatarId) { DARABONBA_PTR_SET_VALUE(avatarId_, avatarId) };


    // bindQueueInfo Field Functions 
    bool hasBindQueueInfo() const { return this->bindQueueInfo_ != nullptr;};
    void deleteBindQueueInfo() { this->bindQueueInfo_ = nullptr;};
    inline const GetConnectionTicketResponseBodyBindQueueInfo & bindQueueInfo() const { DARABONBA_PTR_GET_CONST(bindQueueInfo_, GetConnectionTicketResponseBodyBindQueueInfo) };
    inline GetConnectionTicketResponseBodyBindQueueInfo bindQueueInfo() { DARABONBA_PTR_GET(bindQueueInfo_, GetConnectionTicketResponseBodyBindQueueInfo) };
    inline GetConnectionTicketResponseBody& setBindQueueInfo(const GetConnectionTicketResponseBodyBindQueueInfo & bindQueueInfo) { DARABONBA_PTR_SET_VALUE(bindQueueInfo_, bindQueueInfo) };
    inline GetConnectionTicketResponseBody& setBindQueueInfo(GetConnectionTicketResponseBodyBindQueueInfo && bindQueueInfo) { DARABONBA_PTR_SET_RVALUE(bindQueueInfo_, bindQueueInfo) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetConnectionTicketResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // loginToken Field Functions 
    bool hasLoginToken() const { return this->loginToken_ != nullptr;};
    void deleteLoginToken() { this->loginToken_ = nullptr;};
    inline string loginToken() const { DARABONBA_PTR_GET_DEFAULT(loginToken_, "") };
    inline GetConnectionTicketResponseBody& setLoginToken(string loginToken) { DARABONBA_PTR_SET_VALUE(loginToken_, loginToken) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetConnectionTicketResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // nextPollIntervalMs Field Functions 
    bool hasNextPollIntervalMs() const { return this->nextPollIntervalMs_ != nullptr;};
    void deleteNextPollIntervalMs() { this->nextPollIntervalMs_ = nullptr;};
    inline int32_t nextPollIntervalMs() const { DARABONBA_PTR_GET_DEFAULT(nextPollIntervalMs_, 0) };
    inline GetConnectionTicketResponseBody& setNextPollIntervalMs(int32_t nextPollIntervalMs) { DARABONBA_PTR_SET_VALUE(nextPollIntervalMs_, nextPollIntervalMs) };


    // osType Field Functions 
    bool hasOsType() const { return this->osType_ != nullptr;};
    void deleteOsType() { this->osType_ = nullptr;};
    inline string osType() const { DARABONBA_PTR_GET_DEFAULT(osType_, "") };
    inline GetConnectionTicketResponseBody& setOsType(string osType) { DARABONBA_PTR_SET_VALUE(osType_, osType) };


    // policy Field Functions 
    bool hasPolicy() const { return this->policy_ != nullptr;};
    void deletePolicy() { this->policy_ = nullptr;};
    inline const GetConnectionTicketResponseBodyPolicy & policy() const { DARABONBA_PTR_GET_CONST(policy_, GetConnectionTicketResponseBodyPolicy) };
    inline GetConnectionTicketResponseBodyPolicy policy() { DARABONBA_PTR_GET(policy_, GetConnectionTicketResponseBodyPolicy) };
    inline GetConnectionTicketResponseBody& setPolicy(const GetConnectionTicketResponseBodyPolicy & policy) { DARABONBA_PTR_SET_VALUE(policy_, policy) };
    inline GetConnectionTicketResponseBody& setPolicy(GetConnectionTicketResponseBodyPolicy && policy) { DARABONBA_PTR_SET_RVALUE(policy_, policy) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetConnectionTicketResponseBody& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetConnectionTicketResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // retryTimes Field Functions 
    bool hasRetryTimes() const { return this->retryTimes_ != nullptr;};
    void deleteRetryTimes() { this->retryTimes_ = nullptr;};
    inline int32_t retryTimes() const { DARABONBA_PTR_GET_DEFAULT(retryTimes_, 0) };
    inline GetConnectionTicketResponseBody& setRetryTimes(int32_t retryTimes) { DARABONBA_PTR_SET_VALUE(retryTimes_, retryTimes) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline GetConnectionTicketResponseBody& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // taskStatus Field Functions 
    bool hasTaskStatus() const { return this->taskStatus_ != nullptr;};
    void deleteTaskStatus() { this->taskStatus_ = nullptr;};
    inline string taskStatus() const { DARABONBA_PTR_GET_DEFAULT(taskStatus_, "") };
    inline GetConnectionTicketResponseBody& setTaskStatus(string taskStatus) { DARABONBA_PTR_SET_VALUE(taskStatus_, taskStatus) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline int64_t tenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, 0L) };
    inline GetConnectionTicketResponseBody& setTenantId(int64_t tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    // ticket Field Functions 
    bool hasTicket() const { return this->ticket_ != nullptr;};
    void deleteTicket() { this->ticket_ = nullptr;};
    inline string ticket() const { DARABONBA_PTR_GET_DEFAULT(ticket_, "") };
    inline GetConnectionTicketResponseBody& setTicket(string ticket) { DARABONBA_PTR_SET_VALUE(ticket_, ticket) };


  protected:
    std::shared_ptr<string> appInstanceGroupId_ = nullptr;
    std::shared_ptr<string> appInstanceId_ = nullptr;
    std::shared_ptr<string> appInstancePersistentId_ = nullptr;
    std::shared_ptr<string> avatarId_ = nullptr;
    std::shared_ptr<GetConnectionTicketResponseBodyBindQueueInfo> bindQueueInfo_ = nullptr;
    std::shared_ptr<string> code_ = nullptr;
    std::shared_ptr<string> loginToken_ = nullptr;
    std::shared_ptr<string> message_ = nullptr;
    std::shared_ptr<int32_t> nextPollIntervalMs_ = nullptr;
    std::shared_ptr<string> osType_ = nullptr;
    std::shared_ptr<GetConnectionTicketResponseBodyPolicy> policy_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    // Id of the request
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<int32_t> retryTimes_ = nullptr;
    std::shared_ptr<string> taskId_ = nullptr;
    std::shared_ptr<string> taskStatus_ = nullptr;
    std::shared_ptr<int64_t> tenantId_ = nullptr;
    std::shared_ptr<string> ticket_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210903
#endif
