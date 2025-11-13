// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAGENTSUMMARYREPORTSSINCEMIDNIGHTRESPONSEBODYPAGEDAGENTSUMMARYREPORTLISTOUTBOUND_HPP_
#define ALIBABACLOUD_MODELS_LISTAGENTSUMMARYREPORTSSINCEMIDNIGHTRESPONSEBODYPAGEDAGENTSUMMARYREPORTLISTOUTBOUND_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class ListAgentSummaryReportsSinceMidnightResponseBodyPagedAgentSummaryReportListOutbound : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAgentSummaryReportsSinceMidnightResponseBodyPagedAgentSummaryReportListOutbound& obj) { 
      DARABONBA_PTR_TO_JSON(AnswerRate, answerRate_);
      DARABONBA_PTR_TO_JSON(AverageDialingTime, averageDialingTime_);
      DARABONBA_PTR_TO_JSON(AverageTalkTime, averageTalkTime_);
      DARABONBA_PTR_TO_JSON(AverageWorkTime, averageWorkTime_);
      DARABONBA_PTR_TO_JSON(CallsAnswered, callsAnswered_);
      DARABONBA_PTR_TO_JSON(CallsDialed, callsDialed_);
      DARABONBA_PTR_TO_JSON(MaxDialingTime, maxDialingTime_);
      DARABONBA_PTR_TO_JSON(MaxTalkTime, maxTalkTime_);
      DARABONBA_PTR_TO_JSON(MaxWorkTime, maxWorkTime_);
      DARABONBA_PTR_TO_JSON(SatisfactionIndex, satisfactionIndex_);
      DARABONBA_PTR_TO_JSON(SatisfactionSurveysOffered, satisfactionSurveysOffered_);
      DARABONBA_PTR_TO_JSON(SatisfactionSurveysResponded, satisfactionSurveysResponded_);
      DARABONBA_PTR_TO_JSON(TotalDialingTime, totalDialingTime_);
      DARABONBA_PTR_TO_JSON(TotalTalkTime, totalTalkTime_);
      DARABONBA_PTR_TO_JSON(TotalWorkTime, totalWorkTime_);
    };
    friend void from_json(const Darabonba::Json& j, ListAgentSummaryReportsSinceMidnightResponseBodyPagedAgentSummaryReportListOutbound& obj) { 
      DARABONBA_PTR_FROM_JSON(AnswerRate, answerRate_);
      DARABONBA_PTR_FROM_JSON(AverageDialingTime, averageDialingTime_);
      DARABONBA_PTR_FROM_JSON(AverageTalkTime, averageTalkTime_);
      DARABONBA_PTR_FROM_JSON(AverageWorkTime, averageWorkTime_);
      DARABONBA_PTR_FROM_JSON(CallsAnswered, callsAnswered_);
      DARABONBA_PTR_FROM_JSON(CallsDialed, callsDialed_);
      DARABONBA_PTR_FROM_JSON(MaxDialingTime, maxDialingTime_);
      DARABONBA_PTR_FROM_JSON(MaxTalkTime, maxTalkTime_);
      DARABONBA_PTR_FROM_JSON(MaxWorkTime, maxWorkTime_);
      DARABONBA_PTR_FROM_JSON(SatisfactionIndex, satisfactionIndex_);
      DARABONBA_PTR_FROM_JSON(SatisfactionSurveysOffered, satisfactionSurveysOffered_);
      DARABONBA_PTR_FROM_JSON(SatisfactionSurveysResponded, satisfactionSurveysResponded_);
      DARABONBA_PTR_FROM_JSON(TotalDialingTime, totalDialingTime_);
      DARABONBA_PTR_FROM_JSON(TotalTalkTime, totalTalkTime_);
      DARABONBA_PTR_FROM_JSON(TotalWorkTime, totalWorkTime_);
    };
    ListAgentSummaryReportsSinceMidnightResponseBodyPagedAgentSummaryReportListOutbound() = default ;
    ListAgentSummaryReportsSinceMidnightResponseBodyPagedAgentSummaryReportListOutbound(const ListAgentSummaryReportsSinceMidnightResponseBodyPagedAgentSummaryReportListOutbound &) = default ;
    ListAgentSummaryReportsSinceMidnightResponseBodyPagedAgentSummaryReportListOutbound(ListAgentSummaryReportsSinceMidnightResponseBodyPagedAgentSummaryReportListOutbound &&) = default ;
    ListAgentSummaryReportsSinceMidnightResponseBodyPagedAgentSummaryReportListOutbound(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAgentSummaryReportsSinceMidnightResponseBodyPagedAgentSummaryReportListOutbound() = default ;
    ListAgentSummaryReportsSinceMidnightResponseBodyPagedAgentSummaryReportListOutbound& operator=(const ListAgentSummaryReportsSinceMidnightResponseBodyPagedAgentSummaryReportListOutbound &) = default ;
    ListAgentSummaryReportsSinceMidnightResponseBodyPagedAgentSummaryReportListOutbound& operator=(ListAgentSummaryReportsSinceMidnightResponseBodyPagedAgentSummaryReportListOutbound &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->answerRate_ == nullptr
        && return this->averageDialingTime_ == nullptr && return this->averageTalkTime_ == nullptr && return this->averageWorkTime_ == nullptr && return this->callsAnswered_ == nullptr && return this->callsDialed_ == nullptr
        && return this->maxDialingTime_ == nullptr && return this->maxTalkTime_ == nullptr && return this->maxWorkTime_ == nullptr && return this->satisfactionIndex_ == nullptr && return this->satisfactionSurveysOffered_ == nullptr
        && return this->satisfactionSurveysResponded_ == nullptr && return this->totalDialingTime_ == nullptr && return this->totalTalkTime_ == nullptr && return this->totalWorkTime_ == nullptr; };
    // answerRate Field Functions 
    bool hasAnswerRate() const { return this->answerRate_ != nullptr;};
    void deleteAnswerRate() { this->answerRate_ = nullptr;};
    inline float answerRate() const { DARABONBA_PTR_GET_DEFAULT(answerRate_, 0.0) };
    inline ListAgentSummaryReportsSinceMidnightResponseBodyPagedAgentSummaryReportListOutbound& setAnswerRate(float answerRate) { DARABONBA_PTR_SET_VALUE(answerRate_, answerRate) };


    // averageDialingTime Field Functions 
    bool hasAverageDialingTime() const { return this->averageDialingTime_ != nullptr;};
    void deleteAverageDialingTime() { this->averageDialingTime_ = nullptr;};
    inline int64_t averageDialingTime() const { DARABONBA_PTR_GET_DEFAULT(averageDialingTime_, 0L) };
    inline ListAgentSummaryReportsSinceMidnightResponseBodyPagedAgentSummaryReportListOutbound& setAverageDialingTime(int64_t averageDialingTime) { DARABONBA_PTR_SET_VALUE(averageDialingTime_, averageDialingTime) };


    // averageTalkTime Field Functions 
    bool hasAverageTalkTime() const { return this->averageTalkTime_ != nullptr;};
    void deleteAverageTalkTime() { this->averageTalkTime_ = nullptr;};
    inline int64_t averageTalkTime() const { DARABONBA_PTR_GET_DEFAULT(averageTalkTime_, 0L) };
    inline ListAgentSummaryReportsSinceMidnightResponseBodyPagedAgentSummaryReportListOutbound& setAverageTalkTime(int64_t averageTalkTime) { DARABONBA_PTR_SET_VALUE(averageTalkTime_, averageTalkTime) };


    // averageWorkTime Field Functions 
    bool hasAverageWorkTime() const { return this->averageWorkTime_ != nullptr;};
    void deleteAverageWorkTime() { this->averageWorkTime_ = nullptr;};
    inline int64_t averageWorkTime() const { DARABONBA_PTR_GET_DEFAULT(averageWorkTime_, 0L) };
    inline ListAgentSummaryReportsSinceMidnightResponseBodyPagedAgentSummaryReportListOutbound& setAverageWorkTime(int64_t averageWorkTime) { DARABONBA_PTR_SET_VALUE(averageWorkTime_, averageWorkTime) };


    // callsAnswered Field Functions 
    bool hasCallsAnswered() const { return this->callsAnswered_ != nullptr;};
    void deleteCallsAnswered() { this->callsAnswered_ = nullptr;};
    inline int64_t callsAnswered() const { DARABONBA_PTR_GET_DEFAULT(callsAnswered_, 0L) };
    inline ListAgentSummaryReportsSinceMidnightResponseBodyPagedAgentSummaryReportListOutbound& setCallsAnswered(int64_t callsAnswered) { DARABONBA_PTR_SET_VALUE(callsAnswered_, callsAnswered) };


    // callsDialed Field Functions 
    bool hasCallsDialed() const { return this->callsDialed_ != nullptr;};
    void deleteCallsDialed() { this->callsDialed_ = nullptr;};
    inline int64_t callsDialed() const { DARABONBA_PTR_GET_DEFAULT(callsDialed_, 0L) };
    inline ListAgentSummaryReportsSinceMidnightResponseBodyPagedAgentSummaryReportListOutbound& setCallsDialed(int64_t callsDialed) { DARABONBA_PTR_SET_VALUE(callsDialed_, callsDialed) };


    // maxDialingTime Field Functions 
    bool hasMaxDialingTime() const { return this->maxDialingTime_ != nullptr;};
    void deleteMaxDialingTime() { this->maxDialingTime_ = nullptr;};
    inline int64_t maxDialingTime() const { DARABONBA_PTR_GET_DEFAULT(maxDialingTime_, 0L) };
    inline ListAgentSummaryReportsSinceMidnightResponseBodyPagedAgentSummaryReportListOutbound& setMaxDialingTime(int64_t maxDialingTime) { DARABONBA_PTR_SET_VALUE(maxDialingTime_, maxDialingTime) };


    // maxTalkTime Field Functions 
    bool hasMaxTalkTime() const { return this->maxTalkTime_ != nullptr;};
    void deleteMaxTalkTime() { this->maxTalkTime_ = nullptr;};
    inline int64_t maxTalkTime() const { DARABONBA_PTR_GET_DEFAULT(maxTalkTime_, 0L) };
    inline ListAgentSummaryReportsSinceMidnightResponseBodyPagedAgentSummaryReportListOutbound& setMaxTalkTime(int64_t maxTalkTime) { DARABONBA_PTR_SET_VALUE(maxTalkTime_, maxTalkTime) };


    // maxWorkTime Field Functions 
    bool hasMaxWorkTime() const { return this->maxWorkTime_ != nullptr;};
    void deleteMaxWorkTime() { this->maxWorkTime_ = nullptr;};
    inline string maxWorkTime() const { DARABONBA_PTR_GET_DEFAULT(maxWorkTime_, "") };
    inline ListAgentSummaryReportsSinceMidnightResponseBodyPagedAgentSummaryReportListOutbound& setMaxWorkTime(string maxWorkTime) { DARABONBA_PTR_SET_VALUE(maxWorkTime_, maxWorkTime) };


    // satisfactionIndex Field Functions 
    bool hasSatisfactionIndex() const { return this->satisfactionIndex_ != nullptr;};
    void deleteSatisfactionIndex() { this->satisfactionIndex_ = nullptr;};
    inline float satisfactionIndex() const { DARABONBA_PTR_GET_DEFAULT(satisfactionIndex_, 0.0) };
    inline ListAgentSummaryReportsSinceMidnightResponseBodyPagedAgentSummaryReportListOutbound& setSatisfactionIndex(float satisfactionIndex) { DARABONBA_PTR_SET_VALUE(satisfactionIndex_, satisfactionIndex) };


    // satisfactionSurveysOffered Field Functions 
    bool hasSatisfactionSurveysOffered() const { return this->satisfactionSurveysOffered_ != nullptr;};
    void deleteSatisfactionSurveysOffered() { this->satisfactionSurveysOffered_ = nullptr;};
    inline int64_t satisfactionSurveysOffered() const { DARABONBA_PTR_GET_DEFAULT(satisfactionSurveysOffered_, 0L) };
    inline ListAgentSummaryReportsSinceMidnightResponseBodyPagedAgentSummaryReportListOutbound& setSatisfactionSurveysOffered(int64_t satisfactionSurveysOffered) { DARABONBA_PTR_SET_VALUE(satisfactionSurveysOffered_, satisfactionSurveysOffered) };


    // satisfactionSurveysResponded Field Functions 
    bool hasSatisfactionSurveysResponded() const { return this->satisfactionSurveysResponded_ != nullptr;};
    void deleteSatisfactionSurveysResponded() { this->satisfactionSurveysResponded_ = nullptr;};
    inline int64_t satisfactionSurveysResponded() const { DARABONBA_PTR_GET_DEFAULT(satisfactionSurveysResponded_, 0L) };
    inline ListAgentSummaryReportsSinceMidnightResponseBodyPagedAgentSummaryReportListOutbound& setSatisfactionSurveysResponded(int64_t satisfactionSurveysResponded) { DARABONBA_PTR_SET_VALUE(satisfactionSurveysResponded_, satisfactionSurveysResponded) };


    // totalDialingTime Field Functions 
    bool hasTotalDialingTime() const { return this->totalDialingTime_ != nullptr;};
    void deleteTotalDialingTime() { this->totalDialingTime_ = nullptr;};
    inline int64_t totalDialingTime() const { DARABONBA_PTR_GET_DEFAULT(totalDialingTime_, 0L) };
    inline ListAgentSummaryReportsSinceMidnightResponseBodyPagedAgentSummaryReportListOutbound& setTotalDialingTime(int64_t totalDialingTime) { DARABONBA_PTR_SET_VALUE(totalDialingTime_, totalDialingTime) };


    // totalTalkTime Field Functions 
    bool hasTotalTalkTime() const { return this->totalTalkTime_ != nullptr;};
    void deleteTotalTalkTime() { this->totalTalkTime_ = nullptr;};
    inline int64_t totalTalkTime() const { DARABONBA_PTR_GET_DEFAULT(totalTalkTime_, 0L) };
    inline ListAgentSummaryReportsSinceMidnightResponseBodyPagedAgentSummaryReportListOutbound& setTotalTalkTime(int64_t totalTalkTime) { DARABONBA_PTR_SET_VALUE(totalTalkTime_, totalTalkTime) };


    // totalWorkTime Field Functions 
    bool hasTotalWorkTime() const { return this->totalWorkTime_ != nullptr;};
    void deleteTotalWorkTime() { this->totalWorkTime_ = nullptr;};
    inline int64_t totalWorkTime() const { DARABONBA_PTR_GET_DEFAULT(totalWorkTime_, 0L) };
    inline ListAgentSummaryReportsSinceMidnightResponseBodyPagedAgentSummaryReportListOutbound& setTotalWorkTime(int64_t totalWorkTime) { DARABONBA_PTR_SET_VALUE(totalWorkTime_, totalWorkTime) };


  protected:
    std::shared_ptr<float> answerRate_ = nullptr;
    std::shared_ptr<int64_t> averageDialingTime_ = nullptr;
    std::shared_ptr<int64_t> averageTalkTime_ = nullptr;
    std::shared_ptr<int64_t> averageWorkTime_ = nullptr;
    std::shared_ptr<int64_t> callsAnswered_ = nullptr;
    std::shared_ptr<int64_t> callsDialed_ = nullptr;
    std::shared_ptr<int64_t> maxDialingTime_ = nullptr;
    std::shared_ptr<int64_t> maxTalkTime_ = nullptr;
    std::shared_ptr<string> maxWorkTime_ = nullptr;
    std::shared_ptr<float> satisfactionIndex_ = nullptr;
    std::shared_ptr<int64_t> satisfactionSurveysOffered_ = nullptr;
    std::shared_ptr<int64_t> satisfactionSurveysResponded_ = nullptr;
    std::shared_ptr<int64_t> totalDialingTime_ = nullptr;
    std::shared_ptr<int64_t> totalTalkTime_ = nullptr;
    std::shared_ptr<int64_t> totalWorkTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
