// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTHISTORICALAGENTSKILLGROUPREPORTRESPONSEBODYDATALISTOVERALL_HPP_
#define ALIBABACLOUD_MODELS_LISTHISTORICALAGENTSKILLGROUPREPORTRESPONSEBODYDATALISTOVERALL_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListHistoricalAgentSkillGroupReportResponseBodyDataListOverallBreakCodeDetailList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class ListHistoricalAgentSkillGroupReportResponseBodyDataListOverall : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListHistoricalAgentSkillGroupReportResponseBodyDataListOverall& obj) { 
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
      DARABONBA_PTR_TO_JSON(TotalOffSiteLggedInTime, totalOffSiteLggedInTime_);
      DARABONBA_PTR_TO_JSON(TotalOfficePhoneLoggedInTime, totalOfficePhoneLoggedInTime_);
      DARABONBA_PTR_TO_JSON(TotalOnSiteLoggedInTime, totalOnSiteLoggedInTime_);
      DARABONBA_PTR_TO_JSON(TotalOutboundScenarioLoggedInTime, totalOutboundScenarioLoggedInTime_);
      DARABONBA_PTR_TO_JSON(TotalOutboundScenarioReadyTime, totalOutboundScenarioReadyTime_);
      DARABONBA_PTR_TO_JSON(TotalOutboundScenarioTime, totalOutboundScenarioTime_);
      DARABONBA_PTR_TO_JSON(TotalReadyTime, totalReadyTime_);
      DARABONBA_PTR_TO_JSON(TotalTalkTime, totalTalkTime_);
      DARABONBA_PTR_TO_JSON(TotalWorkTime, totalWorkTime_);
    };
    friend void from_json(const Darabonba::Json& j, ListHistoricalAgentSkillGroupReportResponseBodyDataListOverall& obj) { 
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
      DARABONBA_PTR_FROM_JSON(TotalOffSiteLggedInTime, totalOffSiteLggedInTime_);
      DARABONBA_PTR_FROM_JSON(TotalOfficePhoneLoggedInTime, totalOfficePhoneLoggedInTime_);
      DARABONBA_PTR_FROM_JSON(TotalOnSiteLoggedInTime, totalOnSiteLoggedInTime_);
      DARABONBA_PTR_FROM_JSON(TotalOutboundScenarioLoggedInTime, totalOutboundScenarioLoggedInTime_);
      DARABONBA_PTR_FROM_JSON(TotalOutboundScenarioReadyTime, totalOutboundScenarioReadyTime_);
      DARABONBA_PTR_FROM_JSON(TotalOutboundScenarioTime, totalOutboundScenarioTime_);
      DARABONBA_PTR_FROM_JSON(TotalReadyTime, totalReadyTime_);
      DARABONBA_PTR_FROM_JSON(TotalTalkTime, totalTalkTime_);
      DARABONBA_PTR_FROM_JSON(TotalWorkTime, totalWorkTime_);
    };
    ListHistoricalAgentSkillGroupReportResponseBodyDataListOverall() = default ;
    ListHistoricalAgentSkillGroupReportResponseBodyDataListOverall(const ListHistoricalAgentSkillGroupReportResponseBodyDataListOverall &) = default ;
    ListHistoricalAgentSkillGroupReportResponseBodyDataListOverall(ListHistoricalAgentSkillGroupReportResponseBodyDataListOverall &&) = default ;
    ListHistoricalAgentSkillGroupReportResponseBodyDataListOverall(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListHistoricalAgentSkillGroupReportResponseBodyDataListOverall() = default ;
    ListHistoricalAgentSkillGroupReportResponseBodyDataListOverall& operator=(const ListHistoricalAgentSkillGroupReportResponseBodyDataListOverall &) = default ;
    ListHistoricalAgentSkillGroupReportResponseBodyDataListOverall& operator=(ListHistoricalAgentSkillGroupReportResponseBodyDataListOverall &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->averageBreakTime_ == nullptr
        && return this->averageHoldTime_ == nullptr && return this->averageReadyTime_ == nullptr && return this->averageTalkTime_ == nullptr && return this->averageWorkTime_ == nullptr && return this->breakCodeDetailList_ == nullptr
        && return this->firstCheckInTime_ == nullptr && return this->lastCheckOutTime_ == nullptr && return this->maxBreakTime_ == nullptr && return this->maxHoldTime_ == nullptr && return this->maxReadyTime_ == nullptr
        && return this->maxTalkTime_ == nullptr && return this->maxWorkTime_ == nullptr && return this->occupancyRate_ == nullptr && return this->satisfactionIndex_ == nullptr && return this->satisfactionRate_ == nullptr
        && return this->satisfactionSurveysOffered_ == nullptr && return this->satisfactionSurveysResponded_ == nullptr && return this->totalBreakTime_ == nullptr && return this->totalCalls_ == nullptr && return this->totalHoldTime_ == nullptr
        && return this->totalLoggedInTime_ == nullptr && return this->totalOffSiteLggedInTime_ == nullptr && return this->totalOfficePhoneLoggedInTime_ == nullptr && return this->totalOnSiteLoggedInTime_ == nullptr && return this->totalOutboundScenarioLoggedInTime_ == nullptr
        && return this->totalOutboundScenarioReadyTime_ == nullptr && return this->totalOutboundScenarioTime_ == nullptr && return this->totalReadyTime_ == nullptr && return this->totalTalkTime_ == nullptr && return this->totalWorkTime_ == nullptr; };
    // averageBreakTime Field Functions 
    bool hasAverageBreakTime() const { return this->averageBreakTime_ != nullptr;};
    void deleteAverageBreakTime() { this->averageBreakTime_ = nullptr;};
    inline float averageBreakTime() const { DARABONBA_PTR_GET_DEFAULT(averageBreakTime_, 0.0) };
    inline ListHistoricalAgentSkillGroupReportResponseBodyDataListOverall& setAverageBreakTime(float averageBreakTime) { DARABONBA_PTR_SET_VALUE(averageBreakTime_, averageBreakTime) };


    // averageHoldTime Field Functions 
    bool hasAverageHoldTime() const { return this->averageHoldTime_ != nullptr;};
    void deleteAverageHoldTime() { this->averageHoldTime_ = nullptr;};
    inline float averageHoldTime() const { DARABONBA_PTR_GET_DEFAULT(averageHoldTime_, 0.0) };
    inline ListHistoricalAgentSkillGroupReportResponseBodyDataListOverall& setAverageHoldTime(float averageHoldTime) { DARABONBA_PTR_SET_VALUE(averageHoldTime_, averageHoldTime) };


    // averageReadyTime Field Functions 
    bool hasAverageReadyTime() const { return this->averageReadyTime_ != nullptr;};
    void deleteAverageReadyTime() { this->averageReadyTime_ = nullptr;};
    inline float averageReadyTime() const { DARABONBA_PTR_GET_DEFAULT(averageReadyTime_, 0.0) };
    inline ListHistoricalAgentSkillGroupReportResponseBodyDataListOverall& setAverageReadyTime(float averageReadyTime) { DARABONBA_PTR_SET_VALUE(averageReadyTime_, averageReadyTime) };


    // averageTalkTime Field Functions 
    bool hasAverageTalkTime() const { return this->averageTalkTime_ != nullptr;};
    void deleteAverageTalkTime() { this->averageTalkTime_ = nullptr;};
    inline float averageTalkTime() const { DARABONBA_PTR_GET_DEFAULT(averageTalkTime_, 0.0) };
    inline ListHistoricalAgentSkillGroupReportResponseBodyDataListOverall& setAverageTalkTime(float averageTalkTime) { DARABONBA_PTR_SET_VALUE(averageTalkTime_, averageTalkTime) };


    // averageWorkTime Field Functions 
    bool hasAverageWorkTime() const { return this->averageWorkTime_ != nullptr;};
    void deleteAverageWorkTime() { this->averageWorkTime_ = nullptr;};
    inline float averageWorkTime() const { DARABONBA_PTR_GET_DEFAULT(averageWorkTime_, 0.0) };
    inline ListHistoricalAgentSkillGroupReportResponseBodyDataListOverall& setAverageWorkTime(float averageWorkTime) { DARABONBA_PTR_SET_VALUE(averageWorkTime_, averageWorkTime) };


    // breakCodeDetailList Field Functions 
    bool hasBreakCodeDetailList() const { return this->breakCodeDetailList_ != nullptr;};
    void deleteBreakCodeDetailList() { this->breakCodeDetailList_ = nullptr;};
    inline const vector<Models::ListHistoricalAgentSkillGroupReportResponseBodyDataListOverallBreakCodeDetailList> & breakCodeDetailList() const { DARABONBA_PTR_GET_CONST(breakCodeDetailList_, vector<Models::ListHistoricalAgentSkillGroupReportResponseBodyDataListOverallBreakCodeDetailList>) };
    inline vector<Models::ListHistoricalAgentSkillGroupReportResponseBodyDataListOverallBreakCodeDetailList> breakCodeDetailList() { DARABONBA_PTR_GET(breakCodeDetailList_, vector<Models::ListHistoricalAgentSkillGroupReportResponseBodyDataListOverallBreakCodeDetailList>) };
    inline ListHistoricalAgentSkillGroupReportResponseBodyDataListOverall& setBreakCodeDetailList(const vector<Models::ListHistoricalAgentSkillGroupReportResponseBodyDataListOverallBreakCodeDetailList> & breakCodeDetailList) { DARABONBA_PTR_SET_VALUE(breakCodeDetailList_, breakCodeDetailList) };
    inline ListHistoricalAgentSkillGroupReportResponseBodyDataListOverall& setBreakCodeDetailList(vector<Models::ListHistoricalAgentSkillGroupReportResponseBodyDataListOverallBreakCodeDetailList> && breakCodeDetailList) { DARABONBA_PTR_SET_RVALUE(breakCodeDetailList_, breakCodeDetailList) };


    // firstCheckInTime Field Functions 
    bool hasFirstCheckInTime() const { return this->firstCheckInTime_ != nullptr;};
    void deleteFirstCheckInTime() { this->firstCheckInTime_ = nullptr;};
    inline int64_t firstCheckInTime() const { DARABONBA_PTR_GET_DEFAULT(firstCheckInTime_, 0L) };
    inline ListHistoricalAgentSkillGroupReportResponseBodyDataListOverall& setFirstCheckInTime(int64_t firstCheckInTime) { DARABONBA_PTR_SET_VALUE(firstCheckInTime_, firstCheckInTime) };


    // lastCheckOutTime Field Functions 
    bool hasLastCheckOutTime() const { return this->lastCheckOutTime_ != nullptr;};
    void deleteLastCheckOutTime() { this->lastCheckOutTime_ = nullptr;};
    inline int64_t lastCheckOutTime() const { DARABONBA_PTR_GET_DEFAULT(lastCheckOutTime_, 0L) };
    inline ListHistoricalAgentSkillGroupReportResponseBodyDataListOverall& setLastCheckOutTime(int64_t lastCheckOutTime) { DARABONBA_PTR_SET_VALUE(lastCheckOutTime_, lastCheckOutTime) };


    // maxBreakTime Field Functions 
    bool hasMaxBreakTime() const { return this->maxBreakTime_ != nullptr;};
    void deleteMaxBreakTime() { this->maxBreakTime_ = nullptr;};
    inline int64_t maxBreakTime() const { DARABONBA_PTR_GET_DEFAULT(maxBreakTime_, 0L) };
    inline ListHistoricalAgentSkillGroupReportResponseBodyDataListOverall& setMaxBreakTime(int64_t maxBreakTime) { DARABONBA_PTR_SET_VALUE(maxBreakTime_, maxBreakTime) };


    // maxHoldTime Field Functions 
    bool hasMaxHoldTime() const { return this->maxHoldTime_ != nullptr;};
    void deleteMaxHoldTime() { this->maxHoldTime_ = nullptr;};
    inline int64_t maxHoldTime() const { DARABONBA_PTR_GET_DEFAULT(maxHoldTime_, 0L) };
    inline ListHistoricalAgentSkillGroupReportResponseBodyDataListOverall& setMaxHoldTime(int64_t maxHoldTime) { DARABONBA_PTR_SET_VALUE(maxHoldTime_, maxHoldTime) };


    // maxReadyTime Field Functions 
    bool hasMaxReadyTime() const { return this->maxReadyTime_ != nullptr;};
    void deleteMaxReadyTime() { this->maxReadyTime_ = nullptr;};
    inline int64_t maxReadyTime() const { DARABONBA_PTR_GET_DEFAULT(maxReadyTime_, 0L) };
    inline ListHistoricalAgentSkillGroupReportResponseBodyDataListOverall& setMaxReadyTime(int64_t maxReadyTime) { DARABONBA_PTR_SET_VALUE(maxReadyTime_, maxReadyTime) };


    // maxTalkTime Field Functions 
    bool hasMaxTalkTime() const { return this->maxTalkTime_ != nullptr;};
    void deleteMaxTalkTime() { this->maxTalkTime_ = nullptr;};
    inline int64_t maxTalkTime() const { DARABONBA_PTR_GET_DEFAULT(maxTalkTime_, 0L) };
    inline ListHistoricalAgentSkillGroupReportResponseBodyDataListOverall& setMaxTalkTime(int64_t maxTalkTime) { DARABONBA_PTR_SET_VALUE(maxTalkTime_, maxTalkTime) };


    // maxWorkTime Field Functions 
    bool hasMaxWorkTime() const { return this->maxWorkTime_ != nullptr;};
    void deleteMaxWorkTime() { this->maxWorkTime_ = nullptr;};
    inline int64_t maxWorkTime() const { DARABONBA_PTR_GET_DEFAULT(maxWorkTime_, 0L) };
    inline ListHistoricalAgentSkillGroupReportResponseBodyDataListOverall& setMaxWorkTime(int64_t maxWorkTime) { DARABONBA_PTR_SET_VALUE(maxWorkTime_, maxWorkTime) };


    // occupancyRate Field Functions 
    bool hasOccupancyRate() const { return this->occupancyRate_ != nullptr;};
    void deleteOccupancyRate() { this->occupancyRate_ = nullptr;};
    inline float occupancyRate() const { DARABONBA_PTR_GET_DEFAULT(occupancyRate_, 0.0) };
    inline ListHistoricalAgentSkillGroupReportResponseBodyDataListOverall& setOccupancyRate(float occupancyRate) { DARABONBA_PTR_SET_VALUE(occupancyRate_, occupancyRate) };


    // satisfactionIndex Field Functions 
    bool hasSatisfactionIndex() const { return this->satisfactionIndex_ != nullptr;};
    void deleteSatisfactionIndex() { this->satisfactionIndex_ = nullptr;};
    inline float satisfactionIndex() const { DARABONBA_PTR_GET_DEFAULT(satisfactionIndex_, 0.0) };
    inline ListHistoricalAgentSkillGroupReportResponseBodyDataListOverall& setSatisfactionIndex(float satisfactionIndex) { DARABONBA_PTR_SET_VALUE(satisfactionIndex_, satisfactionIndex) };


    // satisfactionRate Field Functions 
    bool hasSatisfactionRate() const { return this->satisfactionRate_ != nullptr;};
    void deleteSatisfactionRate() { this->satisfactionRate_ = nullptr;};
    inline float satisfactionRate() const { DARABONBA_PTR_GET_DEFAULT(satisfactionRate_, 0.0) };
    inline ListHistoricalAgentSkillGroupReportResponseBodyDataListOverall& setSatisfactionRate(float satisfactionRate) { DARABONBA_PTR_SET_VALUE(satisfactionRate_, satisfactionRate) };


    // satisfactionSurveysOffered Field Functions 
    bool hasSatisfactionSurveysOffered() const { return this->satisfactionSurveysOffered_ != nullptr;};
    void deleteSatisfactionSurveysOffered() { this->satisfactionSurveysOffered_ = nullptr;};
    inline int64_t satisfactionSurveysOffered() const { DARABONBA_PTR_GET_DEFAULT(satisfactionSurveysOffered_, 0L) };
    inline ListHistoricalAgentSkillGroupReportResponseBodyDataListOverall& setSatisfactionSurveysOffered(int64_t satisfactionSurveysOffered) { DARABONBA_PTR_SET_VALUE(satisfactionSurveysOffered_, satisfactionSurveysOffered) };


    // satisfactionSurveysResponded Field Functions 
    bool hasSatisfactionSurveysResponded() const { return this->satisfactionSurveysResponded_ != nullptr;};
    void deleteSatisfactionSurveysResponded() { this->satisfactionSurveysResponded_ = nullptr;};
    inline int64_t satisfactionSurveysResponded() const { DARABONBA_PTR_GET_DEFAULT(satisfactionSurveysResponded_, 0L) };
    inline ListHistoricalAgentSkillGroupReportResponseBodyDataListOverall& setSatisfactionSurveysResponded(int64_t satisfactionSurveysResponded) { DARABONBA_PTR_SET_VALUE(satisfactionSurveysResponded_, satisfactionSurveysResponded) };


    // totalBreakTime Field Functions 
    bool hasTotalBreakTime() const { return this->totalBreakTime_ != nullptr;};
    void deleteTotalBreakTime() { this->totalBreakTime_ = nullptr;};
    inline int64_t totalBreakTime() const { DARABONBA_PTR_GET_DEFAULT(totalBreakTime_, 0L) };
    inline ListHistoricalAgentSkillGroupReportResponseBodyDataListOverall& setTotalBreakTime(int64_t totalBreakTime) { DARABONBA_PTR_SET_VALUE(totalBreakTime_, totalBreakTime) };


    // totalCalls Field Functions 
    bool hasTotalCalls() const { return this->totalCalls_ != nullptr;};
    void deleteTotalCalls() { this->totalCalls_ = nullptr;};
    inline int64_t totalCalls() const { DARABONBA_PTR_GET_DEFAULT(totalCalls_, 0L) };
    inline ListHistoricalAgentSkillGroupReportResponseBodyDataListOverall& setTotalCalls(int64_t totalCalls) { DARABONBA_PTR_SET_VALUE(totalCalls_, totalCalls) };


    // totalHoldTime Field Functions 
    bool hasTotalHoldTime() const { return this->totalHoldTime_ != nullptr;};
    void deleteTotalHoldTime() { this->totalHoldTime_ = nullptr;};
    inline int64_t totalHoldTime() const { DARABONBA_PTR_GET_DEFAULT(totalHoldTime_, 0L) };
    inline ListHistoricalAgentSkillGroupReportResponseBodyDataListOverall& setTotalHoldTime(int64_t totalHoldTime) { DARABONBA_PTR_SET_VALUE(totalHoldTime_, totalHoldTime) };


    // totalLoggedInTime Field Functions 
    bool hasTotalLoggedInTime() const { return this->totalLoggedInTime_ != nullptr;};
    void deleteTotalLoggedInTime() { this->totalLoggedInTime_ = nullptr;};
    inline int64_t totalLoggedInTime() const { DARABONBA_PTR_GET_DEFAULT(totalLoggedInTime_, 0L) };
    inline ListHistoricalAgentSkillGroupReportResponseBodyDataListOverall& setTotalLoggedInTime(int64_t totalLoggedInTime) { DARABONBA_PTR_SET_VALUE(totalLoggedInTime_, totalLoggedInTime) };


    // totalOffSiteLggedInTime Field Functions 
    bool hasTotalOffSiteLggedInTime() const { return this->totalOffSiteLggedInTime_ != nullptr;};
    void deleteTotalOffSiteLggedInTime() { this->totalOffSiteLggedInTime_ = nullptr;};
    inline int64_t totalOffSiteLggedInTime() const { DARABONBA_PTR_GET_DEFAULT(totalOffSiteLggedInTime_, 0L) };
    inline ListHistoricalAgentSkillGroupReportResponseBodyDataListOverall& setTotalOffSiteLggedInTime(int64_t totalOffSiteLggedInTime) { DARABONBA_PTR_SET_VALUE(totalOffSiteLggedInTime_, totalOffSiteLggedInTime) };


    // totalOfficePhoneLoggedInTime Field Functions 
    bool hasTotalOfficePhoneLoggedInTime() const { return this->totalOfficePhoneLoggedInTime_ != nullptr;};
    void deleteTotalOfficePhoneLoggedInTime() { this->totalOfficePhoneLoggedInTime_ = nullptr;};
    inline int64_t totalOfficePhoneLoggedInTime() const { DARABONBA_PTR_GET_DEFAULT(totalOfficePhoneLoggedInTime_, 0L) };
    inline ListHistoricalAgentSkillGroupReportResponseBodyDataListOverall& setTotalOfficePhoneLoggedInTime(int64_t totalOfficePhoneLoggedInTime) { DARABONBA_PTR_SET_VALUE(totalOfficePhoneLoggedInTime_, totalOfficePhoneLoggedInTime) };


    // totalOnSiteLoggedInTime Field Functions 
    bool hasTotalOnSiteLoggedInTime() const { return this->totalOnSiteLoggedInTime_ != nullptr;};
    void deleteTotalOnSiteLoggedInTime() { this->totalOnSiteLoggedInTime_ = nullptr;};
    inline string totalOnSiteLoggedInTime() const { DARABONBA_PTR_GET_DEFAULT(totalOnSiteLoggedInTime_, "") };
    inline ListHistoricalAgentSkillGroupReportResponseBodyDataListOverall& setTotalOnSiteLoggedInTime(string totalOnSiteLoggedInTime) { DARABONBA_PTR_SET_VALUE(totalOnSiteLoggedInTime_, totalOnSiteLoggedInTime) };


    // totalOutboundScenarioLoggedInTime Field Functions 
    bool hasTotalOutboundScenarioLoggedInTime() const { return this->totalOutboundScenarioLoggedInTime_ != nullptr;};
    void deleteTotalOutboundScenarioLoggedInTime() { this->totalOutboundScenarioLoggedInTime_ = nullptr;};
    inline int64_t totalOutboundScenarioLoggedInTime() const { DARABONBA_PTR_GET_DEFAULT(totalOutboundScenarioLoggedInTime_, 0L) };
    inline ListHistoricalAgentSkillGroupReportResponseBodyDataListOverall& setTotalOutboundScenarioLoggedInTime(int64_t totalOutboundScenarioLoggedInTime) { DARABONBA_PTR_SET_VALUE(totalOutboundScenarioLoggedInTime_, totalOutboundScenarioLoggedInTime) };


    // totalOutboundScenarioReadyTime Field Functions 
    bool hasTotalOutboundScenarioReadyTime() const { return this->totalOutboundScenarioReadyTime_ != nullptr;};
    void deleteTotalOutboundScenarioReadyTime() { this->totalOutboundScenarioReadyTime_ = nullptr;};
    inline int64_t totalOutboundScenarioReadyTime() const { DARABONBA_PTR_GET_DEFAULT(totalOutboundScenarioReadyTime_, 0L) };
    inline ListHistoricalAgentSkillGroupReportResponseBodyDataListOverall& setTotalOutboundScenarioReadyTime(int64_t totalOutboundScenarioReadyTime) { DARABONBA_PTR_SET_VALUE(totalOutboundScenarioReadyTime_, totalOutboundScenarioReadyTime) };


    // totalOutboundScenarioTime Field Functions 
    bool hasTotalOutboundScenarioTime() const { return this->totalOutboundScenarioTime_ != nullptr;};
    void deleteTotalOutboundScenarioTime() { this->totalOutboundScenarioTime_ = nullptr;};
    inline int64_t totalOutboundScenarioTime() const { DARABONBA_PTR_GET_DEFAULT(totalOutboundScenarioTime_, 0L) };
    inline ListHistoricalAgentSkillGroupReportResponseBodyDataListOverall& setTotalOutboundScenarioTime(int64_t totalOutboundScenarioTime) { DARABONBA_PTR_SET_VALUE(totalOutboundScenarioTime_, totalOutboundScenarioTime) };


    // totalReadyTime Field Functions 
    bool hasTotalReadyTime() const { return this->totalReadyTime_ != nullptr;};
    void deleteTotalReadyTime() { this->totalReadyTime_ = nullptr;};
    inline int64_t totalReadyTime() const { DARABONBA_PTR_GET_DEFAULT(totalReadyTime_, 0L) };
    inline ListHistoricalAgentSkillGroupReportResponseBodyDataListOverall& setTotalReadyTime(int64_t totalReadyTime) { DARABONBA_PTR_SET_VALUE(totalReadyTime_, totalReadyTime) };


    // totalTalkTime Field Functions 
    bool hasTotalTalkTime() const { return this->totalTalkTime_ != nullptr;};
    void deleteTotalTalkTime() { this->totalTalkTime_ = nullptr;};
    inline int64_t totalTalkTime() const { DARABONBA_PTR_GET_DEFAULT(totalTalkTime_, 0L) };
    inline ListHistoricalAgentSkillGroupReportResponseBodyDataListOverall& setTotalTalkTime(int64_t totalTalkTime) { DARABONBA_PTR_SET_VALUE(totalTalkTime_, totalTalkTime) };


    // totalWorkTime Field Functions 
    bool hasTotalWorkTime() const { return this->totalWorkTime_ != nullptr;};
    void deleteTotalWorkTime() { this->totalWorkTime_ = nullptr;};
    inline int64_t totalWorkTime() const { DARABONBA_PTR_GET_DEFAULT(totalWorkTime_, 0L) };
    inline ListHistoricalAgentSkillGroupReportResponseBodyDataListOverall& setTotalWorkTime(int64_t totalWorkTime) { DARABONBA_PTR_SET_VALUE(totalWorkTime_, totalWorkTime) };


  protected:
    std::shared_ptr<float> averageBreakTime_ = nullptr;
    std::shared_ptr<float> averageHoldTime_ = nullptr;
    std::shared_ptr<float> averageReadyTime_ = nullptr;
    std::shared_ptr<float> averageTalkTime_ = nullptr;
    std::shared_ptr<float> averageWorkTime_ = nullptr;
    std::shared_ptr<vector<Models::ListHistoricalAgentSkillGroupReportResponseBodyDataListOverallBreakCodeDetailList>> breakCodeDetailList_ = nullptr;
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
    std::shared_ptr<int64_t> totalOffSiteLggedInTime_ = nullptr;
    std::shared_ptr<int64_t> totalOfficePhoneLoggedInTime_ = nullptr;
    std::shared_ptr<string> totalOnSiteLoggedInTime_ = nullptr;
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
