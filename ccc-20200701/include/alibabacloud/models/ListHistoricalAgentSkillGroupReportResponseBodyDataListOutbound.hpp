// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTHISTORICALAGENTSKILLGROUPREPORTRESPONSEBODYDATALISTOUTBOUND_HPP_
#define ALIBABACLOUD_MODELS_LISTHISTORICALAGENTSKILLGROUPREPORTRESPONSEBODYDATALISTOUTBOUND_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class ListHistoricalAgentSkillGroupReportResponseBodyDataListOutbound : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListHistoricalAgentSkillGroupReportResponseBodyDataListOutbound& obj) { 
      DARABONBA_PTR_TO_JSON(AnswerRate, answerRate_);
      DARABONBA_PTR_TO_JSON(AverageDialingTime, averageDialingTime_);
      DARABONBA_PTR_TO_JSON(AverageHoldTime, averageHoldTime_);
      DARABONBA_PTR_TO_JSON(AverageRingTime, averageRingTime_);
      DARABONBA_PTR_TO_JSON(AverageTalkTime, averageTalkTime_);
      DARABONBA_PTR_TO_JSON(AverageWorkTime, averageWorkTime_);
      DARABONBA_PTR_TO_JSON(CallsAnswered, callsAnswered_);
      DARABONBA_PTR_TO_JSON(CallsAttendedTransferIn, callsAttendedTransferIn_);
      DARABONBA_PTR_TO_JSON(CallsAttendedTransferOut, callsAttendedTransferOut_);
      DARABONBA_PTR_TO_JSON(CallsBlindTransferIn, callsBlindTransferIn_);
      DARABONBA_PTR_TO_JSON(CallsBlindTransferOut, callsBlindTransferOut_);
      DARABONBA_PTR_TO_JSON(CallsDialed, callsDialed_);
      DARABONBA_PTR_TO_JSON(CallsHold, callsHold_);
      DARABONBA_PTR_TO_JSON(CallsRinged, callsRinged_);
      DARABONBA_PTR_TO_JSON(MaxDialingTime, maxDialingTime_);
      DARABONBA_PTR_TO_JSON(MaxHoldTime, maxHoldTime_);
      DARABONBA_PTR_TO_JSON(MaxRingTime, maxRingTime_);
      DARABONBA_PTR_TO_JSON(MaxTalkTime, maxTalkTime_);
      DARABONBA_PTR_TO_JSON(MaxWorkTime, maxWorkTime_);
      DARABONBA_PTR_TO_JSON(SatisfactionIndex, satisfactionIndex_);
      DARABONBA_PTR_TO_JSON(SatisfactionRate, satisfactionRate_);
      DARABONBA_PTR_TO_JSON(SatisfactionSurveysOffered, satisfactionSurveysOffered_);
      DARABONBA_PTR_TO_JSON(SatisfactionSurveysResponded, satisfactionSurveysResponded_);
      DARABONBA_PTR_TO_JSON(TotalDialingTime, totalDialingTime_);
      DARABONBA_PTR_TO_JSON(TotalHoldTime, totalHoldTime_);
      DARABONBA_PTR_TO_JSON(TotalRingTime, totalRingTime_);
      DARABONBA_PTR_TO_JSON(TotalTalkTime, totalTalkTime_);
      DARABONBA_PTR_TO_JSON(TotalWorkTime, totalWorkTime_);
    };
    friend void from_json(const Darabonba::Json& j, ListHistoricalAgentSkillGroupReportResponseBodyDataListOutbound& obj) { 
      DARABONBA_PTR_FROM_JSON(AnswerRate, answerRate_);
      DARABONBA_PTR_FROM_JSON(AverageDialingTime, averageDialingTime_);
      DARABONBA_PTR_FROM_JSON(AverageHoldTime, averageHoldTime_);
      DARABONBA_PTR_FROM_JSON(AverageRingTime, averageRingTime_);
      DARABONBA_PTR_FROM_JSON(AverageTalkTime, averageTalkTime_);
      DARABONBA_PTR_FROM_JSON(AverageWorkTime, averageWorkTime_);
      DARABONBA_PTR_FROM_JSON(CallsAnswered, callsAnswered_);
      DARABONBA_PTR_FROM_JSON(CallsAttendedTransferIn, callsAttendedTransferIn_);
      DARABONBA_PTR_FROM_JSON(CallsAttendedTransferOut, callsAttendedTransferOut_);
      DARABONBA_PTR_FROM_JSON(CallsBlindTransferIn, callsBlindTransferIn_);
      DARABONBA_PTR_FROM_JSON(CallsBlindTransferOut, callsBlindTransferOut_);
      DARABONBA_PTR_FROM_JSON(CallsDialed, callsDialed_);
      DARABONBA_PTR_FROM_JSON(CallsHold, callsHold_);
      DARABONBA_PTR_FROM_JSON(CallsRinged, callsRinged_);
      DARABONBA_PTR_FROM_JSON(MaxDialingTime, maxDialingTime_);
      DARABONBA_PTR_FROM_JSON(MaxHoldTime, maxHoldTime_);
      DARABONBA_PTR_FROM_JSON(MaxRingTime, maxRingTime_);
      DARABONBA_PTR_FROM_JSON(MaxTalkTime, maxTalkTime_);
      DARABONBA_PTR_FROM_JSON(MaxWorkTime, maxWorkTime_);
      DARABONBA_PTR_FROM_JSON(SatisfactionIndex, satisfactionIndex_);
      DARABONBA_PTR_FROM_JSON(SatisfactionRate, satisfactionRate_);
      DARABONBA_PTR_FROM_JSON(SatisfactionSurveysOffered, satisfactionSurveysOffered_);
      DARABONBA_PTR_FROM_JSON(SatisfactionSurveysResponded, satisfactionSurveysResponded_);
      DARABONBA_PTR_FROM_JSON(TotalDialingTime, totalDialingTime_);
      DARABONBA_PTR_FROM_JSON(TotalHoldTime, totalHoldTime_);
      DARABONBA_PTR_FROM_JSON(TotalRingTime, totalRingTime_);
      DARABONBA_PTR_FROM_JSON(TotalTalkTime, totalTalkTime_);
      DARABONBA_PTR_FROM_JSON(TotalWorkTime, totalWorkTime_);
    };
    ListHistoricalAgentSkillGroupReportResponseBodyDataListOutbound() = default ;
    ListHistoricalAgentSkillGroupReportResponseBodyDataListOutbound(const ListHistoricalAgentSkillGroupReportResponseBodyDataListOutbound &) = default ;
    ListHistoricalAgentSkillGroupReportResponseBodyDataListOutbound(ListHistoricalAgentSkillGroupReportResponseBodyDataListOutbound &&) = default ;
    ListHistoricalAgentSkillGroupReportResponseBodyDataListOutbound(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListHistoricalAgentSkillGroupReportResponseBodyDataListOutbound() = default ;
    ListHistoricalAgentSkillGroupReportResponseBodyDataListOutbound& operator=(const ListHistoricalAgentSkillGroupReportResponseBodyDataListOutbound &) = default ;
    ListHistoricalAgentSkillGroupReportResponseBodyDataListOutbound& operator=(ListHistoricalAgentSkillGroupReportResponseBodyDataListOutbound &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->answerRate_ == nullptr
        && return this->averageDialingTime_ == nullptr && return this->averageHoldTime_ == nullptr && return this->averageRingTime_ == nullptr && return this->averageTalkTime_ == nullptr && return this->averageWorkTime_ == nullptr
        && return this->callsAnswered_ == nullptr && return this->callsAttendedTransferIn_ == nullptr && return this->callsAttendedTransferOut_ == nullptr && return this->callsBlindTransferIn_ == nullptr && return this->callsBlindTransferOut_ == nullptr
        && return this->callsDialed_ == nullptr && return this->callsHold_ == nullptr && return this->callsRinged_ == nullptr && return this->maxDialingTime_ == nullptr && return this->maxHoldTime_ == nullptr
        && return this->maxRingTime_ == nullptr && return this->maxTalkTime_ == nullptr && return this->maxWorkTime_ == nullptr && return this->satisfactionIndex_ == nullptr && return this->satisfactionRate_ == nullptr
        && return this->satisfactionSurveysOffered_ == nullptr && return this->satisfactionSurveysResponded_ == nullptr && return this->totalDialingTime_ == nullptr && return this->totalHoldTime_ == nullptr && return this->totalRingTime_ == nullptr
        && return this->totalTalkTime_ == nullptr && return this->totalWorkTime_ == nullptr; };
    // answerRate Field Functions 
    bool hasAnswerRate() const { return this->answerRate_ != nullptr;};
    void deleteAnswerRate() { this->answerRate_ = nullptr;};
    inline float answerRate() const { DARABONBA_PTR_GET_DEFAULT(answerRate_, 0.0) };
    inline ListHistoricalAgentSkillGroupReportResponseBodyDataListOutbound& setAnswerRate(float answerRate) { DARABONBA_PTR_SET_VALUE(answerRate_, answerRate) };


    // averageDialingTime Field Functions 
    bool hasAverageDialingTime() const { return this->averageDialingTime_ != nullptr;};
    void deleteAverageDialingTime() { this->averageDialingTime_ = nullptr;};
    inline float averageDialingTime() const { DARABONBA_PTR_GET_DEFAULT(averageDialingTime_, 0.0) };
    inline ListHistoricalAgentSkillGroupReportResponseBodyDataListOutbound& setAverageDialingTime(float averageDialingTime) { DARABONBA_PTR_SET_VALUE(averageDialingTime_, averageDialingTime) };


    // averageHoldTime Field Functions 
    bool hasAverageHoldTime() const { return this->averageHoldTime_ != nullptr;};
    void deleteAverageHoldTime() { this->averageHoldTime_ = nullptr;};
    inline float averageHoldTime() const { DARABONBA_PTR_GET_DEFAULT(averageHoldTime_, 0.0) };
    inline ListHistoricalAgentSkillGroupReportResponseBodyDataListOutbound& setAverageHoldTime(float averageHoldTime) { DARABONBA_PTR_SET_VALUE(averageHoldTime_, averageHoldTime) };


    // averageRingTime Field Functions 
    bool hasAverageRingTime() const { return this->averageRingTime_ != nullptr;};
    void deleteAverageRingTime() { this->averageRingTime_ = nullptr;};
    inline float averageRingTime() const { DARABONBA_PTR_GET_DEFAULT(averageRingTime_, 0.0) };
    inline ListHistoricalAgentSkillGroupReportResponseBodyDataListOutbound& setAverageRingTime(float averageRingTime) { DARABONBA_PTR_SET_VALUE(averageRingTime_, averageRingTime) };


    // averageTalkTime Field Functions 
    bool hasAverageTalkTime() const { return this->averageTalkTime_ != nullptr;};
    void deleteAverageTalkTime() { this->averageTalkTime_ = nullptr;};
    inline float averageTalkTime() const { DARABONBA_PTR_GET_DEFAULT(averageTalkTime_, 0.0) };
    inline ListHistoricalAgentSkillGroupReportResponseBodyDataListOutbound& setAverageTalkTime(float averageTalkTime) { DARABONBA_PTR_SET_VALUE(averageTalkTime_, averageTalkTime) };


    // averageWorkTime Field Functions 
    bool hasAverageWorkTime() const { return this->averageWorkTime_ != nullptr;};
    void deleteAverageWorkTime() { this->averageWorkTime_ = nullptr;};
    inline float averageWorkTime() const { DARABONBA_PTR_GET_DEFAULT(averageWorkTime_, 0.0) };
    inline ListHistoricalAgentSkillGroupReportResponseBodyDataListOutbound& setAverageWorkTime(float averageWorkTime) { DARABONBA_PTR_SET_VALUE(averageWorkTime_, averageWorkTime) };


    // callsAnswered Field Functions 
    bool hasCallsAnswered() const { return this->callsAnswered_ != nullptr;};
    void deleteCallsAnswered() { this->callsAnswered_ = nullptr;};
    inline int64_t callsAnswered() const { DARABONBA_PTR_GET_DEFAULT(callsAnswered_, 0L) };
    inline ListHistoricalAgentSkillGroupReportResponseBodyDataListOutbound& setCallsAnswered(int64_t callsAnswered) { DARABONBA_PTR_SET_VALUE(callsAnswered_, callsAnswered) };


    // callsAttendedTransferIn Field Functions 
    bool hasCallsAttendedTransferIn() const { return this->callsAttendedTransferIn_ != nullptr;};
    void deleteCallsAttendedTransferIn() { this->callsAttendedTransferIn_ = nullptr;};
    inline int64_t callsAttendedTransferIn() const { DARABONBA_PTR_GET_DEFAULT(callsAttendedTransferIn_, 0L) };
    inline ListHistoricalAgentSkillGroupReportResponseBodyDataListOutbound& setCallsAttendedTransferIn(int64_t callsAttendedTransferIn) { DARABONBA_PTR_SET_VALUE(callsAttendedTransferIn_, callsAttendedTransferIn) };


    // callsAttendedTransferOut Field Functions 
    bool hasCallsAttendedTransferOut() const { return this->callsAttendedTransferOut_ != nullptr;};
    void deleteCallsAttendedTransferOut() { this->callsAttendedTransferOut_ = nullptr;};
    inline int64_t callsAttendedTransferOut() const { DARABONBA_PTR_GET_DEFAULT(callsAttendedTransferOut_, 0L) };
    inline ListHistoricalAgentSkillGroupReportResponseBodyDataListOutbound& setCallsAttendedTransferOut(int64_t callsAttendedTransferOut) { DARABONBA_PTR_SET_VALUE(callsAttendedTransferOut_, callsAttendedTransferOut) };


    // callsBlindTransferIn Field Functions 
    bool hasCallsBlindTransferIn() const { return this->callsBlindTransferIn_ != nullptr;};
    void deleteCallsBlindTransferIn() { this->callsBlindTransferIn_ = nullptr;};
    inline int64_t callsBlindTransferIn() const { DARABONBA_PTR_GET_DEFAULT(callsBlindTransferIn_, 0L) };
    inline ListHistoricalAgentSkillGroupReportResponseBodyDataListOutbound& setCallsBlindTransferIn(int64_t callsBlindTransferIn) { DARABONBA_PTR_SET_VALUE(callsBlindTransferIn_, callsBlindTransferIn) };


    // callsBlindTransferOut Field Functions 
    bool hasCallsBlindTransferOut() const { return this->callsBlindTransferOut_ != nullptr;};
    void deleteCallsBlindTransferOut() { this->callsBlindTransferOut_ = nullptr;};
    inline int64_t callsBlindTransferOut() const { DARABONBA_PTR_GET_DEFAULT(callsBlindTransferOut_, 0L) };
    inline ListHistoricalAgentSkillGroupReportResponseBodyDataListOutbound& setCallsBlindTransferOut(int64_t callsBlindTransferOut) { DARABONBA_PTR_SET_VALUE(callsBlindTransferOut_, callsBlindTransferOut) };


    // callsDialed Field Functions 
    bool hasCallsDialed() const { return this->callsDialed_ != nullptr;};
    void deleteCallsDialed() { this->callsDialed_ = nullptr;};
    inline int64_t callsDialed() const { DARABONBA_PTR_GET_DEFAULT(callsDialed_, 0L) };
    inline ListHistoricalAgentSkillGroupReportResponseBodyDataListOutbound& setCallsDialed(int64_t callsDialed) { DARABONBA_PTR_SET_VALUE(callsDialed_, callsDialed) };


    // callsHold Field Functions 
    bool hasCallsHold() const { return this->callsHold_ != nullptr;};
    void deleteCallsHold() { this->callsHold_ = nullptr;};
    inline int64_t callsHold() const { DARABONBA_PTR_GET_DEFAULT(callsHold_, 0L) };
    inline ListHistoricalAgentSkillGroupReportResponseBodyDataListOutbound& setCallsHold(int64_t callsHold) { DARABONBA_PTR_SET_VALUE(callsHold_, callsHold) };


    // callsRinged Field Functions 
    bool hasCallsRinged() const { return this->callsRinged_ != nullptr;};
    void deleteCallsRinged() { this->callsRinged_ = nullptr;};
    inline int64_t callsRinged() const { DARABONBA_PTR_GET_DEFAULT(callsRinged_, 0L) };
    inline ListHistoricalAgentSkillGroupReportResponseBodyDataListOutbound& setCallsRinged(int64_t callsRinged) { DARABONBA_PTR_SET_VALUE(callsRinged_, callsRinged) };


    // maxDialingTime Field Functions 
    bool hasMaxDialingTime() const { return this->maxDialingTime_ != nullptr;};
    void deleteMaxDialingTime() { this->maxDialingTime_ = nullptr;};
    inline int64_t maxDialingTime() const { DARABONBA_PTR_GET_DEFAULT(maxDialingTime_, 0L) };
    inline ListHistoricalAgentSkillGroupReportResponseBodyDataListOutbound& setMaxDialingTime(int64_t maxDialingTime) { DARABONBA_PTR_SET_VALUE(maxDialingTime_, maxDialingTime) };


    // maxHoldTime Field Functions 
    bool hasMaxHoldTime() const { return this->maxHoldTime_ != nullptr;};
    void deleteMaxHoldTime() { this->maxHoldTime_ = nullptr;};
    inline int64_t maxHoldTime() const { DARABONBA_PTR_GET_DEFAULT(maxHoldTime_, 0L) };
    inline ListHistoricalAgentSkillGroupReportResponseBodyDataListOutbound& setMaxHoldTime(int64_t maxHoldTime) { DARABONBA_PTR_SET_VALUE(maxHoldTime_, maxHoldTime) };


    // maxRingTime Field Functions 
    bool hasMaxRingTime() const { return this->maxRingTime_ != nullptr;};
    void deleteMaxRingTime() { this->maxRingTime_ = nullptr;};
    inline int64_t maxRingTime() const { DARABONBA_PTR_GET_DEFAULT(maxRingTime_, 0L) };
    inline ListHistoricalAgentSkillGroupReportResponseBodyDataListOutbound& setMaxRingTime(int64_t maxRingTime) { DARABONBA_PTR_SET_VALUE(maxRingTime_, maxRingTime) };


    // maxTalkTime Field Functions 
    bool hasMaxTalkTime() const { return this->maxTalkTime_ != nullptr;};
    void deleteMaxTalkTime() { this->maxTalkTime_ = nullptr;};
    inline int64_t maxTalkTime() const { DARABONBA_PTR_GET_DEFAULT(maxTalkTime_, 0L) };
    inline ListHistoricalAgentSkillGroupReportResponseBodyDataListOutbound& setMaxTalkTime(int64_t maxTalkTime) { DARABONBA_PTR_SET_VALUE(maxTalkTime_, maxTalkTime) };


    // maxWorkTime Field Functions 
    bool hasMaxWorkTime() const { return this->maxWorkTime_ != nullptr;};
    void deleteMaxWorkTime() { this->maxWorkTime_ = nullptr;};
    inline int64_t maxWorkTime() const { DARABONBA_PTR_GET_DEFAULT(maxWorkTime_, 0L) };
    inline ListHistoricalAgentSkillGroupReportResponseBodyDataListOutbound& setMaxWorkTime(int64_t maxWorkTime) { DARABONBA_PTR_SET_VALUE(maxWorkTime_, maxWorkTime) };


    // satisfactionIndex Field Functions 
    bool hasSatisfactionIndex() const { return this->satisfactionIndex_ != nullptr;};
    void deleteSatisfactionIndex() { this->satisfactionIndex_ = nullptr;};
    inline float satisfactionIndex() const { DARABONBA_PTR_GET_DEFAULT(satisfactionIndex_, 0.0) };
    inline ListHistoricalAgentSkillGroupReportResponseBodyDataListOutbound& setSatisfactionIndex(float satisfactionIndex) { DARABONBA_PTR_SET_VALUE(satisfactionIndex_, satisfactionIndex) };


    // satisfactionRate Field Functions 
    bool hasSatisfactionRate() const { return this->satisfactionRate_ != nullptr;};
    void deleteSatisfactionRate() { this->satisfactionRate_ = nullptr;};
    inline float satisfactionRate() const { DARABONBA_PTR_GET_DEFAULT(satisfactionRate_, 0.0) };
    inline ListHistoricalAgentSkillGroupReportResponseBodyDataListOutbound& setSatisfactionRate(float satisfactionRate) { DARABONBA_PTR_SET_VALUE(satisfactionRate_, satisfactionRate) };


    // satisfactionSurveysOffered Field Functions 
    bool hasSatisfactionSurveysOffered() const { return this->satisfactionSurveysOffered_ != nullptr;};
    void deleteSatisfactionSurveysOffered() { this->satisfactionSurveysOffered_ = nullptr;};
    inline int64_t satisfactionSurveysOffered() const { DARABONBA_PTR_GET_DEFAULT(satisfactionSurveysOffered_, 0L) };
    inline ListHistoricalAgentSkillGroupReportResponseBodyDataListOutbound& setSatisfactionSurveysOffered(int64_t satisfactionSurveysOffered) { DARABONBA_PTR_SET_VALUE(satisfactionSurveysOffered_, satisfactionSurveysOffered) };


    // satisfactionSurveysResponded Field Functions 
    bool hasSatisfactionSurveysResponded() const { return this->satisfactionSurveysResponded_ != nullptr;};
    void deleteSatisfactionSurveysResponded() { this->satisfactionSurveysResponded_ = nullptr;};
    inline int64_t satisfactionSurveysResponded() const { DARABONBA_PTR_GET_DEFAULT(satisfactionSurveysResponded_, 0L) };
    inline ListHistoricalAgentSkillGroupReportResponseBodyDataListOutbound& setSatisfactionSurveysResponded(int64_t satisfactionSurveysResponded) { DARABONBA_PTR_SET_VALUE(satisfactionSurveysResponded_, satisfactionSurveysResponded) };


    // totalDialingTime Field Functions 
    bool hasTotalDialingTime() const { return this->totalDialingTime_ != nullptr;};
    void deleteTotalDialingTime() { this->totalDialingTime_ = nullptr;};
    inline int64_t totalDialingTime() const { DARABONBA_PTR_GET_DEFAULT(totalDialingTime_, 0L) };
    inline ListHistoricalAgentSkillGroupReportResponseBodyDataListOutbound& setTotalDialingTime(int64_t totalDialingTime) { DARABONBA_PTR_SET_VALUE(totalDialingTime_, totalDialingTime) };


    // totalHoldTime Field Functions 
    bool hasTotalHoldTime() const { return this->totalHoldTime_ != nullptr;};
    void deleteTotalHoldTime() { this->totalHoldTime_ = nullptr;};
    inline int64_t totalHoldTime() const { DARABONBA_PTR_GET_DEFAULT(totalHoldTime_, 0L) };
    inline ListHistoricalAgentSkillGroupReportResponseBodyDataListOutbound& setTotalHoldTime(int64_t totalHoldTime) { DARABONBA_PTR_SET_VALUE(totalHoldTime_, totalHoldTime) };


    // totalRingTime Field Functions 
    bool hasTotalRingTime() const { return this->totalRingTime_ != nullptr;};
    void deleteTotalRingTime() { this->totalRingTime_ = nullptr;};
    inline int64_t totalRingTime() const { DARABONBA_PTR_GET_DEFAULT(totalRingTime_, 0L) };
    inline ListHistoricalAgentSkillGroupReportResponseBodyDataListOutbound& setTotalRingTime(int64_t totalRingTime) { DARABONBA_PTR_SET_VALUE(totalRingTime_, totalRingTime) };


    // totalTalkTime Field Functions 
    bool hasTotalTalkTime() const { return this->totalTalkTime_ != nullptr;};
    void deleteTotalTalkTime() { this->totalTalkTime_ = nullptr;};
    inline int64_t totalTalkTime() const { DARABONBA_PTR_GET_DEFAULT(totalTalkTime_, 0L) };
    inline ListHistoricalAgentSkillGroupReportResponseBodyDataListOutbound& setTotalTalkTime(int64_t totalTalkTime) { DARABONBA_PTR_SET_VALUE(totalTalkTime_, totalTalkTime) };


    // totalWorkTime Field Functions 
    bool hasTotalWorkTime() const { return this->totalWorkTime_ != nullptr;};
    void deleteTotalWorkTime() { this->totalWorkTime_ = nullptr;};
    inline int64_t totalWorkTime() const { DARABONBA_PTR_GET_DEFAULT(totalWorkTime_, 0L) };
    inline ListHistoricalAgentSkillGroupReportResponseBodyDataListOutbound& setTotalWorkTime(int64_t totalWorkTime) { DARABONBA_PTR_SET_VALUE(totalWorkTime_, totalWorkTime) };


  protected:
    std::shared_ptr<float> answerRate_ = nullptr;
    std::shared_ptr<float> averageDialingTime_ = nullptr;
    std::shared_ptr<float> averageHoldTime_ = nullptr;
    std::shared_ptr<float> averageRingTime_ = nullptr;
    std::shared_ptr<float> averageTalkTime_ = nullptr;
    std::shared_ptr<float> averageWorkTime_ = nullptr;
    std::shared_ptr<int64_t> callsAnswered_ = nullptr;
    std::shared_ptr<int64_t> callsAttendedTransferIn_ = nullptr;
    std::shared_ptr<int64_t> callsAttendedTransferOut_ = nullptr;
    std::shared_ptr<int64_t> callsBlindTransferIn_ = nullptr;
    std::shared_ptr<int64_t> callsBlindTransferOut_ = nullptr;
    std::shared_ptr<int64_t> callsDialed_ = nullptr;
    std::shared_ptr<int64_t> callsHold_ = nullptr;
    std::shared_ptr<int64_t> callsRinged_ = nullptr;
    std::shared_ptr<int64_t> maxDialingTime_ = nullptr;
    std::shared_ptr<int64_t> maxHoldTime_ = nullptr;
    std::shared_ptr<int64_t> maxRingTime_ = nullptr;
    std::shared_ptr<int64_t> maxTalkTime_ = nullptr;
    std::shared_ptr<int64_t> maxWorkTime_ = nullptr;
    std::shared_ptr<float> satisfactionIndex_ = nullptr;
    std::shared_ptr<float> satisfactionRate_ = nullptr;
    std::shared_ptr<int64_t> satisfactionSurveysOffered_ = nullptr;
    std::shared_ptr<int64_t> satisfactionSurveysResponded_ = nullptr;
    std::shared_ptr<int64_t> totalDialingTime_ = nullptr;
    std::shared_ptr<int64_t> totalHoldTime_ = nullptr;
    std::shared_ptr<int64_t> totalRingTime_ = nullptr;
    std::shared_ptr<int64_t> totalTalkTime_ = nullptr;
    std::shared_ptr<int64_t> totalWorkTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
