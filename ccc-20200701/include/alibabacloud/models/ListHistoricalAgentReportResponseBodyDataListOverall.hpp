// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTHISTORICALAGENTREPORTRESPONSEBODYDATALISTOVERALL_HPP_
#define ALIBABACLOUD_MODELS_LISTHISTORICALAGENTREPORTRESPONSEBODYDATALISTOVERALL_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListHistoricalAgentReportResponseBodyDataListOverallBreakCodeDetailList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class ListHistoricalAgentReportResponseBodyDataListOverall : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListHistoricalAgentReportResponseBodyDataListOverall& obj) { 
      DARABONBA_PTR_TO_JSON(AverageBreakTime, averageBreakTime_);
      DARABONBA_PTR_TO_JSON(AverageHoldTime, averageHoldTime_);
      DARABONBA_PTR_TO_JSON(AverageReadyTime, averageReadyTime_);
      DARABONBA_PTR_TO_JSON(AverageTalkTime, averageTalkTime_);
      DARABONBA_PTR_TO_JSON(AverageWorkTime, averageWorkTime_);
      DARABONBA_PTR_TO_JSON(BreakCodeDetailList, breakCodeDetailList_);
      DARABONBA_PTR_TO_JSON(FirstCheckInTime, firstCheckInTime_);
      DARABONBA_PTR_TO_JSON(LastCheckOutTime, lastCheckOutTime_);
      DARABONBA_PTR_TO_JSON(MaxBreakTime, maxBreakTime_);
      DARABONBA_PTR_TO_JSON(MaxHoldTime, maxHoldTime_);
      DARABONBA_PTR_TO_JSON(MaxReadyTime, maxReadyTime_);
      DARABONBA_PTR_TO_JSON(MaxTalkTime, maxTalkTime_);
      DARABONBA_PTR_TO_JSON(MaxWorkTime, maxWorkTime_);
      DARABONBA_PTR_TO_JSON(OccupancyRate, occupancyRate_);
      DARABONBA_PTR_TO_JSON(SatisfactionIndex, satisfactionIndex_);
      DARABONBA_PTR_TO_JSON(SatisfactionRate, satisfactionRate_);
      DARABONBA_PTR_TO_JSON(SatisfactionSurveysOffered, satisfactionSurveysOffered_);
      DARABONBA_PTR_TO_JSON(SatisfactionSurveysResponded, satisfactionSurveysResponded_);
      DARABONBA_PTR_TO_JSON(TotalBreakTime, totalBreakTime_);
      DARABONBA_PTR_TO_JSON(TotalCalls, totalCalls_);
      DARABONBA_PTR_TO_JSON(TotalHoldTime, totalHoldTime_);
      DARABONBA_PTR_TO_JSON(TotalLoggedInTime, totalLoggedInTime_);
      DARABONBA_PTR_TO_JSON(TotalOffSiteLoggedInTime, totalOffSiteLoggedInTime_);
      DARABONBA_PTR_TO_JSON(TotalOffSiteOnlineTime, totalOffSiteOnlineTime_);
      DARABONBA_PTR_TO_JSON(TotalOfficePhoneLoggedInTime, totalOfficePhoneLoggedInTime_);
      DARABONBA_PTR_TO_JSON(TotalOfficePhoneOnlineTime, totalOfficePhoneOnlineTime_);
      DARABONBA_PTR_TO_JSON(TotalOnSiteLoggedInTime, totalOnSiteLoggedInTime_);
      DARABONBA_PTR_TO_JSON(TotalOnSiteOnlineTime, totalOnSiteOnlineTime_);
      DARABONBA_PTR_TO_JSON(TotalOutboundScenarioLoggedInTime, totalOutboundScenarioLoggedInTime_);
      DARABONBA_PTR_TO_JSON(TotalOutboundScenarioReadyTime, totalOutboundScenarioReadyTime_);
      DARABONBA_PTR_TO_JSON(TotalOutboundScenarioTime, totalOutboundScenarioTime_);
      DARABONBA_PTR_TO_JSON(TotalReadyTime, totalReadyTime_);
      DARABONBA_PTR_TO_JSON(TotalTalkTime, totalTalkTime_);
      DARABONBA_PTR_TO_JSON(TotalWorkTime, totalWorkTime_);
    };
    friend void from_json(const Darabonba::Json& j, ListHistoricalAgentReportResponseBodyDataListOverall& obj) { 
      DARABONBA_PTR_FROM_JSON(AverageBreakTime, averageBreakTime_);
      DARABONBA_PTR_FROM_JSON(AverageHoldTime, averageHoldTime_);
      DARABONBA_PTR_FROM_JSON(AverageReadyTime, averageReadyTime_);
      DARABONBA_PTR_FROM_JSON(AverageTalkTime, averageTalkTime_);
      DARABONBA_PTR_FROM_JSON(AverageWorkTime, averageWorkTime_);
      DARABONBA_PTR_FROM_JSON(BreakCodeDetailList, breakCodeDetailList_);
      DARABONBA_PTR_FROM_JSON(FirstCheckInTime, firstCheckInTime_);
      DARABONBA_PTR_FROM_JSON(LastCheckOutTime, lastCheckOutTime_);
      DARABONBA_PTR_FROM_JSON(MaxBreakTime, maxBreakTime_);
      DARABONBA_PTR_FROM_JSON(MaxHoldTime, maxHoldTime_);
      DARABONBA_PTR_FROM_JSON(MaxReadyTime, maxReadyTime_);
      DARABONBA_PTR_FROM_JSON(MaxTalkTime, maxTalkTime_);
      DARABONBA_PTR_FROM_JSON(MaxWorkTime, maxWorkTime_);
      DARABONBA_PTR_FROM_JSON(OccupancyRate, occupancyRate_);
      DARABONBA_PTR_FROM_JSON(SatisfactionIndex, satisfactionIndex_);
      DARABONBA_PTR_FROM_JSON(SatisfactionRate, satisfactionRate_);
      DARABONBA_PTR_FROM_JSON(SatisfactionSurveysOffered, satisfactionSurveysOffered_);
      DARABONBA_PTR_FROM_JSON(SatisfactionSurveysResponded, satisfactionSurveysResponded_);
      DARABONBA_PTR_FROM_JSON(TotalBreakTime, totalBreakTime_);
      DARABONBA_PTR_FROM_JSON(TotalCalls, totalCalls_);
      DARABONBA_PTR_FROM_JSON(TotalHoldTime, totalHoldTime_);
      DARABONBA_PTR_FROM_JSON(TotalLoggedInTime, totalLoggedInTime_);
      DARABONBA_PTR_FROM_JSON(TotalOffSiteLoggedInTime, totalOffSiteLoggedInTime_);
      DARABONBA_PTR_FROM_JSON(TotalOffSiteOnlineTime, totalOffSiteOnlineTime_);
      DARABONBA_PTR_FROM_JSON(TotalOfficePhoneLoggedInTime, totalOfficePhoneLoggedInTime_);
      DARABONBA_PTR_FROM_JSON(TotalOfficePhoneOnlineTime, totalOfficePhoneOnlineTime_);
      DARABONBA_PTR_FROM_JSON(TotalOnSiteLoggedInTime, totalOnSiteLoggedInTime_);
      DARABONBA_PTR_FROM_JSON(TotalOnSiteOnlineTime, totalOnSiteOnlineTime_);
      DARABONBA_PTR_FROM_JSON(TotalOutboundScenarioLoggedInTime, totalOutboundScenarioLoggedInTime_);
      DARABONBA_PTR_FROM_JSON(TotalOutboundScenarioReadyTime, totalOutboundScenarioReadyTime_);
      DARABONBA_PTR_FROM_JSON(TotalOutboundScenarioTime, totalOutboundScenarioTime_);
      DARABONBA_PTR_FROM_JSON(TotalReadyTime, totalReadyTime_);
      DARABONBA_PTR_FROM_JSON(TotalTalkTime, totalTalkTime_);
      DARABONBA_PTR_FROM_JSON(TotalWorkTime, totalWorkTime_);
    };
    ListHistoricalAgentReportResponseBodyDataListOverall() = default ;
    ListHistoricalAgentReportResponseBodyDataListOverall(const ListHistoricalAgentReportResponseBodyDataListOverall &) = default ;
    ListHistoricalAgentReportResponseBodyDataListOverall(ListHistoricalAgentReportResponseBodyDataListOverall &&) = default ;
    ListHistoricalAgentReportResponseBodyDataListOverall(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListHistoricalAgentReportResponseBodyDataListOverall() = default ;
    ListHistoricalAgentReportResponseBodyDataListOverall& operator=(const ListHistoricalAgentReportResponseBodyDataListOverall &) = default ;
    ListHistoricalAgentReportResponseBodyDataListOverall& operator=(ListHistoricalAgentReportResponseBodyDataListOverall &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->averageBreakTime_ != nullptr
        && this->averageHoldTime_ != nullptr && this->averageReadyTime_ != nullptr && this->averageTalkTime_ != nullptr && this->averageWorkTime_ != nullptr && this->breakCodeDetailList_ != nullptr
        && this->firstCheckInTime_ != nullptr && this->lastCheckOutTime_ != nullptr && this->maxBreakTime_ != nullptr && this->maxHoldTime_ != nullptr && this->maxReadyTime_ != nullptr
        && this->maxTalkTime_ != nullptr && this->maxWorkTime_ != nullptr && this->occupancyRate_ != nullptr && this->satisfactionIndex_ != nullptr && this->satisfactionRate_ != nullptr
        && this->satisfactionSurveysOffered_ != nullptr && this->satisfactionSurveysResponded_ != nullptr && this->totalBreakTime_ != nullptr && this->totalCalls_ != nullptr && this->totalHoldTime_ != nullptr
        && this->totalLoggedInTime_ != nullptr && this->totalOffSiteLoggedInTime_ != nullptr && this->totalOffSiteOnlineTime_ != nullptr && this->totalOfficePhoneLoggedInTime_ != nullptr && this->totalOfficePhoneOnlineTime_ != nullptr
        && this->totalOnSiteLoggedInTime_ != nullptr && this->totalOnSiteOnlineTime_ != nullptr && this->totalOutboundScenarioLoggedInTime_ != nullptr && this->totalOutboundScenarioReadyTime_ != nullptr && this->totalOutboundScenarioTime_ != nullptr
        && this->totalReadyTime_ != nullptr && this->totalTalkTime_ != nullptr && this->totalWorkTime_ != nullptr; };
    // averageBreakTime Field Functions 
    bool hasAverageBreakTime() const { return this->averageBreakTime_ != nullptr;};
    void deleteAverageBreakTime() { this->averageBreakTime_ = nullptr;};
    inline float averageBreakTime() const { DARABONBA_PTR_GET_DEFAULT(averageBreakTime_, 0.0) };
    inline ListHistoricalAgentReportResponseBodyDataListOverall& setAverageBreakTime(float averageBreakTime) { DARABONBA_PTR_SET_VALUE(averageBreakTime_, averageBreakTime) };


    // averageHoldTime Field Functions 
    bool hasAverageHoldTime() const { return this->averageHoldTime_ != nullptr;};
    void deleteAverageHoldTime() { this->averageHoldTime_ = nullptr;};
    inline float averageHoldTime() const { DARABONBA_PTR_GET_DEFAULT(averageHoldTime_, 0.0) };
    inline ListHistoricalAgentReportResponseBodyDataListOverall& setAverageHoldTime(float averageHoldTime) { DARABONBA_PTR_SET_VALUE(averageHoldTime_, averageHoldTime) };


    // averageReadyTime Field Functions 
    bool hasAverageReadyTime() const { return this->averageReadyTime_ != nullptr;};
    void deleteAverageReadyTime() { this->averageReadyTime_ = nullptr;};
    inline float averageReadyTime() const { DARABONBA_PTR_GET_DEFAULT(averageReadyTime_, 0.0) };
    inline ListHistoricalAgentReportResponseBodyDataListOverall& setAverageReadyTime(float averageReadyTime) { DARABONBA_PTR_SET_VALUE(averageReadyTime_, averageReadyTime) };


    // averageTalkTime Field Functions 
    bool hasAverageTalkTime() const { return this->averageTalkTime_ != nullptr;};
    void deleteAverageTalkTime() { this->averageTalkTime_ = nullptr;};
    inline float averageTalkTime() const { DARABONBA_PTR_GET_DEFAULT(averageTalkTime_, 0.0) };
    inline ListHistoricalAgentReportResponseBodyDataListOverall& setAverageTalkTime(float averageTalkTime) { DARABONBA_PTR_SET_VALUE(averageTalkTime_, averageTalkTime) };


    // averageWorkTime Field Functions 
    bool hasAverageWorkTime() const { return this->averageWorkTime_ != nullptr;};
    void deleteAverageWorkTime() { this->averageWorkTime_ = nullptr;};
    inline float averageWorkTime() const { DARABONBA_PTR_GET_DEFAULT(averageWorkTime_, 0.0) };
    inline ListHistoricalAgentReportResponseBodyDataListOverall& setAverageWorkTime(float averageWorkTime) { DARABONBA_PTR_SET_VALUE(averageWorkTime_, averageWorkTime) };


    // breakCodeDetailList Field Functions 
    bool hasBreakCodeDetailList() const { return this->breakCodeDetailList_ != nullptr;};
    void deleteBreakCodeDetailList() { this->breakCodeDetailList_ = nullptr;};
    inline const vector<Models::ListHistoricalAgentReportResponseBodyDataListOverallBreakCodeDetailList> & breakCodeDetailList() const { DARABONBA_PTR_GET_CONST(breakCodeDetailList_, vector<Models::ListHistoricalAgentReportResponseBodyDataListOverallBreakCodeDetailList>) };
    inline vector<Models::ListHistoricalAgentReportResponseBodyDataListOverallBreakCodeDetailList> breakCodeDetailList() { DARABONBA_PTR_GET(breakCodeDetailList_, vector<Models::ListHistoricalAgentReportResponseBodyDataListOverallBreakCodeDetailList>) };
    inline ListHistoricalAgentReportResponseBodyDataListOverall& setBreakCodeDetailList(const vector<Models::ListHistoricalAgentReportResponseBodyDataListOverallBreakCodeDetailList> & breakCodeDetailList) { DARABONBA_PTR_SET_VALUE(breakCodeDetailList_, breakCodeDetailList) };
    inline ListHistoricalAgentReportResponseBodyDataListOverall& setBreakCodeDetailList(vector<Models::ListHistoricalAgentReportResponseBodyDataListOverallBreakCodeDetailList> && breakCodeDetailList) { DARABONBA_PTR_SET_RVALUE(breakCodeDetailList_, breakCodeDetailList) };


    // firstCheckInTime Field Functions 
    bool hasFirstCheckInTime() const { return this->firstCheckInTime_ != nullptr;};
    void deleteFirstCheckInTime() { this->firstCheckInTime_ = nullptr;};
    inline int64_t firstCheckInTime() const { DARABONBA_PTR_GET_DEFAULT(firstCheckInTime_, 0L) };
    inline ListHistoricalAgentReportResponseBodyDataListOverall& setFirstCheckInTime(int64_t firstCheckInTime) { DARABONBA_PTR_SET_VALUE(firstCheckInTime_, firstCheckInTime) };


    // lastCheckOutTime Field Functions 
    bool hasLastCheckOutTime() const { return this->lastCheckOutTime_ != nullptr;};
    void deleteLastCheckOutTime() { this->lastCheckOutTime_ = nullptr;};
    inline int64_t lastCheckOutTime() const { DARABONBA_PTR_GET_DEFAULT(lastCheckOutTime_, 0L) };
    inline ListHistoricalAgentReportResponseBodyDataListOverall& setLastCheckOutTime(int64_t lastCheckOutTime) { DARABONBA_PTR_SET_VALUE(lastCheckOutTime_, lastCheckOutTime) };


    // maxBreakTime Field Functions 
    bool hasMaxBreakTime() const { return this->maxBreakTime_ != nullptr;};
    void deleteMaxBreakTime() { this->maxBreakTime_ = nullptr;};
    inline int64_t maxBreakTime() const { DARABONBA_PTR_GET_DEFAULT(maxBreakTime_, 0L) };
    inline ListHistoricalAgentReportResponseBodyDataListOverall& setMaxBreakTime(int64_t maxBreakTime) { DARABONBA_PTR_SET_VALUE(maxBreakTime_, maxBreakTime) };


    // maxHoldTime Field Functions 
    bool hasMaxHoldTime() const { return this->maxHoldTime_ != nullptr;};
    void deleteMaxHoldTime() { this->maxHoldTime_ = nullptr;};
    inline int64_t maxHoldTime() const { DARABONBA_PTR_GET_DEFAULT(maxHoldTime_, 0L) };
    inline ListHistoricalAgentReportResponseBodyDataListOverall& setMaxHoldTime(int64_t maxHoldTime) { DARABONBA_PTR_SET_VALUE(maxHoldTime_, maxHoldTime) };


    // maxReadyTime Field Functions 
    bool hasMaxReadyTime() const { return this->maxReadyTime_ != nullptr;};
    void deleteMaxReadyTime() { this->maxReadyTime_ = nullptr;};
    inline int64_t maxReadyTime() const { DARABONBA_PTR_GET_DEFAULT(maxReadyTime_, 0L) };
    inline ListHistoricalAgentReportResponseBodyDataListOverall& setMaxReadyTime(int64_t maxReadyTime) { DARABONBA_PTR_SET_VALUE(maxReadyTime_, maxReadyTime) };


    // maxTalkTime Field Functions 
    bool hasMaxTalkTime() const { return this->maxTalkTime_ != nullptr;};
    void deleteMaxTalkTime() { this->maxTalkTime_ = nullptr;};
    inline int64_t maxTalkTime() const { DARABONBA_PTR_GET_DEFAULT(maxTalkTime_, 0L) };
    inline ListHistoricalAgentReportResponseBodyDataListOverall& setMaxTalkTime(int64_t maxTalkTime) { DARABONBA_PTR_SET_VALUE(maxTalkTime_, maxTalkTime) };


    // maxWorkTime Field Functions 
    bool hasMaxWorkTime() const { return this->maxWorkTime_ != nullptr;};
    void deleteMaxWorkTime() { this->maxWorkTime_ = nullptr;};
    inline int64_t maxWorkTime() const { DARABONBA_PTR_GET_DEFAULT(maxWorkTime_, 0L) };
    inline ListHistoricalAgentReportResponseBodyDataListOverall& setMaxWorkTime(int64_t maxWorkTime) { DARABONBA_PTR_SET_VALUE(maxWorkTime_, maxWorkTime) };


    // occupancyRate Field Functions 
    bool hasOccupancyRate() const { return this->occupancyRate_ != nullptr;};
    void deleteOccupancyRate() { this->occupancyRate_ = nullptr;};
    inline float occupancyRate() const { DARABONBA_PTR_GET_DEFAULT(occupancyRate_, 0.0) };
    inline ListHistoricalAgentReportResponseBodyDataListOverall& setOccupancyRate(float occupancyRate) { DARABONBA_PTR_SET_VALUE(occupancyRate_, occupancyRate) };


    // satisfactionIndex Field Functions 
    bool hasSatisfactionIndex() const { return this->satisfactionIndex_ != nullptr;};
    void deleteSatisfactionIndex() { this->satisfactionIndex_ = nullptr;};
    inline float satisfactionIndex() const { DARABONBA_PTR_GET_DEFAULT(satisfactionIndex_, 0.0) };
    inline ListHistoricalAgentReportResponseBodyDataListOverall& setSatisfactionIndex(float satisfactionIndex) { DARABONBA_PTR_SET_VALUE(satisfactionIndex_, satisfactionIndex) };


    // satisfactionRate Field Functions 
    bool hasSatisfactionRate() const { return this->satisfactionRate_ != nullptr;};
    void deleteSatisfactionRate() { this->satisfactionRate_ = nullptr;};
    inline float satisfactionRate() const { DARABONBA_PTR_GET_DEFAULT(satisfactionRate_, 0.0) };
    inline ListHistoricalAgentReportResponseBodyDataListOverall& setSatisfactionRate(float satisfactionRate) { DARABONBA_PTR_SET_VALUE(satisfactionRate_, satisfactionRate) };


    // satisfactionSurveysOffered Field Functions 
    bool hasSatisfactionSurveysOffered() const { return this->satisfactionSurveysOffered_ != nullptr;};
    void deleteSatisfactionSurveysOffered() { this->satisfactionSurveysOffered_ = nullptr;};
    inline int64_t satisfactionSurveysOffered() const { DARABONBA_PTR_GET_DEFAULT(satisfactionSurveysOffered_, 0L) };
    inline ListHistoricalAgentReportResponseBodyDataListOverall& setSatisfactionSurveysOffered(int64_t satisfactionSurveysOffered) { DARABONBA_PTR_SET_VALUE(satisfactionSurveysOffered_, satisfactionSurveysOffered) };


    // satisfactionSurveysResponded Field Functions 
    bool hasSatisfactionSurveysResponded() const { return this->satisfactionSurveysResponded_ != nullptr;};
    void deleteSatisfactionSurveysResponded() { this->satisfactionSurveysResponded_ = nullptr;};
    inline int64_t satisfactionSurveysResponded() const { DARABONBA_PTR_GET_DEFAULT(satisfactionSurveysResponded_, 0L) };
    inline ListHistoricalAgentReportResponseBodyDataListOverall& setSatisfactionSurveysResponded(int64_t satisfactionSurveysResponded) { DARABONBA_PTR_SET_VALUE(satisfactionSurveysResponded_, satisfactionSurveysResponded) };


    // totalBreakTime Field Functions 
    bool hasTotalBreakTime() const { return this->totalBreakTime_ != nullptr;};
    void deleteTotalBreakTime() { this->totalBreakTime_ = nullptr;};
    inline int64_t totalBreakTime() const { DARABONBA_PTR_GET_DEFAULT(totalBreakTime_, 0L) };
    inline ListHistoricalAgentReportResponseBodyDataListOverall& setTotalBreakTime(int64_t totalBreakTime) { DARABONBA_PTR_SET_VALUE(totalBreakTime_, totalBreakTime) };


    // totalCalls Field Functions 
    bool hasTotalCalls() const { return this->totalCalls_ != nullptr;};
    void deleteTotalCalls() { this->totalCalls_ = nullptr;};
    inline int64_t totalCalls() const { DARABONBA_PTR_GET_DEFAULT(totalCalls_, 0L) };
    inline ListHistoricalAgentReportResponseBodyDataListOverall& setTotalCalls(int64_t totalCalls) { DARABONBA_PTR_SET_VALUE(totalCalls_, totalCalls) };


    // totalHoldTime Field Functions 
    bool hasTotalHoldTime() const { return this->totalHoldTime_ != nullptr;};
    void deleteTotalHoldTime() { this->totalHoldTime_ = nullptr;};
    inline int64_t totalHoldTime() const { DARABONBA_PTR_GET_DEFAULT(totalHoldTime_, 0L) };
    inline ListHistoricalAgentReportResponseBodyDataListOverall& setTotalHoldTime(int64_t totalHoldTime) { DARABONBA_PTR_SET_VALUE(totalHoldTime_, totalHoldTime) };


    // totalLoggedInTime Field Functions 
    bool hasTotalLoggedInTime() const { return this->totalLoggedInTime_ != nullptr;};
    void deleteTotalLoggedInTime() { this->totalLoggedInTime_ = nullptr;};
    inline int64_t totalLoggedInTime() const { DARABONBA_PTR_GET_DEFAULT(totalLoggedInTime_, 0L) };
    inline ListHistoricalAgentReportResponseBodyDataListOverall& setTotalLoggedInTime(int64_t totalLoggedInTime) { DARABONBA_PTR_SET_VALUE(totalLoggedInTime_, totalLoggedInTime) };


    // totalOffSiteLoggedInTime Field Functions 
    bool hasTotalOffSiteLoggedInTime() const { return this->totalOffSiteLoggedInTime_ != nullptr;};
    void deleteTotalOffSiteLoggedInTime() { this->totalOffSiteLoggedInTime_ = nullptr;};
    inline int64_t totalOffSiteLoggedInTime() const { DARABONBA_PTR_GET_DEFAULT(totalOffSiteLoggedInTime_, 0L) };
    inline ListHistoricalAgentReportResponseBodyDataListOverall& setTotalOffSiteLoggedInTime(int64_t totalOffSiteLoggedInTime) { DARABONBA_PTR_SET_VALUE(totalOffSiteLoggedInTime_, totalOffSiteLoggedInTime) };


    // totalOffSiteOnlineTime Field Functions 
    bool hasTotalOffSiteOnlineTime() const { return this->totalOffSiteOnlineTime_ != nullptr;};
    void deleteTotalOffSiteOnlineTime() { this->totalOffSiteOnlineTime_ = nullptr;};
    inline int64_t totalOffSiteOnlineTime() const { DARABONBA_PTR_GET_DEFAULT(totalOffSiteOnlineTime_, 0L) };
    inline ListHistoricalAgentReportResponseBodyDataListOverall& setTotalOffSiteOnlineTime(int64_t totalOffSiteOnlineTime) { DARABONBA_PTR_SET_VALUE(totalOffSiteOnlineTime_, totalOffSiteOnlineTime) };


    // totalOfficePhoneLoggedInTime Field Functions 
    bool hasTotalOfficePhoneLoggedInTime() const { return this->totalOfficePhoneLoggedInTime_ != nullptr;};
    void deleteTotalOfficePhoneLoggedInTime() { this->totalOfficePhoneLoggedInTime_ = nullptr;};
    inline int64_t totalOfficePhoneLoggedInTime() const { DARABONBA_PTR_GET_DEFAULT(totalOfficePhoneLoggedInTime_, 0L) };
    inline ListHistoricalAgentReportResponseBodyDataListOverall& setTotalOfficePhoneLoggedInTime(int64_t totalOfficePhoneLoggedInTime) { DARABONBA_PTR_SET_VALUE(totalOfficePhoneLoggedInTime_, totalOfficePhoneLoggedInTime) };


    // totalOfficePhoneOnlineTime Field Functions 
    bool hasTotalOfficePhoneOnlineTime() const { return this->totalOfficePhoneOnlineTime_ != nullptr;};
    void deleteTotalOfficePhoneOnlineTime() { this->totalOfficePhoneOnlineTime_ = nullptr;};
    inline int64_t totalOfficePhoneOnlineTime() const { DARABONBA_PTR_GET_DEFAULT(totalOfficePhoneOnlineTime_, 0L) };
    inline ListHistoricalAgentReportResponseBodyDataListOverall& setTotalOfficePhoneOnlineTime(int64_t totalOfficePhoneOnlineTime) { DARABONBA_PTR_SET_VALUE(totalOfficePhoneOnlineTime_, totalOfficePhoneOnlineTime) };


    // totalOnSiteLoggedInTime Field Functions 
    bool hasTotalOnSiteLoggedInTime() const { return this->totalOnSiteLoggedInTime_ != nullptr;};
    void deleteTotalOnSiteLoggedInTime() { this->totalOnSiteLoggedInTime_ = nullptr;};
    inline int64_t totalOnSiteLoggedInTime() const { DARABONBA_PTR_GET_DEFAULT(totalOnSiteLoggedInTime_, 0L) };
    inline ListHistoricalAgentReportResponseBodyDataListOverall& setTotalOnSiteLoggedInTime(int64_t totalOnSiteLoggedInTime) { DARABONBA_PTR_SET_VALUE(totalOnSiteLoggedInTime_, totalOnSiteLoggedInTime) };


    // totalOnSiteOnlineTime Field Functions 
    bool hasTotalOnSiteOnlineTime() const { return this->totalOnSiteOnlineTime_ != nullptr;};
    void deleteTotalOnSiteOnlineTime() { this->totalOnSiteOnlineTime_ = nullptr;};
    inline int64_t totalOnSiteOnlineTime() const { DARABONBA_PTR_GET_DEFAULT(totalOnSiteOnlineTime_, 0L) };
    inline ListHistoricalAgentReportResponseBodyDataListOverall& setTotalOnSiteOnlineTime(int64_t totalOnSiteOnlineTime) { DARABONBA_PTR_SET_VALUE(totalOnSiteOnlineTime_, totalOnSiteOnlineTime) };


    // totalOutboundScenarioLoggedInTime Field Functions 
    bool hasTotalOutboundScenarioLoggedInTime() const { return this->totalOutboundScenarioLoggedInTime_ != nullptr;};
    void deleteTotalOutboundScenarioLoggedInTime() { this->totalOutboundScenarioLoggedInTime_ = nullptr;};
    inline int64_t totalOutboundScenarioLoggedInTime() const { DARABONBA_PTR_GET_DEFAULT(totalOutboundScenarioLoggedInTime_, 0L) };
    inline ListHistoricalAgentReportResponseBodyDataListOverall& setTotalOutboundScenarioLoggedInTime(int64_t totalOutboundScenarioLoggedInTime) { DARABONBA_PTR_SET_VALUE(totalOutboundScenarioLoggedInTime_, totalOutboundScenarioLoggedInTime) };


    // totalOutboundScenarioReadyTime Field Functions 
    bool hasTotalOutboundScenarioReadyTime() const { return this->totalOutboundScenarioReadyTime_ != nullptr;};
    void deleteTotalOutboundScenarioReadyTime() { this->totalOutboundScenarioReadyTime_ = nullptr;};
    inline int64_t totalOutboundScenarioReadyTime() const { DARABONBA_PTR_GET_DEFAULT(totalOutboundScenarioReadyTime_, 0L) };
    inline ListHistoricalAgentReportResponseBodyDataListOverall& setTotalOutboundScenarioReadyTime(int64_t totalOutboundScenarioReadyTime) { DARABONBA_PTR_SET_VALUE(totalOutboundScenarioReadyTime_, totalOutboundScenarioReadyTime) };


    // totalOutboundScenarioTime Field Functions 
    bool hasTotalOutboundScenarioTime() const { return this->totalOutboundScenarioTime_ != nullptr;};
    void deleteTotalOutboundScenarioTime() { this->totalOutboundScenarioTime_ = nullptr;};
    inline int64_t totalOutboundScenarioTime() const { DARABONBA_PTR_GET_DEFAULT(totalOutboundScenarioTime_, 0L) };
    inline ListHistoricalAgentReportResponseBodyDataListOverall& setTotalOutboundScenarioTime(int64_t totalOutboundScenarioTime) { DARABONBA_PTR_SET_VALUE(totalOutboundScenarioTime_, totalOutboundScenarioTime) };


    // totalReadyTime Field Functions 
    bool hasTotalReadyTime() const { return this->totalReadyTime_ != nullptr;};
    void deleteTotalReadyTime() { this->totalReadyTime_ = nullptr;};
    inline int64_t totalReadyTime() const { DARABONBA_PTR_GET_DEFAULT(totalReadyTime_, 0L) };
    inline ListHistoricalAgentReportResponseBodyDataListOverall& setTotalReadyTime(int64_t totalReadyTime) { DARABONBA_PTR_SET_VALUE(totalReadyTime_, totalReadyTime) };


    // totalTalkTime Field Functions 
    bool hasTotalTalkTime() const { return this->totalTalkTime_ != nullptr;};
    void deleteTotalTalkTime() { this->totalTalkTime_ = nullptr;};
    inline int64_t totalTalkTime() const { DARABONBA_PTR_GET_DEFAULT(totalTalkTime_, 0L) };
    inline ListHistoricalAgentReportResponseBodyDataListOverall& setTotalTalkTime(int64_t totalTalkTime) { DARABONBA_PTR_SET_VALUE(totalTalkTime_, totalTalkTime) };


    // totalWorkTime Field Functions 
    bool hasTotalWorkTime() const { return this->totalWorkTime_ != nullptr;};
    void deleteTotalWorkTime() { this->totalWorkTime_ = nullptr;};
    inline int64_t totalWorkTime() const { DARABONBA_PTR_GET_DEFAULT(totalWorkTime_, 0L) };
    inline ListHistoricalAgentReportResponseBodyDataListOverall& setTotalWorkTime(int64_t totalWorkTime) { DARABONBA_PTR_SET_VALUE(totalWorkTime_, totalWorkTime) };


  protected:
    std::shared_ptr<float> averageBreakTime_ = nullptr;
    std::shared_ptr<float> averageHoldTime_ = nullptr;
    std::shared_ptr<float> averageReadyTime_ = nullptr;
    std::shared_ptr<float> averageTalkTime_ = nullptr;
    std::shared_ptr<float> averageWorkTime_ = nullptr;
    std::shared_ptr<vector<Models::ListHistoricalAgentReportResponseBodyDataListOverallBreakCodeDetailList>> breakCodeDetailList_ = nullptr;
    std::shared_ptr<int64_t> firstCheckInTime_ = nullptr;
    std::shared_ptr<int64_t> lastCheckOutTime_ = nullptr;
    std::shared_ptr<int64_t> maxBreakTime_ = nullptr;
    std::shared_ptr<int64_t> maxHoldTime_ = nullptr;
    std::shared_ptr<int64_t> maxReadyTime_ = nullptr;
    std::shared_ptr<int64_t> maxTalkTime_ = nullptr;
    std::shared_ptr<int64_t> maxWorkTime_ = nullptr;
    std::shared_ptr<float> occupancyRate_ = nullptr;
    std::shared_ptr<float> satisfactionIndex_ = nullptr;
    std::shared_ptr<float> satisfactionRate_ = nullptr;
    std::shared_ptr<int64_t> satisfactionSurveysOffered_ = nullptr;
    std::shared_ptr<int64_t> satisfactionSurveysResponded_ = nullptr;
    std::shared_ptr<int64_t> totalBreakTime_ = nullptr;
    std::shared_ptr<int64_t> totalCalls_ = nullptr;
    std::shared_ptr<int64_t> totalHoldTime_ = nullptr;
    std::shared_ptr<int64_t> totalLoggedInTime_ = nullptr;
    std::shared_ptr<int64_t> totalOffSiteLoggedInTime_ = nullptr;
    std::shared_ptr<int64_t> totalOffSiteOnlineTime_ = nullptr;
    std::shared_ptr<int64_t> totalOfficePhoneLoggedInTime_ = nullptr;
    std::shared_ptr<int64_t> totalOfficePhoneOnlineTime_ = nullptr;
    std::shared_ptr<int64_t> totalOnSiteLoggedInTime_ = nullptr;
    std::shared_ptr<int64_t> totalOnSiteOnlineTime_ = nullptr;
    std::shared_ptr<int64_t> totalOutboundScenarioLoggedInTime_ = nullptr;
    std::shared_ptr<int64_t> totalOutboundScenarioReadyTime_ = nullptr;
    std::shared_ptr<int64_t> totalOutboundScenarioTime_ = nullptr;
    std::shared_ptr<int64_t> totalReadyTime_ = nullptr;
    std::shared_ptr<int64_t> totalTalkTime_ = nullptr;
    std::shared_ptr<int64_t> totalWorkTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
