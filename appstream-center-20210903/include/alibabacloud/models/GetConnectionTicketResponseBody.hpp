// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCONNECTIONTICKETRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCONNECTIONTICKETRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
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
    class Policy : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Policy& obj) { 
        DARABONBA_PTR_TO_JSON(ResolutionAdaptive, resolutionAdaptive_);
        DARABONBA_PTR_TO_JSON(ResolutionHeight, resolutionHeight_);
        DARABONBA_PTR_TO_JSON(ResolutionWidth, resolutionWidth_);
      };
      friend void from_json(const Darabonba::Json& j, Policy& obj) { 
        DARABONBA_PTR_FROM_JSON(ResolutionAdaptive, resolutionAdaptive_);
        DARABONBA_PTR_FROM_JSON(ResolutionHeight, resolutionHeight_);
        DARABONBA_PTR_FROM_JSON(ResolutionWidth, resolutionWidth_);
      };
      Policy() = default ;
      Policy(const Policy &) = default ;
      Policy(Policy &&) = default ;
      Policy(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Policy() = default ;
      Policy& operator=(const Policy &) = default ;
      Policy& operator=(Policy &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->resolutionAdaptive_ == nullptr
        && this->resolutionHeight_ == nullptr && this->resolutionWidth_ == nullptr; };
      // resolutionAdaptive Field Functions 
      bool hasResolutionAdaptive() const { return this->resolutionAdaptive_ != nullptr;};
      void deleteResolutionAdaptive() { this->resolutionAdaptive_ = nullptr;};
      inline string getResolutionAdaptive() const { DARABONBA_PTR_GET_DEFAULT(resolutionAdaptive_, "") };
      inline Policy& setResolutionAdaptive(string resolutionAdaptive) { DARABONBA_PTR_SET_VALUE(resolutionAdaptive_, resolutionAdaptive) };


      // resolutionHeight Field Functions 
      bool hasResolutionHeight() const { return this->resolutionHeight_ != nullptr;};
      void deleteResolutionHeight() { this->resolutionHeight_ = nullptr;};
      inline int32_t getResolutionHeight() const { DARABONBA_PTR_GET_DEFAULT(resolutionHeight_, 0) };
      inline Policy& setResolutionHeight(int32_t resolutionHeight) { DARABONBA_PTR_SET_VALUE(resolutionHeight_, resolutionHeight) };


      // resolutionWidth Field Functions 
      bool hasResolutionWidth() const { return this->resolutionWidth_ != nullptr;};
      void deleteResolutionWidth() { this->resolutionWidth_ = nullptr;};
      inline int32_t getResolutionWidth() const { DARABONBA_PTR_GET_DEFAULT(resolutionWidth_, 0) };
      inline Policy& setResolutionWidth(int32_t resolutionWidth) { DARABONBA_PTR_SET_VALUE(resolutionWidth_, resolutionWidth) };


    protected:
      shared_ptr<string> resolutionAdaptive_ {};
      shared_ptr<int32_t> resolutionHeight_ {};
      shared_ptr<int32_t> resolutionWidth_ {};
    };

    class BindQueueInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const BindQueueInfo& obj) { 
        DARABONBA_PTR_TO_JSON(QueueStatus, queueStatus_);
        DARABONBA_PTR_TO_JSON(Rank, rank_);
        DARABONBA_PTR_TO_JSON(ReadyTimeout, readyTimeout_);
        DARABONBA_PTR_TO_JSON(RemainingTime, remainingTime_);
        DARABONBA_PTR_TO_JSON(RequestKey, requestKey_);
        DARABONBA_PTR_TO_JSON(TargetId, targetId_);
        DARABONBA_PTR_TO_JSON(WaitTime, waitTime_);
      };
      friend void from_json(const Darabonba::Json& j, BindQueueInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(QueueStatus, queueStatus_);
        DARABONBA_PTR_FROM_JSON(Rank, rank_);
        DARABONBA_PTR_FROM_JSON(ReadyTimeout, readyTimeout_);
        DARABONBA_PTR_FROM_JSON(RemainingTime, remainingTime_);
        DARABONBA_PTR_FROM_JSON(RequestKey, requestKey_);
        DARABONBA_PTR_FROM_JSON(TargetId, targetId_);
        DARABONBA_PTR_FROM_JSON(WaitTime, waitTime_);
      };
      BindQueueInfo() = default ;
      BindQueueInfo(const BindQueueInfo &) = default ;
      BindQueueInfo(BindQueueInfo &&) = default ;
      BindQueueInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~BindQueueInfo() = default ;
      BindQueueInfo& operator=(const BindQueueInfo &) = default ;
      BindQueueInfo& operator=(BindQueueInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->queueStatus_ == nullptr
        && this->rank_ == nullptr && this->readyTimeout_ == nullptr && this->remainingTime_ == nullptr && this->requestKey_ == nullptr && this->targetId_ == nullptr
        && this->waitTime_ == nullptr; };
      // queueStatus Field Functions 
      bool hasQueueStatus() const { return this->queueStatus_ != nullptr;};
      void deleteQueueStatus() { this->queueStatus_ = nullptr;};
      inline string getQueueStatus() const { DARABONBA_PTR_GET_DEFAULT(queueStatus_, "") };
      inline BindQueueInfo& setQueueStatus(string queueStatus) { DARABONBA_PTR_SET_VALUE(queueStatus_, queueStatus) };


      // rank Field Functions 
      bool hasRank() const { return this->rank_ != nullptr;};
      void deleteRank() { this->rank_ = nullptr;};
      inline int32_t getRank() const { DARABONBA_PTR_GET_DEFAULT(rank_, 0) };
      inline BindQueueInfo& setRank(int32_t rank) { DARABONBA_PTR_SET_VALUE(rank_, rank) };


      // readyTimeout Field Functions 
      bool hasReadyTimeout() const { return this->readyTimeout_ != nullptr;};
      void deleteReadyTimeout() { this->readyTimeout_ = nullptr;};
      inline int64_t getReadyTimeout() const { DARABONBA_PTR_GET_DEFAULT(readyTimeout_, 0L) };
      inline BindQueueInfo& setReadyTimeout(int64_t readyTimeout) { DARABONBA_PTR_SET_VALUE(readyTimeout_, readyTimeout) };


      // remainingTime Field Functions 
      bool hasRemainingTime() const { return this->remainingTime_ != nullptr;};
      void deleteRemainingTime() { this->remainingTime_ = nullptr;};
      inline int64_t getRemainingTime() const { DARABONBA_PTR_GET_DEFAULT(remainingTime_, 0L) };
      inline BindQueueInfo& setRemainingTime(int64_t remainingTime) { DARABONBA_PTR_SET_VALUE(remainingTime_, remainingTime) };


      // requestKey Field Functions 
      bool hasRequestKey() const { return this->requestKey_ != nullptr;};
      void deleteRequestKey() { this->requestKey_ = nullptr;};
      inline string getRequestKey() const { DARABONBA_PTR_GET_DEFAULT(requestKey_, "") };
      inline BindQueueInfo& setRequestKey(string requestKey) { DARABONBA_PTR_SET_VALUE(requestKey_, requestKey) };


      // targetId Field Functions 
      bool hasTargetId() const { return this->targetId_ != nullptr;};
      void deleteTargetId() { this->targetId_ = nullptr;};
      inline string getTargetId() const { DARABONBA_PTR_GET_DEFAULT(targetId_, "") };
      inline BindQueueInfo& setTargetId(string targetId) { DARABONBA_PTR_SET_VALUE(targetId_, targetId) };


      // waitTime Field Functions 
      bool hasWaitTime() const { return this->waitTime_ != nullptr;};
      void deleteWaitTime() { this->waitTime_ = nullptr;};
      inline int64_t getWaitTime() const { DARABONBA_PTR_GET_DEFAULT(waitTime_, 0L) };
      inline BindQueueInfo& setWaitTime(int64_t waitTime) { DARABONBA_PTR_SET_VALUE(waitTime_, waitTime) };


    protected:
      shared_ptr<string> queueStatus_ {};
      shared_ptr<int32_t> rank_ {};
      shared_ptr<int64_t> readyTimeout_ {};
      shared_ptr<int64_t> remainingTime_ {};
      shared_ptr<string> requestKey_ {};
      shared_ptr<string> targetId_ {};
      shared_ptr<int64_t> waitTime_ {};
    };

    virtual bool empty() const override { return this->appInstanceGroupId_ == nullptr
        && this->appInstanceId_ == nullptr && this->appInstancePersistentId_ == nullptr && this->avatarId_ == nullptr && this->bindQueueInfo_ == nullptr && this->code_ == nullptr
        && this->loginToken_ == nullptr && this->message_ == nullptr && this->nextPollIntervalMs_ == nullptr && this->osType_ == nullptr && this->policy_ == nullptr
        && this->regionId_ == nullptr && this->requestId_ == nullptr && this->retryTimes_ == nullptr && this->taskId_ == nullptr && this->taskStatus_ == nullptr
        && this->tenantId_ == nullptr && this->ticket_ == nullptr; };
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


    // bindQueueInfo Field Functions 
    bool hasBindQueueInfo() const { return this->bindQueueInfo_ != nullptr;};
    void deleteBindQueueInfo() { this->bindQueueInfo_ = nullptr;};
    inline const GetConnectionTicketResponseBody::BindQueueInfo & getBindQueueInfo() const { DARABONBA_PTR_GET_CONST(bindQueueInfo_, GetConnectionTicketResponseBody::BindQueueInfo) };
    inline GetConnectionTicketResponseBody::BindQueueInfo getBindQueueInfo() { DARABONBA_PTR_GET(bindQueueInfo_, GetConnectionTicketResponseBody::BindQueueInfo) };
    inline GetConnectionTicketResponseBody& setBindQueueInfo(const GetConnectionTicketResponseBody::BindQueueInfo & bindQueueInfo) { DARABONBA_PTR_SET_VALUE(bindQueueInfo_, bindQueueInfo) };
    inline GetConnectionTicketResponseBody& setBindQueueInfo(GetConnectionTicketResponseBody::BindQueueInfo && bindQueueInfo) { DARABONBA_PTR_SET_RVALUE(bindQueueInfo_, bindQueueInfo) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetConnectionTicketResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // loginToken Field Functions 
    bool hasLoginToken() const { return this->loginToken_ != nullptr;};
    void deleteLoginToken() { this->loginToken_ = nullptr;};
    inline string getLoginToken() const { DARABONBA_PTR_GET_DEFAULT(loginToken_, "") };
    inline GetConnectionTicketResponseBody& setLoginToken(string loginToken) { DARABONBA_PTR_SET_VALUE(loginToken_, loginToken) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetConnectionTicketResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // nextPollIntervalMs Field Functions 
    bool hasNextPollIntervalMs() const { return this->nextPollIntervalMs_ != nullptr;};
    void deleteNextPollIntervalMs() { this->nextPollIntervalMs_ = nullptr;};
    inline int32_t getNextPollIntervalMs() const { DARABONBA_PTR_GET_DEFAULT(nextPollIntervalMs_, 0) };
    inline GetConnectionTicketResponseBody& setNextPollIntervalMs(int32_t nextPollIntervalMs) { DARABONBA_PTR_SET_VALUE(nextPollIntervalMs_, nextPollIntervalMs) };


    // osType Field Functions 
    bool hasOsType() const { return this->osType_ != nullptr;};
    void deleteOsType() { this->osType_ = nullptr;};
    inline string getOsType() const { DARABONBA_PTR_GET_DEFAULT(osType_, "") };
    inline GetConnectionTicketResponseBody& setOsType(string osType) { DARABONBA_PTR_SET_VALUE(osType_, osType) };


    // policy Field Functions 
    bool hasPolicy() const { return this->policy_ != nullptr;};
    void deletePolicy() { this->policy_ = nullptr;};
    inline const GetConnectionTicketResponseBody::Policy & getPolicy() const { DARABONBA_PTR_GET_CONST(policy_, GetConnectionTicketResponseBody::Policy) };
    inline GetConnectionTicketResponseBody::Policy getPolicy() { DARABONBA_PTR_GET(policy_, GetConnectionTicketResponseBody::Policy) };
    inline GetConnectionTicketResponseBody& setPolicy(const GetConnectionTicketResponseBody::Policy & policy) { DARABONBA_PTR_SET_VALUE(policy_, policy) };
    inline GetConnectionTicketResponseBody& setPolicy(GetConnectionTicketResponseBody::Policy && policy) { DARABONBA_PTR_SET_RVALUE(policy_, policy) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetConnectionTicketResponseBody& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetConnectionTicketResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // retryTimes Field Functions 
    bool hasRetryTimes() const { return this->retryTimes_ != nullptr;};
    void deleteRetryTimes() { this->retryTimes_ = nullptr;};
    inline int32_t getRetryTimes() const { DARABONBA_PTR_GET_DEFAULT(retryTimes_, 0) };
    inline GetConnectionTicketResponseBody& setRetryTimes(int32_t retryTimes) { DARABONBA_PTR_SET_VALUE(retryTimes_, retryTimes) };


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
    shared_ptr<string> appInstanceGroupId_ {};
    shared_ptr<string> appInstanceId_ {};
    shared_ptr<string> appInstancePersistentId_ {};
    shared_ptr<string> avatarId_ {};
    shared_ptr<GetConnectionTicketResponseBody::BindQueueInfo> bindQueueInfo_ {};
    shared_ptr<string> code_ {};
    shared_ptr<string> loginToken_ {};
    shared_ptr<string> message_ {};
    shared_ptr<int32_t> nextPollIntervalMs_ {};
    shared_ptr<string> osType_ {};
    shared_ptr<GetConnectionTicketResponseBody::Policy> policy_ {};
    shared_ptr<string> regionId_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> retryTimes_ {};
    shared_ptr<string> taskId_ {};
    shared_ptr<string> taskStatus_ {};
    shared_ptr<int64_t> tenantId_ {};
    shared_ptr<string> ticket_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210903
#endif
