// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAGENTSUMMARYREPORTSSINCEMIDNIGHTRESPONSEBODYPAGEDAGENTSUMMARYREPORTLISTOVERALL_HPP_
#define ALIBABACLOUD_MODELS_LISTAGENTSUMMARYREPORTSSINCEMIDNIGHTRESPONSEBODYPAGEDAGENTSUMMARYREPORTLISTOVERALL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class ListAgentSummaryReportsSinceMidnightResponseBodyPagedAgentSummaryReportListOverall : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAgentSummaryReportsSinceMidnightResponseBodyPagedAgentSummaryReportListOverall& obj) { 
      DARABONBA_PTR_TO_JSON(AverageReadyTime, averageReadyTime_);
      DARABONBA_PTR_TO_JSON(AverageTalkTime, averageTalkTime_);
      DARABONBA_PTR_TO_JSON(AverageWorkTime, averageWorkTime_);
      DARABONBA_PTR_TO_JSON(MaxReadyTime, maxReadyTime_);
      DARABONBA_PTR_TO_JSON(MaxTalkTime, maxTalkTime_);
      DARABONBA_PTR_TO_JSON(MaxWorkTime, maxWorkTime_);
      DARABONBA_PTR_TO_JSON(OccupancyRate, occupancyRate_);
      DARABONBA_PTR_TO_JSON(OneTransferCalls, oneTransferCalls_);
      DARABONBA_PTR_TO_JSON(SatisfactionIndex, satisfactionIndex_);
      DARABONBA_PTR_TO_JSON(SatisfactionSurveysOffered, satisfactionSurveysOffered_);
      DARABONBA_PTR_TO_JSON(SatisfactionSurveysResponded, satisfactionSurveysResponded_);
      DARABONBA_PTR_TO_JSON(TotalBreakTime, totalBreakTime_);
      DARABONBA_PTR_TO_JSON(TotalCalls, totalCalls_);
      DARABONBA_PTR_TO_JSON(TotalLoggedInTime, totalLoggedInTime_);
      DARABONBA_PTR_TO_JSON(TotalReadyTime, totalReadyTime_);
      DARABONBA_PTR_TO_JSON(TotalTalkTime, totalTalkTime_);
      DARABONBA_PTR_TO_JSON(TotalWorkTime, totalWorkTime_);
    };
    friend void from_json(const Darabonba::Json& j, ListAgentSummaryReportsSinceMidnightResponseBodyPagedAgentSummaryReportListOverall& obj) { 
      DARABONBA_PTR_FROM_JSON(AverageReadyTime, averageReadyTime_);
      DARABONBA_PTR_FROM_JSON(AverageTalkTime, averageTalkTime_);
      DARABONBA_PTR_FROM_JSON(AverageWorkTime, averageWorkTime_);
      DARABONBA_PTR_FROM_JSON(MaxReadyTime, maxReadyTime_);
      DARABONBA_PTR_FROM_JSON(MaxTalkTime, maxTalkTime_);
      DARABONBA_PTR_FROM_JSON(MaxWorkTime, maxWorkTime_);
      DARABONBA_PTR_FROM_JSON(OccupancyRate, occupancyRate_);
      DARABONBA_PTR_FROM_JSON(OneTransferCalls, oneTransferCalls_);
      DARABONBA_PTR_FROM_JSON(SatisfactionIndex, satisfactionIndex_);
      DARABONBA_PTR_FROM_JSON(SatisfactionSurveysOffered, satisfactionSurveysOffered_);
      DARABONBA_PTR_FROM_JSON(SatisfactionSurveysResponded, satisfactionSurveysResponded_);
      DARABONBA_PTR_FROM_JSON(TotalBreakTime, totalBreakTime_);
      DARABONBA_PTR_FROM_JSON(TotalCalls, totalCalls_);
      DARABONBA_PTR_FROM_JSON(TotalLoggedInTime, totalLoggedInTime_);
      DARABONBA_PTR_FROM_JSON(TotalReadyTime, totalReadyTime_);
      DARABONBA_PTR_FROM_JSON(TotalTalkTime, totalTalkTime_);
      DARABONBA_PTR_FROM_JSON(TotalWorkTime, totalWorkTime_);
    };
    ListAgentSummaryReportsSinceMidnightResponseBodyPagedAgentSummaryReportListOverall() = default ;
    ListAgentSummaryReportsSinceMidnightResponseBodyPagedAgentSummaryReportListOverall(const ListAgentSummaryReportsSinceMidnightResponseBodyPagedAgentSummaryReportListOverall &) = default ;
    ListAgentSummaryReportsSinceMidnightResponseBodyPagedAgentSummaryReportListOverall(ListAgentSummaryReportsSinceMidnightResponseBodyPagedAgentSummaryReportListOverall &&) = default ;
    ListAgentSummaryReportsSinceMidnightResponseBodyPagedAgentSummaryReportListOverall(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAgentSummaryReportsSinceMidnightResponseBodyPagedAgentSummaryReportListOverall() = default ;
    ListAgentSummaryReportsSinceMidnightResponseBodyPagedAgentSummaryReportListOverall& operator=(const ListAgentSummaryReportsSinceMidnightResponseBodyPagedAgentSummaryReportListOverall &) = default ;
    ListAgentSummaryReportsSinceMidnightResponseBodyPagedAgentSummaryReportListOverall& operator=(ListAgentSummaryReportsSinceMidnightResponseBodyPagedAgentSummaryReportListOverall &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->averageReadyTime_ != nullptr
        && this->averageTalkTime_ != nullptr && this->averageWorkTime_ != nullptr && this->maxReadyTime_ != nullptr && this->maxTalkTime_ != nullptr && this->maxWorkTime_ != nullptr
        && this->occupancyRate_ != nullptr && this->oneTransferCalls_ != nullptr && this->satisfactionIndex_ != nullptr && this->satisfactionSurveysOffered_ != nullptr && this->satisfactionSurveysResponded_ != nullptr
        && this->totalBreakTime_ != nullptr && this->totalCalls_ != nullptr && this->totalLoggedInTime_ != nullptr && this->totalReadyTime_ != nullptr && this->totalTalkTime_ != nullptr
        && this->totalWorkTime_ != nullptr; };
    // averageReadyTime Field Functions 
    bool hasAverageReadyTime() const { return this->averageReadyTime_ != nullptr;};
    void deleteAverageReadyTime() { this->averageReadyTime_ = nullptr;};
    inline int64_t averageReadyTime() const { DARABONBA_PTR_GET_DEFAULT(averageReadyTime_, 0L) };
    inline ListAgentSummaryReportsSinceMidnightResponseBodyPagedAgentSummaryReportListOverall& setAverageReadyTime(int64_t averageReadyTime) { DARABONBA_PTR_SET_VALUE(averageReadyTime_, averageReadyTime) };


    // averageTalkTime Field Functions 
    bool hasAverageTalkTime() const { return this->averageTalkTime_ != nullptr;};
    void deleteAverageTalkTime() { this->averageTalkTime_ = nullptr;};
    inline int64_t averageTalkTime() const { DARABONBA_PTR_GET_DEFAULT(averageTalkTime_, 0L) };
    inline ListAgentSummaryReportsSinceMidnightResponseBodyPagedAgentSummaryReportListOverall& setAverageTalkTime(int64_t averageTalkTime) { DARABONBA_PTR_SET_VALUE(averageTalkTime_, averageTalkTime) };


    // averageWorkTime Field Functions 
    bool hasAverageWorkTime() const { return this->averageWorkTime_ != nullptr;};
    void deleteAverageWorkTime() { this->averageWorkTime_ = nullptr;};
    inline int64_t averageWorkTime() const { DARABONBA_PTR_GET_DEFAULT(averageWorkTime_, 0L) };
    inline ListAgentSummaryReportsSinceMidnightResponseBodyPagedAgentSummaryReportListOverall& setAverageWorkTime(int64_t averageWorkTime) { DARABONBA_PTR_SET_VALUE(averageWorkTime_, averageWorkTime) };


    // maxReadyTime Field Functions 
    bool hasMaxReadyTime() const { return this->maxReadyTime_ != nullptr;};
    void deleteMaxReadyTime() { this->maxReadyTime_ = nullptr;};
    inline int64_t maxReadyTime() const { DARABONBA_PTR_GET_DEFAULT(maxReadyTime_, 0L) };
    inline ListAgentSummaryReportsSinceMidnightResponseBodyPagedAgentSummaryReportListOverall& setMaxReadyTime(int64_t maxReadyTime) { DARABONBA_PTR_SET_VALUE(maxReadyTime_, maxReadyTime) };


    // maxTalkTime Field Functions 
    bool hasMaxTalkTime() const { return this->maxTalkTime_ != nullptr;};
    void deleteMaxTalkTime() { this->maxTalkTime_ = nullptr;};
    inline int64_t maxTalkTime() const { DARABONBA_PTR_GET_DEFAULT(maxTalkTime_, 0L) };
    inline ListAgentSummaryReportsSinceMidnightResponseBodyPagedAgentSummaryReportListOverall& setMaxTalkTime(int64_t maxTalkTime) { DARABONBA_PTR_SET_VALUE(maxTalkTime_, maxTalkTime) };


    // maxWorkTime Field Functions 
    bool hasMaxWorkTime() const { return this->maxWorkTime_ != nullptr;};
    void deleteMaxWorkTime() { this->maxWorkTime_ = nullptr;};
    inline int64_t maxWorkTime() const { DARABONBA_PTR_GET_DEFAULT(maxWorkTime_, 0L) };
    inline ListAgentSummaryReportsSinceMidnightResponseBodyPagedAgentSummaryReportListOverall& setMaxWorkTime(int64_t maxWorkTime) { DARABONBA_PTR_SET_VALUE(maxWorkTime_, maxWorkTime) };


    // occupancyRate Field Functions 
    bool hasOccupancyRate() const { return this->occupancyRate_ != nullptr;};
    void deleteOccupancyRate() { this->occupancyRate_ = nullptr;};
    inline float occupancyRate() const { DARABONBA_PTR_GET_DEFAULT(occupancyRate_, 0.0) };
    inline ListAgentSummaryReportsSinceMidnightResponseBodyPagedAgentSummaryReportListOverall& setOccupancyRate(float occupancyRate) { DARABONBA_PTR_SET_VALUE(occupancyRate_, occupancyRate) };


    // oneTransferCalls Field Functions 
    bool hasOneTransferCalls() const { return this->oneTransferCalls_ != nullptr;};
    void deleteOneTransferCalls() { this->oneTransferCalls_ = nullptr;};
    inline int64_t oneTransferCalls() const { DARABONBA_PTR_GET_DEFAULT(oneTransferCalls_, 0L) };
    inline ListAgentSummaryReportsSinceMidnightResponseBodyPagedAgentSummaryReportListOverall& setOneTransferCalls(int64_t oneTransferCalls) { DARABONBA_PTR_SET_VALUE(oneTransferCalls_, oneTransferCalls) };


    // satisfactionIndex Field Functions 
    bool hasSatisfactionIndex() const { return this->satisfactionIndex_ != nullptr;};
    void deleteSatisfactionIndex() { this->satisfactionIndex_ = nullptr;};
    inline float satisfactionIndex() const { DARABONBA_PTR_GET_DEFAULT(satisfactionIndex_, 0.0) };
    inline ListAgentSummaryReportsSinceMidnightResponseBodyPagedAgentSummaryReportListOverall& setSatisfactionIndex(float satisfactionIndex) { DARABONBA_PTR_SET_VALUE(satisfactionIndex_, satisfactionIndex) };


    // satisfactionSurveysOffered Field Functions 
    bool hasSatisfactionSurveysOffered() const { return this->satisfactionSurveysOffered_ != nullptr;};
    void deleteSatisfactionSurveysOffered() { this->satisfactionSurveysOffered_ = nullptr;};
    inline int64_t satisfactionSurveysOffered() const { DARABONBA_PTR_GET_DEFAULT(satisfactionSurveysOffered_, 0L) };
    inline ListAgentSummaryReportsSinceMidnightResponseBodyPagedAgentSummaryReportListOverall& setSatisfactionSurveysOffered(int64_t satisfactionSurveysOffered) { DARABONBA_PTR_SET_VALUE(satisfactionSurveysOffered_, satisfactionSurveysOffered) };


    // satisfactionSurveysResponded Field Functions 
    bool hasSatisfactionSurveysResponded() const { return this->satisfactionSurveysResponded_ != nullptr;};
    void deleteSatisfactionSurveysResponded() { this->satisfactionSurveysResponded_ = nullptr;};
    inline int64_t satisfactionSurveysResponded() const { DARABONBA_PTR_GET_DEFAULT(satisfactionSurveysResponded_, 0L) };
    inline ListAgentSummaryReportsSinceMidnightResponseBodyPagedAgentSummaryReportListOverall& setSatisfactionSurveysResponded(int64_t satisfactionSurveysResponded) { DARABONBA_PTR_SET_VALUE(satisfactionSurveysResponded_, satisfactionSurveysResponded) };


    // totalBreakTime Field Functions 
    bool hasTotalBreakTime() const { return this->totalBreakTime_ != nullptr;};
    void deleteTotalBreakTime() { this->totalBreakTime_ = nullptr;};
    inline int64_t totalBreakTime() const { DARABONBA_PTR_GET_DEFAULT(totalBreakTime_, 0L) };
    inline ListAgentSummaryReportsSinceMidnightResponseBodyPagedAgentSummaryReportListOverall& setTotalBreakTime(int64_t totalBreakTime) { DARABONBA_PTR_SET_VALUE(totalBreakTime_, totalBreakTime) };


    // totalCalls Field Functions 
    bool hasTotalCalls() const { return this->totalCalls_ != nullptr;};
    void deleteTotalCalls() { this->totalCalls_ = nullptr;};
    inline int64_t totalCalls() const { DARABONBA_PTR_GET_DEFAULT(totalCalls_, 0L) };
    inline ListAgentSummaryReportsSinceMidnightResponseBodyPagedAgentSummaryReportListOverall& setTotalCalls(int64_t totalCalls) { DARABONBA_PTR_SET_VALUE(totalCalls_, totalCalls) };


    // totalLoggedInTime Field Functions 
    bool hasTotalLoggedInTime() const { return this->totalLoggedInTime_ != nullptr;};
    void deleteTotalLoggedInTime() { this->totalLoggedInTime_ = nullptr;};
    inline int64_t totalLoggedInTime() const { DARABONBA_PTR_GET_DEFAULT(totalLoggedInTime_, 0L) };
    inline ListAgentSummaryReportsSinceMidnightResponseBodyPagedAgentSummaryReportListOverall& setTotalLoggedInTime(int64_t totalLoggedInTime) { DARABONBA_PTR_SET_VALUE(totalLoggedInTime_, totalLoggedInTime) };


    // totalReadyTime Field Functions 
    bool hasTotalReadyTime() const { return this->totalReadyTime_ != nullptr;};
    void deleteTotalReadyTime() { this->totalReadyTime_ = nullptr;};
    inline int64_t totalReadyTime() const { DARABONBA_PTR_GET_DEFAULT(totalReadyTime_, 0L) };
    inline ListAgentSummaryReportsSinceMidnightResponseBodyPagedAgentSummaryReportListOverall& setTotalReadyTime(int64_t totalReadyTime) { DARABONBA_PTR_SET_VALUE(totalReadyTime_, totalReadyTime) };


    // totalTalkTime Field Functions 
    bool hasTotalTalkTime() const { return this->totalTalkTime_ != nullptr;};
    void deleteTotalTalkTime() { this->totalTalkTime_ = nullptr;};
    inline int64_t totalTalkTime() const { DARABONBA_PTR_GET_DEFAULT(totalTalkTime_, 0L) };
    inline ListAgentSummaryReportsSinceMidnightResponseBodyPagedAgentSummaryReportListOverall& setTotalTalkTime(int64_t totalTalkTime) { DARABONBA_PTR_SET_VALUE(totalTalkTime_, totalTalkTime) };


    // totalWorkTime Field Functions 
    bool hasTotalWorkTime() const { return this->totalWorkTime_ != nullptr;};
    void deleteTotalWorkTime() { this->totalWorkTime_ = nullptr;};
    inline int64_t totalWorkTime() const { DARABONBA_PTR_GET_DEFAULT(totalWorkTime_, 0L) };
    inline ListAgentSummaryReportsSinceMidnightResponseBodyPagedAgentSummaryReportListOverall& setTotalWorkTime(int64_t totalWorkTime) { DARABONBA_PTR_SET_VALUE(totalWorkTime_, totalWorkTime) };


  protected:
    std::shared_ptr<int64_t> averageReadyTime_ = nullptr;
    std::shared_ptr<int64_t> averageTalkTime_ = nullptr;
    std::shared_ptr<int64_t> averageWorkTime_ = nullptr;
    std::shared_ptr<int64_t> maxReadyTime_ = nullptr;
    std::shared_ptr<int64_t> maxTalkTime_ = nullptr;
    std::shared_ptr<int64_t> maxWorkTime_ = nullptr;
    std::shared_ptr<float> occupancyRate_ = nullptr;
    std::shared_ptr<int64_t> oneTransferCalls_ = nullptr;
    std::shared_ptr<float> satisfactionIndex_ = nullptr;
    std::shared_ptr<int64_t> satisfactionSurveysOffered_ = nullptr;
    std::shared_ptr<int64_t> satisfactionSurveysResponded_ = nullptr;
    std::shared_ptr<int64_t> totalBreakTime_ = nullptr;
    std::shared_ptr<int64_t> totalCalls_ = nullptr;
    std::shared_ptr<int64_t> totalLoggedInTime_ = nullptr;
    std::shared_ptr<int64_t> totalReadyTime_ = nullptr;
    std::shared_ptr<int64_t> totalTalkTime_ = nullptr;
    std::shared_ptr<int64_t> totalWorkTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
