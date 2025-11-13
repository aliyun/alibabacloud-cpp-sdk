// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAGENTSUMMARYREPORTSSINCEMIDNIGHTRESPONSEBODYPAGEDAGENTSUMMARYREPORTLISTINBOUND_HPP_
#define ALIBABACLOUD_MODELS_LISTAGENTSUMMARYREPORTSSINCEMIDNIGHTRESPONSEBODYPAGEDAGENTSUMMARYREPORTLISTINBOUND_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class ListAgentSummaryReportsSinceMidnightResponseBodyPagedAgentSummaryReportListInbound : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAgentSummaryReportsSinceMidnightResponseBodyPagedAgentSummaryReportListInbound& obj) { 
      DARABONBA_PTR_TO_JSON(AverageRingTime, averageRingTime_);
      DARABONBA_PTR_TO_JSON(AverageTalkTime, averageTalkTime_);
      DARABONBA_PTR_TO_JSON(AverageWorkTime, averageWorkTime_);
      DARABONBA_PTR_TO_JSON(CallsHandled, callsHandled_);
      DARABONBA_PTR_TO_JSON(CallsOffered, callsOffered_);
      DARABONBA_PTR_TO_JSON(HandleRate, handleRate_);
      DARABONBA_PTR_TO_JSON(MaxRingTime, maxRingTime_);
      DARABONBA_PTR_TO_JSON(MaxTalkTime, maxTalkTime_);
      DARABONBA_PTR_TO_JSON(MaxWorkTime, maxWorkTime_);
      DARABONBA_PTR_TO_JSON(SatisfactionIndex, satisfactionIndex_);
      DARABONBA_PTR_TO_JSON(SatisfactionSurveysOffered, satisfactionSurveysOffered_);
      DARABONBA_PTR_TO_JSON(SatisfactionSurveysResponded, satisfactionSurveysResponded_);
      DARABONBA_PTR_TO_JSON(ServiceLevel20, serviceLevel20_);
      DARABONBA_PTR_TO_JSON(TotalRingTime, totalRingTime_);
      DARABONBA_PTR_TO_JSON(TotalTalkTime, totalTalkTime_);
      DARABONBA_PTR_TO_JSON(TotalWorkTime, totalWorkTime_);
    };
    friend void from_json(const Darabonba::Json& j, ListAgentSummaryReportsSinceMidnightResponseBodyPagedAgentSummaryReportListInbound& obj) { 
      DARABONBA_PTR_FROM_JSON(AverageRingTime, averageRingTime_);
      DARABONBA_PTR_FROM_JSON(AverageTalkTime, averageTalkTime_);
      DARABONBA_PTR_FROM_JSON(AverageWorkTime, averageWorkTime_);
      DARABONBA_PTR_FROM_JSON(CallsHandled, callsHandled_);
      DARABONBA_PTR_FROM_JSON(CallsOffered, callsOffered_);
      DARABONBA_PTR_FROM_JSON(HandleRate, handleRate_);
      DARABONBA_PTR_FROM_JSON(MaxRingTime, maxRingTime_);
      DARABONBA_PTR_FROM_JSON(MaxTalkTime, maxTalkTime_);
      DARABONBA_PTR_FROM_JSON(MaxWorkTime, maxWorkTime_);
      DARABONBA_PTR_FROM_JSON(SatisfactionIndex, satisfactionIndex_);
      DARABONBA_PTR_FROM_JSON(SatisfactionSurveysOffered, satisfactionSurveysOffered_);
      DARABONBA_PTR_FROM_JSON(SatisfactionSurveysResponded, satisfactionSurveysResponded_);
      DARABONBA_PTR_FROM_JSON(ServiceLevel20, serviceLevel20_);
      DARABONBA_PTR_FROM_JSON(TotalRingTime, totalRingTime_);
      DARABONBA_PTR_FROM_JSON(TotalTalkTime, totalTalkTime_);
      DARABONBA_PTR_FROM_JSON(TotalWorkTime, totalWorkTime_);
    };
    ListAgentSummaryReportsSinceMidnightResponseBodyPagedAgentSummaryReportListInbound() = default ;
    ListAgentSummaryReportsSinceMidnightResponseBodyPagedAgentSummaryReportListInbound(const ListAgentSummaryReportsSinceMidnightResponseBodyPagedAgentSummaryReportListInbound &) = default ;
    ListAgentSummaryReportsSinceMidnightResponseBodyPagedAgentSummaryReportListInbound(ListAgentSummaryReportsSinceMidnightResponseBodyPagedAgentSummaryReportListInbound &&) = default ;
    ListAgentSummaryReportsSinceMidnightResponseBodyPagedAgentSummaryReportListInbound(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAgentSummaryReportsSinceMidnightResponseBodyPagedAgentSummaryReportListInbound() = default ;
    ListAgentSummaryReportsSinceMidnightResponseBodyPagedAgentSummaryReportListInbound& operator=(const ListAgentSummaryReportsSinceMidnightResponseBodyPagedAgentSummaryReportListInbound &) = default ;
    ListAgentSummaryReportsSinceMidnightResponseBodyPagedAgentSummaryReportListInbound& operator=(ListAgentSummaryReportsSinceMidnightResponseBodyPagedAgentSummaryReportListInbound &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->averageRingTime_ == nullptr
        && return this->averageTalkTime_ == nullptr && return this->averageWorkTime_ == nullptr && return this->callsHandled_ == nullptr && return this->callsOffered_ == nullptr && return this->handleRate_ == nullptr
        && return this->maxRingTime_ == nullptr && return this->maxTalkTime_ == nullptr && return this->maxWorkTime_ == nullptr && return this->satisfactionIndex_ == nullptr && return this->satisfactionSurveysOffered_ == nullptr
        && return this->satisfactionSurveysResponded_ == nullptr && return this->serviceLevel20_ == nullptr && return this->totalRingTime_ == nullptr && return this->totalTalkTime_ == nullptr && return this->totalWorkTime_ == nullptr; };
    // averageRingTime Field Functions 
    bool hasAverageRingTime() const { return this->averageRingTime_ != nullptr;};
    void deleteAverageRingTime() { this->averageRingTime_ = nullptr;};
    inline int64_t averageRingTime() const { DARABONBA_PTR_GET_DEFAULT(averageRingTime_, 0L) };
    inline ListAgentSummaryReportsSinceMidnightResponseBodyPagedAgentSummaryReportListInbound& setAverageRingTime(int64_t averageRingTime) { DARABONBA_PTR_SET_VALUE(averageRingTime_, averageRingTime) };


    // averageTalkTime Field Functions 
    bool hasAverageTalkTime() const { return this->averageTalkTime_ != nullptr;};
    void deleteAverageTalkTime() { this->averageTalkTime_ = nullptr;};
    inline int64_t averageTalkTime() const { DARABONBA_PTR_GET_DEFAULT(averageTalkTime_, 0L) };
    inline ListAgentSummaryReportsSinceMidnightResponseBodyPagedAgentSummaryReportListInbound& setAverageTalkTime(int64_t averageTalkTime) { DARABONBA_PTR_SET_VALUE(averageTalkTime_, averageTalkTime) };


    // averageWorkTime Field Functions 
    bool hasAverageWorkTime() const { return this->averageWorkTime_ != nullptr;};
    void deleteAverageWorkTime() { this->averageWorkTime_ = nullptr;};
    inline int64_t averageWorkTime() const { DARABONBA_PTR_GET_DEFAULT(averageWorkTime_, 0L) };
    inline ListAgentSummaryReportsSinceMidnightResponseBodyPagedAgentSummaryReportListInbound& setAverageWorkTime(int64_t averageWorkTime) { DARABONBA_PTR_SET_VALUE(averageWorkTime_, averageWorkTime) };


    // callsHandled Field Functions 
    bool hasCallsHandled() const { return this->callsHandled_ != nullptr;};
    void deleteCallsHandled() { this->callsHandled_ = nullptr;};
    inline int64_t callsHandled() const { DARABONBA_PTR_GET_DEFAULT(callsHandled_, 0L) };
    inline ListAgentSummaryReportsSinceMidnightResponseBodyPagedAgentSummaryReportListInbound& setCallsHandled(int64_t callsHandled) { DARABONBA_PTR_SET_VALUE(callsHandled_, callsHandled) };


    // callsOffered Field Functions 
    bool hasCallsOffered() const { return this->callsOffered_ != nullptr;};
    void deleteCallsOffered() { this->callsOffered_ = nullptr;};
    inline int64_t callsOffered() const { DARABONBA_PTR_GET_DEFAULT(callsOffered_, 0L) };
    inline ListAgentSummaryReportsSinceMidnightResponseBodyPagedAgentSummaryReportListInbound& setCallsOffered(int64_t callsOffered) { DARABONBA_PTR_SET_VALUE(callsOffered_, callsOffered) };


    // handleRate Field Functions 
    bool hasHandleRate() const { return this->handleRate_ != nullptr;};
    void deleteHandleRate() { this->handleRate_ = nullptr;};
    inline float handleRate() const { DARABONBA_PTR_GET_DEFAULT(handleRate_, 0.0) };
    inline ListAgentSummaryReportsSinceMidnightResponseBodyPagedAgentSummaryReportListInbound& setHandleRate(float handleRate) { DARABONBA_PTR_SET_VALUE(handleRate_, handleRate) };


    // maxRingTime Field Functions 
    bool hasMaxRingTime() const { return this->maxRingTime_ != nullptr;};
    void deleteMaxRingTime() { this->maxRingTime_ = nullptr;};
    inline int64_t maxRingTime() const { DARABONBA_PTR_GET_DEFAULT(maxRingTime_, 0L) };
    inline ListAgentSummaryReportsSinceMidnightResponseBodyPagedAgentSummaryReportListInbound& setMaxRingTime(int64_t maxRingTime) { DARABONBA_PTR_SET_VALUE(maxRingTime_, maxRingTime) };


    // maxTalkTime Field Functions 
    bool hasMaxTalkTime() const { return this->maxTalkTime_ != nullptr;};
    void deleteMaxTalkTime() { this->maxTalkTime_ = nullptr;};
    inline int64_t maxTalkTime() const { DARABONBA_PTR_GET_DEFAULT(maxTalkTime_, 0L) };
    inline ListAgentSummaryReportsSinceMidnightResponseBodyPagedAgentSummaryReportListInbound& setMaxTalkTime(int64_t maxTalkTime) { DARABONBA_PTR_SET_VALUE(maxTalkTime_, maxTalkTime) };


    // maxWorkTime Field Functions 
    bool hasMaxWorkTime() const { return this->maxWorkTime_ != nullptr;};
    void deleteMaxWorkTime() { this->maxWorkTime_ = nullptr;};
    inline int64_t maxWorkTime() const { DARABONBA_PTR_GET_DEFAULT(maxWorkTime_, 0L) };
    inline ListAgentSummaryReportsSinceMidnightResponseBodyPagedAgentSummaryReportListInbound& setMaxWorkTime(int64_t maxWorkTime) { DARABONBA_PTR_SET_VALUE(maxWorkTime_, maxWorkTime) };


    // satisfactionIndex Field Functions 
    bool hasSatisfactionIndex() const { return this->satisfactionIndex_ != nullptr;};
    void deleteSatisfactionIndex() { this->satisfactionIndex_ = nullptr;};
    inline float satisfactionIndex() const { DARABONBA_PTR_GET_DEFAULT(satisfactionIndex_, 0.0) };
    inline ListAgentSummaryReportsSinceMidnightResponseBodyPagedAgentSummaryReportListInbound& setSatisfactionIndex(float satisfactionIndex) { DARABONBA_PTR_SET_VALUE(satisfactionIndex_, satisfactionIndex) };


    // satisfactionSurveysOffered Field Functions 
    bool hasSatisfactionSurveysOffered() const { return this->satisfactionSurveysOffered_ != nullptr;};
    void deleteSatisfactionSurveysOffered() { this->satisfactionSurveysOffered_ = nullptr;};
    inline int64_t satisfactionSurveysOffered() const { DARABONBA_PTR_GET_DEFAULT(satisfactionSurveysOffered_, 0L) };
    inline ListAgentSummaryReportsSinceMidnightResponseBodyPagedAgentSummaryReportListInbound& setSatisfactionSurveysOffered(int64_t satisfactionSurveysOffered) { DARABONBA_PTR_SET_VALUE(satisfactionSurveysOffered_, satisfactionSurveysOffered) };


    // satisfactionSurveysResponded Field Functions 
    bool hasSatisfactionSurveysResponded() const { return this->satisfactionSurveysResponded_ != nullptr;};
    void deleteSatisfactionSurveysResponded() { this->satisfactionSurveysResponded_ = nullptr;};
    inline int64_t satisfactionSurveysResponded() const { DARABONBA_PTR_GET_DEFAULT(satisfactionSurveysResponded_, 0L) };
    inline ListAgentSummaryReportsSinceMidnightResponseBodyPagedAgentSummaryReportListInbound& setSatisfactionSurveysResponded(int64_t satisfactionSurveysResponded) { DARABONBA_PTR_SET_VALUE(satisfactionSurveysResponded_, satisfactionSurveysResponded) };


    // serviceLevel20 Field Functions 
    bool hasServiceLevel20() const { return this->serviceLevel20_ != nullptr;};
    void deleteServiceLevel20() { this->serviceLevel20_ = nullptr;};
    inline float serviceLevel20() const { DARABONBA_PTR_GET_DEFAULT(serviceLevel20_, 0.0) };
    inline ListAgentSummaryReportsSinceMidnightResponseBodyPagedAgentSummaryReportListInbound& setServiceLevel20(float serviceLevel20) { DARABONBA_PTR_SET_VALUE(serviceLevel20_, serviceLevel20) };


    // totalRingTime Field Functions 
    bool hasTotalRingTime() const { return this->totalRingTime_ != nullptr;};
    void deleteTotalRingTime() { this->totalRingTime_ = nullptr;};
    inline int64_t totalRingTime() const { DARABONBA_PTR_GET_DEFAULT(totalRingTime_, 0L) };
    inline ListAgentSummaryReportsSinceMidnightResponseBodyPagedAgentSummaryReportListInbound& setTotalRingTime(int64_t totalRingTime) { DARABONBA_PTR_SET_VALUE(totalRingTime_, totalRingTime) };


    // totalTalkTime Field Functions 
    bool hasTotalTalkTime() const { return this->totalTalkTime_ != nullptr;};
    void deleteTotalTalkTime() { this->totalTalkTime_ = nullptr;};
    inline int64_t totalTalkTime() const { DARABONBA_PTR_GET_DEFAULT(totalTalkTime_, 0L) };
    inline ListAgentSummaryReportsSinceMidnightResponseBodyPagedAgentSummaryReportListInbound& setTotalTalkTime(int64_t totalTalkTime) { DARABONBA_PTR_SET_VALUE(totalTalkTime_, totalTalkTime) };


    // totalWorkTime Field Functions 
    bool hasTotalWorkTime() const { return this->totalWorkTime_ != nullptr;};
    void deleteTotalWorkTime() { this->totalWorkTime_ = nullptr;};
    inline int64_t totalWorkTime() const { DARABONBA_PTR_GET_DEFAULT(totalWorkTime_, 0L) };
    inline ListAgentSummaryReportsSinceMidnightResponseBodyPagedAgentSummaryReportListInbound& setTotalWorkTime(int64_t totalWorkTime) { DARABONBA_PTR_SET_VALUE(totalWorkTime_, totalWorkTime) };


  protected:
    std::shared_ptr<int64_t> averageRingTime_ = nullptr;
    std::shared_ptr<int64_t> averageTalkTime_ = nullptr;
    std::shared_ptr<int64_t> averageWorkTime_ = nullptr;
    std::shared_ptr<int64_t> callsHandled_ = nullptr;
    std::shared_ptr<int64_t> callsOffered_ = nullptr;
    std::shared_ptr<float> handleRate_ = nullptr;
    std::shared_ptr<int64_t> maxRingTime_ = nullptr;
    std::shared_ptr<int64_t> maxTalkTime_ = nullptr;
    std::shared_ptr<int64_t> maxWorkTime_ = nullptr;
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
