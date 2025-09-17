// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCONNECTIONTICKETRESPONSEBODYBINDQUEUEINFO_HPP_
#define ALIBABACLOUD_MODELS_GETCONNECTIONTICKETRESPONSEBODYBINDQUEUEINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210903
{
namespace Models
{
  class GetConnectionTicketResponseBodyBindQueueInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetConnectionTicketResponseBodyBindQueueInfo& obj) { 
      DARABONBA_PTR_TO_JSON(QueueStatus, queueStatus_);
      DARABONBA_PTR_TO_JSON(Rank, rank_);
      DARABONBA_PTR_TO_JSON(ReadyTimeout, readyTimeout_);
      DARABONBA_PTR_TO_JSON(RemainingTime, remainingTime_);
      DARABONBA_PTR_TO_JSON(RequestKey, requestKey_);
      DARABONBA_PTR_TO_JSON(TargetId, targetId_);
      DARABONBA_PTR_TO_JSON(WaitTime, waitTime_);
    };
    friend void from_json(const Darabonba::Json& j, GetConnectionTicketResponseBodyBindQueueInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(QueueStatus, queueStatus_);
      DARABONBA_PTR_FROM_JSON(Rank, rank_);
      DARABONBA_PTR_FROM_JSON(ReadyTimeout, readyTimeout_);
      DARABONBA_PTR_FROM_JSON(RemainingTime, remainingTime_);
      DARABONBA_PTR_FROM_JSON(RequestKey, requestKey_);
      DARABONBA_PTR_FROM_JSON(TargetId, targetId_);
      DARABONBA_PTR_FROM_JSON(WaitTime, waitTime_);
    };
    GetConnectionTicketResponseBodyBindQueueInfo() = default ;
    GetConnectionTicketResponseBodyBindQueueInfo(const GetConnectionTicketResponseBodyBindQueueInfo &) = default ;
    GetConnectionTicketResponseBodyBindQueueInfo(GetConnectionTicketResponseBodyBindQueueInfo &&) = default ;
    GetConnectionTicketResponseBodyBindQueueInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetConnectionTicketResponseBodyBindQueueInfo() = default ;
    GetConnectionTicketResponseBodyBindQueueInfo& operator=(const GetConnectionTicketResponseBodyBindQueueInfo &) = default ;
    GetConnectionTicketResponseBodyBindQueueInfo& operator=(GetConnectionTicketResponseBodyBindQueueInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->queueStatus_ != nullptr
        && this->rank_ != nullptr && this->readyTimeout_ != nullptr && this->remainingTime_ != nullptr && this->requestKey_ != nullptr && this->targetId_ != nullptr
        && this->waitTime_ != nullptr; };
    // queueStatus Field Functions 
    bool hasQueueStatus() const { return this->queueStatus_ != nullptr;};
    void deleteQueueStatus() { this->queueStatus_ = nullptr;};
    inline string queueStatus() const { DARABONBA_PTR_GET_DEFAULT(queueStatus_, "") };
    inline GetConnectionTicketResponseBodyBindQueueInfo& setQueueStatus(string queueStatus) { DARABONBA_PTR_SET_VALUE(queueStatus_, queueStatus) };


    // rank Field Functions 
    bool hasRank() const { return this->rank_ != nullptr;};
    void deleteRank() { this->rank_ = nullptr;};
    inline int32_t rank() const { DARABONBA_PTR_GET_DEFAULT(rank_, 0) };
    inline GetConnectionTicketResponseBodyBindQueueInfo& setRank(int32_t rank) { DARABONBA_PTR_SET_VALUE(rank_, rank) };


    // readyTimeout Field Functions 
    bool hasReadyTimeout() const { return this->readyTimeout_ != nullptr;};
    void deleteReadyTimeout() { this->readyTimeout_ = nullptr;};
    inline int64_t readyTimeout() const { DARABONBA_PTR_GET_DEFAULT(readyTimeout_, 0L) };
    inline GetConnectionTicketResponseBodyBindQueueInfo& setReadyTimeout(int64_t readyTimeout) { DARABONBA_PTR_SET_VALUE(readyTimeout_, readyTimeout) };


    // remainingTime Field Functions 
    bool hasRemainingTime() const { return this->remainingTime_ != nullptr;};
    void deleteRemainingTime() { this->remainingTime_ = nullptr;};
    inline int64_t remainingTime() const { DARABONBA_PTR_GET_DEFAULT(remainingTime_, 0L) };
    inline GetConnectionTicketResponseBodyBindQueueInfo& setRemainingTime(int64_t remainingTime) { DARABONBA_PTR_SET_VALUE(remainingTime_, remainingTime) };


    // requestKey Field Functions 
    bool hasRequestKey() const { return this->requestKey_ != nullptr;};
    void deleteRequestKey() { this->requestKey_ = nullptr;};
    inline string requestKey() const { DARABONBA_PTR_GET_DEFAULT(requestKey_, "") };
    inline GetConnectionTicketResponseBodyBindQueueInfo& setRequestKey(string requestKey) { DARABONBA_PTR_SET_VALUE(requestKey_, requestKey) };


    // targetId Field Functions 
    bool hasTargetId() const { return this->targetId_ != nullptr;};
    void deleteTargetId() { this->targetId_ = nullptr;};
    inline string targetId() const { DARABONBA_PTR_GET_DEFAULT(targetId_, "") };
    inline GetConnectionTicketResponseBodyBindQueueInfo& setTargetId(string targetId) { DARABONBA_PTR_SET_VALUE(targetId_, targetId) };


    // waitTime Field Functions 
    bool hasWaitTime() const { return this->waitTime_ != nullptr;};
    void deleteWaitTime() { this->waitTime_ = nullptr;};
    inline int64_t waitTime() const { DARABONBA_PTR_GET_DEFAULT(waitTime_, 0L) };
    inline GetConnectionTicketResponseBodyBindQueueInfo& setWaitTime(int64_t waitTime) { DARABONBA_PTR_SET_VALUE(waitTime_, waitTime) };


  protected:
    std::shared_ptr<string> queueStatus_ = nullptr;
    std::shared_ptr<int32_t> rank_ = nullptr;
    std::shared_ptr<int64_t> readyTimeout_ = nullptr;
    std::shared_ptr<int64_t> remainingTime_ = nullptr;
    std::shared_ptr<string> requestKey_ = nullptr;
    std::shared_ptr<string> targetId_ = nullptr;
    std::shared_ptr<int64_t> waitTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210903
#endif
