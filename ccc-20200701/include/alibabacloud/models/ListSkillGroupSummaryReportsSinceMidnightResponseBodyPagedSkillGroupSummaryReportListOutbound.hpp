// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSKILLGROUPSUMMARYREPORTSSINCEMIDNIGHTRESPONSEBODYPAGEDSKILLGROUPSUMMARYREPORTLISTOUTBOUND_HPP_
#define ALIBABACLOUD_MODELS_LISTSKILLGROUPSUMMARYREPORTSSINCEMIDNIGHTRESPONSEBODYPAGEDSKILLGROUPSUMMARYREPORTLISTOUTBOUND_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class ListSkillGroupSummaryReportsSinceMidnightResponseBodyPagedSkillGroupSummaryReportListOutbound : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSkillGroupSummaryReportsSinceMidnightResponseBodyPagedSkillGroupSummaryReportListOutbound& obj) { 
      DARABONBA_PTR_TO_JSON(AnswerRate, answerRate_);
      DARABONBA_PTR_TO_JSON(AverageDialingTime, averageDialingTime_);
      DARABONBA_PTR_TO_JSON(AverageTalkTime, averageTalkTime_);
      DARABONBA_PTR_TO_JSON(AverageWorkTime, averageWorkTime_);
      DARABONBA_PTR_TO_JSON(CallsAbandoned, callsAbandoned_);
      DARABONBA_PTR_TO_JSON(CallsAgentHandled, callsAgentHandled_);
      DARABONBA_PTR_TO_JSON(CallsAnswered, callsAnswered_);
      DARABONBA_PTR_TO_JSON(CallsDialed, callsDialed_);
      DARABONBA_PTR_TO_JSON(CallsOffered, callsOffered_);
      DARABONBA_PTR_TO_JSON(CallsQueuingCancelled, callsQueuingCancelled_);
      DARABONBA_PTR_TO_JSON(CallsQueuingFailed, callsQueuingFailed_);
      DARABONBA_PTR_TO_JSON(CallsQueuingFailure, callsQueuingFailure_);
      DARABONBA_PTR_TO_JSON(CallsQueuingOverflow, callsQueuingOverflow_);
      DARABONBA_PTR_TO_JSON(CallsQueuingRerouted, callsQueuingRerouted_);
      DARABONBA_PTR_TO_JSON(CallsQueuingTimeout, callsQueuingTimeout_);
      DARABONBA_PTR_TO_JSON(CallsServiceLevel30, callsServiceLevel30_);
      DARABONBA_PTR_TO_JSON(CallsServiceLevel30V2, callsServiceLevel30V2_);
      DARABONBA_PTR_TO_JSON(MaxDialingTime, maxDialingTime_);
      DARABONBA_PTR_TO_JSON(MaxTalkTime, maxTalkTime_);
      DARABONBA_PTR_TO_JSON(MaxWorkTime, maxWorkTime_);
      DARABONBA_PTR_TO_JSON(SatisfactionIndex, satisfactionIndex_);
      DARABONBA_PTR_TO_JSON(SatisfactionSurveysOffered, satisfactionSurveysOffered_);
      DARABONBA_PTR_TO_JSON(SatisfactionSurveysResponded, satisfactionSurveysResponded_);
      DARABONBA_PTR_TO_JSON(TotalDialingTime, totalDialingTime_);
      DARABONBA_PTR_TO_JSON(TotalTalkTime, totalTalkTime_);
      DARABONBA_PTR_TO_JSON(TotalWaitTime, totalWaitTime_);
      DARABONBA_PTR_TO_JSON(TotalWorkTime, totalWorkTime_);
    };
    friend void from_json(const Darabonba::Json& j, ListSkillGroupSummaryReportsSinceMidnightResponseBodyPagedSkillGroupSummaryReportListOutbound& obj) { 
      DARABONBA_PTR_FROM_JSON(AnswerRate, answerRate_);
      DARABONBA_PTR_FROM_JSON(AverageDialingTime, averageDialingTime_);
      DARABONBA_PTR_FROM_JSON(AverageTalkTime, averageTalkTime_);
      DARABONBA_PTR_FROM_JSON(AverageWorkTime, averageWorkTime_);
      DARABONBA_PTR_FROM_JSON(CallsAbandoned, callsAbandoned_);
      DARABONBA_PTR_FROM_JSON(CallsAgentHandled, callsAgentHandled_);
      DARABONBA_PTR_FROM_JSON(CallsAnswered, callsAnswered_);
      DARABONBA_PTR_FROM_JSON(CallsDialed, callsDialed_);
      DARABONBA_PTR_FROM_JSON(CallsOffered, callsOffered_);
      DARABONBA_PTR_FROM_JSON(CallsQueuingCancelled, callsQueuingCancelled_);
      DARABONBA_PTR_FROM_JSON(CallsQueuingFailed, callsQueuingFailed_);
      DARABONBA_PTR_FROM_JSON(CallsQueuingFailure, callsQueuingFailure_);
      DARABONBA_PTR_FROM_JSON(CallsQueuingOverflow, callsQueuingOverflow_);
      DARABONBA_PTR_FROM_JSON(CallsQueuingRerouted, callsQueuingRerouted_);
      DARABONBA_PTR_FROM_JSON(CallsQueuingTimeout, callsQueuingTimeout_);
      DARABONBA_PTR_FROM_JSON(CallsServiceLevel30, callsServiceLevel30_);
      DARABONBA_PTR_FROM_JSON(CallsServiceLevel30V2, callsServiceLevel30V2_);
      DARABONBA_PTR_FROM_JSON(MaxDialingTime, maxDialingTime_);
      DARABONBA_PTR_FROM_JSON(MaxTalkTime, maxTalkTime_);
      DARABONBA_PTR_FROM_JSON(MaxWorkTime, maxWorkTime_);
      DARABONBA_PTR_FROM_JSON(SatisfactionIndex, satisfactionIndex_);
      DARABONBA_PTR_FROM_JSON(SatisfactionSurveysOffered, satisfactionSurveysOffered_);
      DARABONBA_PTR_FROM_JSON(SatisfactionSurveysResponded, satisfactionSurveysResponded_);
      DARABONBA_PTR_FROM_JSON(TotalDialingTime, totalDialingTime_);
      DARABONBA_PTR_FROM_JSON(TotalTalkTime, totalTalkTime_);
      DARABONBA_PTR_FROM_JSON(TotalWaitTime, totalWaitTime_);
      DARABONBA_PTR_FROM_JSON(TotalWorkTime, totalWorkTime_);
    };
    ListSkillGroupSummaryReportsSinceMidnightResponseBodyPagedSkillGroupSummaryReportListOutbound() = default ;
    ListSkillGroupSummaryReportsSinceMidnightResponseBodyPagedSkillGroupSummaryReportListOutbound(const ListSkillGroupSummaryReportsSinceMidnightResponseBodyPagedSkillGroupSummaryReportListOutbound &) = default ;
    ListSkillGroupSummaryReportsSinceMidnightResponseBodyPagedSkillGroupSummaryReportListOutbound(ListSkillGroupSummaryReportsSinceMidnightResponseBodyPagedSkillGroupSummaryReportListOutbound &&) = default ;
    ListSkillGroupSummaryReportsSinceMidnightResponseBodyPagedSkillGroupSummaryReportListOutbound(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSkillGroupSummaryReportsSinceMidnightResponseBodyPagedSkillGroupSummaryReportListOutbound() = default ;
    ListSkillGroupSummaryReportsSinceMidnightResponseBodyPagedSkillGroupSummaryReportListOutbound& operator=(const ListSkillGroupSummaryReportsSinceMidnightResponseBodyPagedSkillGroupSummaryReportListOutbound &) = default ;
    ListSkillGroupSummaryReportsSinceMidnightResponseBodyPagedSkillGroupSummaryReportListOutbound& operator=(ListSkillGroupSummaryReportsSinceMidnightResponseBodyPagedSkillGroupSummaryReportListOutbound &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->answerRate_ == nullptr
        && return this->averageDialingTime_ == nullptr && return this->averageTalkTime_ == nullptr && return this->averageWorkTime_ == nullptr && return this->callsAbandoned_ == nullptr && return this->callsAgentHandled_ == nullptr
        && return this->callsAnswered_ == nullptr && return this->callsDialed_ == nullptr && return this->callsOffered_ == nullptr && return this->callsQueuingCancelled_ == nullptr && return this->callsQueuingFailed_ == nullptr
        && return this->callsQueuingFailure_ == nullptr && return this->callsQueuingOverflow_ == nullptr && return this->callsQueuingRerouted_ == nullptr && return this->callsQueuingTimeout_ == nullptr && return this->callsServiceLevel30_ == nullptr
        && return this->callsServiceLevel30V2_ == nullptr && return this->maxDialingTime_ == nullptr && return this->maxTalkTime_ == nullptr && return this->maxWorkTime_ == nullptr && return this->satisfactionIndex_ == nullptr
        && return this->satisfactionSurveysOffered_ == nullptr && return this->satisfactionSurveysResponded_ == nullptr && return this->totalDialingTime_ == nullptr && return this->totalTalkTime_ == nullptr && return this->totalWaitTime_ == nullptr
        && return this->totalWorkTime_ == nullptr; };
    // answerRate Field Functions 
    bool hasAnswerRate() const { return this->answerRate_ != nullptr;};
    void deleteAnswerRate() { this->answerRate_ = nullptr;};
    inline float answerRate() const { DARABONBA_PTR_GET_DEFAULT(answerRate_, 0.0) };
    inline ListSkillGroupSummaryReportsSinceMidnightResponseBodyPagedSkillGroupSummaryReportListOutbound& setAnswerRate(float answerRate) { DARABONBA_PTR_SET_VALUE(answerRate_, answerRate) };


    // averageDialingTime Field Functions 
    bool hasAverageDialingTime() const { return this->averageDialingTime_ != nullptr;};
    void deleteAverageDialingTime() { this->averageDialingTime_ = nullptr;};
    inline int64_t averageDialingTime() const { DARABONBA_PTR_GET_DEFAULT(averageDialingTime_, 0L) };
    inline ListSkillGroupSummaryReportsSinceMidnightResponseBodyPagedSkillGroupSummaryReportListOutbound& setAverageDialingTime(int64_t averageDialingTime) { DARABONBA_PTR_SET_VALUE(averageDialingTime_, averageDialingTime) };


    // averageTalkTime Field Functions 
    bool hasAverageTalkTime() const { return this->averageTalkTime_ != nullptr;};
    void deleteAverageTalkTime() { this->averageTalkTime_ = nullptr;};
    inline int64_t averageTalkTime() const { DARABONBA_PTR_GET_DEFAULT(averageTalkTime_, 0L) };
    inline ListSkillGroupSummaryReportsSinceMidnightResponseBodyPagedSkillGroupSummaryReportListOutbound& setAverageTalkTime(int64_t averageTalkTime) { DARABONBA_PTR_SET_VALUE(averageTalkTime_, averageTalkTime) };


    // averageWorkTime Field Functions 
    bool hasAverageWorkTime() const { return this->averageWorkTime_ != nullptr;};
    void deleteAverageWorkTime() { this->averageWorkTime_ = nullptr;};
    inline int64_t averageWorkTime() const { DARABONBA_PTR_GET_DEFAULT(averageWorkTime_, 0L) };
    inline ListSkillGroupSummaryReportsSinceMidnightResponseBodyPagedSkillGroupSummaryReportListOutbound& setAverageWorkTime(int64_t averageWorkTime) { DARABONBA_PTR_SET_VALUE(averageWorkTime_, averageWorkTime) };


    // callsAbandoned Field Functions 
    bool hasCallsAbandoned() const { return this->callsAbandoned_ != nullptr;};
    void deleteCallsAbandoned() { this->callsAbandoned_ = nullptr;};
    inline int64_t callsAbandoned() const { DARABONBA_PTR_GET_DEFAULT(callsAbandoned_, 0L) };
    inline ListSkillGroupSummaryReportsSinceMidnightResponseBodyPagedSkillGroupSummaryReportListOutbound& setCallsAbandoned(int64_t callsAbandoned) { DARABONBA_PTR_SET_VALUE(callsAbandoned_, callsAbandoned) };


    // callsAgentHandled Field Functions 
    bool hasCallsAgentHandled() const { return this->callsAgentHandled_ != nullptr;};
    void deleteCallsAgentHandled() { this->callsAgentHandled_ = nullptr;};
    inline int64_t callsAgentHandled() const { DARABONBA_PTR_GET_DEFAULT(callsAgentHandled_, 0L) };
    inline ListSkillGroupSummaryReportsSinceMidnightResponseBodyPagedSkillGroupSummaryReportListOutbound& setCallsAgentHandled(int64_t callsAgentHandled) { DARABONBA_PTR_SET_VALUE(callsAgentHandled_, callsAgentHandled) };


    // callsAnswered Field Functions 
    bool hasCallsAnswered() const { return this->callsAnswered_ != nullptr;};
    void deleteCallsAnswered() { this->callsAnswered_ = nullptr;};
    inline int64_t callsAnswered() const { DARABONBA_PTR_GET_DEFAULT(callsAnswered_, 0L) };
    inline ListSkillGroupSummaryReportsSinceMidnightResponseBodyPagedSkillGroupSummaryReportListOutbound& setCallsAnswered(int64_t callsAnswered) { DARABONBA_PTR_SET_VALUE(callsAnswered_, callsAnswered) };


    // callsDialed Field Functions 
    bool hasCallsDialed() const { return this->callsDialed_ != nullptr;};
    void deleteCallsDialed() { this->callsDialed_ = nullptr;};
    inline int64_t callsDialed() const { DARABONBA_PTR_GET_DEFAULT(callsDialed_, 0L) };
    inline ListSkillGroupSummaryReportsSinceMidnightResponseBodyPagedSkillGroupSummaryReportListOutbound& setCallsDialed(int64_t callsDialed) { DARABONBA_PTR_SET_VALUE(callsDialed_, callsDialed) };


    // callsOffered Field Functions 
    bool hasCallsOffered() const { return this->callsOffered_ != nullptr;};
    void deleteCallsOffered() { this->callsOffered_ = nullptr;};
    inline int64_t callsOffered() const { DARABONBA_PTR_GET_DEFAULT(callsOffered_, 0L) };
    inline ListSkillGroupSummaryReportsSinceMidnightResponseBodyPagedSkillGroupSummaryReportListOutbound& setCallsOffered(int64_t callsOffered) { DARABONBA_PTR_SET_VALUE(callsOffered_, callsOffered) };


    // callsQueuingCancelled Field Functions 
    bool hasCallsQueuingCancelled() const { return this->callsQueuingCancelled_ != nullptr;};
    void deleteCallsQueuingCancelled() { this->callsQueuingCancelled_ = nullptr;};
    inline int64_t callsQueuingCancelled() const { DARABONBA_PTR_GET_DEFAULT(callsQueuingCancelled_, 0L) };
    inline ListSkillGroupSummaryReportsSinceMidnightResponseBodyPagedSkillGroupSummaryReportListOutbound& setCallsQueuingCancelled(int64_t callsQueuingCancelled) { DARABONBA_PTR_SET_VALUE(callsQueuingCancelled_, callsQueuingCancelled) };


    // callsQueuingFailed Field Functions 
    bool hasCallsQueuingFailed() const { return this->callsQueuingFailed_ != nullptr;};
    void deleteCallsQueuingFailed() { this->callsQueuingFailed_ = nullptr;};
    inline int64_t callsQueuingFailed() const { DARABONBA_PTR_GET_DEFAULT(callsQueuingFailed_, 0L) };
    inline ListSkillGroupSummaryReportsSinceMidnightResponseBodyPagedSkillGroupSummaryReportListOutbound& setCallsQueuingFailed(int64_t callsQueuingFailed) { DARABONBA_PTR_SET_VALUE(callsQueuingFailed_, callsQueuingFailed) };


    // callsQueuingFailure Field Functions 
    bool hasCallsQueuingFailure() const { return this->callsQueuingFailure_ != nullptr;};
    void deleteCallsQueuingFailure() { this->callsQueuingFailure_ = nullptr;};
    inline int64_t callsQueuingFailure() const { DARABONBA_PTR_GET_DEFAULT(callsQueuingFailure_, 0L) };
    inline ListSkillGroupSummaryReportsSinceMidnightResponseBodyPagedSkillGroupSummaryReportListOutbound& setCallsQueuingFailure(int64_t callsQueuingFailure) { DARABONBA_PTR_SET_VALUE(callsQueuingFailure_, callsQueuingFailure) };


    // callsQueuingOverflow Field Functions 
    bool hasCallsQueuingOverflow() const { return this->callsQueuingOverflow_ != nullptr;};
    void deleteCallsQueuingOverflow() { this->callsQueuingOverflow_ = nullptr;};
    inline int64_t callsQueuingOverflow() const { DARABONBA_PTR_GET_DEFAULT(callsQueuingOverflow_, 0L) };
    inline ListSkillGroupSummaryReportsSinceMidnightResponseBodyPagedSkillGroupSummaryReportListOutbound& setCallsQueuingOverflow(int64_t callsQueuingOverflow) { DARABONBA_PTR_SET_VALUE(callsQueuingOverflow_, callsQueuingOverflow) };


    // callsQueuingRerouted Field Functions 
    bool hasCallsQueuingRerouted() const { return this->callsQueuingRerouted_ != nullptr;};
    void deleteCallsQueuingRerouted() { this->callsQueuingRerouted_ = nullptr;};
    inline int64_t callsQueuingRerouted() const { DARABONBA_PTR_GET_DEFAULT(callsQueuingRerouted_, 0L) };
    inline ListSkillGroupSummaryReportsSinceMidnightResponseBodyPagedSkillGroupSummaryReportListOutbound& setCallsQueuingRerouted(int64_t callsQueuingRerouted) { DARABONBA_PTR_SET_VALUE(callsQueuingRerouted_, callsQueuingRerouted) };


    // callsQueuingTimeout Field Functions 
    bool hasCallsQueuingTimeout() const { return this->callsQueuingTimeout_ != nullptr;};
    void deleteCallsQueuingTimeout() { this->callsQueuingTimeout_ = nullptr;};
    inline int64_t callsQueuingTimeout() const { DARABONBA_PTR_GET_DEFAULT(callsQueuingTimeout_, 0L) };
    inline ListSkillGroupSummaryReportsSinceMidnightResponseBodyPagedSkillGroupSummaryReportListOutbound& setCallsQueuingTimeout(int64_t callsQueuingTimeout) { DARABONBA_PTR_SET_VALUE(callsQueuingTimeout_, callsQueuingTimeout) };


    // callsServiceLevel30 Field Functions 
    bool hasCallsServiceLevel30() const { return this->callsServiceLevel30_ != nullptr;};
    void deleteCallsServiceLevel30() { this->callsServiceLevel30_ = nullptr;};
    inline string callsServiceLevel30() const { DARABONBA_PTR_GET_DEFAULT(callsServiceLevel30_, "") };
    inline ListSkillGroupSummaryReportsSinceMidnightResponseBodyPagedSkillGroupSummaryReportListOutbound& setCallsServiceLevel30(string callsServiceLevel30) { DARABONBA_PTR_SET_VALUE(callsServiceLevel30_, callsServiceLevel30) };


    // callsServiceLevel30V2 Field Functions 
    bool hasCallsServiceLevel30V2() const { return this->callsServiceLevel30V2_ != nullptr;};
    void deleteCallsServiceLevel30V2() { this->callsServiceLevel30V2_ = nullptr;};
    inline int64_t callsServiceLevel30V2() const { DARABONBA_PTR_GET_DEFAULT(callsServiceLevel30V2_, 0L) };
    inline ListSkillGroupSummaryReportsSinceMidnightResponseBodyPagedSkillGroupSummaryReportListOutbound& setCallsServiceLevel30V2(int64_t callsServiceLevel30V2) { DARABONBA_PTR_SET_VALUE(callsServiceLevel30V2_, callsServiceLevel30V2) };


    // maxDialingTime Field Functions 
    bool hasMaxDialingTime() const { return this->maxDialingTime_ != nullptr;};
    void deleteMaxDialingTime() { this->maxDialingTime_ = nullptr;};
    inline int64_t maxDialingTime() const { DARABONBA_PTR_GET_DEFAULT(maxDialingTime_, 0L) };
    inline ListSkillGroupSummaryReportsSinceMidnightResponseBodyPagedSkillGroupSummaryReportListOutbound& setMaxDialingTime(int64_t maxDialingTime) { DARABONBA_PTR_SET_VALUE(maxDialingTime_, maxDialingTime) };


    // maxTalkTime Field Functions 
    bool hasMaxTalkTime() const { return this->maxTalkTime_ != nullptr;};
    void deleteMaxTalkTime() { this->maxTalkTime_ = nullptr;};
    inline int64_t maxTalkTime() const { DARABONBA_PTR_GET_DEFAULT(maxTalkTime_, 0L) };
    inline ListSkillGroupSummaryReportsSinceMidnightResponseBodyPagedSkillGroupSummaryReportListOutbound& setMaxTalkTime(int64_t maxTalkTime) { DARABONBA_PTR_SET_VALUE(maxTalkTime_, maxTalkTime) };


    // maxWorkTime Field Functions 
    bool hasMaxWorkTime() const { return this->maxWorkTime_ != nullptr;};
    void deleteMaxWorkTime() { this->maxWorkTime_ = nullptr;};
    inline int64_t maxWorkTime() const { DARABONBA_PTR_GET_DEFAULT(maxWorkTime_, 0L) };
    inline ListSkillGroupSummaryReportsSinceMidnightResponseBodyPagedSkillGroupSummaryReportListOutbound& setMaxWorkTime(int64_t maxWorkTime) { DARABONBA_PTR_SET_VALUE(maxWorkTime_, maxWorkTime) };


    // satisfactionIndex Field Functions 
    bool hasSatisfactionIndex() const { return this->satisfactionIndex_ != nullptr;};
    void deleteSatisfactionIndex() { this->satisfactionIndex_ = nullptr;};
    inline float satisfactionIndex() const { DARABONBA_PTR_GET_DEFAULT(satisfactionIndex_, 0.0) };
    inline ListSkillGroupSummaryReportsSinceMidnightResponseBodyPagedSkillGroupSummaryReportListOutbound& setSatisfactionIndex(float satisfactionIndex) { DARABONBA_PTR_SET_VALUE(satisfactionIndex_, satisfactionIndex) };


    // satisfactionSurveysOffered Field Functions 
    bool hasSatisfactionSurveysOffered() const { return this->satisfactionSurveysOffered_ != nullptr;};
    void deleteSatisfactionSurveysOffered() { this->satisfactionSurveysOffered_ = nullptr;};
    inline int64_t satisfactionSurveysOffered() const { DARABONBA_PTR_GET_DEFAULT(satisfactionSurveysOffered_, 0L) };
    inline ListSkillGroupSummaryReportsSinceMidnightResponseBodyPagedSkillGroupSummaryReportListOutbound& setSatisfactionSurveysOffered(int64_t satisfactionSurveysOffered) { DARABONBA_PTR_SET_VALUE(satisfactionSurveysOffered_, satisfactionSurveysOffered) };


    // satisfactionSurveysResponded Field Functions 
    bool hasSatisfactionSurveysResponded() const { return this->satisfactionSurveysResponded_ != nullptr;};
    void deleteSatisfactionSurveysResponded() { this->satisfactionSurveysResponded_ = nullptr;};
    inline int64_t satisfactionSurveysResponded() const { DARABONBA_PTR_GET_DEFAULT(satisfactionSurveysResponded_, 0L) };
    inline ListSkillGroupSummaryReportsSinceMidnightResponseBodyPagedSkillGroupSummaryReportListOutbound& setSatisfactionSurveysResponded(int64_t satisfactionSurveysResponded) { DARABONBA_PTR_SET_VALUE(satisfactionSurveysResponded_, satisfactionSurveysResponded) };


    // totalDialingTime Field Functions 
    bool hasTotalDialingTime() const { return this->totalDialingTime_ != nullptr;};
    void deleteTotalDialingTime() { this->totalDialingTime_ = nullptr;};
    inline int64_t totalDialingTime() const { DARABONBA_PTR_GET_DEFAULT(totalDialingTime_, 0L) };
    inline ListSkillGroupSummaryReportsSinceMidnightResponseBodyPagedSkillGroupSummaryReportListOutbound& setTotalDialingTime(int64_t totalDialingTime) { DARABONBA_PTR_SET_VALUE(totalDialingTime_, totalDialingTime) };


    // totalTalkTime Field Functions 
    bool hasTotalTalkTime() const { return this->totalTalkTime_ != nullptr;};
    void deleteTotalTalkTime() { this->totalTalkTime_ = nullptr;};
    inline int64_t totalTalkTime() const { DARABONBA_PTR_GET_DEFAULT(totalTalkTime_, 0L) };
    inline ListSkillGroupSummaryReportsSinceMidnightResponseBodyPagedSkillGroupSummaryReportListOutbound& setTotalTalkTime(int64_t totalTalkTime) { DARABONBA_PTR_SET_VALUE(totalTalkTime_, totalTalkTime) };


    // totalWaitTime Field Functions 
    bool hasTotalWaitTime() const { return this->totalWaitTime_ != nullptr;};
    void deleteTotalWaitTime() { this->totalWaitTime_ = nullptr;};
    inline int64_t totalWaitTime() const { DARABONBA_PTR_GET_DEFAULT(totalWaitTime_, 0L) };
    inline ListSkillGroupSummaryReportsSinceMidnightResponseBodyPagedSkillGroupSummaryReportListOutbound& setTotalWaitTime(int64_t totalWaitTime) { DARABONBA_PTR_SET_VALUE(totalWaitTime_, totalWaitTime) };


    // totalWorkTime Field Functions 
    bool hasTotalWorkTime() const { return this->totalWorkTime_ != nullptr;};
    void deleteTotalWorkTime() { this->totalWorkTime_ = nullptr;};
    inline int64_t totalWorkTime() const { DARABONBA_PTR_GET_DEFAULT(totalWorkTime_, 0L) };
    inline ListSkillGroupSummaryReportsSinceMidnightResponseBodyPagedSkillGroupSummaryReportListOutbound& setTotalWorkTime(int64_t totalWorkTime) { DARABONBA_PTR_SET_VALUE(totalWorkTime_, totalWorkTime) };


  protected:
    std::shared_ptr<float> answerRate_ = nullptr;
    std::shared_ptr<int64_t> averageDialingTime_ = nullptr;
    std::shared_ptr<int64_t> averageTalkTime_ = nullptr;
    std::shared_ptr<int64_t> averageWorkTime_ = nullptr;
    std::shared_ptr<int64_t> callsAbandoned_ = nullptr;
    std::shared_ptr<int64_t> callsAgentHandled_ = nullptr;
    std::shared_ptr<int64_t> callsAnswered_ = nullptr;
    std::shared_ptr<int64_t> callsDialed_ = nullptr;
    std::shared_ptr<int64_t> callsOffered_ = nullptr;
    std::shared_ptr<int64_t> callsQueuingCancelled_ = nullptr;
    std::shared_ptr<int64_t> callsQueuingFailed_ = nullptr;
    std::shared_ptr<int64_t> callsQueuingFailure_ = nullptr;
    std::shared_ptr<int64_t> callsQueuingOverflow_ = nullptr;
    std::shared_ptr<int64_t> callsQueuingRerouted_ = nullptr;
    std::shared_ptr<int64_t> callsQueuingTimeout_ = nullptr;
    std::shared_ptr<string> callsServiceLevel30_ = nullptr;
    std::shared_ptr<int64_t> callsServiceLevel30V2_ = nullptr;
    std::shared_ptr<int64_t> maxDialingTime_ = nullptr;
    std::shared_ptr<int64_t> maxTalkTime_ = nullptr;
    std::shared_ptr<int64_t> maxWorkTime_ = nullptr;
    std::shared_ptr<float> satisfactionIndex_ = nullptr;
    std::shared_ptr<int64_t> satisfactionSurveysOffered_ = nullptr;
    std::shared_ptr<int64_t> satisfactionSurveysResponded_ = nullptr;
    std::shared_ptr<int64_t> totalDialingTime_ = nullptr;
    std::shared_ptr<int64_t> totalTalkTime_ = nullptr;
    std::shared_ptr<int64_t> totalWaitTime_ = nullptr;
    std::shared_ptr<int64_t> totalWorkTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
