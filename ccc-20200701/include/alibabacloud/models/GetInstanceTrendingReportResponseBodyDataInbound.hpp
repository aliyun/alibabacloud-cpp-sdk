// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINSTANCETRENDINGREPORTRESPONSEBODYDATAINBOUND_HPP_
#define ALIBABACLOUD_MODELS_GETINSTANCETRENDINGREPORTRESPONSEBODYDATAINBOUND_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class GetInstanceTrendingReportResponseBodyDataInbound : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInstanceTrendingReportResponseBodyDataInbound& obj) { 
      DARABONBA_PTR_TO_JSON(CallsAbandonedInIVR, callsAbandonedInIVR_);
      DARABONBA_PTR_TO_JSON(CallsAbandonedInQueue, callsAbandonedInQueue_);
      DARABONBA_PTR_TO_JSON(CallsAbandonedInRing, callsAbandonedInRing_);
      DARABONBA_PTR_TO_JSON(CallsHandled, callsHandled_);
      DARABONBA_PTR_TO_JSON(CallsQueued, callsQueued_);
      DARABONBA_PTR_TO_JSON(StatsTime, statsTime_);
      DARABONBA_PTR_TO_JSON(TotalCalls, totalCalls_);
    };
    friend void from_json(const Darabonba::Json& j, GetInstanceTrendingReportResponseBodyDataInbound& obj) { 
      DARABONBA_PTR_FROM_JSON(CallsAbandonedInIVR, callsAbandonedInIVR_);
      DARABONBA_PTR_FROM_JSON(CallsAbandonedInQueue, callsAbandonedInQueue_);
      DARABONBA_PTR_FROM_JSON(CallsAbandonedInRing, callsAbandonedInRing_);
      DARABONBA_PTR_FROM_JSON(CallsHandled, callsHandled_);
      DARABONBA_PTR_FROM_JSON(CallsQueued, callsQueued_);
      DARABONBA_PTR_FROM_JSON(StatsTime, statsTime_);
      DARABONBA_PTR_FROM_JSON(TotalCalls, totalCalls_);
    };
    GetInstanceTrendingReportResponseBodyDataInbound() = default ;
    GetInstanceTrendingReportResponseBodyDataInbound(const GetInstanceTrendingReportResponseBodyDataInbound &) = default ;
    GetInstanceTrendingReportResponseBodyDataInbound(GetInstanceTrendingReportResponseBodyDataInbound &&) = default ;
    GetInstanceTrendingReportResponseBodyDataInbound(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInstanceTrendingReportResponseBodyDataInbound() = default ;
    GetInstanceTrendingReportResponseBodyDataInbound& operator=(const GetInstanceTrendingReportResponseBodyDataInbound &) = default ;
    GetInstanceTrendingReportResponseBodyDataInbound& operator=(GetInstanceTrendingReportResponseBodyDataInbound &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->callsAbandonedInIVR_ != nullptr
        && this->callsAbandonedInQueue_ != nullptr && this->callsAbandonedInRing_ != nullptr && this->callsHandled_ != nullptr && this->callsQueued_ != nullptr && this->statsTime_ != nullptr
        && this->totalCalls_ != nullptr; };
    // callsAbandonedInIVR Field Functions 
    bool hasCallsAbandonedInIVR() const { return this->callsAbandonedInIVR_ != nullptr;};
    void deleteCallsAbandonedInIVR() { this->callsAbandonedInIVR_ = nullptr;};
    inline int64_t callsAbandonedInIVR() const { DARABONBA_PTR_GET_DEFAULT(callsAbandonedInIVR_, 0L) };
    inline GetInstanceTrendingReportResponseBodyDataInbound& setCallsAbandonedInIVR(int64_t callsAbandonedInIVR) { DARABONBA_PTR_SET_VALUE(callsAbandonedInIVR_, callsAbandonedInIVR) };


    // callsAbandonedInQueue Field Functions 
    bool hasCallsAbandonedInQueue() const { return this->callsAbandonedInQueue_ != nullptr;};
    void deleteCallsAbandonedInQueue() { this->callsAbandonedInQueue_ = nullptr;};
    inline int64_t callsAbandonedInQueue() const { DARABONBA_PTR_GET_DEFAULT(callsAbandonedInQueue_, 0L) };
    inline GetInstanceTrendingReportResponseBodyDataInbound& setCallsAbandonedInQueue(int64_t callsAbandonedInQueue) { DARABONBA_PTR_SET_VALUE(callsAbandonedInQueue_, callsAbandonedInQueue) };


    // callsAbandonedInRing Field Functions 
    bool hasCallsAbandonedInRing() const { return this->callsAbandonedInRing_ != nullptr;};
    void deleteCallsAbandonedInRing() { this->callsAbandonedInRing_ = nullptr;};
    inline int64_t callsAbandonedInRing() const { DARABONBA_PTR_GET_DEFAULT(callsAbandonedInRing_, 0L) };
    inline GetInstanceTrendingReportResponseBodyDataInbound& setCallsAbandonedInRing(int64_t callsAbandonedInRing) { DARABONBA_PTR_SET_VALUE(callsAbandonedInRing_, callsAbandonedInRing) };


    // callsHandled Field Functions 
    bool hasCallsHandled() const { return this->callsHandled_ != nullptr;};
    void deleteCallsHandled() { this->callsHandled_ = nullptr;};
    inline int64_t callsHandled() const { DARABONBA_PTR_GET_DEFAULT(callsHandled_, 0L) };
    inline GetInstanceTrendingReportResponseBodyDataInbound& setCallsHandled(int64_t callsHandled) { DARABONBA_PTR_SET_VALUE(callsHandled_, callsHandled) };


    // callsQueued Field Functions 
    bool hasCallsQueued() const { return this->callsQueued_ != nullptr;};
    void deleteCallsQueued() { this->callsQueued_ = nullptr;};
    inline int64_t callsQueued() const { DARABONBA_PTR_GET_DEFAULT(callsQueued_, 0L) };
    inline GetInstanceTrendingReportResponseBodyDataInbound& setCallsQueued(int64_t callsQueued) { DARABONBA_PTR_SET_VALUE(callsQueued_, callsQueued) };


    // statsTime Field Functions 
    bool hasStatsTime() const { return this->statsTime_ != nullptr;};
    void deleteStatsTime() { this->statsTime_ = nullptr;};
    inline int64_t statsTime() const { DARABONBA_PTR_GET_DEFAULT(statsTime_, 0L) };
    inline GetInstanceTrendingReportResponseBodyDataInbound& setStatsTime(int64_t statsTime) { DARABONBA_PTR_SET_VALUE(statsTime_, statsTime) };


    // totalCalls Field Functions 
    bool hasTotalCalls() const { return this->totalCalls_ != nullptr;};
    void deleteTotalCalls() { this->totalCalls_ = nullptr;};
    inline int64_t totalCalls() const { DARABONBA_PTR_GET_DEFAULT(totalCalls_, 0L) };
    inline GetInstanceTrendingReportResponseBodyDataInbound& setTotalCalls(int64_t totalCalls) { DARABONBA_PTR_SET_VALUE(totalCalls_, totalCalls) };


  protected:
    std::shared_ptr<int64_t> callsAbandonedInIVR_ = nullptr;
    std::shared_ptr<int64_t> callsAbandonedInQueue_ = nullptr;
    std::shared_ptr<int64_t> callsAbandonedInRing_ = nullptr;
    std::shared_ptr<int64_t> callsHandled_ = nullptr;
    std::shared_ptr<int64_t> callsQueued_ = nullptr;
    std::shared_ptr<int64_t> statsTime_ = nullptr;
    std::shared_ptr<int64_t> totalCalls_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
