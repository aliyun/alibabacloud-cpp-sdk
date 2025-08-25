// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINTERVALSKILLGROUPREPORTRESPONSEBODYDATAINBOUND_HPP_
#define ALIBABACLOUD_MODELS_LISTINTERVALSKILLGROUPREPORTRESPONSEBODYDATAINBOUND_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class ListIntervalSkillGroupReportResponseBodyDataInbound : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListIntervalSkillGroupReportResponseBodyDataInbound& obj) { 
      DARABONBA_PTR_TO_JSON(AbandonRate, abandonRate_);
      DARABONBA_PTR_TO_JSON(AverageAbandonTime, averageAbandonTime_);
      DARABONBA_PTR_TO_JSON(AverageAbandonedInQueueTime, averageAbandonedInQueueTime_);
      DARABONBA_PTR_TO_JSON(AverageAbandonedInRingTime, averageAbandonedInRingTime_);
      DARABONBA_PTR_TO_JSON(AverageFirstResponseTime, averageFirstResponseTime_);
      DARABONBA_PTR_TO_JSON(AverageHoldTime, averageHoldTime_);
      DARABONBA_PTR_TO_JSON(AverageResponseTime, averageResponseTime_);
      DARABONBA_PTR_TO_JSON(AverageRingTime, averageRingTime_);
      DARABONBA_PTR_TO_JSON(AverageTalkTime, averageTalkTime_);
      DARABONBA_PTR_TO_JSON(AverageWaitTime, averageWaitTime_);
      DARABONBA_PTR_TO_JSON(AverageWorkTime, averageWorkTime_);
      DARABONBA_PTR_TO_JSON(CallsAbandoned, callsAbandoned_);
      DARABONBA_PTR_TO_JSON(CallsAbandonedInQueue, callsAbandonedInQueue_);
      DARABONBA_PTR_TO_JSON(CallsAbandonedInRing, callsAbandonedInRing_);
      DARABONBA_PTR_TO_JSON(CallsAttendedTransferIn, callsAttendedTransferIn_);
      DARABONBA_PTR_TO_JSON(CallsAttendedTransferOut, callsAttendedTransferOut_);
      DARABONBA_PTR_TO_JSON(CallsBlindTransferIn, callsBlindTransferIn_);
      DARABONBA_PTR_TO_JSON(CallsBlindTransferOut, callsBlindTransferOut_);
      DARABONBA_PTR_TO_JSON(CallsHandled, callsHandled_);
      DARABONBA_PTR_TO_JSON(CallsHold, callsHold_);
      DARABONBA_PTR_TO_JSON(CallsOffered, callsOffered_);
      DARABONBA_PTR_TO_JSON(CallsOverflow, callsOverflow_);
      DARABONBA_PTR_TO_JSON(CallsQueued, callsQueued_);
      DARABONBA_PTR_TO_JSON(CallsQueuingOverflow, callsQueuingOverflow_);
      DARABONBA_PTR_TO_JSON(CallsQueuingTimeout, callsQueuingTimeout_);
      DARABONBA_PTR_TO_JSON(CallsRinged, callsRinged_);
      DARABONBA_PTR_TO_JSON(CallsTimeout, callsTimeout_);
      DARABONBA_PTR_TO_JSON(HandleRate, handleRate_);
      DARABONBA_PTR_TO_JSON(MaxAbandonTime, maxAbandonTime_);
      DARABONBA_PTR_TO_JSON(MaxAbandonedInQueueTime, maxAbandonedInQueueTime_);
      DARABONBA_PTR_TO_JSON(MaxAbandonedInRingTime, maxAbandonedInRingTime_);
      DARABONBA_PTR_TO_JSON(MaxHoldTime, maxHoldTime_);
      DARABONBA_PTR_TO_JSON(MaxRingTime, maxRingTime_);
      DARABONBA_PTR_TO_JSON(MaxTalkTime, maxTalkTime_);
      DARABONBA_PTR_TO_JSON(MaxWaitTime, maxWaitTime_);
      DARABONBA_PTR_TO_JSON(MaxWorkTime, maxWorkTime_);
      DARABONBA_PTR_TO_JSON(SatisfactionIndex, satisfactionIndex_);
      DARABONBA_PTR_TO_JSON(SatisfactionRate, satisfactionRate_);
      DARABONBA_PTR_TO_JSON(SatisfactionSurveysOffered, satisfactionSurveysOffered_);
      DARABONBA_PTR_TO_JSON(SatisfactionSurveysResponded, satisfactionSurveysResponded_);
      DARABONBA_PTR_TO_JSON(ServiceLevel20, serviceLevel20_);
      DARABONBA_PTR_TO_JSON(TotalAbandonTime, totalAbandonTime_);
      DARABONBA_PTR_TO_JSON(TotalAbandonedInQueueTime, totalAbandonedInQueueTime_);
      DARABONBA_PTR_TO_JSON(TotalAbandonedInRingTime, totalAbandonedInRingTime_);
      DARABONBA_PTR_TO_JSON(TotalHoldTime, totalHoldTime_);
      DARABONBA_PTR_TO_JSON(TotalMessagesSent, totalMessagesSent_);
      DARABONBA_PTR_TO_JSON(TotalMessagesSentByAgent, totalMessagesSentByAgent_);
      DARABONBA_PTR_TO_JSON(TotalMessagesSentByCustomer, totalMessagesSentByCustomer_);
      DARABONBA_PTR_TO_JSON(TotalRingTime, totalRingTime_);
      DARABONBA_PTR_TO_JSON(TotalTalkTime, totalTalkTime_);
      DARABONBA_PTR_TO_JSON(TotalWaitTime, totalWaitTime_);
      DARABONBA_PTR_TO_JSON(TotalWorkTime, totalWorkTime_);
    };
    friend void from_json(const Darabonba::Json& j, ListIntervalSkillGroupReportResponseBodyDataInbound& obj) { 
      DARABONBA_PTR_FROM_JSON(AbandonRate, abandonRate_);
      DARABONBA_PTR_FROM_JSON(AverageAbandonTime, averageAbandonTime_);
      DARABONBA_PTR_FROM_JSON(AverageAbandonedInQueueTime, averageAbandonedInQueueTime_);
      DARABONBA_PTR_FROM_JSON(AverageAbandonedInRingTime, averageAbandonedInRingTime_);
      DARABONBA_PTR_FROM_JSON(AverageFirstResponseTime, averageFirstResponseTime_);
      DARABONBA_PTR_FROM_JSON(AverageHoldTime, averageHoldTime_);
      DARABONBA_PTR_FROM_JSON(AverageResponseTime, averageResponseTime_);
      DARABONBA_PTR_FROM_JSON(AverageRingTime, averageRingTime_);
      DARABONBA_PTR_FROM_JSON(AverageTalkTime, averageTalkTime_);
      DARABONBA_PTR_FROM_JSON(AverageWaitTime, averageWaitTime_);
      DARABONBA_PTR_FROM_JSON(AverageWorkTime, averageWorkTime_);
      DARABONBA_PTR_FROM_JSON(CallsAbandoned, callsAbandoned_);
      DARABONBA_PTR_FROM_JSON(CallsAbandonedInQueue, callsAbandonedInQueue_);
      DARABONBA_PTR_FROM_JSON(CallsAbandonedInRing, callsAbandonedInRing_);
      DARABONBA_PTR_FROM_JSON(CallsAttendedTransferIn, callsAttendedTransferIn_);
      DARABONBA_PTR_FROM_JSON(CallsAttendedTransferOut, callsAttendedTransferOut_);
      DARABONBA_PTR_FROM_JSON(CallsBlindTransferIn, callsBlindTransferIn_);
      DARABONBA_PTR_FROM_JSON(CallsBlindTransferOut, callsBlindTransferOut_);
      DARABONBA_PTR_FROM_JSON(CallsHandled, callsHandled_);
      DARABONBA_PTR_FROM_JSON(CallsHold, callsHold_);
      DARABONBA_PTR_FROM_JSON(CallsOffered, callsOffered_);
      DARABONBA_PTR_FROM_JSON(CallsOverflow, callsOverflow_);
      DARABONBA_PTR_FROM_JSON(CallsQueued, callsQueued_);
      DARABONBA_PTR_FROM_JSON(CallsQueuingOverflow, callsQueuingOverflow_);
      DARABONBA_PTR_FROM_JSON(CallsQueuingTimeout, callsQueuingTimeout_);
      DARABONBA_PTR_FROM_JSON(CallsRinged, callsRinged_);
      DARABONBA_PTR_FROM_JSON(CallsTimeout, callsTimeout_);
      DARABONBA_PTR_FROM_JSON(HandleRate, handleRate_);
      DARABONBA_PTR_FROM_JSON(MaxAbandonTime, maxAbandonTime_);
      DARABONBA_PTR_FROM_JSON(MaxAbandonedInQueueTime, maxAbandonedInQueueTime_);
      DARABONBA_PTR_FROM_JSON(MaxAbandonedInRingTime, maxAbandonedInRingTime_);
      DARABONBA_PTR_FROM_JSON(MaxHoldTime, maxHoldTime_);
      DARABONBA_PTR_FROM_JSON(MaxRingTime, maxRingTime_);
      DARABONBA_PTR_FROM_JSON(MaxTalkTime, maxTalkTime_);
      DARABONBA_PTR_FROM_JSON(MaxWaitTime, maxWaitTime_);
      DARABONBA_PTR_FROM_JSON(MaxWorkTime, maxWorkTime_);
      DARABONBA_PTR_FROM_JSON(SatisfactionIndex, satisfactionIndex_);
      DARABONBA_PTR_FROM_JSON(SatisfactionRate, satisfactionRate_);
      DARABONBA_PTR_FROM_JSON(SatisfactionSurveysOffered, satisfactionSurveysOffered_);
      DARABONBA_PTR_FROM_JSON(SatisfactionSurveysResponded, satisfactionSurveysResponded_);
      DARABONBA_PTR_FROM_JSON(ServiceLevel20, serviceLevel20_);
      DARABONBA_PTR_FROM_JSON(TotalAbandonTime, totalAbandonTime_);
      DARABONBA_PTR_FROM_JSON(TotalAbandonedInQueueTime, totalAbandonedInQueueTime_);
      DARABONBA_PTR_FROM_JSON(TotalAbandonedInRingTime, totalAbandonedInRingTime_);
      DARABONBA_PTR_FROM_JSON(TotalHoldTime, totalHoldTime_);
      DARABONBA_PTR_FROM_JSON(TotalMessagesSent, totalMessagesSent_);
      DARABONBA_PTR_FROM_JSON(TotalMessagesSentByAgent, totalMessagesSentByAgent_);
      DARABONBA_PTR_FROM_JSON(TotalMessagesSentByCustomer, totalMessagesSentByCustomer_);
      DARABONBA_PTR_FROM_JSON(TotalRingTime, totalRingTime_);
      DARABONBA_PTR_FROM_JSON(TotalTalkTime, totalTalkTime_);
      DARABONBA_PTR_FROM_JSON(TotalWaitTime, totalWaitTime_);
      DARABONBA_PTR_FROM_JSON(TotalWorkTime, totalWorkTime_);
    };
    ListIntervalSkillGroupReportResponseBodyDataInbound() = default ;
    ListIntervalSkillGroupReportResponseBodyDataInbound(const ListIntervalSkillGroupReportResponseBodyDataInbound &) = default ;
    ListIntervalSkillGroupReportResponseBodyDataInbound(ListIntervalSkillGroupReportResponseBodyDataInbound &&) = default ;
    ListIntervalSkillGroupReportResponseBodyDataInbound(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListIntervalSkillGroupReportResponseBodyDataInbound() = default ;
    ListIntervalSkillGroupReportResponseBodyDataInbound& operator=(const ListIntervalSkillGroupReportResponseBodyDataInbound &) = default ;
    ListIntervalSkillGroupReportResponseBodyDataInbound& operator=(ListIntervalSkillGroupReportResponseBodyDataInbound &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->abandonRate_ != nullptr
        && this->averageAbandonTime_ != nullptr && this->averageAbandonedInQueueTime_ != nullptr && this->averageAbandonedInRingTime_ != nullptr && this->averageFirstResponseTime_ != nullptr && this->averageHoldTime_ != nullptr
        && this->averageResponseTime_ != nullptr && this->averageRingTime_ != nullptr && this->averageTalkTime_ != nullptr && this->averageWaitTime_ != nullptr && this->averageWorkTime_ != nullptr
        && this->callsAbandoned_ != nullptr && this->callsAbandonedInQueue_ != nullptr && this->callsAbandonedInRing_ != nullptr && this->callsAttendedTransferIn_ != nullptr && this->callsAttendedTransferOut_ != nullptr
        && this->callsBlindTransferIn_ != nullptr && this->callsBlindTransferOut_ != nullptr && this->callsHandled_ != nullptr && this->callsHold_ != nullptr && this->callsOffered_ != nullptr
        && this->callsOverflow_ != nullptr && this->callsQueued_ != nullptr && this->callsQueuingOverflow_ != nullptr && this->callsQueuingTimeout_ != nullptr && this->callsRinged_ != nullptr
        && this->callsTimeout_ != nullptr && this->handleRate_ != nullptr && this->maxAbandonTime_ != nullptr && this->maxAbandonedInQueueTime_ != nullptr && this->maxAbandonedInRingTime_ != nullptr
        && this->maxHoldTime_ != nullptr && this->maxRingTime_ != nullptr && this->maxTalkTime_ != nullptr && this->maxWaitTime_ != nullptr && this->maxWorkTime_ != nullptr
        && this->satisfactionIndex_ != nullptr && this->satisfactionRate_ != nullptr && this->satisfactionSurveysOffered_ != nullptr && this->satisfactionSurveysResponded_ != nullptr && this->serviceLevel20_ != nullptr
        && this->totalAbandonTime_ != nullptr && this->totalAbandonedInQueueTime_ != nullptr && this->totalAbandonedInRingTime_ != nullptr && this->totalHoldTime_ != nullptr && this->totalMessagesSent_ != nullptr
        && this->totalMessagesSentByAgent_ != nullptr && this->totalMessagesSentByCustomer_ != nullptr && this->totalRingTime_ != nullptr && this->totalTalkTime_ != nullptr && this->totalWaitTime_ != nullptr
        && this->totalWorkTime_ != nullptr; };
    // abandonRate Field Functions 
    bool hasAbandonRate() const { return this->abandonRate_ != nullptr;};
    void deleteAbandonRate() { this->abandonRate_ = nullptr;};
    inline float abandonRate() const { DARABONBA_PTR_GET_DEFAULT(abandonRate_, 0.0) };
    inline ListIntervalSkillGroupReportResponseBodyDataInbound& setAbandonRate(float abandonRate) { DARABONBA_PTR_SET_VALUE(abandonRate_, abandonRate) };


    // averageAbandonTime Field Functions 
    bool hasAverageAbandonTime() const { return this->averageAbandonTime_ != nullptr;};
    void deleteAverageAbandonTime() { this->averageAbandonTime_ = nullptr;};
    inline float averageAbandonTime() const { DARABONBA_PTR_GET_DEFAULT(averageAbandonTime_, 0.0) };
    inline ListIntervalSkillGroupReportResponseBodyDataInbound& setAverageAbandonTime(float averageAbandonTime) { DARABONBA_PTR_SET_VALUE(averageAbandonTime_, averageAbandonTime) };


    // averageAbandonedInQueueTime Field Functions 
    bool hasAverageAbandonedInQueueTime() const { return this->averageAbandonedInQueueTime_ != nullptr;};
    void deleteAverageAbandonedInQueueTime() { this->averageAbandonedInQueueTime_ = nullptr;};
    inline float averageAbandonedInQueueTime() const { DARABONBA_PTR_GET_DEFAULT(averageAbandonedInQueueTime_, 0.0) };
    inline ListIntervalSkillGroupReportResponseBodyDataInbound& setAverageAbandonedInQueueTime(float averageAbandonedInQueueTime) { DARABONBA_PTR_SET_VALUE(averageAbandonedInQueueTime_, averageAbandonedInQueueTime) };


    // averageAbandonedInRingTime Field Functions 
    bool hasAverageAbandonedInRingTime() const { return this->averageAbandonedInRingTime_ != nullptr;};
    void deleteAverageAbandonedInRingTime() { this->averageAbandonedInRingTime_ = nullptr;};
    inline float averageAbandonedInRingTime() const { DARABONBA_PTR_GET_DEFAULT(averageAbandonedInRingTime_, 0.0) };
    inline ListIntervalSkillGroupReportResponseBodyDataInbound& setAverageAbandonedInRingTime(float averageAbandonedInRingTime) { DARABONBA_PTR_SET_VALUE(averageAbandonedInRingTime_, averageAbandonedInRingTime) };


    // averageFirstResponseTime Field Functions 
    bool hasAverageFirstResponseTime() const { return this->averageFirstResponseTime_ != nullptr;};
    void deleteAverageFirstResponseTime() { this->averageFirstResponseTime_ = nullptr;};
    inline float averageFirstResponseTime() const { DARABONBA_PTR_GET_DEFAULT(averageFirstResponseTime_, 0.0) };
    inline ListIntervalSkillGroupReportResponseBodyDataInbound& setAverageFirstResponseTime(float averageFirstResponseTime) { DARABONBA_PTR_SET_VALUE(averageFirstResponseTime_, averageFirstResponseTime) };


    // averageHoldTime Field Functions 
    bool hasAverageHoldTime() const { return this->averageHoldTime_ != nullptr;};
    void deleteAverageHoldTime() { this->averageHoldTime_ = nullptr;};
    inline float averageHoldTime() const { DARABONBA_PTR_GET_DEFAULT(averageHoldTime_, 0.0) };
    inline ListIntervalSkillGroupReportResponseBodyDataInbound& setAverageHoldTime(float averageHoldTime) { DARABONBA_PTR_SET_VALUE(averageHoldTime_, averageHoldTime) };


    // averageResponseTime Field Functions 
    bool hasAverageResponseTime() const { return this->averageResponseTime_ != nullptr;};
    void deleteAverageResponseTime() { this->averageResponseTime_ = nullptr;};
    inline float averageResponseTime() const { DARABONBA_PTR_GET_DEFAULT(averageResponseTime_, 0.0) };
    inline ListIntervalSkillGroupReportResponseBodyDataInbound& setAverageResponseTime(float averageResponseTime) { DARABONBA_PTR_SET_VALUE(averageResponseTime_, averageResponseTime) };


    // averageRingTime Field Functions 
    bool hasAverageRingTime() const { return this->averageRingTime_ != nullptr;};
    void deleteAverageRingTime() { this->averageRingTime_ = nullptr;};
    inline float averageRingTime() const { DARABONBA_PTR_GET_DEFAULT(averageRingTime_, 0.0) };
    inline ListIntervalSkillGroupReportResponseBodyDataInbound& setAverageRingTime(float averageRingTime) { DARABONBA_PTR_SET_VALUE(averageRingTime_, averageRingTime) };


    // averageTalkTime Field Functions 
    bool hasAverageTalkTime() const { return this->averageTalkTime_ != nullptr;};
    void deleteAverageTalkTime() { this->averageTalkTime_ = nullptr;};
    inline float averageTalkTime() const { DARABONBA_PTR_GET_DEFAULT(averageTalkTime_, 0.0) };
    inline ListIntervalSkillGroupReportResponseBodyDataInbound& setAverageTalkTime(float averageTalkTime) { DARABONBA_PTR_SET_VALUE(averageTalkTime_, averageTalkTime) };


    // averageWaitTime Field Functions 
    bool hasAverageWaitTime() const { return this->averageWaitTime_ != nullptr;};
    void deleteAverageWaitTime() { this->averageWaitTime_ = nullptr;};
    inline float averageWaitTime() const { DARABONBA_PTR_GET_DEFAULT(averageWaitTime_, 0.0) };
    inline ListIntervalSkillGroupReportResponseBodyDataInbound& setAverageWaitTime(float averageWaitTime) { DARABONBA_PTR_SET_VALUE(averageWaitTime_, averageWaitTime) };


    // averageWorkTime Field Functions 
    bool hasAverageWorkTime() const { return this->averageWorkTime_ != nullptr;};
    void deleteAverageWorkTime() { this->averageWorkTime_ = nullptr;};
    inline float averageWorkTime() const { DARABONBA_PTR_GET_DEFAULT(averageWorkTime_, 0.0) };
    inline ListIntervalSkillGroupReportResponseBodyDataInbound& setAverageWorkTime(float averageWorkTime) { DARABONBA_PTR_SET_VALUE(averageWorkTime_, averageWorkTime) };


    // callsAbandoned Field Functions 
    bool hasCallsAbandoned() const { return this->callsAbandoned_ != nullptr;};
    void deleteCallsAbandoned() { this->callsAbandoned_ = nullptr;};
    inline int64_t callsAbandoned() const { DARABONBA_PTR_GET_DEFAULT(callsAbandoned_, 0L) };
    inline ListIntervalSkillGroupReportResponseBodyDataInbound& setCallsAbandoned(int64_t callsAbandoned) { DARABONBA_PTR_SET_VALUE(callsAbandoned_, callsAbandoned) };


    // callsAbandonedInQueue Field Functions 
    bool hasCallsAbandonedInQueue() const { return this->callsAbandonedInQueue_ != nullptr;};
    void deleteCallsAbandonedInQueue() { this->callsAbandonedInQueue_ = nullptr;};
    inline int64_t callsAbandonedInQueue() const { DARABONBA_PTR_GET_DEFAULT(callsAbandonedInQueue_, 0L) };
    inline ListIntervalSkillGroupReportResponseBodyDataInbound& setCallsAbandonedInQueue(int64_t callsAbandonedInQueue) { DARABONBA_PTR_SET_VALUE(callsAbandonedInQueue_, callsAbandonedInQueue) };


    // callsAbandonedInRing Field Functions 
    bool hasCallsAbandonedInRing() const { return this->callsAbandonedInRing_ != nullptr;};
    void deleteCallsAbandonedInRing() { this->callsAbandonedInRing_ = nullptr;};
    inline int64_t callsAbandonedInRing() const { DARABONBA_PTR_GET_DEFAULT(callsAbandonedInRing_, 0L) };
    inline ListIntervalSkillGroupReportResponseBodyDataInbound& setCallsAbandonedInRing(int64_t callsAbandonedInRing) { DARABONBA_PTR_SET_VALUE(callsAbandonedInRing_, callsAbandonedInRing) };


    // callsAttendedTransferIn Field Functions 
    bool hasCallsAttendedTransferIn() const { return this->callsAttendedTransferIn_ != nullptr;};
    void deleteCallsAttendedTransferIn() { this->callsAttendedTransferIn_ = nullptr;};
    inline int64_t callsAttendedTransferIn() const { DARABONBA_PTR_GET_DEFAULT(callsAttendedTransferIn_, 0L) };
    inline ListIntervalSkillGroupReportResponseBodyDataInbound& setCallsAttendedTransferIn(int64_t callsAttendedTransferIn) { DARABONBA_PTR_SET_VALUE(callsAttendedTransferIn_, callsAttendedTransferIn) };


    // callsAttendedTransferOut Field Functions 
    bool hasCallsAttendedTransferOut() const { return this->callsAttendedTransferOut_ != nullptr;};
    void deleteCallsAttendedTransferOut() { this->callsAttendedTransferOut_ = nullptr;};
    inline int64_t callsAttendedTransferOut() const { DARABONBA_PTR_GET_DEFAULT(callsAttendedTransferOut_, 0L) };
    inline ListIntervalSkillGroupReportResponseBodyDataInbound& setCallsAttendedTransferOut(int64_t callsAttendedTransferOut) { DARABONBA_PTR_SET_VALUE(callsAttendedTransferOut_, callsAttendedTransferOut) };


    // callsBlindTransferIn Field Functions 
    bool hasCallsBlindTransferIn() const { return this->callsBlindTransferIn_ != nullptr;};
    void deleteCallsBlindTransferIn() { this->callsBlindTransferIn_ = nullptr;};
    inline int64_t callsBlindTransferIn() const { DARABONBA_PTR_GET_DEFAULT(callsBlindTransferIn_, 0L) };
    inline ListIntervalSkillGroupReportResponseBodyDataInbound& setCallsBlindTransferIn(int64_t callsBlindTransferIn) { DARABONBA_PTR_SET_VALUE(callsBlindTransferIn_, callsBlindTransferIn) };


    // callsBlindTransferOut Field Functions 
    bool hasCallsBlindTransferOut() const { return this->callsBlindTransferOut_ != nullptr;};
    void deleteCallsBlindTransferOut() { this->callsBlindTransferOut_ = nullptr;};
    inline int64_t callsBlindTransferOut() const { DARABONBA_PTR_GET_DEFAULT(callsBlindTransferOut_, 0L) };
    inline ListIntervalSkillGroupReportResponseBodyDataInbound& setCallsBlindTransferOut(int64_t callsBlindTransferOut) { DARABONBA_PTR_SET_VALUE(callsBlindTransferOut_, callsBlindTransferOut) };


    // callsHandled Field Functions 
    bool hasCallsHandled() const { return this->callsHandled_ != nullptr;};
    void deleteCallsHandled() { this->callsHandled_ = nullptr;};
    inline int64_t callsHandled() const { DARABONBA_PTR_GET_DEFAULT(callsHandled_, 0L) };
    inline ListIntervalSkillGroupReportResponseBodyDataInbound& setCallsHandled(int64_t callsHandled) { DARABONBA_PTR_SET_VALUE(callsHandled_, callsHandled) };


    // callsHold Field Functions 
    bool hasCallsHold() const { return this->callsHold_ != nullptr;};
    void deleteCallsHold() { this->callsHold_ = nullptr;};
    inline int64_t callsHold() const { DARABONBA_PTR_GET_DEFAULT(callsHold_, 0L) };
    inline ListIntervalSkillGroupReportResponseBodyDataInbound& setCallsHold(int64_t callsHold) { DARABONBA_PTR_SET_VALUE(callsHold_, callsHold) };


    // callsOffered Field Functions 
    bool hasCallsOffered() const { return this->callsOffered_ != nullptr;};
    void deleteCallsOffered() { this->callsOffered_ = nullptr;};
    inline int64_t callsOffered() const { DARABONBA_PTR_GET_DEFAULT(callsOffered_, 0L) };
    inline ListIntervalSkillGroupReportResponseBodyDataInbound& setCallsOffered(int64_t callsOffered) { DARABONBA_PTR_SET_VALUE(callsOffered_, callsOffered) };


    // callsOverflow Field Functions 
    bool hasCallsOverflow() const { return this->callsOverflow_ != nullptr;};
    void deleteCallsOverflow() { this->callsOverflow_ = nullptr;};
    inline int64_t callsOverflow() const { DARABONBA_PTR_GET_DEFAULT(callsOverflow_, 0L) };
    inline ListIntervalSkillGroupReportResponseBodyDataInbound& setCallsOverflow(int64_t callsOverflow) { DARABONBA_PTR_SET_VALUE(callsOverflow_, callsOverflow) };


    // callsQueued Field Functions 
    bool hasCallsQueued() const { return this->callsQueued_ != nullptr;};
    void deleteCallsQueued() { this->callsQueued_ = nullptr;};
    inline int64_t callsQueued() const { DARABONBA_PTR_GET_DEFAULT(callsQueued_, 0L) };
    inline ListIntervalSkillGroupReportResponseBodyDataInbound& setCallsQueued(int64_t callsQueued) { DARABONBA_PTR_SET_VALUE(callsQueued_, callsQueued) };


    // callsQueuingOverflow Field Functions 
    bool hasCallsQueuingOverflow() const { return this->callsQueuingOverflow_ != nullptr;};
    void deleteCallsQueuingOverflow() { this->callsQueuingOverflow_ = nullptr;};
    inline int64_t callsQueuingOverflow() const { DARABONBA_PTR_GET_DEFAULT(callsQueuingOverflow_, 0L) };
    inline ListIntervalSkillGroupReportResponseBodyDataInbound& setCallsQueuingOverflow(int64_t callsQueuingOverflow) { DARABONBA_PTR_SET_VALUE(callsQueuingOverflow_, callsQueuingOverflow) };


    // callsQueuingTimeout Field Functions 
    bool hasCallsQueuingTimeout() const { return this->callsQueuingTimeout_ != nullptr;};
    void deleteCallsQueuingTimeout() { this->callsQueuingTimeout_ = nullptr;};
    inline int64_t callsQueuingTimeout() const { DARABONBA_PTR_GET_DEFAULT(callsQueuingTimeout_, 0L) };
    inline ListIntervalSkillGroupReportResponseBodyDataInbound& setCallsQueuingTimeout(int64_t callsQueuingTimeout) { DARABONBA_PTR_SET_VALUE(callsQueuingTimeout_, callsQueuingTimeout) };


    // callsRinged Field Functions 
    bool hasCallsRinged() const { return this->callsRinged_ != nullptr;};
    void deleteCallsRinged() { this->callsRinged_ = nullptr;};
    inline int64_t callsRinged() const { DARABONBA_PTR_GET_DEFAULT(callsRinged_, 0L) };
    inline ListIntervalSkillGroupReportResponseBodyDataInbound& setCallsRinged(int64_t callsRinged) { DARABONBA_PTR_SET_VALUE(callsRinged_, callsRinged) };


    // callsTimeout Field Functions 
    bool hasCallsTimeout() const { return this->callsTimeout_ != nullptr;};
    void deleteCallsTimeout() { this->callsTimeout_ = nullptr;};
    inline int64_t callsTimeout() const { DARABONBA_PTR_GET_DEFAULT(callsTimeout_, 0L) };
    inline ListIntervalSkillGroupReportResponseBodyDataInbound& setCallsTimeout(int64_t callsTimeout) { DARABONBA_PTR_SET_VALUE(callsTimeout_, callsTimeout) };


    // handleRate Field Functions 
    bool hasHandleRate() const { return this->handleRate_ != nullptr;};
    void deleteHandleRate() { this->handleRate_ = nullptr;};
    inline float handleRate() const { DARABONBA_PTR_GET_DEFAULT(handleRate_, 0.0) };
    inline ListIntervalSkillGroupReportResponseBodyDataInbound& setHandleRate(float handleRate) { DARABONBA_PTR_SET_VALUE(handleRate_, handleRate) };


    // maxAbandonTime Field Functions 
    bool hasMaxAbandonTime() const { return this->maxAbandonTime_ != nullptr;};
    void deleteMaxAbandonTime() { this->maxAbandonTime_ = nullptr;};
    inline int64_t maxAbandonTime() const { DARABONBA_PTR_GET_DEFAULT(maxAbandonTime_, 0L) };
    inline ListIntervalSkillGroupReportResponseBodyDataInbound& setMaxAbandonTime(int64_t maxAbandonTime) { DARABONBA_PTR_SET_VALUE(maxAbandonTime_, maxAbandonTime) };


    // maxAbandonedInQueueTime Field Functions 
    bool hasMaxAbandonedInQueueTime() const { return this->maxAbandonedInQueueTime_ != nullptr;};
    void deleteMaxAbandonedInQueueTime() { this->maxAbandonedInQueueTime_ = nullptr;};
    inline int64_t maxAbandonedInQueueTime() const { DARABONBA_PTR_GET_DEFAULT(maxAbandonedInQueueTime_, 0L) };
    inline ListIntervalSkillGroupReportResponseBodyDataInbound& setMaxAbandonedInQueueTime(int64_t maxAbandonedInQueueTime) { DARABONBA_PTR_SET_VALUE(maxAbandonedInQueueTime_, maxAbandonedInQueueTime) };


    // maxAbandonedInRingTime Field Functions 
    bool hasMaxAbandonedInRingTime() const { return this->maxAbandonedInRingTime_ != nullptr;};
    void deleteMaxAbandonedInRingTime() { this->maxAbandonedInRingTime_ = nullptr;};
    inline int64_t maxAbandonedInRingTime() const { DARABONBA_PTR_GET_DEFAULT(maxAbandonedInRingTime_, 0L) };
    inline ListIntervalSkillGroupReportResponseBodyDataInbound& setMaxAbandonedInRingTime(int64_t maxAbandonedInRingTime) { DARABONBA_PTR_SET_VALUE(maxAbandonedInRingTime_, maxAbandonedInRingTime) };


    // maxHoldTime Field Functions 
    bool hasMaxHoldTime() const { return this->maxHoldTime_ != nullptr;};
    void deleteMaxHoldTime() { this->maxHoldTime_ = nullptr;};
    inline int64_t maxHoldTime() const { DARABONBA_PTR_GET_DEFAULT(maxHoldTime_, 0L) };
    inline ListIntervalSkillGroupReportResponseBodyDataInbound& setMaxHoldTime(int64_t maxHoldTime) { DARABONBA_PTR_SET_VALUE(maxHoldTime_, maxHoldTime) };


    // maxRingTime Field Functions 
    bool hasMaxRingTime() const { return this->maxRingTime_ != nullptr;};
    void deleteMaxRingTime() { this->maxRingTime_ = nullptr;};
    inline int64_t maxRingTime() const { DARABONBA_PTR_GET_DEFAULT(maxRingTime_, 0L) };
    inline ListIntervalSkillGroupReportResponseBodyDataInbound& setMaxRingTime(int64_t maxRingTime) { DARABONBA_PTR_SET_VALUE(maxRingTime_, maxRingTime) };


    // maxTalkTime Field Functions 
    bool hasMaxTalkTime() const { return this->maxTalkTime_ != nullptr;};
    void deleteMaxTalkTime() { this->maxTalkTime_ = nullptr;};
    inline int64_t maxTalkTime() const { DARABONBA_PTR_GET_DEFAULT(maxTalkTime_, 0L) };
    inline ListIntervalSkillGroupReportResponseBodyDataInbound& setMaxTalkTime(int64_t maxTalkTime) { DARABONBA_PTR_SET_VALUE(maxTalkTime_, maxTalkTime) };


    // maxWaitTime Field Functions 
    bool hasMaxWaitTime() const { return this->maxWaitTime_ != nullptr;};
    void deleteMaxWaitTime() { this->maxWaitTime_ = nullptr;};
    inline int64_t maxWaitTime() const { DARABONBA_PTR_GET_DEFAULT(maxWaitTime_, 0L) };
    inline ListIntervalSkillGroupReportResponseBodyDataInbound& setMaxWaitTime(int64_t maxWaitTime) { DARABONBA_PTR_SET_VALUE(maxWaitTime_, maxWaitTime) };


    // maxWorkTime Field Functions 
    bool hasMaxWorkTime() const { return this->maxWorkTime_ != nullptr;};
    void deleteMaxWorkTime() { this->maxWorkTime_ = nullptr;};
    inline int64_t maxWorkTime() const { DARABONBA_PTR_GET_DEFAULT(maxWorkTime_, 0L) };
    inline ListIntervalSkillGroupReportResponseBodyDataInbound& setMaxWorkTime(int64_t maxWorkTime) { DARABONBA_PTR_SET_VALUE(maxWorkTime_, maxWorkTime) };


    // satisfactionIndex Field Functions 
    bool hasSatisfactionIndex() const { return this->satisfactionIndex_ != nullptr;};
    void deleteSatisfactionIndex() { this->satisfactionIndex_ = nullptr;};
    inline float satisfactionIndex() const { DARABONBA_PTR_GET_DEFAULT(satisfactionIndex_, 0.0) };
    inline ListIntervalSkillGroupReportResponseBodyDataInbound& setSatisfactionIndex(float satisfactionIndex) { DARABONBA_PTR_SET_VALUE(satisfactionIndex_, satisfactionIndex) };


    // satisfactionRate Field Functions 
    bool hasSatisfactionRate() const { return this->satisfactionRate_ != nullptr;};
    void deleteSatisfactionRate() { this->satisfactionRate_ = nullptr;};
    inline float satisfactionRate() const { DARABONBA_PTR_GET_DEFAULT(satisfactionRate_, 0.0) };
    inline ListIntervalSkillGroupReportResponseBodyDataInbound& setSatisfactionRate(float satisfactionRate) { DARABONBA_PTR_SET_VALUE(satisfactionRate_, satisfactionRate) };


    // satisfactionSurveysOffered Field Functions 
    bool hasSatisfactionSurveysOffered() const { return this->satisfactionSurveysOffered_ != nullptr;};
    void deleteSatisfactionSurveysOffered() { this->satisfactionSurveysOffered_ = nullptr;};
    inline int64_t satisfactionSurveysOffered() const { DARABONBA_PTR_GET_DEFAULT(satisfactionSurveysOffered_, 0L) };
    inline ListIntervalSkillGroupReportResponseBodyDataInbound& setSatisfactionSurveysOffered(int64_t satisfactionSurveysOffered) { DARABONBA_PTR_SET_VALUE(satisfactionSurveysOffered_, satisfactionSurveysOffered) };


    // satisfactionSurveysResponded Field Functions 
    bool hasSatisfactionSurveysResponded() const { return this->satisfactionSurveysResponded_ != nullptr;};
    void deleteSatisfactionSurveysResponded() { this->satisfactionSurveysResponded_ = nullptr;};
    inline int64_t satisfactionSurveysResponded() const { DARABONBA_PTR_GET_DEFAULT(satisfactionSurveysResponded_, 0L) };
    inline ListIntervalSkillGroupReportResponseBodyDataInbound& setSatisfactionSurveysResponded(int64_t satisfactionSurveysResponded) { DARABONBA_PTR_SET_VALUE(satisfactionSurveysResponded_, satisfactionSurveysResponded) };


    // serviceLevel20 Field Functions 
    bool hasServiceLevel20() const { return this->serviceLevel20_ != nullptr;};
    void deleteServiceLevel20() { this->serviceLevel20_ = nullptr;};
    inline float serviceLevel20() const { DARABONBA_PTR_GET_DEFAULT(serviceLevel20_, 0.0) };
    inline ListIntervalSkillGroupReportResponseBodyDataInbound& setServiceLevel20(float serviceLevel20) { DARABONBA_PTR_SET_VALUE(serviceLevel20_, serviceLevel20) };


    // totalAbandonTime Field Functions 
    bool hasTotalAbandonTime() const { return this->totalAbandonTime_ != nullptr;};
    void deleteTotalAbandonTime() { this->totalAbandonTime_ = nullptr;};
    inline int64_t totalAbandonTime() const { DARABONBA_PTR_GET_DEFAULT(totalAbandonTime_, 0L) };
    inline ListIntervalSkillGroupReportResponseBodyDataInbound& setTotalAbandonTime(int64_t totalAbandonTime) { DARABONBA_PTR_SET_VALUE(totalAbandonTime_, totalAbandonTime) };


    // totalAbandonedInQueueTime Field Functions 
    bool hasTotalAbandonedInQueueTime() const { return this->totalAbandonedInQueueTime_ != nullptr;};
    void deleteTotalAbandonedInQueueTime() { this->totalAbandonedInQueueTime_ = nullptr;};
    inline int64_t totalAbandonedInQueueTime() const { DARABONBA_PTR_GET_DEFAULT(totalAbandonedInQueueTime_, 0L) };
    inline ListIntervalSkillGroupReportResponseBodyDataInbound& setTotalAbandonedInQueueTime(int64_t totalAbandonedInQueueTime) { DARABONBA_PTR_SET_VALUE(totalAbandonedInQueueTime_, totalAbandonedInQueueTime) };


    // totalAbandonedInRingTime Field Functions 
    bool hasTotalAbandonedInRingTime() const { return this->totalAbandonedInRingTime_ != nullptr;};
    void deleteTotalAbandonedInRingTime() { this->totalAbandonedInRingTime_ = nullptr;};
    inline int64_t totalAbandonedInRingTime() const { DARABONBA_PTR_GET_DEFAULT(totalAbandonedInRingTime_, 0L) };
    inline ListIntervalSkillGroupReportResponseBodyDataInbound& setTotalAbandonedInRingTime(int64_t totalAbandonedInRingTime) { DARABONBA_PTR_SET_VALUE(totalAbandonedInRingTime_, totalAbandonedInRingTime) };


    // totalHoldTime Field Functions 
    bool hasTotalHoldTime() const { return this->totalHoldTime_ != nullptr;};
    void deleteTotalHoldTime() { this->totalHoldTime_ = nullptr;};
    inline int64_t totalHoldTime() const { DARABONBA_PTR_GET_DEFAULT(totalHoldTime_, 0L) };
    inline ListIntervalSkillGroupReportResponseBodyDataInbound& setTotalHoldTime(int64_t totalHoldTime) { DARABONBA_PTR_SET_VALUE(totalHoldTime_, totalHoldTime) };


    // totalMessagesSent Field Functions 
    bool hasTotalMessagesSent() const { return this->totalMessagesSent_ != nullptr;};
    void deleteTotalMessagesSent() { this->totalMessagesSent_ = nullptr;};
    inline int64_t totalMessagesSent() const { DARABONBA_PTR_GET_DEFAULT(totalMessagesSent_, 0L) };
    inline ListIntervalSkillGroupReportResponseBodyDataInbound& setTotalMessagesSent(int64_t totalMessagesSent) { DARABONBA_PTR_SET_VALUE(totalMessagesSent_, totalMessagesSent) };


    // totalMessagesSentByAgent Field Functions 
    bool hasTotalMessagesSentByAgent() const { return this->totalMessagesSentByAgent_ != nullptr;};
    void deleteTotalMessagesSentByAgent() { this->totalMessagesSentByAgent_ = nullptr;};
    inline int64_t totalMessagesSentByAgent() const { DARABONBA_PTR_GET_DEFAULT(totalMessagesSentByAgent_, 0L) };
    inline ListIntervalSkillGroupReportResponseBodyDataInbound& setTotalMessagesSentByAgent(int64_t totalMessagesSentByAgent) { DARABONBA_PTR_SET_VALUE(totalMessagesSentByAgent_, totalMessagesSentByAgent) };


    // totalMessagesSentByCustomer Field Functions 
    bool hasTotalMessagesSentByCustomer() const { return this->totalMessagesSentByCustomer_ != nullptr;};
    void deleteTotalMessagesSentByCustomer() { this->totalMessagesSentByCustomer_ = nullptr;};
    inline int64_t totalMessagesSentByCustomer() const { DARABONBA_PTR_GET_DEFAULT(totalMessagesSentByCustomer_, 0L) };
    inline ListIntervalSkillGroupReportResponseBodyDataInbound& setTotalMessagesSentByCustomer(int64_t totalMessagesSentByCustomer) { DARABONBA_PTR_SET_VALUE(totalMessagesSentByCustomer_, totalMessagesSentByCustomer) };


    // totalRingTime Field Functions 
    bool hasTotalRingTime() const { return this->totalRingTime_ != nullptr;};
    void deleteTotalRingTime() { this->totalRingTime_ = nullptr;};
    inline int64_t totalRingTime() const { DARABONBA_PTR_GET_DEFAULT(totalRingTime_, 0L) };
    inline ListIntervalSkillGroupReportResponseBodyDataInbound& setTotalRingTime(int64_t totalRingTime) { DARABONBA_PTR_SET_VALUE(totalRingTime_, totalRingTime) };


    // totalTalkTime Field Functions 
    bool hasTotalTalkTime() const { return this->totalTalkTime_ != nullptr;};
    void deleteTotalTalkTime() { this->totalTalkTime_ = nullptr;};
    inline int64_t totalTalkTime() const { DARABONBA_PTR_GET_DEFAULT(totalTalkTime_, 0L) };
    inline ListIntervalSkillGroupReportResponseBodyDataInbound& setTotalTalkTime(int64_t totalTalkTime) { DARABONBA_PTR_SET_VALUE(totalTalkTime_, totalTalkTime) };


    // totalWaitTime Field Functions 
    bool hasTotalWaitTime() const { return this->totalWaitTime_ != nullptr;};
    void deleteTotalWaitTime() { this->totalWaitTime_ = nullptr;};
    inline int64_t totalWaitTime() const { DARABONBA_PTR_GET_DEFAULT(totalWaitTime_, 0L) };
    inline ListIntervalSkillGroupReportResponseBodyDataInbound& setTotalWaitTime(int64_t totalWaitTime) { DARABONBA_PTR_SET_VALUE(totalWaitTime_, totalWaitTime) };


    // totalWorkTime Field Functions 
    bool hasTotalWorkTime() const { return this->totalWorkTime_ != nullptr;};
    void deleteTotalWorkTime() { this->totalWorkTime_ = nullptr;};
    inline int64_t totalWorkTime() const { DARABONBA_PTR_GET_DEFAULT(totalWorkTime_, 0L) };
    inline ListIntervalSkillGroupReportResponseBodyDataInbound& setTotalWorkTime(int64_t totalWorkTime) { DARABONBA_PTR_SET_VALUE(totalWorkTime_, totalWorkTime) };


  protected:
    std::shared_ptr<float> abandonRate_ = nullptr;
    std::shared_ptr<float> averageAbandonTime_ = nullptr;
    std::shared_ptr<float> averageAbandonedInQueueTime_ = nullptr;
    std::shared_ptr<float> averageAbandonedInRingTime_ = nullptr;
    std::shared_ptr<float> averageFirstResponseTime_ = nullptr;
    std::shared_ptr<float> averageHoldTime_ = nullptr;
    std::shared_ptr<float> averageResponseTime_ = nullptr;
    std::shared_ptr<float> averageRingTime_ = nullptr;
    std::shared_ptr<float> averageTalkTime_ = nullptr;
    std::shared_ptr<float> averageWaitTime_ = nullptr;
    std::shared_ptr<float> averageWorkTime_ = nullptr;
    std::shared_ptr<int64_t> callsAbandoned_ = nullptr;
    std::shared_ptr<int64_t> callsAbandonedInQueue_ = nullptr;
    std::shared_ptr<int64_t> callsAbandonedInRing_ = nullptr;
    std::shared_ptr<int64_t> callsAttendedTransferIn_ = nullptr;
    std::shared_ptr<int64_t> callsAttendedTransferOut_ = nullptr;
    std::shared_ptr<int64_t> callsBlindTransferIn_ = nullptr;
    std::shared_ptr<int64_t> callsBlindTransferOut_ = nullptr;
    std::shared_ptr<int64_t> callsHandled_ = nullptr;
    std::shared_ptr<int64_t> callsHold_ = nullptr;
    std::shared_ptr<int64_t> callsOffered_ = nullptr;
    std::shared_ptr<int64_t> callsOverflow_ = nullptr;
    std::shared_ptr<int64_t> callsQueued_ = nullptr;
    std::shared_ptr<int64_t> callsQueuingOverflow_ = nullptr;
    std::shared_ptr<int64_t> callsQueuingTimeout_ = nullptr;
    std::shared_ptr<int64_t> callsRinged_ = nullptr;
    std::shared_ptr<int64_t> callsTimeout_ = nullptr;
    std::shared_ptr<float> handleRate_ = nullptr;
    std::shared_ptr<int64_t> maxAbandonTime_ = nullptr;
    std::shared_ptr<int64_t> maxAbandonedInQueueTime_ = nullptr;
    std::shared_ptr<int64_t> maxAbandonedInRingTime_ = nullptr;
    std::shared_ptr<int64_t> maxHoldTime_ = nullptr;
    std::shared_ptr<int64_t> maxRingTime_ = nullptr;
    std::shared_ptr<int64_t> maxTalkTime_ = nullptr;
    std::shared_ptr<int64_t> maxWaitTime_ = nullptr;
    std::shared_ptr<int64_t> maxWorkTime_ = nullptr;
    std::shared_ptr<float> satisfactionIndex_ = nullptr;
    std::shared_ptr<float> satisfactionRate_ = nullptr;
    std::shared_ptr<int64_t> satisfactionSurveysOffered_ = nullptr;
    std::shared_ptr<int64_t> satisfactionSurveysResponded_ = nullptr;
    std::shared_ptr<float> serviceLevel20_ = nullptr;
    std::shared_ptr<int64_t> totalAbandonTime_ = nullptr;
    std::shared_ptr<int64_t> totalAbandonedInQueueTime_ = nullptr;
    std::shared_ptr<int64_t> totalAbandonedInRingTime_ = nullptr;
    std::shared_ptr<int64_t> totalHoldTime_ = nullptr;
    std::shared_ptr<int64_t> totalMessagesSent_ = nullptr;
    std::shared_ptr<int64_t> totalMessagesSentByAgent_ = nullptr;
    std::shared_ptr<int64_t> totalMessagesSentByCustomer_ = nullptr;
    std::shared_ptr<int64_t> totalRingTime_ = nullptr;
    std::shared_ptr<int64_t> totalTalkTime_ = nullptr;
    std::shared_ptr<int64_t> totalWaitTime_ = nullptr;
    std::shared_ptr<int64_t> totalWorkTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
