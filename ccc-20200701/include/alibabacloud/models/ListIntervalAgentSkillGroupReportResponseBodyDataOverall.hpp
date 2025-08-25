// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINTERVALAGENTSKILLGROUPREPORTRESPONSEBODYDATAOVERALL_HPP_
#define ALIBABACLOUD_MODELS_LISTINTERVALAGENTSKILLGROUPREPORTRESPONSEBODYDATAOVERALL_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListIntervalAgentSkillGroupReportResponseBodyDataOverallBreakCodeDetailList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class ListIntervalAgentSkillGroupReportResponseBodyDataOverall : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListIntervalAgentSkillGroupReportResponseBodyDataOverall& obj) { 
      DARABONBA_PTR_TO_JSON(AverageBreakTime, averageBreakTime_);
      DARABONBA_PTR_TO_JSON(AverageHoldTime, averageHoldTime_);
      DARABONBA_PTR_TO_JSON(AverageReadyTime, averageReadyTime_);
      DARABONBA_PTR_TO_JSON(AverageTalkTime, averageTalkTime_);
      DARABONBA_PTR_TO_JSON(AverageWorkTime, averageWorkTime_);
      DARABONBA_PTR_TO_JSON(BreakCodeDetailList, breakCodeDetailList_);
      DARABONBA_PTR_TO_JSON(FirstCheckInTime, firstCheckInTime_);
      DARABONBA_PTR_TO_JSON(LastCheckOutTime, lastCheckOutTime_);
      DARABONBA_PTR_TO_JSON(LastCheckoutTime, lastCheckoutTime_);
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
      DARABONBA_PTR_TO_JSON(TotalOfficePhoneLoggedInTime, totalOfficePhoneLoggedInTime_);
      DARABONBA_PTR_TO_JSON(TotalOnSiteLoggedInTime, totalOnSiteLoggedInTime_);
      DARABONBA_PTR_TO_JSON(TotalOutboundScenarioLoggedInTime, totalOutboundScenarioLoggedInTime_);
      DARABONBA_PTR_TO_JSON(TotalOutboundScenarioReadyTime, totalOutboundScenarioReadyTime_);
      DARABONBA_PTR_TO_JSON(TotalOutboundScenarioTime, totalOutboundScenarioTime_);
      DARABONBA_PTR_TO_JSON(TotalReadyTime, totalReadyTime_);
      DARABONBA_PTR_TO_JSON(TotalTalkTime, totalTalkTime_);
      DARABONBA_PTR_TO_JSON(TotalWorkTime, totalWorkTime_);
    };
    friend void from_json(const Darabonba::Json& j, ListIntervalAgentSkillGroupReportResponseBodyDataOverall& obj) { 
      DARABONBA_PTR_FROM_JSON(AverageBreakTime, averageBreakTime_);
      DARABONBA_PTR_FROM_JSON(AverageHoldTime, averageHoldTime_);
      DARABONBA_PTR_FROM_JSON(AverageReadyTime, averageReadyTime_);
      DARABONBA_PTR_FROM_JSON(AverageTalkTime, averageTalkTime_);
      DARABONBA_PTR_FROM_JSON(AverageWorkTime, averageWorkTime_);
      DARABONBA_PTR_FROM_JSON(BreakCodeDetailList, breakCodeDetailList_);
      DARABONBA_PTR_FROM_JSON(FirstCheckInTime, firstCheckInTime_);
      DARABONBA_PTR_FROM_JSON(LastCheckOutTime, lastCheckOutTime_);
      DARABONBA_PTR_FROM_JSON(LastCheckoutTime, lastCheckoutTime_);
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
      DARABONBA_PTR_FROM_JSON(TotalOfficePhoneLoggedInTime, totalOfficePhoneLoggedInTime_);
      DARABONBA_PTR_FROM_JSON(TotalOnSiteLoggedInTime, totalOnSiteLoggedInTime_);
      DARABONBA_PTR_FROM_JSON(TotalOutboundScenarioLoggedInTime, totalOutboundScenarioLoggedInTime_);
      DARABONBA_PTR_FROM_JSON(TotalOutboundScenarioReadyTime, totalOutboundScenarioReadyTime_);
      DARABONBA_PTR_FROM_JSON(TotalOutboundScenarioTime, totalOutboundScenarioTime_);
      DARABONBA_PTR_FROM_JSON(TotalReadyTime, totalReadyTime_);
      DARABONBA_PTR_FROM_JSON(TotalTalkTime, totalTalkTime_);
      DARABONBA_PTR_FROM_JSON(TotalWorkTime, totalWorkTime_);
    };
    ListIntervalAgentSkillGroupReportResponseBodyDataOverall() = default ;
    ListIntervalAgentSkillGroupReportResponseBodyDataOverall(const ListIntervalAgentSkillGroupReportResponseBodyDataOverall &) = default ;
    ListIntervalAgentSkillGroupReportResponseBodyDataOverall(ListIntervalAgentSkillGroupReportResponseBodyDataOverall &&) = default ;
    ListIntervalAgentSkillGroupReportResponseBodyDataOverall(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListIntervalAgentSkillGroupReportResponseBodyDataOverall() = default ;
    ListIntervalAgentSkillGroupReportResponseBodyDataOverall& operator=(const ListIntervalAgentSkillGroupReportResponseBodyDataOverall &) = default ;
    ListIntervalAgentSkillGroupReportResponseBodyDataOverall& operator=(ListIntervalAgentSkillGroupReportResponseBodyDataOverall &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->averageBreakTime_ != nullptr
        && this->averageHoldTime_ != nullptr && this->averageReadyTime_ != nullptr && this->averageTalkTime_ != nullptr && this->averageWorkTime_ != nullptr && this->breakCodeDetailList_ != nullptr
        && this->firstCheckInTime_ != nullptr && this->lastCheckOutTime_ != nullptr && this->lastCheckoutTime_ != nullptr && this->maxBreakTime_ != nullptr && this->maxHoldTime_ != nullptr
        && this->maxReadyTime_ != nullptr && this->maxTalkTime_ != nullptr && this->maxWorkTime_ != nullptr && this->occupancyRate_ != nullptr && this->satisfactionIndex_ != nullptr
        && this->satisfactionRate_ != nullptr && this->satisfactionSurveysOffered_ != nullptr && this->satisfactionSurveysResponded_ != nullptr && this->totalBreakTime_ != nullptr && this->totalCalls_ != nullptr
        && this->totalHoldTime_ != nullptr && this->totalLoggedInTime_ != nullptr && this->totalOffSiteLoggedInTime_ != nullptr && this->totalOfficePhoneLoggedInTime_ != nullptr && this->totalOnSiteLoggedInTime_ != nullptr
        && this->totalOutboundScenarioLoggedInTime_ != nullptr && this->totalOutboundScenarioReadyTime_ != nullptr && this->totalOutboundScenarioTime_ != nullptr && this->totalReadyTime_ != nullptr && this->totalTalkTime_ != nullptr
        && this->totalWorkTime_ != nullptr; };
    // averageBreakTime Field Functions 
    bool hasAverageBreakTime() const { return this->averageBreakTime_ != nullptr;};
    void deleteAverageBreakTime() { this->averageBreakTime_ = nullptr;};
    inline float averageBreakTime() const { DARABONBA_PTR_GET_DEFAULT(averageBreakTime_, 0.0) };
    inline ListIntervalAgentSkillGroupReportResponseBodyDataOverall& setAverageBreakTime(float averageBreakTime) { DARABONBA_PTR_SET_VALUE(averageBreakTime_, averageBreakTime) };


    // averageHoldTime Field Functions 
    bool hasAverageHoldTime() const { return this->averageHoldTime_ != nullptr;};
    void deleteAverageHoldTime() { this->averageHoldTime_ = nullptr;};
    inline float averageHoldTime() const { DARABONBA_PTR_GET_DEFAULT(averageHoldTime_, 0.0) };
    inline ListIntervalAgentSkillGroupReportResponseBodyDataOverall& setAverageHoldTime(float averageHoldTime) { DARABONBA_PTR_SET_VALUE(averageHoldTime_, averageHoldTime) };


    // averageReadyTime Field Functions 
    bool hasAverageReadyTime() const { return this->averageReadyTime_ != nullptr;};
    void deleteAverageReadyTime() { this->averageReadyTime_ = nullptr;};
    inline float averageReadyTime() const { DARABONBA_PTR_GET_DEFAULT(averageReadyTime_, 0.0) };
    inline ListIntervalAgentSkillGroupReportResponseBodyDataOverall& setAverageReadyTime(float averageReadyTime) { DARABONBA_PTR_SET_VALUE(averageReadyTime_, averageReadyTime) };


    // averageTalkTime Field Functions 
    bool hasAverageTalkTime() const { return this->averageTalkTime_ != nullptr;};
    void deleteAverageTalkTime() { this->averageTalkTime_ = nullptr;};
    inline float averageTalkTime() const { DARABONBA_PTR_GET_DEFAULT(averageTalkTime_, 0.0) };
    inline ListIntervalAgentSkillGroupReportResponseBodyDataOverall& setAverageTalkTime(float averageTalkTime) { DARABONBA_PTR_SET_VALUE(averageTalkTime_, averageTalkTime) };


    // averageWorkTime Field Functions 
    bool hasAverageWorkTime() const { return this->averageWorkTime_ != nullptr;};
    void deleteAverageWorkTime() { this->averageWorkTime_ = nullptr;};
    inline float averageWorkTime() const { DARABONBA_PTR_GET_DEFAULT(averageWorkTime_, 0.0) };
    inline ListIntervalAgentSkillGroupReportResponseBodyDataOverall& setAverageWorkTime(float averageWorkTime) { DARABONBA_PTR_SET_VALUE(averageWorkTime_, averageWorkTime) };


    // breakCodeDetailList Field Functions 
    bool hasBreakCodeDetailList() const { return this->breakCodeDetailList_ != nullptr;};
    void deleteBreakCodeDetailList() { this->breakCodeDetailList_ = nullptr;};
    inline const vector<Models::ListIntervalAgentSkillGroupReportResponseBodyDataOverallBreakCodeDetailList> & breakCodeDetailList() const { DARABONBA_PTR_GET_CONST(breakCodeDetailList_, vector<Models::ListIntervalAgentSkillGroupReportResponseBodyDataOverallBreakCodeDetailList>) };
    inline vector<Models::ListIntervalAgentSkillGroupReportResponseBodyDataOverallBreakCodeDetailList> breakCodeDetailList() { DARABONBA_PTR_GET(breakCodeDetailList_, vector<Models::ListIntervalAgentSkillGroupReportResponseBodyDataOverallBreakCodeDetailList>) };
    inline ListIntervalAgentSkillGroupReportResponseBodyDataOverall& setBreakCodeDetailList(const vector<Models::ListIntervalAgentSkillGroupReportResponseBodyDataOverallBreakCodeDetailList> & breakCodeDetailList) { DARABONBA_PTR_SET_VALUE(breakCodeDetailList_, breakCodeDetailList) };
    inline ListIntervalAgentSkillGroupReportResponseBodyDataOverall& setBreakCodeDetailList(vector<Models::ListIntervalAgentSkillGroupReportResponseBodyDataOverallBreakCodeDetailList> && breakCodeDetailList) { DARABONBA_PTR_SET_RVALUE(breakCodeDetailList_, breakCodeDetailList) };


    // firstCheckInTime Field Functions 
    bool hasFirstCheckInTime() const { return this->firstCheckInTime_ != nullptr;};
    void deleteFirstCheckInTime() { this->firstCheckInTime_ = nullptr;};
    inline int64_t firstCheckInTime() const { DARABONBA_PTR_GET_DEFAULT(firstCheckInTime_, 0L) };
    inline ListIntervalAgentSkillGroupReportResponseBodyDataOverall& setFirstCheckInTime(int64_t firstCheckInTime) { DARABONBA_PTR_SET_VALUE(firstCheckInTime_, firstCheckInTime) };


    // lastCheckOutTime Field Functions 
    bool hasLastCheckOutTime() const { return this->lastCheckOutTime_ != nullptr;};
    void deleteLastCheckOutTime() { this->lastCheckOutTime_ = nullptr;};
    inline int64_t lastCheckOutTime() const { DARABONBA_PTR_GET_DEFAULT(lastCheckOutTime_, 0L) };
    inline ListIntervalAgentSkillGroupReportResponseBodyDataOverall& setLastCheckOutTime(int64_t lastCheckOutTime) { DARABONBA_PTR_SET_VALUE(lastCheckOutTime_, lastCheckOutTime) };


    // lastCheckoutTime Field Functions 
    bool hasLastCheckoutTime() const { return this->lastCheckoutTime_ != nullptr;};
    void deleteLastCheckoutTime() { this->lastCheckoutTime_ = nullptr;};
    inline int64_t lastCheckoutTime() const { DARABONBA_PTR_GET_DEFAULT(lastCheckoutTime_, 0L) };
    inline ListIntervalAgentSkillGroupReportResponseBodyDataOverall& setLastCheckoutTime(int64_t lastCheckoutTime) { DARABONBA_PTR_SET_VALUE(lastCheckoutTime_, lastCheckoutTime) };


    // maxBreakTime Field Functions 
    bool hasMaxBreakTime() const { return this->maxBreakTime_ != nullptr;};
    void deleteMaxBreakTime() { this->maxBreakTime_ = nullptr;};
    inline int64_t maxBreakTime() const { DARABONBA_PTR_GET_DEFAULT(maxBreakTime_, 0L) };
    inline ListIntervalAgentSkillGroupReportResponseBodyDataOverall& setMaxBreakTime(int64_t maxBreakTime) { DARABONBA_PTR_SET_VALUE(maxBreakTime_, maxBreakTime) };


    // maxHoldTime Field Functions 
    bool hasMaxHoldTime() const { return this->maxHoldTime_ != nullptr;};
    void deleteMaxHoldTime() { this->maxHoldTime_ = nullptr;};
    inline int64_t maxHoldTime() const { DARABONBA_PTR_GET_DEFAULT(maxHoldTime_, 0L) };
    inline ListIntervalAgentSkillGroupReportResponseBodyDataOverall& setMaxHoldTime(int64_t maxHoldTime) { DARABONBA_PTR_SET_VALUE(maxHoldTime_, maxHoldTime) };


    // maxReadyTime Field Functions 
    bool hasMaxReadyTime() const { return this->maxReadyTime_ != nullptr;};
    void deleteMaxReadyTime() { this->maxReadyTime_ = nullptr;};
    inline int64_t maxReadyTime() const { DARABONBA_PTR_GET_DEFAULT(maxReadyTime_, 0L) };
    inline ListIntervalAgentSkillGroupReportResponseBodyDataOverall& setMaxReadyTime(int64_t maxReadyTime) { DARABONBA_PTR_SET_VALUE(maxReadyTime_, maxReadyTime) };


    // maxTalkTime Field Functions 
    bool hasMaxTalkTime() const { return this->maxTalkTime_ != nullptr;};
    void deleteMaxTalkTime() { this->maxTalkTime_ = nullptr;};
    inline int64_t maxTalkTime() const { DARABONBA_PTR_GET_DEFAULT(maxTalkTime_, 0L) };
    inline ListIntervalAgentSkillGroupReportResponseBodyDataOverall& setMaxTalkTime(int64_t maxTalkTime) { DARABONBA_PTR_SET_VALUE(maxTalkTime_, maxTalkTime) };


    // maxWorkTime Field Functions 
    bool hasMaxWorkTime() const { return this->maxWorkTime_ != nullptr;};
    void deleteMaxWorkTime() { this->maxWorkTime_ = nullptr;};
    inline int64_t maxWorkTime() const { DARABONBA_PTR_GET_DEFAULT(maxWorkTime_, 0L) };
    inline ListIntervalAgentSkillGroupReportResponseBodyDataOverall& setMaxWorkTime(int64_t maxWorkTime) { DARABONBA_PTR_SET_VALUE(maxWorkTime_, maxWorkTime) };


    // occupancyRate Field Functions 
    bool hasOccupancyRate() const { return this->occupancyRate_ != nullptr;};
    void deleteOccupancyRate() { this->occupancyRate_ = nullptr;};
    inline float occupancyRate() const { DARABONBA_PTR_GET_DEFAULT(occupancyRate_, 0.0) };
    inline ListIntervalAgentSkillGroupReportResponseBodyDataOverall& setOccupancyRate(float occupancyRate) { DARABONBA_PTR_SET_VALUE(occupancyRate_, occupancyRate) };


    // satisfactionIndex Field Functions 
    bool hasSatisfactionIndex() const { return this->satisfactionIndex_ != nullptr;};
    void deleteSatisfactionIndex() { this->satisfactionIndex_ = nullptr;};
    inline float satisfactionIndex() const { DARABONBA_PTR_GET_DEFAULT(satisfactionIndex_, 0.0) };
    inline ListIntervalAgentSkillGroupReportResponseBodyDataOverall& setSatisfactionIndex(float satisfactionIndex) { DARABONBA_PTR_SET_VALUE(satisfactionIndex_, satisfactionIndex) };


    // satisfactionRate Field Functions 
    bool hasSatisfactionRate() const { return this->satisfactionRate_ != nullptr;};
    void deleteSatisfactionRate() { this->satisfactionRate_ = nullptr;};
    inline float satisfactionRate() const { DARABONBA_PTR_GET_DEFAULT(satisfactionRate_, 0.0) };
    inline ListIntervalAgentSkillGroupReportResponseBodyDataOverall& setSatisfactionRate(float satisfactionRate) { DARABONBA_PTR_SET_VALUE(satisfactionRate_, satisfactionRate) };


    // satisfactionSurveysOffered Field Functions 
    bool hasSatisfactionSurveysOffered() const { return this->satisfactionSurveysOffered_ != nullptr;};
    void deleteSatisfactionSurveysOffered() { this->satisfactionSurveysOffered_ = nullptr;};
    inline int64_t satisfactionSurveysOffered() const { DARABONBA_PTR_GET_DEFAULT(satisfactionSurveysOffered_, 0L) };
    inline ListIntervalAgentSkillGroupReportResponseBodyDataOverall& setSatisfactionSurveysOffered(int64_t satisfactionSurveysOffered) { DARABONBA_PTR_SET_VALUE(satisfactionSurveysOffered_, satisfactionSurveysOffered) };


    // satisfactionSurveysResponded Field Functions 
    bool hasSatisfactionSurveysResponded() const { return this->satisfactionSurveysResponded_ != nullptr;};
    void deleteSatisfactionSurveysResponded() { this->satisfactionSurveysResponded_ = nullptr;};
    inline int64_t satisfactionSurveysResponded() const { DARABONBA_PTR_GET_DEFAULT(satisfactionSurveysResponded_, 0L) };
    inline ListIntervalAgentSkillGroupReportResponseBodyDataOverall& setSatisfactionSurveysResponded(int64_t satisfactionSurveysResponded) { DARABONBA_PTR_SET_VALUE(satisfactionSurveysResponded_, satisfactionSurveysResponded) };


    // totalBreakTime Field Functions 
    bool hasTotalBreakTime() const { return this->totalBreakTime_ != nullptr;};
    void deleteTotalBreakTime() { this->totalBreakTime_ = nullptr;};
    inline int64_t totalBreakTime() const { DARABONBA_PTR_GET_DEFAULT(totalBreakTime_, 0L) };
    inline ListIntervalAgentSkillGroupReportResponseBodyDataOverall& setTotalBreakTime(int64_t totalBreakTime) { DARABONBA_PTR_SET_VALUE(totalBreakTime_, totalBreakTime) };


    // totalCalls Field Functions 
    bool hasTotalCalls() const { return this->totalCalls_ != nullptr;};
    void deleteTotalCalls() { this->totalCalls_ = nullptr;};
    inline int64_t totalCalls() const { DARABONBA_PTR_GET_DEFAULT(totalCalls_, 0L) };
    inline ListIntervalAgentSkillGroupReportResponseBodyDataOverall& setTotalCalls(int64_t totalCalls) { DARABONBA_PTR_SET_VALUE(totalCalls_, totalCalls) };


    // totalHoldTime Field Functions 
    bool hasTotalHoldTime() const { return this->totalHoldTime_ != nullptr;};
    void deleteTotalHoldTime() { this->totalHoldTime_ = nullptr;};
    inline int64_t totalHoldTime() const { DARABONBA_PTR_GET_DEFAULT(totalHoldTime_, 0L) };
    inline ListIntervalAgentSkillGroupReportResponseBodyDataOverall& setTotalHoldTime(int64_t totalHoldTime) { DARABONBA_PTR_SET_VALUE(totalHoldTime_, totalHoldTime) };


    // totalLoggedInTime Field Functions 
    bool hasTotalLoggedInTime() const { return this->totalLoggedInTime_ != nullptr;};
    void deleteTotalLoggedInTime() { this->totalLoggedInTime_ = nullptr;};
    inline int64_t totalLoggedInTime() const { DARABONBA_PTR_GET_DEFAULT(totalLoggedInTime_, 0L) };
    inline ListIntervalAgentSkillGroupReportResponseBodyDataOverall& setTotalLoggedInTime(int64_t totalLoggedInTime) { DARABONBA_PTR_SET_VALUE(totalLoggedInTime_, totalLoggedInTime) };


    // totalOffSiteLoggedInTime Field Functions 
    bool hasTotalOffSiteLoggedInTime() const { return this->totalOffSiteLoggedInTime_ != nullptr;};
    void deleteTotalOffSiteLoggedInTime() { this->totalOffSiteLoggedInTime_ = nullptr;};
    inline string totalOffSiteLoggedInTime() const { DARABONBA_PTR_GET_DEFAULT(totalOffSiteLoggedInTime_, "") };
    inline ListIntervalAgentSkillGroupReportResponseBodyDataOverall& setTotalOffSiteLoggedInTime(string totalOffSiteLoggedInTime) { DARABONBA_PTR_SET_VALUE(totalOffSiteLoggedInTime_, totalOffSiteLoggedInTime) };


    // totalOfficePhoneLoggedInTime Field Functions 
    bool hasTotalOfficePhoneLoggedInTime() const { return this->totalOfficePhoneLoggedInTime_ != nullptr;};
    void deleteTotalOfficePhoneLoggedInTime() { this->totalOfficePhoneLoggedInTime_ = nullptr;};
    inline string totalOfficePhoneLoggedInTime() const { DARABONBA_PTR_GET_DEFAULT(totalOfficePhoneLoggedInTime_, "") };
    inline ListIntervalAgentSkillGroupReportResponseBodyDataOverall& setTotalOfficePhoneLoggedInTime(string totalOfficePhoneLoggedInTime) { DARABONBA_PTR_SET_VALUE(totalOfficePhoneLoggedInTime_, totalOfficePhoneLoggedInTime) };


    // totalOnSiteLoggedInTime Field Functions 
    bool hasTotalOnSiteLoggedInTime() const { return this->totalOnSiteLoggedInTime_ != nullptr;};
    void deleteTotalOnSiteLoggedInTime() { this->totalOnSiteLoggedInTime_ = nullptr;};
    inline string totalOnSiteLoggedInTime() const { DARABONBA_PTR_GET_DEFAULT(totalOnSiteLoggedInTime_, "") };
    inline ListIntervalAgentSkillGroupReportResponseBodyDataOverall& setTotalOnSiteLoggedInTime(string totalOnSiteLoggedInTime) { DARABONBA_PTR_SET_VALUE(totalOnSiteLoggedInTime_, totalOnSiteLoggedInTime) };


    // totalOutboundScenarioLoggedInTime Field Functions 
    bool hasTotalOutboundScenarioLoggedInTime() const { return this->totalOutboundScenarioLoggedInTime_ != nullptr;};
    void deleteTotalOutboundScenarioLoggedInTime() { this->totalOutboundScenarioLoggedInTime_ = nullptr;};
    inline int64_t totalOutboundScenarioLoggedInTime() const { DARABONBA_PTR_GET_DEFAULT(totalOutboundScenarioLoggedInTime_, 0L) };
    inline ListIntervalAgentSkillGroupReportResponseBodyDataOverall& setTotalOutboundScenarioLoggedInTime(int64_t totalOutboundScenarioLoggedInTime) { DARABONBA_PTR_SET_VALUE(totalOutboundScenarioLoggedInTime_, totalOutboundScenarioLoggedInTime) };


    // totalOutboundScenarioReadyTime Field Functions 
    bool hasTotalOutboundScenarioReadyTime() const { return this->totalOutboundScenarioReadyTime_ != nullptr;};
    void deleteTotalOutboundScenarioReadyTime() { this->totalOutboundScenarioReadyTime_ = nullptr;};
    inline int64_t totalOutboundScenarioReadyTime() const { DARABONBA_PTR_GET_DEFAULT(totalOutboundScenarioReadyTime_, 0L) };
    inline ListIntervalAgentSkillGroupReportResponseBodyDataOverall& setTotalOutboundScenarioReadyTime(int64_t totalOutboundScenarioReadyTime) { DARABONBA_PTR_SET_VALUE(totalOutboundScenarioReadyTime_, totalOutboundScenarioReadyTime) };


    // totalOutboundScenarioTime Field Functions 
    bool hasTotalOutboundScenarioTime() const { return this->totalOutboundScenarioTime_ != nullptr;};
    void deleteTotalOutboundScenarioTime() { this->totalOutboundScenarioTime_ = nullptr;};
    inline int64_t totalOutboundScenarioTime() const { DARABONBA_PTR_GET_DEFAULT(totalOutboundScenarioTime_, 0L) };
    inline ListIntervalAgentSkillGroupReportResponseBodyDataOverall& setTotalOutboundScenarioTime(int64_t totalOutboundScenarioTime) { DARABONBA_PTR_SET_VALUE(totalOutboundScenarioTime_, totalOutboundScenarioTime) };


    // totalReadyTime Field Functions 
    bool hasTotalReadyTime() const { return this->totalReadyTime_ != nullptr;};
    void deleteTotalReadyTime() { this->totalReadyTime_ = nullptr;};
    inline int64_t totalReadyTime() const { DARABONBA_PTR_GET_DEFAULT(totalReadyTime_, 0L) };
    inline ListIntervalAgentSkillGroupReportResponseBodyDataOverall& setTotalReadyTime(int64_t totalReadyTime) { DARABONBA_PTR_SET_VALUE(totalReadyTime_, totalReadyTime) };


    // totalTalkTime Field Functions 
    bool hasTotalTalkTime() const { return this->totalTalkTime_ != nullptr;};
    void deleteTotalTalkTime() { this->totalTalkTime_ = nullptr;};
    inline int64_t totalTalkTime() const { DARABONBA_PTR_GET_DEFAULT(totalTalkTime_, 0L) };
    inline ListIntervalAgentSkillGroupReportResponseBodyDataOverall& setTotalTalkTime(int64_t totalTalkTime) { DARABONBA_PTR_SET_VALUE(totalTalkTime_, totalTalkTime) };


    // totalWorkTime Field Functions 
    bool hasTotalWorkTime() const { return this->totalWorkTime_ != nullptr;};
    void deleteTotalWorkTime() { this->totalWorkTime_ = nullptr;};
    inline int64_t totalWorkTime() const { DARABONBA_PTR_GET_DEFAULT(totalWorkTime_, 0L) };
    inline ListIntervalAgentSkillGroupReportResponseBodyDataOverall& setTotalWorkTime(int64_t totalWorkTime) { DARABONBA_PTR_SET_VALUE(totalWorkTime_, totalWorkTime) };


  protected:
    std::shared_ptr<float> averageBreakTime_ = nullptr;
    std::shared_ptr<float> averageHoldTime_ = nullptr;
    std::shared_ptr<float> averageReadyTime_ = nullptr;
    std::shared_ptr<float> averageTalkTime_ = nullptr;
    std::shared_ptr<float> averageWorkTime_ = nullptr;
    std::shared_ptr<vector<Models::ListIntervalAgentSkillGroupReportResponseBodyDataOverallBreakCodeDetailList>> breakCodeDetailList_ = nullptr;
    std::shared_ptr<int64_t> firstCheckInTime_ = nullptr;
    std::shared_ptr<int64_t> lastCheckOutTime_ = nullptr;
    std::shared_ptr<int64_t> lastCheckoutTime_ = nullptr;
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
    std::shared_ptr<string> totalOffSiteLoggedInTime_ = nullptr;
    std::shared_ptr<string> totalOfficePhoneLoggedInTime_ = nullptr;
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
