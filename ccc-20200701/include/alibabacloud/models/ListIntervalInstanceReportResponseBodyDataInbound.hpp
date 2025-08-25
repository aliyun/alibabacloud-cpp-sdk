// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINTERVALINSTANCEREPORTRESPONSEBODYDATAINBOUND_HPP_
#define ALIBABACLOUD_MODELS_LISTINTERVALINSTANCEREPORTRESPONSEBODYDATAINBOUND_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class ListIntervalInstanceReportResponseBodyDataInbound : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListIntervalInstanceReportResponseBodyDataInbound& obj) { 
      DARABONBA_PTR_TO_JSON(AbandonRate, abandonRate_);
      DARABONBA_PTR_TO_JSON(AbandonedRate, abandonedRate_);
      DARABONBA_PTR_TO_JSON(AverageAbandonTime, averageAbandonTime_);
      DARABONBA_PTR_TO_JSON(AverageAbandonedInIVRTime, averageAbandonedInIVRTime_);
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
      DARABONBA_PTR_TO_JSON(CallsAbandonedInIVR, callsAbandonedInIVR_);
      DARABONBA_PTR_TO_JSON(CallsAbandonedInQueue, callsAbandonedInQueue_);
      DARABONBA_PTR_TO_JSON(CallsAbandonedInRing, callsAbandonedInRing_);
      DARABONBA_PTR_TO_JSON(CallsAbandonedInVoiceNavigator, callsAbandonedInVoiceNavigator_);
      DARABONBA_PTR_TO_JSON(CallsAttendedTransferred, callsAttendedTransferred_);
      DARABONBA_PTR_TO_JSON(CallsBlindTransferred, callsBlindTransferred_);
      DARABONBA_PTR_TO_JSON(CallsCausedIVRException, callsCausedIVRException_);
      DARABONBA_PTR_TO_JSON(CallsForwardToOutsideNumber, callsForwardToOutsideNumber_);
      DARABONBA_PTR_TO_JSON(CallsHandled, callsHandled_);
      DARABONBA_PTR_TO_JSON(CallsHold, callsHold_);
      DARABONBA_PTR_TO_JSON(CallsIVRException, callsIVRException_);
      DARABONBA_PTR_TO_JSON(CallsOffered, callsOffered_);
      DARABONBA_PTR_TO_JSON(CallsQueued, callsQueued_);
      DARABONBA_PTR_TO_JSON(CallsQueuingFailed, callsQueuingFailed_);
      DARABONBA_PTR_TO_JSON(CallsQueuingOverflow, callsQueuingOverflow_);
      DARABONBA_PTR_TO_JSON(CallsQueuingTimeout, callsQueuingTimeout_);
      DARABONBA_PTR_TO_JSON(CallsRinged, callsRinged_);
      DARABONBA_PTR_TO_JSON(CallsToVoicemail, callsToVoicemail_);
      DARABONBA_PTR_TO_JSON(CallsVoicemail, callsVoicemail_);
      DARABONBA_PTR_TO_JSON(HandleRate, handleRate_);
      DARABONBA_PTR_TO_JSON(MaxAbandonTime, maxAbandonTime_);
      DARABONBA_PTR_TO_JSON(MaxAbandonedInIVRTime, maxAbandonedInIVRTime_);
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
      DARABONBA_PTR_TO_JSON(TotalAbandonedInIVRTime, totalAbandonedInIVRTime_);
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
    friend void from_json(const Darabonba::Json& j, ListIntervalInstanceReportResponseBodyDataInbound& obj) { 
      DARABONBA_PTR_FROM_JSON(AbandonRate, abandonRate_);
      DARABONBA_PTR_FROM_JSON(AbandonedRate, abandonedRate_);
      DARABONBA_PTR_FROM_JSON(AverageAbandonTime, averageAbandonTime_);
      DARABONBA_PTR_FROM_JSON(AverageAbandonedInIVRTime, averageAbandonedInIVRTime_);
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
      DARABONBA_PTR_FROM_JSON(CallsAbandonedInIVR, callsAbandonedInIVR_);
      DARABONBA_PTR_FROM_JSON(CallsAbandonedInQueue, callsAbandonedInQueue_);
      DARABONBA_PTR_FROM_JSON(CallsAbandonedInRing, callsAbandonedInRing_);
      DARABONBA_PTR_FROM_JSON(CallsAbandonedInVoiceNavigator, callsAbandonedInVoiceNavigator_);
      DARABONBA_PTR_FROM_JSON(CallsAttendedTransferred, callsAttendedTransferred_);
      DARABONBA_PTR_FROM_JSON(CallsBlindTransferred, callsBlindTransferred_);
      DARABONBA_PTR_FROM_JSON(CallsCausedIVRException, callsCausedIVRException_);
      DARABONBA_PTR_FROM_JSON(CallsForwardToOutsideNumber, callsForwardToOutsideNumber_);
      DARABONBA_PTR_FROM_JSON(CallsHandled, callsHandled_);
      DARABONBA_PTR_FROM_JSON(CallsHold, callsHold_);
      DARABONBA_PTR_FROM_JSON(CallsIVRException, callsIVRException_);
      DARABONBA_PTR_FROM_JSON(CallsOffered, callsOffered_);
      DARABONBA_PTR_FROM_JSON(CallsQueued, callsQueued_);
      DARABONBA_PTR_FROM_JSON(CallsQueuingFailed, callsQueuingFailed_);
      DARABONBA_PTR_FROM_JSON(CallsQueuingOverflow, callsQueuingOverflow_);
      DARABONBA_PTR_FROM_JSON(CallsQueuingTimeout, callsQueuingTimeout_);
      DARABONBA_PTR_FROM_JSON(CallsRinged, callsRinged_);
      DARABONBA_PTR_FROM_JSON(CallsToVoicemail, callsToVoicemail_);
      DARABONBA_PTR_FROM_JSON(CallsVoicemail, callsVoicemail_);
      DARABONBA_PTR_FROM_JSON(HandleRate, handleRate_);
      DARABONBA_PTR_FROM_JSON(MaxAbandonTime, maxAbandonTime_);
      DARABONBA_PTR_FROM_JSON(MaxAbandonedInIVRTime, maxAbandonedInIVRTime_);
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
      DARABONBA_PTR_FROM_JSON(TotalAbandonedInIVRTime, totalAbandonedInIVRTime_);
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
    ListIntervalInstanceReportResponseBodyDataInbound() = default ;
    ListIntervalInstanceReportResponseBodyDataInbound(const ListIntervalInstanceReportResponseBodyDataInbound &) = default ;
    ListIntervalInstanceReportResponseBodyDataInbound(ListIntervalInstanceReportResponseBodyDataInbound &&) = default ;
    ListIntervalInstanceReportResponseBodyDataInbound(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListIntervalInstanceReportResponseBodyDataInbound() = default ;
    ListIntervalInstanceReportResponseBodyDataInbound& operator=(const ListIntervalInstanceReportResponseBodyDataInbound &) = default ;
    ListIntervalInstanceReportResponseBodyDataInbound& operator=(ListIntervalInstanceReportResponseBodyDataInbound &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->abandonRate_ != nullptr
        && this->abandonedRate_ != nullptr && this->averageAbandonTime_ != nullptr && this->averageAbandonedInIVRTime_ != nullptr && this->averageAbandonedInQueueTime_ != nullptr && this->averageAbandonedInRingTime_ != nullptr
        && this->averageFirstResponseTime_ != nullptr && this->averageHoldTime_ != nullptr && this->averageResponseTime_ != nullptr && this->averageRingTime_ != nullptr && this->averageTalkTime_ != nullptr
        && this->averageWaitTime_ != nullptr && this->averageWorkTime_ != nullptr && this->callsAbandoned_ != nullptr && this->callsAbandonedInIVR_ != nullptr && this->callsAbandonedInQueue_ != nullptr
        && this->callsAbandonedInRing_ != nullptr && this->callsAbandonedInVoiceNavigator_ != nullptr && this->callsAttendedTransferred_ != nullptr && this->callsBlindTransferred_ != nullptr && this->callsCausedIVRException_ != nullptr
        && this->callsForwardToOutsideNumber_ != nullptr && this->callsHandled_ != nullptr && this->callsHold_ != nullptr && this->callsIVRException_ != nullptr && this->callsOffered_ != nullptr
        && this->callsQueued_ != nullptr && this->callsQueuingFailed_ != nullptr && this->callsQueuingOverflow_ != nullptr && this->callsQueuingTimeout_ != nullptr && this->callsRinged_ != nullptr
        && this->callsToVoicemail_ != nullptr && this->callsVoicemail_ != nullptr && this->handleRate_ != nullptr && this->maxAbandonTime_ != nullptr && this->maxAbandonedInIVRTime_ != nullptr
        && this->maxAbandonedInQueueTime_ != nullptr && this->maxAbandonedInRingTime_ != nullptr && this->maxHoldTime_ != nullptr && this->maxRingTime_ != nullptr && this->maxTalkTime_ != nullptr
        && this->maxWaitTime_ != nullptr && this->maxWorkTime_ != nullptr && this->satisfactionIndex_ != nullptr && this->satisfactionRate_ != nullptr && this->satisfactionSurveysOffered_ != nullptr
        && this->satisfactionSurveysResponded_ != nullptr && this->serviceLevel20_ != nullptr && this->totalAbandonTime_ != nullptr && this->totalAbandonedInIVRTime_ != nullptr && this->totalAbandonedInQueueTime_ != nullptr
        && this->totalAbandonedInRingTime_ != nullptr && this->totalHoldTime_ != nullptr && this->totalMessagesSent_ != nullptr && this->totalMessagesSentByAgent_ != nullptr && this->totalMessagesSentByCustomer_ != nullptr
        && this->totalRingTime_ != nullptr && this->totalTalkTime_ != nullptr && this->totalWaitTime_ != nullptr && this->totalWorkTime_ != nullptr; };
    // abandonRate Field Functions 
    bool hasAbandonRate() const { return this->abandonRate_ != nullptr;};
    void deleteAbandonRate() { this->abandonRate_ = nullptr;};
    inline float abandonRate() const { DARABONBA_PTR_GET_DEFAULT(abandonRate_, 0.0) };
    inline ListIntervalInstanceReportResponseBodyDataInbound& setAbandonRate(float abandonRate) { DARABONBA_PTR_SET_VALUE(abandonRate_, abandonRate) };


    // abandonedRate Field Functions 
    bool hasAbandonedRate() const { return this->abandonedRate_ != nullptr;};
    void deleteAbandonedRate() { this->abandonedRate_ = nullptr;};
    inline float abandonedRate() const { DARABONBA_PTR_GET_DEFAULT(abandonedRate_, 0.0) };
    inline ListIntervalInstanceReportResponseBodyDataInbound& setAbandonedRate(float abandonedRate) { DARABONBA_PTR_SET_VALUE(abandonedRate_, abandonedRate) };


    // averageAbandonTime Field Functions 
    bool hasAverageAbandonTime() const { return this->averageAbandonTime_ != nullptr;};
    void deleteAverageAbandonTime() { this->averageAbandonTime_ = nullptr;};
    inline float averageAbandonTime() const { DARABONBA_PTR_GET_DEFAULT(averageAbandonTime_, 0.0) };
    inline ListIntervalInstanceReportResponseBodyDataInbound& setAverageAbandonTime(float averageAbandonTime) { DARABONBA_PTR_SET_VALUE(averageAbandonTime_, averageAbandonTime) };


    // averageAbandonedInIVRTime Field Functions 
    bool hasAverageAbandonedInIVRTime() const { return this->averageAbandonedInIVRTime_ != nullptr;};
    void deleteAverageAbandonedInIVRTime() { this->averageAbandonedInIVRTime_ = nullptr;};
    inline float averageAbandonedInIVRTime() const { DARABONBA_PTR_GET_DEFAULT(averageAbandonedInIVRTime_, 0.0) };
    inline ListIntervalInstanceReportResponseBodyDataInbound& setAverageAbandonedInIVRTime(float averageAbandonedInIVRTime) { DARABONBA_PTR_SET_VALUE(averageAbandonedInIVRTime_, averageAbandonedInIVRTime) };


    // averageAbandonedInQueueTime Field Functions 
    bool hasAverageAbandonedInQueueTime() const { return this->averageAbandonedInQueueTime_ != nullptr;};
    void deleteAverageAbandonedInQueueTime() { this->averageAbandonedInQueueTime_ = nullptr;};
    inline float averageAbandonedInQueueTime() const { DARABONBA_PTR_GET_DEFAULT(averageAbandonedInQueueTime_, 0.0) };
    inline ListIntervalInstanceReportResponseBodyDataInbound& setAverageAbandonedInQueueTime(float averageAbandonedInQueueTime) { DARABONBA_PTR_SET_VALUE(averageAbandonedInQueueTime_, averageAbandonedInQueueTime) };


    // averageAbandonedInRingTime Field Functions 
    bool hasAverageAbandonedInRingTime() const { return this->averageAbandonedInRingTime_ != nullptr;};
    void deleteAverageAbandonedInRingTime() { this->averageAbandonedInRingTime_ = nullptr;};
    inline float averageAbandonedInRingTime() const { DARABONBA_PTR_GET_DEFAULT(averageAbandonedInRingTime_, 0.0) };
    inline ListIntervalInstanceReportResponseBodyDataInbound& setAverageAbandonedInRingTime(float averageAbandonedInRingTime) { DARABONBA_PTR_SET_VALUE(averageAbandonedInRingTime_, averageAbandonedInRingTime) };


    // averageFirstResponseTime Field Functions 
    bool hasAverageFirstResponseTime() const { return this->averageFirstResponseTime_ != nullptr;};
    void deleteAverageFirstResponseTime() { this->averageFirstResponseTime_ = nullptr;};
    inline float averageFirstResponseTime() const { DARABONBA_PTR_GET_DEFAULT(averageFirstResponseTime_, 0.0) };
    inline ListIntervalInstanceReportResponseBodyDataInbound& setAverageFirstResponseTime(float averageFirstResponseTime) { DARABONBA_PTR_SET_VALUE(averageFirstResponseTime_, averageFirstResponseTime) };


    // averageHoldTime Field Functions 
    bool hasAverageHoldTime() const { return this->averageHoldTime_ != nullptr;};
    void deleteAverageHoldTime() { this->averageHoldTime_ = nullptr;};
    inline float averageHoldTime() const { DARABONBA_PTR_GET_DEFAULT(averageHoldTime_, 0.0) };
    inline ListIntervalInstanceReportResponseBodyDataInbound& setAverageHoldTime(float averageHoldTime) { DARABONBA_PTR_SET_VALUE(averageHoldTime_, averageHoldTime) };


    // averageResponseTime Field Functions 
    bool hasAverageResponseTime() const { return this->averageResponseTime_ != nullptr;};
    void deleteAverageResponseTime() { this->averageResponseTime_ = nullptr;};
    inline float averageResponseTime() const { DARABONBA_PTR_GET_DEFAULT(averageResponseTime_, 0.0) };
    inline ListIntervalInstanceReportResponseBodyDataInbound& setAverageResponseTime(float averageResponseTime) { DARABONBA_PTR_SET_VALUE(averageResponseTime_, averageResponseTime) };


    // averageRingTime Field Functions 
    bool hasAverageRingTime() const { return this->averageRingTime_ != nullptr;};
    void deleteAverageRingTime() { this->averageRingTime_ = nullptr;};
    inline float averageRingTime() const { DARABONBA_PTR_GET_DEFAULT(averageRingTime_, 0.0) };
    inline ListIntervalInstanceReportResponseBodyDataInbound& setAverageRingTime(float averageRingTime) { DARABONBA_PTR_SET_VALUE(averageRingTime_, averageRingTime) };


    // averageTalkTime Field Functions 
    bool hasAverageTalkTime() const { return this->averageTalkTime_ != nullptr;};
    void deleteAverageTalkTime() { this->averageTalkTime_ = nullptr;};
    inline float averageTalkTime() const { DARABONBA_PTR_GET_DEFAULT(averageTalkTime_, 0.0) };
    inline ListIntervalInstanceReportResponseBodyDataInbound& setAverageTalkTime(float averageTalkTime) { DARABONBA_PTR_SET_VALUE(averageTalkTime_, averageTalkTime) };


    // averageWaitTime Field Functions 
    bool hasAverageWaitTime() const { return this->averageWaitTime_ != nullptr;};
    void deleteAverageWaitTime() { this->averageWaitTime_ = nullptr;};
    inline float averageWaitTime() const { DARABONBA_PTR_GET_DEFAULT(averageWaitTime_, 0.0) };
    inline ListIntervalInstanceReportResponseBodyDataInbound& setAverageWaitTime(float averageWaitTime) { DARABONBA_PTR_SET_VALUE(averageWaitTime_, averageWaitTime) };


    // averageWorkTime Field Functions 
    bool hasAverageWorkTime() const { return this->averageWorkTime_ != nullptr;};
    void deleteAverageWorkTime() { this->averageWorkTime_ = nullptr;};
    inline float averageWorkTime() const { DARABONBA_PTR_GET_DEFAULT(averageWorkTime_, 0.0) };
    inline ListIntervalInstanceReportResponseBodyDataInbound& setAverageWorkTime(float averageWorkTime) { DARABONBA_PTR_SET_VALUE(averageWorkTime_, averageWorkTime) };


    // callsAbandoned Field Functions 
    bool hasCallsAbandoned() const { return this->callsAbandoned_ != nullptr;};
    void deleteCallsAbandoned() { this->callsAbandoned_ = nullptr;};
    inline int64_t callsAbandoned() const { DARABONBA_PTR_GET_DEFAULT(callsAbandoned_, 0L) };
    inline ListIntervalInstanceReportResponseBodyDataInbound& setCallsAbandoned(int64_t callsAbandoned) { DARABONBA_PTR_SET_VALUE(callsAbandoned_, callsAbandoned) };


    // callsAbandonedInIVR Field Functions 
    bool hasCallsAbandonedInIVR() const { return this->callsAbandonedInIVR_ != nullptr;};
    void deleteCallsAbandonedInIVR() { this->callsAbandonedInIVR_ = nullptr;};
    inline int64_t callsAbandonedInIVR() const { DARABONBA_PTR_GET_DEFAULT(callsAbandonedInIVR_, 0L) };
    inline ListIntervalInstanceReportResponseBodyDataInbound& setCallsAbandonedInIVR(int64_t callsAbandonedInIVR) { DARABONBA_PTR_SET_VALUE(callsAbandonedInIVR_, callsAbandonedInIVR) };


    // callsAbandonedInQueue Field Functions 
    bool hasCallsAbandonedInQueue() const { return this->callsAbandonedInQueue_ != nullptr;};
    void deleteCallsAbandonedInQueue() { this->callsAbandonedInQueue_ = nullptr;};
    inline int64_t callsAbandonedInQueue() const { DARABONBA_PTR_GET_DEFAULT(callsAbandonedInQueue_, 0L) };
    inline ListIntervalInstanceReportResponseBodyDataInbound& setCallsAbandonedInQueue(int64_t callsAbandonedInQueue) { DARABONBA_PTR_SET_VALUE(callsAbandonedInQueue_, callsAbandonedInQueue) };


    // callsAbandonedInRing Field Functions 
    bool hasCallsAbandonedInRing() const { return this->callsAbandonedInRing_ != nullptr;};
    void deleteCallsAbandonedInRing() { this->callsAbandonedInRing_ = nullptr;};
    inline int64_t callsAbandonedInRing() const { DARABONBA_PTR_GET_DEFAULT(callsAbandonedInRing_, 0L) };
    inline ListIntervalInstanceReportResponseBodyDataInbound& setCallsAbandonedInRing(int64_t callsAbandonedInRing) { DARABONBA_PTR_SET_VALUE(callsAbandonedInRing_, callsAbandonedInRing) };


    // callsAbandonedInVoiceNavigator Field Functions 
    bool hasCallsAbandonedInVoiceNavigator() const { return this->callsAbandonedInVoiceNavigator_ != nullptr;};
    void deleteCallsAbandonedInVoiceNavigator() { this->callsAbandonedInVoiceNavigator_ = nullptr;};
    inline int64_t callsAbandonedInVoiceNavigator() const { DARABONBA_PTR_GET_DEFAULT(callsAbandonedInVoiceNavigator_, 0L) };
    inline ListIntervalInstanceReportResponseBodyDataInbound& setCallsAbandonedInVoiceNavigator(int64_t callsAbandonedInVoiceNavigator) { DARABONBA_PTR_SET_VALUE(callsAbandonedInVoiceNavigator_, callsAbandonedInVoiceNavigator) };


    // callsAttendedTransferred Field Functions 
    bool hasCallsAttendedTransferred() const { return this->callsAttendedTransferred_ != nullptr;};
    void deleteCallsAttendedTransferred() { this->callsAttendedTransferred_ = nullptr;};
    inline int64_t callsAttendedTransferred() const { DARABONBA_PTR_GET_DEFAULT(callsAttendedTransferred_, 0L) };
    inline ListIntervalInstanceReportResponseBodyDataInbound& setCallsAttendedTransferred(int64_t callsAttendedTransferred) { DARABONBA_PTR_SET_VALUE(callsAttendedTransferred_, callsAttendedTransferred) };


    // callsBlindTransferred Field Functions 
    bool hasCallsBlindTransferred() const { return this->callsBlindTransferred_ != nullptr;};
    void deleteCallsBlindTransferred() { this->callsBlindTransferred_ = nullptr;};
    inline int64_t callsBlindTransferred() const { DARABONBA_PTR_GET_DEFAULT(callsBlindTransferred_, 0L) };
    inline ListIntervalInstanceReportResponseBodyDataInbound& setCallsBlindTransferred(int64_t callsBlindTransferred) { DARABONBA_PTR_SET_VALUE(callsBlindTransferred_, callsBlindTransferred) };


    // callsCausedIVRException Field Functions 
    bool hasCallsCausedIVRException() const { return this->callsCausedIVRException_ != nullptr;};
    void deleteCallsCausedIVRException() { this->callsCausedIVRException_ = nullptr;};
    inline int64_t callsCausedIVRException() const { DARABONBA_PTR_GET_DEFAULT(callsCausedIVRException_, 0L) };
    inline ListIntervalInstanceReportResponseBodyDataInbound& setCallsCausedIVRException(int64_t callsCausedIVRException) { DARABONBA_PTR_SET_VALUE(callsCausedIVRException_, callsCausedIVRException) };


    // callsForwardToOutsideNumber Field Functions 
    bool hasCallsForwardToOutsideNumber() const { return this->callsForwardToOutsideNumber_ != nullptr;};
    void deleteCallsForwardToOutsideNumber() { this->callsForwardToOutsideNumber_ = nullptr;};
    inline int64_t callsForwardToOutsideNumber() const { DARABONBA_PTR_GET_DEFAULT(callsForwardToOutsideNumber_, 0L) };
    inline ListIntervalInstanceReportResponseBodyDataInbound& setCallsForwardToOutsideNumber(int64_t callsForwardToOutsideNumber) { DARABONBA_PTR_SET_VALUE(callsForwardToOutsideNumber_, callsForwardToOutsideNumber) };


    // callsHandled Field Functions 
    bool hasCallsHandled() const { return this->callsHandled_ != nullptr;};
    void deleteCallsHandled() { this->callsHandled_ = nullptr;};
    inline int64_t callsHandled() const { DARABONBA_PTR_GET_DEFAULT(callsHandled_, 0L) };
    inline ListIntervalInstanceReportResponseBodyDataInbound& setCallsHandled(int64_t callsHandled) { DARABONBA_PTR_SET_VALUE(callsHandled_, callsHandled) };


    // callsHold Field Functions 
    bool hasCallsHold() const { return this->callsHold_ != nullptr;};
    void deleteCallsHold() { this->callsHold_ = nullptr;};
    inline int64_t callsHold() const { DARABONBA_PTR_GET_DEFAULT(callsHold_, 0L) };
    inline ListIntervalInstanceReportResponseBodyDataInbound& setCallsHold(int64_t callsHold) { DARABONBA_PTR_SET_VALUE(callsHold_, callsHold) };


    // callsIVRException Field Functions 
    bool hasCallsIVRException() const { return this->callsIVRException_ != nullptr;};
    void deleteCallsIVRException() { this->callsIVRException_ = nullptr;};
    inline int64_t callsIVRException() const { DARABONBA_PTR_GET_DEFAULT(callsIVRException_, 0L) };
    inline ListIntervalInstanceReportResponseBodyDataInbound& setCallsIVRException(int64_t callsIVRException) { DARABONBA_PTR_SET_VALUE(callsIVRException_, callsIVRException) };


    // callsOffered Field Functions 
    bool hasCallsOffered() const { return this->callsOffered_ != nullptr;};
    void deleteCallsOffered() { this->callsOffered_ = nullptr;};
    inline int64_t callsOffered() const { DARABONBA_PTR_GET_DEFAULT(callsOffered_, 0L) };
    inline ListIntervalInstanceReportResponseBodyDataInbound& setCallsOffered(int64_t callsOffered) { DARABONBA_PTR_SET_VALUE(callsOffered_, callsOffered) };


    // callsQueued Field Functions 
    bool hasCallsQueued() const { return this->callsQueued_ != nullptr;};
    void deleteCallsQueued() { this->callsQueued_ = nullptr;};
    inline int64_t callsQueued() const { DARABONBA_PTR_GET_DEFAULT(callsQueued_, 0L) };
    inline ListIntervalInstanceReportResponseBodyDataInbound& setCallsQueued(int64_t callsQueued) { DARABONBA_PTR_SET_VALUE(callsQueued_, callsQueued) };


    // callsQueuingFailed Field Functions 
    bool hasCallsQueuingFailed() const { return this->callsQueuingFailed_ != nullptr;};
    void deleteCallsQueuingFailed() { this->callsQueuingFailed_ = nullptr;};
    inline int64_t callsQueuingFailed() const { DARABONBA_PTR_GET_DEFAULT(callsQueuingFailed_, 0L) };
    inline ListIntervalInstanceReportResponseBodyDataInbound& setCallsQueuingFailed(int64_t callsQueuingFailed) { DARABONBA_PTR_SET_VALUE(callsQueuingFailed_, callsQueuingFailed) };


    // callsQueuingOverflow Field Functions 
    bool hasCallsQueuingOverflow() const { return this->callsQueuingOverflow_ != nullptr;};
    void deleteCallsQueuingOverflow() { this->callsQueuingOverflow_ = nullptr;};
    inline int64_t callsQueuingOverflow() const { DARABONBA_PTR_GET_DEFAULT(callsQueuingOverflow_, 0L) };
    inline ListIntervalInstanceReportResponseBodyDataInbound& setCallsQueuingOverflow(int64_t callsQueuingOverflow) { DARABONBA_PTR_SET_VALUE(callsQueuingOverflow_, callsQueuingOverflow) };


    // callsQueuingTimeout Field Functions 
    bool hasCallsQueuingTimeout() const { return this->callsQueuingTimeout_ != nullptr;};
    void deleteCallsQueuingTimeout() { this->callsQueuingTimeout_ = nullptr;};
    inline int64_t callsQueuingTimeout() const { DARABONBA_PTR_GET_DEFAULT(callsQueuingTimeout_, 0L) };
    inline ListIntervalInstanceReportResponseBodyDataInbound& setCallsQueuingTimeout(int64_t callsQueuingTimeout) { DARABONBA_PTR_SET_VALUE(callsQueuingTimeout_, callsQueuingTimeout) };


    // callsRinged Field Functions 
    bool hasCallsRinged() const { return this->callsRinged_ != nullptr;};
    void deleteCallsRinged() { this->callsRinged_ = nullptr;};
    inline int64_t callsRinged() const { DARABONBA_PTR_GET_DEFAULT(callsRinged_, 0L) };
    inline ListIntervalInstanceReportResponseBodyDataInbound& setCallsRinged(int64_t callsRinged) { DARABONBA_PTR_SET_VALUE(callsRinged_, callsRinged) };


    // callsToVoicemail Field Functions 
    bool hasCallsToVoicemail() const { return this->callsToVoicemail_ != nullptr;};
    void deleteCallsToVoicemail() { this->callsToVoicemail_ = nullptr;};
    inline int64_t callsToVoicemail() const { DARABONBA_PTR_GET_DEFAULT(callsToVoicemail_, 0L) };
    inline ListIntervalInstanceReportResponseBodyDataInbound& setCallsToVoicemail(int64_t callsToVoicemail) { DARABONBA_PTR_SET_VALUE(callsToVoicemail_, callsToVoicemail) };


    // callsVoicemail Field Functions 
    bool hasCallsVoicemail() const { return this->callsVoicemail_ != nullptr;};
    void deleteCallsVoicemail() { this->callsVoicemail_ = nullptr;};
    inline int64_t callsVoicemail() const { DARABONBA_PTR_GET_DEFAULT(callsVoicemail_, 0L) };
    inline ListIntervalInstanceReportResponseBodyDataInbound& setCallsVoicemail(int64_t callsVoicemail) { DARABONBA_PTR_SET_VALUE(callsVoicemail_, callsVoicemail) };


    // handleRate Field Functions 
    bool hasHandleRate() const { return this->handleRate_ != nullptr;};
    void deleteHandleRate() { this->handleRate_ = nullptr;};
    inline float handleRate() const { DARABONBA_PTR_GET_DEFAULT(handleRate_, 0.0) };
    inline ListIntervalInstanceReportResponseBodyDataInbound& setHandleRate(float handleRate) { DARABONBA_PTR_SET_VALUE(handleRate_, handleRate) };


    // maxAbandonTime Field Functions 
    bool hasMaxAbandonTime() const { return this->maxAbandonTime_ != nullptr;};
    void deleteMaxAbandonTime() { this->maxAbandonTime_ = nullptr;};
    inline int64_t maxAbandonTime() const { DARABONBA_PTR_GET_DEFAULT(maxAbandonTime_, 0L) };
    inline ListIntervalInstanceReportResponseBodyDataInbound& setMaxAbandonTime(int64_t maxAbandonTime) { DARABONBA_PTR_SET_VALUE(maxAbandonTime_, maxAbandonTime) };


    // maxAbandonedInIVRTime Field Functions 
    bool hasMaxAbandonedInIVRTime() const { return this->maxAbandonedInIVRTime_ != nullptr;};
    void deleteMaxAbandonedInIVRTime() { this->maxAbandonedInIVRTime_ = nullptr;};
    inline int64_t maxAbandonedInIVRTime() const { DARABONBA_PTR_GET_DEFAULT(maxAbandonedInIVRTime_, 0L) };
    inline ListIntervalInstanceReportResponseBodyDataInbound& setMaxAbandonedInIVRTime(int64_t maxAbandonedInIVRTime) { DARABONBA_PTR_SET_VALUE(maxAbandonedInIVRTime_, maxAbandonedInIVRTime) };


    // maxAbandonedInQueueTime Field Functions 
    bool hasMaxAbandonedInQueueTime() const { return this->maxAbandonedInQueueTime_ != nullptr;};
    void deleteMaxAbandonedInQueueTime() { this->maxAbandonedInQueueTime_ = nullptr;};
    inline int64_t maxAbandonedInQueueTime() const { DARABONBA_PTR_GET_DEFAULT(maxAbandonedInQueueTime_, 0L) };
    inline ListIntervalInstanceReportResponseBodyDataInbound& setMaxAbandonedInQueueTime(int64_t maxAbandonedInQueueTime) { DARABONBA_PTR_SET_VALUE(maxAbandonedInQueueTime_, maxAbandonedInQueueTime) };


    // maxAbandonedInRingTime Field Functions 
    bool hasMaxAbandonedInRingTime() const { return this->maxAbandonedInRingTime_ != nullptr;};
    void deleteMaxAbandonedInRingTime() { this->maxAbandonedInRingTime_ = nullptr;};
    inline int64_t maxAbandonedInRingTime() const { DARABONBA_PTR_GET_DEFAULT(maxAbandonedInRingTime_, 0L) };
    inline ListIntervalInstanceReportResponseBodyDataInbound& setMaxAbandonedInRingTime(int64_t maxAbandonedInRingTime) { DARABONBA_PTR_SET_VALUE(maxAbandonedInRingTime_, maxAbandonedInRingTime) };


    // maxHoldTime Field Functions 
    bool hasMaxHoldTime() const { return this->maxHoldTime_ != nullptr;};
    void deleteMaxHoldTime() { this->maxHoldTime_ = nullptr;};
    inline int64_t maxHoldTime() const { DARABONBA_PTR_GET_DEFAULT(maxHoldTime_, 0L) };
    inline ListIntervalInstanceReportResponseBodyDataInbound& setMaxHoldTime(int64_t maxHoldTime) { DARABONBA_PTR_SET_VALUE(maxHoldTime_, maxHoldTime) };


    // maxRingTime Field Functions 
    bool hasMaxRingTime() const { return this->maxRingTime_ != nullptr;};
    void deleteMaxRingTime() { this->maxRingTime_ = nullptr;};
    inline int64_t maxRingTime() const { DARABONBA_PTR_GET_DEFAULT(maxRingTime_, 0L) };
    inline ListIntervalInstanceReportResponseBodyDataInbound& setMaxRingTime(int64_t maxRingTime) { DARABONBA_PTR_SET_VALUE(maxRingTime_, maxRingTime) };


    // maxTalkTime Field Functions 
    bool hasMaxTalkTime() const { return this->maxTalkTime_ != nullptr;};
    void deleteMaxTalkTime() { this->maxTalkTime_ = nullptr;};
    inline int64_t maxTalkTime() const { DARABONBA_PTR_GET_DEFAULT(maxTalkTime_, 0L) };
    inline ListIntervalInstanceReportResponseBodyDataInbound& setMaxTalkTime(int64_t maxTalkTime) { DARABONBA_PTR_SET_VALUE(maxTalkTime_, maxTalkTime) };


    // maxWaitTime Field Functions 
    bool hasMaxWaitTime() const { return this->maxWaitTime_ != nullptr;};
    void deleteMaxWaitTime() { this->maxWaitTime_ = nullptr;};
    inline int64_t maxWaitTime() const { DARABONBA_PTR_GET_DEFAULT(maxWaitTime_, 0L) };
    inline ListIntervalInstanceReportResponseBodyDataInbound& setMaxWaitTime(int64_t maxWaitTime) { DARABONBA_PTR_SET_VALUE(maxWaitTime_, maxWaitTime) };


    // maxWorkTime Field Functions 
    bool hasMaxWorkTime() const { return this->maxWorkTime_ != nullptr;};
    void deleteMaxWorkTime() { this->maxWorkTime_ = nullptr;};
    inline int64_t maxWorkTime() const { DARABONBA_PTR_GET_DEFAULT(maxWorkTime_, 0L) };
    inline ListIntervalInstanceReportResponseBodyDataInbound& setMaxWorkTime(int64_t maxWorkTime) { DARABONBA_PTR_SET_VALUE(maxWorkTime_, maxWorkTime) };


    // satisfactionIndex Field Functions 
    bool hasSatisfactionIndex() const { return this->satisfactionIndex_ != nullptr;};
    void deleteSatisfactionIndex() { this->satisfactionIndex_ = nullptr;};
    inline float satisfactionIndex() const { DARABONBA_PTR_GET_DEFAULT(satisfactionIndex_, 0.0) };
    inline ListIntervalInstanceReportResponseBodyDataInbound& setSatisfactionIndex(float satisfactionIndex) { DARABONBA_PTR_SET_VALUE(satisfactionIndex_, satisfactionIndex) };


    // satisfactionRate Field Functions 
    bool hasSatisfactionRate() const { return this->satisfactionRate_ != nullptr;};
    void deleteSatisfactionRate() { this->satisfactionRate_ = nullptr;};
    inline float satisfactionRate() const { DARABONBA_PTR_GET_DEFAULT(satisfactionRate_, 0.0) };
    inline ListIntervalInstanceReportResponseBodyDataInbound& setSatisfactionRate(float satisfactionRate) { DARABONBA_PTR_SET_VALUE(satisfactionRate_, satisfactionRate) };


    // satisfactionSurveysOffered Field Functions 
    bool hasSatisfactionSurveysOffered() const { return this->satisfactionSurveysOffered_ != nullptr;};
    void deleteSatisfactionSurveysOffered() { this->satisfactionSurveysOffered_ = nullptr;};
    inline int64_t satisfactionSurveysOffered() const { DARABONBA_PTR_GET_DEFAULT(satisfactionSurveysOffered_, 0L) };
    inline ListIntervalInstanceReportResponseBodyDataInbound& setSatisfactionSurveysOffered(int64_t satisfactionSurveysOffered) { DARABONBA_PTR_SET_VALUE(satisfactionSurveysOffered_, satisfactionSurveysOffered) };


    // satisfactionSurveysResponded Field Functions 
    bool hasSatisfactionSurveysResponded() const { return this->satisfactionSurveysResponded_ != nullptr;};
    void deleteSatisfactionSurveysResponded() { this->satisfactionSurveysResponded_ = nullptr;};
    inline int64_t satisfactionSurveysResponded() const { DARABONBA_PTR_GET_DEFAULT(satisfactionSurveysResponded_, 0L) };
    inline ListIntervalInstanceReportResponseBodyDataInbound& setSatisfactionSurveysResponded(int64_t satisfactionSurveysResponded) { DARABONBA_PTR_SET_VALUE(satisfactionSurveysResponded_, satisfactionSurveysResponded) };


    // serviceLevel20 Field Functions 
    bool hasServiceLevel20() const { return this->serviceLevel20_ != nullptr;};
    void deleteServiceLevel20() { this->serviceLevel20_ = nullptr;};
    inline float serviceLevel20() const { DARABONBA_PTR_GET_DEFAULT(serviceLevel20_, 0.0) };
    inline ListIntervalInstanceReportResponseBodyDataInbound& setServiceLevel20(float serviceLevel20) { DARABONBA_PTR_SET_VALUE(serviceLevel20_, serviceLevel20) };


    // totalAbandonTime Field Functions 
    bool hasTotalAbandonTime() const { return this->totalAbandonTime_ != nullptr;};
    void deleteTotalAbandonTime() { this->totalAbandonTime_ = nullptr;};
    inline int64_t totalAbandonTime() const { DARABONBA_PTR_GET_DEFAULT(totalAbandonTime_, 0L) };
    inline ListIntervalInstanceReportResponseBodyDataInbound& setTotalAbandonTime(int64_t totalAbandonTime) { DARABONBA_PTR_SET_VALUE(totalAbandonTime_, totalAbandonTime) };


    // totalAbandonedInIVRTime Field Functions 
    bool hasTotalAbandonedInIVRTime() const { return this->totalAbandonedInIVRTime_ != nullptr;};
    void deleteTotalAbandonedInIVRTime() { this->totalAbandonedInIVRTime_ = nullptr;};
    inline int64_t totalAbandonedInIVRTime() const { DARABONBA_PTR_GET_DEFAULT(totalAbandonedInIVRTime_, 0L) };
    inline ListIntervalInstanceReportResponseBodyDataInbound& setTotalAbandonedInIVRTime(int64_t totalAbandonedInIVRTime) { DARABONBA_PTR_SET_VALUE(totalAbandonedInIVRTime_, totalAbandonedInIVRTime) };


    // totalAbandonedInQueueTime Field Functions 
    bool hasTotalAbandonedInQueueTime() const { return this->totalAbandonedInQueueTime_ != nullptr;};
    void deleteTotalAbandonedInQueueTime() { this->totalAbandonedInQueueTime_ = nullptr;};
    inline int64_t totalAbandonedInQueueTime() const { DARABONBA_PTR_GET_DEFAULT(totalAbandonedInQueueTime_, 0L) };
    inline ListIntervalInstanceReportResponseBodyDataInbound& setTotalAbandonedInQueueTime(int64_t totalAbandonedInQueueTime) { DARABONBA_PTR_SET_VALUE(totalAbandonedInQueueTime_, totalAbandonedInQueueTime) };


    // totalAbandonedInRingTime Field Functions 
    bool hasTotalAbandonedInRingTime() const { return this->totalAbandonedInRingTime_ != nullptr;};
    void deleteTotalAbandonedInRingTime() { this->totalAbandonedInRingTime_ = nullptr;};
    inline int64_t totalAbandonedInRingTime() const { DARABONBA_PTR_GET_DEFAULT(totalAbandonedInRingTime_, 0L) };
    inline ListIntervalInstanceReportResponseBodyDataInbound& setTotalAbandonedInRingTime(int64_t totalAbandonedInRingTime) { DARABONBA_PTR_SET_VALUE(totalAbandonedInRingTime_, totalAbandonedInRingTime) };


    // totalHoldTime Field Functions 
    bool hasTotalHoldTime() const { return this->totalHoldTime_ != nullptr;};
    void deleteTotalHoldTime() { this->totalHoldTime_ = nullptr;};
    inline int64_t totalHoldTime() const { DARABONBA_PTR_GET_DEFAULT(totalHoldTime_, 0L) };
    inline ListIntervalInstanceReportResponseBodyDataInbound& setTotalHoldTime(int64_t totalHoldTime) { DARABONBA_PTR_SET_VALUE(totalHoldTime_, totalHoldTime) };


    // totalMessagesSent Field Functions 
    bool hasTotalMessagesSent() const { return this->totalMessagesSent_ != nullptr;};
    void deleteTotalMessagesSent() { this->totalMessagesSent_ = nullptr;};
    inline int64_t totalMessagesSent() const { DARABONBA_PTR_GET_DEFAULT(totalMessagesSent_, 0L) };
    inline ListIntervalInstanceReportResponseBodyDataInbound& setTotalMessagesSent(int64_t totalMessagesSent) { DARABONBA_PTR_SET_VALUE(totalMessagesSent_, totalMessagesSent) };


    // totalMessagesSentByAgent Field Functions 
    bool hasTotalMessagesSentByAgent() const { return this->totalMessagesSentByAgent_ != nullptr;};
    void deleteTotalMessagesSentByAgent() { this->totalMessagesSentByAgent_ = nullptr;};
    inline int64_t totalMessagesSentByAgent() const { DARABONBA_PTR_GET_DEFAULT(totalMessagesSentByAgent_, 0L) };
    inline ListIntervalInstanceReportResponseBodyDataInbound& setTotalMessagesSentByAgent(int64_t totalMessagesSentByAgent) { DARABONBA_PTR_SET_VALUE(totalMessagesSentByAgent_, totalMessagesSentByAgent) };


    // totalMessagesSentByCustomer Field Functions 
    bool hasTotalMessagesSentByCustomer() const { return this->totalMessagesSentByCustomer_ != nullptr;};
    void deleteTotalMessagesSentByCustomer() { this->totalMessagesSentByCustomer_ = nullptr;};
    inline int64_t totalMessagesSentByCustomer() const { DARABONBA_PTR_GET_DEFAULT(totalMessagesSentByCustomer_, 0L) };
    inline ListIntervalInstanceReportResponseBodyDataInbound& setTotalMessagesSentByCustomer(int64_t totalMessagesSentByCustomer) { DARABONBA_PTR_SET_VALUE(totalMessagesSentByCustomer_, totalMessagesSentByCustomer) };


    // totalRingTime Field Functions 
    bool hasTotalRingTime() const { return this->totalRingTime_ != nullptr;};
    void deleteTotalRingTime() { this->totalRingTime_ = nullptr;};
    inline int64_t totalRingTime() const { DARABONBA_PTR_GET_DEFAULT(totalRingTime_, 0L) };
    inline ListIntervalInstanceReportResponseBodyDataInbound& setTotalRingTime(int64_t totalRingTime) { DARABONBA_PTR_SET_VALUE(totalRingTime_, totalRingTime) };


    // totalTalkTime Field Functions 
    bool hasTotalTalkTime() const { return this->totalTalkTime_ != nullptr;};
    void deleteTotalTalkTime() { this->totalTalkTime_ = nullptr;};
    inline int64_t totalTalkTime() const { DARABONBA_PTR_GET_DEFAULT(totalTalkTime_, 0L) };
    inline ListIntervalInstanceReportResponseBodyDataInbound& setTotalTalkTime(int64_t totalTalkTime) { DARABONBA_PTR_SET_VALUE(totalTalkTime_, totalTalkTime) };


    // totalWaitTime Field Functions 
    bool hasTotalWaitTime() const { return this->totalWaitTime_ != nullptr;};
    void deleteTotalWaitTime() { this->totalWaitTime_ = nullptr;};
    inline int64_t totalWaitTime() const { DARABONBA_PTR_GET_DEFAULT(totalWaitTime_, 0L) };
    inline ListIntervalInstanceReportResponseBodyDataInbound& setTotalWaitTime(int64_t totalWaitTime) { DARABONBA_PTR_SET_VALUE(totalWaitTime_, totalWaitTime) };


    // totalWorkTime Field Functions 
    bool hasTotalWorkTime() const { return this->totalWorkTime_ != nullptr;};
    void deleteTotalWorkTime() { this->totalWorkTime_ = nullptr;};
    inline int64_t totalWorkTime() const { DARABONBA_PTR_GET_DEFAULT(totalWorkTime_, 0L) };
    inline ListIntervalInstanceReportResponseBodyDataInbound& setTotalWorkTime(int64_t totalWorkTime) { DARABONBA_PTR_SET_VALUE(totalWorkTime_, totalWorkTime) };


  protected:
    std::shared_ptr<float> abandonRate_ = nullptr;
    std::shared_ptr<float> abandonedRate_ = nullptr;
    std::shared_ptr<float> averageAbandonTime_ = nullptr;
    std::shared_ptr<float> averageAbandonedInIVRTime_ = nullptr;
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
    std::shared_ptr<int64_t> callsAbandonedInIVR_ = nullptr;
    std::shared_ptr<int64_t> callsAbandonedInQueue_ = nullptr;
    std::shared_ptr<int64_t> callsAbandonedInRing_ = nullptr;
    std::shared_ptr<int64_t> callsAbandonedInVoiceNavigator_ = nullptr;
    std::shared_ptr<int64_t> callsAttendedTransferred_ = nullptr;
    std::shared_ptr<int64_t> callsBlindTransferred_ = nullptr;
    std::shared_ptr<int64_t> callsCausedIVRException_ = nullptr;
    std::shared_ptr<int64_t> callsForwardToOutsideNumber_ = nullptr;
    std::shared_ptr<int64_t> callsHandled_ = nullptr;
    std::shared_ptr<int64_t> callsHold_ = nullptr;
    std::shared_ptr<int64_t> callsIVRException_ = nullptr;
    std::shared_ptr<int64_t> callsOffered_ = nullptr;
    std::shared_ptr<int64_t> callsQueued_ = nullptr;
    std::shared_ptr<int64_t> callsQueuingFailed_ = nullptr;
    std::shared_ptr<int64_t> callsQueuingOverflow_ = nullptr;
    std::shared_ptr<int64_t> callsQueuingTimeout_ = nullptr;
    std::shared_ptr<int64_t> callsRinged_ = nullptr;
    std::shared_ptr<int64_t> callsToVoicemail_ = nullptr;
    std::shared_ptr<int64_t> callsVoicemail_ = nullptr;
    std::shared_ptr<float> handleRate_ = nullptr;
    std::shared_ptr<int64_t> maxAbandonTime_ = nullptr;
    std::shared_ptr<int64_t> maxAbandonedInIVRTime_ = nullptr;
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
    std::shared_ptr<int64_t> totalAbandonedInIVRTime_ = nullptr;
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
