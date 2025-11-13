// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSKILLGROUPSUMMARYREPORTSSINCEMIDNIGHTRESPONSEBODYPAGEDSKILLGROUPSUMMARYREPORTLISTINBOUND_HPP_
#define ALIBABACLOUD_MODELS_LISTSKILLGROUPSUMMARYREPORTSSINCEMIDNIGHTRESPONSEBODYPAGEDSKILLGROUPSUMMARYREPORTLISTINBOUND_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class ListSkillGroupSummaryReportsSinceMidnightResponseBodyPagedSkillGroupSummaryReportListInbound : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSkillGroupSummaryReportsSinceMidnightResponseBodyPagedSkillGroupSummaryReportListInbound& obj) { 
      DARABONBA_PTR_TO_JSON(AbandonedInQueueOfQueueCount, abandonedInQueueOfQueueCount_);
      DARABONBA_PTR_TO_JSON(AnsweredByAgentOfQueueCount, answeredByAgentOfQueueCount_);
      DARABONBA_PTR_TO_JSON(AnsweredByAgentOfQueueMaxWaitTimeDuration, answeredByAgentOfQueueMaxWaitTimeDuration_);
      DARABONBA_PTR_TO_JSON(AnsweredByAgentOfQueueWaitTimeDuration, answeredByAgentOfQueueWaitTimeDuration_);
      DARABONBA_PTR_TO_JSON(AverageRingTime, averageRingTime_);
      DARABONBA_PTR_TO_JSON(AverageTalkTime, averageTalkTime_);
      DARABONBA_PTR_TO_JSON(AverageWorkTime, averageWorkTime_);
      DARABONBA_PTR_TO_JSON(CallsAbandoned, callsAbandoned_);
      DARABONBA_PTR_TO_JSON(CallsAttendedTransferOut, callsAttendedTransferOut_);
      DARABONBA_PTR_TO_JSON(CallsBlindTransferOut, callsBlindTransferOut_);
      DARABONBA_PTR_TO_JSON(CallsHandled, callsHandled_);
      DARABONBA_PTR_TO_JSON(CallsOffered, callsOffered_);
      DARABONBA_PTR_TO_JSON(CallsOverflow, callsOverflow_);
      DARABONBA_PTR_TO_JSON(CallsQueuingCanceled, callsQueuingCanceled_);
      DARABONBA_PTR_TO_JSON(CallsQueuingFailure, callsQueuingFailure_);
      DARABONBA_PTR_TO_JSON(CallsQueuingRerouted, callsQueuingRerouted_);
      DARABONBA_PTR_TO_JSON(CallsQueuingTimeout, callsQueuingTimeout_);
      DARABONBA_PTR_TO_JSON(CallsServiceLevel10, callsServiceLevel10_);
      DARABONBA_PTR_TO_JSON(CallsServiceLevel20, callsServiceLevel20_);
      DARABONBA_PTR_TO_JSON(CallsServiceLevel30, callsServiceLevel30_);
      DARABONBA_PTR_TO_JSON(CallsTimeout, callsTimeout_);
      DARABONBA_PTR_TO_JSON(GiveUpByAgentOfQueueCount, giveUpByAgentOfQueueCount_);
      DARABONBA_PTR_TO_JSON(HandleRate, handleRate_);
      DARABONBA_PTR_TO_JSON(InComingQueueOfQueueCount, inComingQueueOfQueueCount_);
      DARABONBA_PTR_TO_JSON(MaxRingTime, maxRingTime_);
      DARABONBA_PTR_TO_JSON(MaxTalkTime, maxTalkTime_);
      DARABONBA_PTR_TO_JSON(MaxWorkTime, maxWorkTime_);
      DARABONBA_PTR_TO_JSON(OverFlowInQueueOfQueueCount, overFlowInQueueOfQueueCount_);
      DARABONBA_PTR_TO_JSON(QueueMaxWaitTimeDuration, queueMaxWaitTimeDuration_);
      DARABONBA_PTR_TO_JSON(QueueWaitTimeDuration, queueWaitTimeDuration_);
      DARABONBA_PTR_TO_JSON(SatisfactionIndex, satisfactionIndex_);
      DARABONBA_PTR_TO_JSON(SatisfactionSurveysOffered, satisfactionSurveysOffered_);
      DARABONBA_PTR_TO_JSON(SatisfactionSurveysResponded, satisfactionSurveysResponded_);
      DARABONBA_PTR_TO_JSON(ServiceLevel20, serviceLevel20_);
      DARABONBA_PTR_TO_JSON(TotalRingTime, totalRingTime_);
      DARABONBA_PTR_TO_JSON(TotalTalkTime, totalTalkTime_);
      DARABONBA_PTR_TO_JSON(TotalWorkTime, totalWorkTime_);
    };
    friend void from_json(const Darabonba::Json& j, ListSkillGroupSummaryReportsSinceMidnightResponseBodyPagedSkillGroupSummaryReportListInbound& obj) { 
      DARABONBA_PTR_FROM_JSON(AbandonedInQueueOfQueueCount, abandonedInQueueOfQueueCount_);
      DARABONBA_PTR_FROM_JSON(AnsweredByAgentOfQueueCount, answeredByAgentOfQueueCount_);
      DARABONBA_PTR_FROM_JSON(AnsweredByAgentOfQueueMaxWaitTimeDuration, answeredByAgentOfQueueMaxWaitTimeDuration_);
      DARABONBA_PTR_FROM_JSON(AnsweredByAgentOfQueueWaitTimeDuration, answeredByAgentOfQueueWaitTimeDuration_);
      DARABONBA_PTR_FROM_JSON(AverageRingTime, averageRingTime_);
      DARABONBA_PTR_FROM_JSON(AverageTalkTime, averageTalkTime_);
      DARABONBA_PTR_FROM_JSON(AverageWorkTime, averageWorkTime_);
      DARABONBA_PTR_FROM_JSON(CallsAbandoned, callsAbandoned_);
      DARABONBA_PTR_FROM_JSON(CallsAttendedTransferOut, callsAttendedTransferOut_);
      DARABONBA_PTR_FROM_JSON(CallsBlindTransferOut, callsBlindTransferOut_);
      DARABONBA_PTR_FROM_JSON(CallsHandled, callsHandled_);
      DARABONBA_PTR_FROM_JSON(CallsOffered, callsOffered_);
      DARABONBA_PTR_FROM_JSON(CallsOverflow, callsOverflow_);
      DARABONBA_PTR_FROM_JSON(CallsQueuingCanceled, callsQueuingCanceled_);
      DARABONBA_PTR_FROM_JSON(CallsQueuingFailure, callsQueuingFailure_);
      DARABONBA_PTR_FROM_JSON(CallsQueuingRerouted, callsQueuingRerouted_);
      DARABONBA_PTR_FROM_JSON(CallsQueuingTimeout, callsQueuingTimeout_);
      DARABONBA_PTR_FROM_JSON(CallsServiceLevel10, callsServiceLevel10_);
      DARABONBA_PTR_FROM_JSON(CallsServiceLevel20, callsServiceLevel20_);
      DARABONBA_PTR_FROM_JSON(CallsServiceLevel30, callsServiceLevel30_);
      DARABONBA_PTR_FROM_JSON(CallsTimeout, callsTimeout_);
      DARABONBA_PTR_FROM_JSON(GiveUpByAgentOfQueueCount, giveUpByAgentOfQueueCount_);
      DARABONBA_PTR_FROM_JSON(HandleRate, handleRate_);
      DARABONBA_PTR_FROM_JSON(InComingQueueOfQueueCount, inComingQueueOfQueueCount_);
      DARABONBA_PTR_FROM_JSON(MaxRingTime, maxRingTime_);
      DARABONBA_PTR_FROM_JSON(MaxTalkTime, maxTalkTime_);
      DARABONBA_PTR_FROM_JSON(MaxWorkTime, maxWorkTime_);
      DARABONBA_PTR_FROM_JSON(OverFlowInQueueOfQueueCount, overFlowInQueueOfQueueCount_);
      DARABONBA_PTR_FROM_JSON(QueueMaxWaitTimeDuration, queueMaxWaitTimeDuration_);
      DARABONBA_PTR_FROM_JSON(QueueWaitTimeDuration, queueWaitTimeDuration_);
      DARABONBA_PTR_FROM_JSON(SatisfactionIndex, satisfactionIndex_);
      DARABONBA_PTR_FROM_JSON(SatisfactionSurveysOffered, satisfactionSurveysOffered_);
      DARABONBA_PTR_FROM_JSON(SatisfactionSurveysResponded, satisfactionSurveysResponded_);
      DARABONBA_PTR_FROM_JSON(ServiceLevel20, serviceLevel20_);
      DARABONBA_PTR_FROM_JSON(TotalRingTime, totalRingTime_);
      DARABONBA_PTR_FROM_JSON(TotalTalkTime, totalTalkTime_);
      DARABONBA_PTR_FROM_JSON(TotalWorkTime, totalWorkTime_);
    };
    ListSkillGroupSummaryReportsSinceMidnightResponseBodyPagedSkillGroupSummaryReportListInbound() = default ;
    ListSkillGroupSummaryReportsSinceMidnightResponseBodyPagedSkillGroupSummaryReportListInbound(const ListSkillGroupSummaryReportsSinceMidnightResponseBodyPagedSkillGroupSummaryReportListInbound &) = default ;
    ListSkillGroupSummaryReportsSinceMidnightResponseBodyPagedSkillGroupSummaryReportListInbound(ListSkillGroupSummaryReportsSinceMidnightResponseBodyPagedSkillGroupSummaryReportListInbound &&) = default ;
    ListSkillGroupSummaryReportsSinceMidnightResponseBodyPagedSkillGroupSummaryReportListInbound(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSkillGroupSummaryReportsSinceMidnightResponseBodyPagedSkillGroupSummaryReportListInbound() = default ;
    ListSkillGroupSummaryReportsSinceMidnightResponseBodyPagedSkillGroupSummaryReportListInbound& operator=(const ListSkillGroupSummaryReportsSinceMidnightResponseBodyPagedSkillGroupSummaryReportListInbound &) = default ;
    ListSkillGroupSummaryReportsSinceMidnightResponseBodyPagedSkillGroupSummaryReportListInbound& operator=(ListSkillGroupSummaryReportsSinceMidnightResponseBodyPagedSkillGroupSummaryReportListInbound &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->abandonedInQueueOfQueueCount_ == nullptr
        && return this->answeredByAgentOfQueueCount_ == nullptr && return this->answeredByAgentOfQueueMaxWaitTimeDuration_ == nullptr && return this->answeredByAgentOfQueueWaitTimeDuration_ == nullptr && return this->averageRingTime_ == nullptr && return this->averageTalkTime_ == nullptr
        && return this->averageWorkTime_ == nullptr && return this->callsAbandoned_ == nullptr && return this->callsAttendedTransferOut_ == nullptr && return this->callsBlindTransferOut_ == nullptr && return this->callsHandled_ == nullptr
        && return this->callsOffered_ == nullptr && return this->callsOverflow_ == nullptr && return this->callsQueuingCanceled_ == nullptr && return this->callsQueuingFailure_ == nullptr && return this->callsQueuingRerouted_ == nullptr
        && return this->callsQueuingTimeout_ == nullptr && return this->callsServiceLevel10_ == nullptr && return this->callsServiceLevel20_ == nullptr && return this->callsServiceLevel30_ == nullptr && return this->callsTimeout_ == nullptr
        && return this->giveUpByAgentOfQueueCount_ == nullptr && return this->handleRate_ == nullptr && return this->inComingQueueOfQueueCount_ == nullptr && return this->maxRingTime_ == nullptr && return this->maxTalkTime_ == nullptr
        && return this->maxWorkTime_ == nullptr && return this->overFlowInQueueOfQueueCount_ == nullptr && return this->queueMaxWaitTimeDuration_ == nullptr && return this->queueWaitTimeDuration_ == nullptr && return this->satisfactionIndex_ == nullptr
        && return this->satisfactionSurveysOffered_ == nullptr && return this->satisfactionSurveysResponded_ == nullptr && return this->serviceLevel20_ == nullptr && return this->totalRingTime_ == nullptr && return this->totalTalkTime_ == nullptr
        && return this->totalWorkTime_ == nullptr; };
    // abandonedInQueueOfQueueCount Field Functions 
    bool hasAbandonedInQueueOfQueueCount() const { return this->abandonedInQueueOfQueueCount_ != nullptr;};
    void deleteAbandonedInQueueOfQueueCount() { this->abandonedInQueueOfQueueCount_ = nullptr;};
    inline int64_t abandonedInQueueOfQueueCount() const { DARABONBA_PTR_GET_DEFAULT(abandonedInQueueOfQueueCount_, 0L) };
    inline ListSkillGroupSummaryReportsSinceMidnightResponseBodyPagedSkillGroupSummaryReportListInbound& setAbandonedInQueueOfQueueCount(int64_t abandonedInQueueOfQueueCount) { DARABONBA_PTR_SET_VALUE(abandonedInQueueOfQueueCount_, abandonedInQueueOfQueueCount) };


    // answeredByAgentOfQueueCount Field Functions 
    bool hasAnsweredByAgentOfQueueCount() const { return this->answeredByAgentOfQueueCount_ != nullptr;};
    void deleteAnsweredByAgentOfQueueCount() { this->answeredByAgentOfQueueCount_ = nullptr;};
    inline int64_t answeredByAgentOfQueueCount() const { DARABONBA_PTR_GET_DEFAULT(answeredByAgentOfQueueCount_, 0L) };
    inline ListSkillGroupSummaryReportsSinceMidnightResponseBodyPagedSkillGroupSummaryReportListInbound& setAnsweredByAgentOfQueueCount(int64_t answeredByAgentOfQueueCount) { DARABONBA_PTR_SET_VALUE(answeredByAgentOfQueueCount_, answeredByAgentOfQueueCount) };


    // answeredByAgentOfQueueMaxWaitTimeDuration Field Functions 
    bool hasAnsweredByAgentOfQueueMaxWaitTimeDuration() const { return this->answeredByAgentOfQueueMaxWaitTimeDuration_ != nullptr;};
    void deleteAnsweredByAgentOfQueueMaxWaitTimeDuration() { this->answeredByAgentOfQueueMaxWaitTimeDuration_ = nullptr;};
    inline int64_t answeredByAgentOfQueueMaxWaitTimeDuration() const { DARABONBA_PTR_GET_DEFAULT(answeredByAgentOfQueueMaxWaitTimeDuration_, 0L) };
    inline ListSkillGroupSummaryReportsSinceMidnightResponseBodyPagedSkillGroupSummaryReportListInbound& setAnsweredByAgentOfQueueMaxWaitTimeDuration(int64_t answeredByAgentOfQueueMaxWaitTimeDuration) { DARABONBA_PTR_SET_VALUE(answeredByAgentOfQueueMaxWaitTimeDuration_, answeredByAgentOfQueueMaxWaitTimeDuration) };


    // answeredByAgentOfQueueWaitTimeDuration Field Functions 
    bool hasAnsweredByAgentOfQueueWaitTimeDuration() const { return this->answeredByAgentOfQueueWaitTimeDuration_ != nullptr;};
    void deleteAnsweredByAgentOfQueueWaitTimeDuration() { this->answeredByAgentOfQueueWaitTimeDuration_ = nullptr;};
    inline int64_t answeredByAgentOfQueueWaitTimeDuration() const { DARABONBA_PTR_GET_DEFAULT(answeredByAgentOfQueueWaitTimeDuration_, 0L) };
    inline ListSkillGroupSummaryReportsSinceMidnightResponseBodyPagedSkillGroupSummaryReportListInbound& setAnsweredByAgentOfQueueWaitTimeDuration(int64_t answeredByAgentOfQueueWaitTimeDuration) { DARABONBA_PTR_SET_VALUE(answeredByAgentOfQueueWaitTimeDuration_, answeredByAgentOfQueueWaitTimeDuration) };


    // averageRingTime Field Functions 
    bool hasAverageRingTime() const { return this->averageRingTime_ != nullptr;};
    void deleteAverageRingTime() { this->averageRingTime_ = nullptr;};
    inline int64_t averageRingTime() const { DARABONBA_PTR_GET_DEFAULT(averageRingTime_, 0L) };
    inline ListSkillGroupSummaryReportsSinceMidnightResponseBodyPagedSkillGroupSummaryReportListInbound& setAverageRingTime(int64_t averageRingTime) { DARABONBA_PTR_SET_VALUE(averageRingTime_, averageRingTime) };


    // averageTalkTime Field Functions 
    bool hasAverageTalkTime() const { return this->averageTalkTime_ != nullptr;};
    void deleteAverageTalkTime() { this->averageTalkTime_ = nullptr;};
    inline int64_t averageTalkTime() const { DARABONBA_PTR_GET_DEFAULT(averageTalkTime_, 0L) };
    inline ListSkillGroupSummaryReportsSinceMidnightResponseBodyPagedSkillGroupSummaryReportListInbound& setAverageTalkTime(int64_t averageTalkTime) { DARABONBA_PTR_SET_VALUE(averageTalkTime_, averageTalkTime) };


    // averageWorkTime Field Functions 
    bool hasAverageWorkTime() const { return this->averageWorkTime_ != nullptr;};
    void deleteAverageWorkTime() { this->averageWorkTime_ = nullptr;};
    inline int64_t averageWorkTime() const { DARABONBA_PTR_GET_DEFAULT(averageWorkTime_, 0L) };
    inline ListSkillGroupSummaryReportsSinceMidnightResponseBodyPagedSkillGroupSummaryReportListInbound& setAverageWorkTime(int64_t averageWorkTime) { DARABONBA_PTR_SET_VALUE(averageWorkTime_, averageWorkTime) };


    // callsAbandoned Field Functions 
    bool hasCallsAbandoned() const { return this->callsAbandoned_ != nullptr;};
    void deleteCallsAbandoned() { this->callsAbandoned_ = nullptr;};
    inline int64_t callsAbandoned() const { DARABONBA_PTR_GET_DEFAULT(callsAbandoned_, 0L) };
    inline ListSkillGroupSummaryReportsSinceMidnightResponseBodyPagedSkillGroupSummaryReportListInbound& setCallsAbandoned(int64_t callsAbandoned) { DARABONBA_PTR_SET_VALUE(callsAbandoned_, callsAbandoned) };


    // callsAttendedTransferOut Field Functions 
    bool hasCallsAttendedTransferOut() const { return this->callsAttendedTransferOut_ != nullptr;};
    void deleteCallsAttendedTransferOut() { this->callsAttendedTransferOut_ = nullptr;};
    inline int64_t callsAttendedTransferOut() const { DARABONBA_PTR_GET_DEFAULT(callsAttendedTransferOut_, 0L) };
    inline ListSkillGroupSummaryReportsSinceMidnightResponseBodyPagedSkillGroupSummaryReportListInbound& setCallsAttendedTransferOut(int64_t callsAttendedTransferOut) { DARABONBA_PTR_SET_VALUE(callsAttendedTransferOut_, callsAttendedTransferOut) };


    // callsBlindTransferOut Field Functions 
    bool hasCallsBlindTransferOut() const { return this->callsBlindTransferOut_ != nullptr;};
    void deleteCallsBlindTransferOut() { this->callsBlindTransferOut_ = nullptr;};
    inline int64_t callsBlindTransferOut() const { DARABONBA_PTR_GET_DEFAULT(callsBlindTransferOut_, 0L) };
    inline ListSkillGroupSummaryReportsSinceMidnightResponseBodyPagedSkillGroupSummaryReportListInbound& setCallsBlindTransferOut(int64_t callsBlindTransferOut) { DARABONBA_PTR_SET_VALUE(callsBlindTransferOut_, callsBlindTransferOut) };


    // callsHandled Field Functions 
    bool hasCallsHandled() const { return this->callsHandled_ != nullptr;};
    void deleteCallsHandled() { this->callsHandled_ = nullptr;};
    inline int64_t callsHandled() const { DARABONBA_PTR_GET_DEFAULT(callsHandled_, 0L) };
    inline ListSkillGroupSummaryReportsSinceMidnightResponseBodyPagedSkillGroupSummaryReportListInbound& setCallsHandled(int64_t callsHandled) { DARABONBA_PTR_SET_VALUE(callsHandled_, callsHandled) };


    // callsOffered Field Functions 
    bool hasCallsOffered() const { return this->callsOffered_ != nullptr;};
    void deleteCallsOffered() { this->callsOffered_ = nullptr;};
    inline int64_t callsOffered() const { DARABONBA_PTR_GET_DEFAULT(callsOffered_, 0L) };
    inline ListSkillGroupSummaryReportsSinceMidnightResponseBodyPagedSkillGroupSummaryReportListInbound& setCallsOffered(int64_t callsOffered) { DARABONBA_PTR_SET_VALUE(callsOffered_, callsOffered) };


    // callsOverflow Field Functions 
    bool hasCallsOverflow() const { return this->callsOverflow_ != nullptr;};
    void deleteCallsOverflow() { this->callsOverflow_ = nullptr;};
    inline string callsOverflow() const { DARABONBA_PTR_GET_DEFAULT(callsOverflow_, "") };
    inline ListSkillGroupSummaryReportsSinceMidnightResponseBodyPagedSkillGroupSummaryReportListInbound& setCallsOverflow(string callsOverflow) { DARABONBA_PTR_SET_VALUE(callsOverflow_, callsOverflow) };


    // callsQueuingCanceled Field Functions 
    bool hasCallsQueuingCanceled() const { return this->callsQueuingCanceled_ != nullptr;};
    void deleteCallsQueuingCanceled() { this->callsQueuingCanceled_ = nullptr;};
    inline string callsQueuingCanceled() const { DARABONBA_PTR_GET_DEFAULT(callsQueuingCanceled_, "") };
    inline ListSkillGroupSummaryReportsSinceMidnightResponseBodyPagedSkillGroupSummaryReportListInbound& setCallsQueuingCanceled(string callsQueuingCanceled) { DARABONBA_PTR_SET_VALUE(callsQueuingCanceled_, callsQueuingCanceled) };


    // callsQueuingFailure Field Functions 
    bool hasCallsQueuingFailure() const { return this->callsQueuingFailure_ != nullptr;};
    void deleteCallsQueuingFailure() { this->callsQueuingFailure_ = nullptr;};
    inline string callsQueuingFailure() const { DARABONBA_PTR_GET_DEFAULT(callsQueuingFailure_, "") };
    inline ListSkillGroupSummaryReportsSinceMidnightResponseBodyPagedSkillGroupSummaryReportListInbound& setCallsQueuingFailure(string callsQueuingFailure) { DARABONBA_PTR_SET_VALUE(callsQueuingFailure_, callsQueuingFailure) };


    // callsQueuingRerouted Field Functions 
    bool hasCallsQueuingRerouted() const { return this->callsQueuingRerouted_ != nullptr;};
    void deleteCallsQueuingRerouted() { this->callsQueuingRerouted_ = nullptr;};
    inline string callsQueuingRerouted() const { DARABONBA_PTR_GET_DEFAULT(callsQueuingRerouted_, "") };
    inline ListSkillGroupSummaryReportsSinceMidnightResponseBodyPagedSkillGroupSummaryReportListInbound& setCallsQueuingRerouted(string callsQueuingRerouted) { DARABONBA_PTR_SET_VALUE(callsQueuingRerouted_, callsQueuingRerouted) };


    // callsQueuingTimeout Field Functions 
    bool hasCallsQueuingTimeout() const { return this->callsQueuingTimeout_ != nullptr;};
    void deleteCallsQueuingTimeout() { this->callsQueuingTimeout_ = nullptr;};
    inline int64_t callsQueuingTimeout() const { DARABONBA_PTR_GET_DEFAULT(callsQueuingTimeout_, 0L) };
    inline ListSkillGroupSummaryReportsSinceMidnightResponseBodyPagedSkillGroupSummaryReportListInbound& setCallsQueuingTimeout(int64_t callsQueuingTimeout) { DARABONBA_PTR_SET_VALUE(callsQueuingTimeout_, callsQueuingTimeout) };


    // callsServiceLevel10 Field Functions 
    bool hasCallsServiceLevel10() const { return this->callsServiceLevel10_ != nullptr;};
    void deleteCallsServiceLevel10() { this->callsServiceLevel10_ = nullptr;};
    inline int64_t callsServiceLevel10() const { DARABONBA_PTR_GET_DEFAULT(callsServiceLevel10_, 0L) };
    inline ListSkillGroupSummaryReportsSinceMidnightResponseBodyPagedSkillGroupSummaryReportListInbound& setCallsServiceLevel10(int64_t callsServiceLevel10) { DARABONBA_PTR_SET_VALUE(callsServiceLevel10_, callsServiceLevel10) };


    // callsServiceLevel20 Field Functions 
    bool hasCallsServiceLevel20() const { return this->callsServiceLevel20_ != nullptr;};
    void deleteCallsServiceLevel20() { this->callsServiceLevel20_ = nullptr;};
    inline int64_t callsServiceLevel20() const { DARABONBA_PTR_GET_DEFAULT(callsServiceLevel20_, 0L) };
    inline ListSkillGroupSummaryReportsSinceMidnightResponseBodyPagedSkillGroupSummaryReportListInbound& setCallsServiceLevel20(int64_t callsServiceLevel20) { DARABONBA_PTR_SET_VALUE(callsServiceLevel20_, callsServiceLevel20) };


    // callsServiceLevel30 Field Functions 
    bool hasCallsServiceLevel30() const { return this->callsServiceLevel30_ != nullptr;};
    void deleteCallsServiceLevel30() { this->callsServiceLevel30_ = nullptr;};
    inline int64_t callsServiceLevel30() const { DARABONBA_PTR_GET_DEFAULT(callsServiceLevel30_, 0L) };
    inline ListSkillGroupSummaryReportsSinceMidnightResponseBodyPagedSkillGroupSummaryReportListInbound& setCallsServiceLevel30(int64_t callsServiceLevel30) { DARABONBA_PTR_SET_VALUE(callsServiceLevel30_, callsServiceLevel30) };


    // callsTimeout Field Functions 
    bool hasCallsTimeout() const { return this->callsTimeout_ != nullptr;};
    void deleteCallsTimeout() { this->callsTimeout_ = nullptr;};
    inline int64_t callsTimeout() const { DARABONBA_PTR_GET_DEFAULT(callsTimeout_, 0L) };
    inline ListSkillGroupSummaryReportsSinceMidnightResponseBodyPagedSkillGroupSummaryReportListInbound& setCallsTimeout(int64_t callsTimeout) { DARABONBA_PTR_SET_VALUE(callsTimeout_, callsTimeout) };


    // giveUpByAgentOfQueueCount Field Functions 
    bool hasGiveUpByAgentOfQueueCount() const { return this->giveUpByAgentOfQueueCount_ != nullptr;};
    void deleteGiveUpByAgentOfQueueCount() { this->giveUpByAgentOfQueueCount_ = nullptr;};
    inline int64_t giveUpByAgentOfQueueCount() const { DARABONBA_PTR_GET_DEFAULT(giveUpByAgentOfQueueCount_, 0L) };
    inline ListSkillGroupSummaryReportsSinceMidnightResponseBodyPagedSkillGroupSummaryReportListInbound& setGiveUpByAgentOfQueueCount(int64_t giveUpByAgentOfQueueCount) { DARABONBA_PTR_SET_VALUE(giveUpByAgentOfQueueCount_, giveUpByAgentOfQueueCount) };


    // handleRate Field Functions 
    bool hasHandleRate() const { return this->handleRate_ != nullptr;};
    void deleteHandleRate() { this->handleRate_ = nullptr;};
    inline float handleRate() const { DARABONBA_PTR_GET_DEFAULT(handleRate_, 0.0) };
    inline ListSkillGroupSummaryReportsSinceMidnightResponseBodyPagedSkillGroupSummaryReportListInbound& setHandleRate(float handleRate) { DARABONBA_PTR_SET_VALUE(handleRate_, handleRate) };


    // inComingQueueOfQueueCount Field Functions 
    bool hasInComingQueueOfQueueCount() const { return this->inComingQueueOfQueueCount_ != nullptr;};
    void deleteInComingQueueOfQueueCount() { this->inComingQueueOfQueueCount_ = nullptr;};
    inline int64_t inComingQueueOfQueueCount() const { DARABONBA_PTR_GET_DEFAULT(inComingQueueOfQueueCount_, 0L) };
    inline ListSkillGroupSummaryReportsSinceMidnightResponseBodyPagedSkillGroupSummaryReportListInbound& setInComingQueueOfQueueCount(int64_t inComingQueueOfQueueCount) { DARABONBA_PTR_SET_VALUE(inComingQueueOfQueueCount_, inComingQueueOfQueueCount) };


    // maxRingTime Field Functions 
    bool hasMaxRingTime() const { return this->maxRingTime_ != nullptr;};
    void deleteMaxRingTime() { this->maxRingTime_ = nullptr;};
    inline int64_t maxRingTime() const { DARABONBA_PTR_GET_DEFAULT(maxRingTime_, 0L) };
    inline ListSkillGroupSummaryReportsSinceMidnightResponseBodyPagedSkillGroupSummaryReportListInbound& setMaxRingTime(int64_t maxRingTime) { DARABONBA_PTR_SET_VALUE(maxRingTime_, maxRingTime) };


    // maxTalkTime Field Functions 
    bool hasMaxTalkTime() const { return this->maxTalkTime_ != nullptr;};
    void deleteMaxTalkTime() { this->maxTalkTime_ = nullptr;};
    inline string maxTalkTime() const { DARABONBA_PTR_GET_DEFAULT(maxTalkTime_, "") };
    inline ListSkillGroupSummaryReportsSinceMidnightResponseBodyPagedSkillGroupSummaryReportListInbound& setMaxTalkTime(string maxTalkTime) { DARABONBA_PTR_SET_VALUE(maxTalkTime_, maxTalkTime) };


    // maxWorkTime Field Functions 
    bool hasMaxWorkTime() const { return this->maxWorkTime_ != nullptr;};
    void deleteMaxWorkTime() { this->maxWorkTime_ = nullptr;};
    inline int64_t maxWorkTime() const { DARABONBA_PTR_GET_DEFAULT(maxWorkTime_, 0L) };
    inline ListSkillGroupSummaryReportsSinceMidnightResponseBodyPagedSkillGroupSummaryReportListInbound& setMaxWorkTime(int64_t maxWorkTime) { DARABONBA_PTR_SET_VALUE(maxWorkTime_, maxWorkTime) };


    // overFlowInQueueOfQueueCount Field Functions 
    bool hasOverFlowInQueueOfQueueCount() const { return this->overFlowInQueueOfQueueCount_ != nullptr;};
    void deleteOverFlowInQueueOfQueueCount() { this->overFlowInQueueOfQueueCount_ = nullptr;};
    inline int64_t overFlowInQueueOfQueueCount() const { DARABONBA_PTR_GET_DEFAULT(overFlowInQueueOfQueueCount_, 0L) };
    inline ListSkillGroupSummaryReportsSinceMidnightResponseBodyPagedSkillGroupSummaryReportListInbound& setOverFlowInQueueOfQueueCount(int64_t overFlowInQueueOfQueueCount) { DARABONBA_PTR_SET_VALUE(overFlowInQueueOfQueueCount_, overFlowInQueueOfQueueCount) };


    // queueMaxWaitTimeDuration Field Functions 
    bool hasQueueMaxWaitTimeDuration() const { return this->queueMaxWaitTimeDuration_ != nullptr;};
    void deleteQueueMaxWaitTimeDuration() { this->queueMaxWaitTimeDuration_ = nullptr;};
    inline int64_t queueMaxWaitTimeDuration() const { DARABONBA_PTR_GET_DEFAULT(queueMaxWaitTimeDuration_, 0L) };
    inline ListSkillGroupSummaryReportsSinceMidnightResponseBodyPagedSkillGroupSummaryReportListInbound& setQueueMaxWaitTimeDuration(int64_t queueMaxWaitTimeDuration) { DARABONBA_PTR_SET_VALUE(queueMaxWaitTimeDuration_, queueMaxWaitTimeDuration) };


    // queueWaitTimeDuration Field Functions 
    bool hasQueueWaitTimeDuration() const { return this->queueWaitTimeDuration_ != nullptr;};
    void deleteQueueWaitTimeDuration() { this->queueWaitTimeDuration_ = nullptr;};
    inline int64_t queueWaitTimeDuration() const { DARABONBA_PTR_GET_DEFAULT(queueWaitTimeDuration_, 0L) };
    inline ListSkillGroupSummaryReportsSinceMidnightResponseBodyPagedSkillGroupSummaryReportListInbound& setQueueWaitTimeDuration(int64_t queueWaitTimeDuration) { DARABONBA_PTR_SET_VALUE(queueWaitTimeDuration_, queueWaitTimeDuration) };


    // satisfactionIndex Field Functions 
    bool hasSatisfactionIndex() const { return this->satisfactionIndex_ != nullptr;};
    void deleteSatisfactionIndex() { this->satisfactionIndex_ = nullptr;};
    inline float satisfactionIndex() const { DARABONBA_PTR_GET_DEFAULT(satisfactionIndex_, 0.0) };
    inline ListSkillGroupSummaryReportsSinceMidnightResponseBodyPagedSkillGroupSummaryReportListInbound& setSatisfactionIndex(float satisfactionIndex) { DARABONBA_PTR_SET_VALUE(satisfactionIndex_, satisfactionIndex) };


    // satisfactionSurveysOffered Field Functions 
    bool hasSatisfactionSurveysOffered() const { return this->satisfactionSurveysOffered_ != nullptr;};
    void deleteSatisfactionSurveysOffered() { this->satisfactionSurveysOffered_ = nullptr;};
    inline int64_t satisfactionSurveysOffered() const { DARABONBA_PTR_GET_DEFAULT(satisfactionSurveysOffered_, 0L) };
    inline ListSkillGroupSummaryReportsSinceMidnightResponseBodyPagedSkillGroupSummaryReportListInbound& setSatisfactionSurveysOffered(int64_t satisfactionSurveysOffered) { DARABONBA_PTR_SET_VALUE(satisfactionSurveysOffered_, satisfactionSurveysOffered) };


    // satisfactionSurveysResponded Field Functions 
    bool hasSatisfactionSurveysResponded() const { return this->satisfactionSurveysResponded_ != nullptr;};
    void deleteSatisfactionSurveysResponded() { this->satisfactionSurveysResponded_ = nullptr;};
    inline int64_t satisfactionSurveysResponded() const { DARABONBA_PTR_GET_DEFAULT(satisfactionSurveysResponded_, 0L) };
    inline ListSkillGroupSummaryReportsSinceMidnightResponseBodyPagedSkillGroupSummaryReportListInbound& setSatisfactionSurveysResponded(int64_t satisfactionSurveysResponded) { DARABONBA_PTR_SET_VALUE(satisfactionSurveysResponded_, satisfactionSurveysResponded) };


    // serviceLevel20 Field Functions 
    bool hasServiceLevel20() const { return this->serviceLevel20_ != nullptr;};
    void deleteServiceLevel20() { this->serviceLevel20_ = nullptr;};
    inline float serviceLevel20() const { DARABONBA_PTR_GET_DEFAULT(serviceLevel20_, 0.0) };
    inline ListSkillGroupSummaryReportsSinceMidnightResponseBodyPagedSkillGroupSummaryReportListInbound& setServiceLevel20(float serviceLevel20) { DARABONBA_PTR_SET_VALUE(serviceLevel20_, serviceLevel20) };


    // totalRingTime Field Functions 
    bool hasTotalRingTime() const { return this->totalRingTime_ != nullptr;};
    void deleteTotalRingTime() { this->totalRingTime_ = nullptr;};
    inline int64_t totalRingTime() const { DARABONBA_PTR_GET_DEFAULT(totalRingTime_, 0L) };
    inline ListSkillGroupSummaryReportsSinceMidnightResponseBodyPagedSkillGroupSummaryReportListInbound& setTotalRingTime(int64_t totalRingTime) { DARABONBA_PTR_SET_VALUE(totalRingTime_, totalRingTime) };


    // totalTalkTime Field Functions 
    bool hasTotalTalkTime() const { return this->totalTalkTime_ != nullptr;};
    void deleteTotalTalkTime() { this->totalTalkTime_ = nullptr;};
    inline int64_t totalTalkTime() const { DARABONBA_PTR_GET_DEFAULT(totalTalkTime_, 0L) };
    inline ListSkillGroupSummaryReportsSinceMidnightResponseBodyPagedSkillGroupSummaryReportListInbound& setTotalTalkTime(int64_t totalTalkTime) { DARABONBA_PTR_SET_VALUE(totalTalkTime_, totalTalkTime) };


    // totalWorkTime Field Functions 
    bool hasTotalWorkTime() const { return this->totalWorkTime_ != nullptr;};
    void deleteTotalWorkTime() { this->totalWorkTime_ = nullptr;};
    inline int64_t totalWorkTime() const { DARABONBA_PTR_GET_DEFAULT(totalWorkTime_, 0L) };
    inline ListSkillGroupSummaryReportsSinceMidnightResponseBodyPagedSkillGroupSummaryReportListInbound& setTotalWorkTime(int64_t totalWorkTime) { DARABONBA_PTR_SET_VALUE(totalWorkTime_, totalWorkTime) };


  protected:
    std::shared_ptr<int64_t> abandonedInQueueOfQueueCount_ = nullptr;
    std::shared_ptr<int64_t> answeredByAgentOfQueueCount_ = nullptr;
    std::shared_ptr<int64_t> answeredByAgentOfQueueMaxWaitTimeDuration_ = nullptr;
    std::shared_ptr<int64_t> answeredByAgentOfQueueWaitTimeDuration_ = nullptr;
    std::shared_ptr<int64_t> averageRingTime_ = nullptr;
    std::shared_ptr<int64_t> averageTalkTime_ = nullptr;
    std::shared_ptr<int64_t> averageWorkTime_ = nullptr;
    std::shared_ptr<int64_t> callsAbandoned_ = nullptr;
    std::shared_ptr<int64_t> callsAttendedTransferOut_ = nullptr;
    std::shared_ptr<int64_t> callsBlindTransferOut_ = nullptr;
    std::shared_ptr<int64_t> callsHandled_ = nullptr;
    std::shared_ptr<int64_t> callsOffered_ = nullptr;
    std::shared_ptr<string> callsOverflow_ = nullptr;
    std::shared_ptr<string> callsQueuingCanceled_ = nullptr;
    std::shared_ptr<string> callsQueuingFailure_ = nullptr;
    std::shared_ptr<string> callsQueuingRerouted_ = nullptr;
    std::shared_ptr<int64_t> callsQueuingTimeout_ = nullptr;
    std::shared_ptr<int64_t> callsServiceLevel10_ = nullptr;
    std::shared_ptr<int64_t> callsServiceLevel20_ = nullptr;
    std::shared_ptr<int64_t> callsServiceLevel30_ = nullptr;
    std::shared_ptr<int64_t> callsTimeout_ = nullptr;
    std::shared_ptr<int64_t> giveUpByAgentOfQueueCount_ = nullptr;
    std::shared_ptr<float> handleRate_ = nullptr;
    std::shared_ptr<int64_t> inComingQueueOfQueueCount_ = nullptr;
    std::shared_ptr<int64_t> maxRingTime_ = nullptr;
    std::shared_ptr<string> maxTalkTime_ = nullptr;
    std::shared_ptr<int64_t> maxWorkTime_ = nullptr;
    std::shared_ptr<int64_t> overFlowInQueueOfQueueCount_ = nullptr;
    std::shared_ptr<int64_t> queueMaxWaitTimeDuration_ = nullptr;
    std::shared_ptr<int64_t> queueWaitTimeDuration_ = nullptr;
    std::shared_ptr<float> satisfactionIndex_ = nullptr;
    std::shared_ptr<int64_t> satisfactionSurveysOffered_ = nullptr;
    std::shared_ptr<int64_t> satisfactionSurveysResponded_ = nullptr;
    std::shared_ptr<float> serviceLevel20_ = nullptr;
    std::shared_ptr<int64_t> totalRingTime_ = nullptr;
    std::shared_ptr<int64_t> totalTalkTime_ = nullptr;
    std::shared_ptr<int64_t> totalWorkTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
