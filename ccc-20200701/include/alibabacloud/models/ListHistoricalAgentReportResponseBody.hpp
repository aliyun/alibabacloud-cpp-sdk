// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTHISTORICALAGENTREPORTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTHISTORICALAGENTREPORTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class ListHistoricalAgentReportResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListHistoricalAgentReportResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListHistoricalAgentReportResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListHistoricalAgentReportResponseBody() = default ;
    ListHistoricalAgentReportResponseBody(const ListHistoricalAgentReportResponseBody &) = default ;
    ListHistoricalAgentReportResponseBody(ListHistoricalAgentReportResponseBody &&) = default ;
    ListHistoricalAgentReportResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListHistoricalAgentReportResponseBody() = default ;
    ListHistoricalAgentReportResponseBody& operator=(const ListHistoricalAgentReportResponseBody &) = default ;
    ListHistoricalAgentReportResponseBody& operator=(ListHistoricalAgentReportResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(List, list_);
        DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(List, list_);
        DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class List : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const List& obj) { 
          DARABONBA_PTR_TO_JSON(AgentId, agentId_);
          DARABONBA_PTR_TO_JSON(AgentName, agentName_);
          DARABONBA_PTR_TO_JSON(Back2Back, back2Back_);
          DARABONBA_PTR_TO_JSON(DisplayId, displayId_);
          DARABONBA_PTR_TO_JSON(Inbound, inbound_);
          DARABONBA_PTR_TO_JSON(Internal, internal_);
          DARABONBA_PTR_TO_JSON(Outbound, outbound_);
          DARABONBA_PTR_TO_JSON(Overall, overall_);
          DARABONBA_PTR_TO_JSON(SkillGroupIds, skillGroupIds_);
          DARABONBA_PTR_TO_JSON(SkillGroupNames, skillGroupNames_);
        };
        friend void from_json(const Darabonba::Json& j, List& obj) { 
          DARABONBA_PTR_FROM_JSON(AgentId, agentId_);
          DARABONBA_PTR_FROM_JSON(AgentName, agentName_);
          DARABONBA_PTR_FROM_JSON(Back2Back, back2Back_);
          DARABONBA_PTR_FROM_JSON(DisplayId, displayId_);
          DARABONBA_PTR_FROM_JSON(Inbound, inbound_);
          DARABONBA_PTR_FROM_JSON(Internal, internal_);
          DARABONBA_PTR_FROM_JSON(Outbound, outbound_);
          DARABONBA_PTR_FROM_JSON(Overall, overall_);
          DARABONBA_PTR_FROM_JSON(SkillGroupIds, skillGroupIds_);
          DARABONBA_PTR_FROM_JSON(SkillGroupNames, skillGroupNames_);
        };
        List() = default ;
        List(const List &) = default ;
        List(List &&) = default ;
        List(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~List() = default ;
        List& operator=(const List &) = default ;
        List& operator=(List &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Overall : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Overall& obj) { 
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
          friend void from_json(const Darabonba::Json& j, Overall& obj) { 
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
          Overall() = default ;
          Overall(const Overall &) = default ;
          Overall(Overall &&) = default ;
          Overall(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Overall() = default ;
          Overall& operator=(const Overall &) = default ;
          Overall& operator=(Overall &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class BreakCodeDetailList : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const BreakCodeDetailList& obj) { 
              DARABONBA_PTR_TO_JSON(BreakCode, breakCode_);
              DARABONBA_PTR_TO_JSON(Count, count_);
              DARABONBA_PTR_TO_JSON(Duration, duration_);
            };
            friend void from_json(const Darabonba::Json& j, BreakCodeDetailList& obj) { 
              DARABONBA_PTR_FROM_JSON(BreakCode, breakCode_);
              DARABONBA_PTR_FROM_JSON(Count, count_);
              DARABONBA_PTR_FROM_JSON(Duration, duration_);
            };
            BreakCodeDetailList() = default ;
            BreakCodeDetailList(const BreakCodeDetailList &) = default ;
            BreakCodeDetailList(BreakCodeDetailList &&) = default ;
            BreakCodeDetailList(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~BreakCodeDetailList() = default ;
            BreakCodeDetailList& operator=(const BreakCodeDetailList &) = default ;
            BreakCodeDetailList& operator=(BreakCodeDetailList &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->breakCode_ == nullptr
        && this->count_ == nullptr && this->duration_ == nullptr; };
            // breakCode Field Functions 
            bool hasBreakCode() const { return this->breakCode_ != nullptr;};
            void deleteBreakCode() { this->breakCode_ = nullptr;};
            inline string getBreakCode() const { DARABONBA_PTR_GET_DEFAULT(breakCode_, "") };
            inline BreakCodeDetailList& setBreakCode(string breakCode) { DARABONBA_PTR_SET_VALUE(breakCode_, breakCode) };


            // count Field Functions 
            bool hasCount() const { return this->count_ != nullptr;};
            void deleteCount() { this->count_ = nullptr;};
            inline int64_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
            inline BreakCodeDetailList& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


            // duration Field Functions 
            bool hasDuration() const { return this->duration_ != nullptr;};
            void deleteDuration() { this->duration_ = nullptr;};
            inline int64_t getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0L) };
            inline BreakCodeDetailList& setDuration(int64_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


          protected:
            // The break type code.
            shared_ptr<string> breakCode_ {};
            // The number of occurrences of this break type.
            shared_ptr<int64_t> count_ {};
            // The total duration of this break type. Unit: seconds.
            shared_ptr<int64_t> duration_ {};
          };

          virtual bool empty() const override { return this->averageBreakTime_ == nullptr
        && this->averageHoldTime_ == nullptr && this->averageReadyTime_ == nullptr && this->averageTalkTime_ == nullptr && this->averageWorkTime_ == nullptr && this->breakCodeDetailList_ == nullptr
        && this->firstCheckInTime_ == nullptr && this->lastCheckOutTime_ == nullptr && this->maxBreakTime_ == nullptr && this->maxHoldTime_ == nullptr && this->maxReadyTime_ == nullptr
        && this->maxTalkTime_ == nullptr && this->maxWorkTime_ == nullptr && this->occupancyRate_ == nullptr && this->satisfactionIndex_ == nullptr && this->satisfactionRate_ == nullptr
        && this->satisfactionSurveysOffered_ == nullptr && this->satisfactionSurveysResponded_ == nullptr && this->totalBreakTime_ == nullptr && this->totalCalls_ == nullptr && this->totalHoldTime_ == nullptr
        && this->totalLoggedInTime_ == nullptr && this->totalOffSiteLoggedInTime_ == nullptr && this->totalOffSiteOnlineTime_ == nullptr && this->totalOfficePhoneLoggedInTime_ == nullptr && this->totalOfficePhoneOnlineTime_ == nullptr
        && this->totalOnSiteLoggedInTime_ == nullptr && this->totalOnSiteOnlineTime_ == nullptr && this->totalOutboundScenarioLoggedInTime_ == nullptr && this->totalOutboundScenarioReadyTime_ == nullptr && this->totalOutboundScenarioTime_ == nullptr
        && this->totalReadyTime_ == nullptr && this->totalTalkTime_ == nullptr && this->totalWorkTime_ == nullptr; };
          // averageBreakTime Field Functions 
          bool hasAverageBreakTime() const { return this->averageBreakTime_ != nullptr;};
          void deleteAverageBreakTime() { this->averageBreakTime_ = nullptr;};
          inline float getAverageBreakTime() const { DARABONBA_PTR_GET_DEFAULT(averageBreakTime_, 0.0) };
          inline Overall& setAverageBreakTime(float averageBreakTime) { DARABONBA_PTR_SET_VALUE(averageBreakTime_, averageBreakTime) };


          // averageHoldTime Field Functions 
          bool hasAverageHoldTime() const { return this->averageHoldTime_ != nullptr;};
          void deleteAverageHoldTime() { this->averageHoldTime_ = nullptr;};
          inline float getAverageHoldTime() const { DARABONBA_PTR_GET_DEFAULT(averageHoldTime_, 0.0) };
          inline Overall& setAverageHoldTime(float averageHoldTime) { DARABONBA_PTR_SET_VALUE(averageHoldTime_, averageHoldTime) };


          // averageReadyTime Field Functions 
          bool hasAverageReadyTime() const { return this->averageReadyTime_ != nullptr;};
          void deleteAverageReadyTime() { this->averageReadyTime_ = nullptr;};
          inline float getAverageReadyTime() const { DARABONBA_PTR_GET_DEFAULT(averageReadyTime_, 0.0) };
          inline Overall& setAverageReadyTime(float averageReadyTime) { DARABONBA_PTR_SET_VALUE(averageReadyTime_, averageReadyTime) };


          // averageTalkTime Field Functions 
          bool hasAverageTalkTime() const { return this->averageTalkTime_ != nullptr;};
          void deleteAverageTalkTime() { this->averageTalkTime_ = nullptr;};
          inline float getAverageTalkTime() const { DARABONBA_PTR_GET_DEFAULT(averageTalkTime_, 0.0) };
          inline Overall& setAverageTalkTime(float averageTalkTime) { DARABONBA_PTR_SET_VALUE(averageTalkTime_, averageTalkTime) };


          // averageWorkTime Field Functions 
          bool hasAverageWorkTime() const { return this->averageWorkTime_ != nullptr;};
          void deleteAverageWorkTime() { this->averageWorkTime_ = nullptr;};
          inline float getAverageWorkTime() const { DARABONBA_PTR_GET_DEFAULT(averageWorkTime_, 0.0) };
          inline Overall& setAverageWorkTime(float averageWorkTime) { DARABONBA_PTR_SET_VALUE(averageWorkTime_, averageWorkTime) };


          // breakCodeDetailList Field Functions 
          bool hasBreakCodeDetailList() const { return this->breakCodeDetailList_ != nullptr;};
          void deleteBreakCodeDetailList() { this->breakCodeDetailList_ = nullptr;};
          inline const vector<Overall::BreakCodeDetailList> & getBreakCodeDetailList() const { DARABONBA_PTR_GET_CONST(breakCodeDetailList_, vector<Overall::BreakCodeDetailList>) };
          inline vector<Overall::BreakCodeDetailList> getBreakCodeDetailList() { DARABONBA_PTR_GET(breakCodeDetailList_, vector<Overall::BreakCodeDetailList>) };
          inline Overall& setBreakCodeDetailList(const vector<Overall::BreakCodeDetailList> & breakCodeDetailList) { DARABONBA_PTR_SET_VALUE(breakCodeDetailList_, breakCodeDetailList) };
          inline Overall& setBreakCodeDetailList(vector<Overall::BreakCodeDetailList> && breakCodeDetailList) { DARABONBA_PTR_SET_RVALUE(breakCodeDetailList_, breakCodeDetailList) };


          // firstCheckInTime Field Functions 
          bool hasFirstCheckInTime() const { return this->firstCheckInTime_ != nullptr;};
          void deleteFirstCheckInTime() { this->firstCheckInTime_ = nullptr;};
          inline int64_t getFirstCheckInTime() const { DARABONBA_PTR_GET_DEFAULT(firstCheckInTime_, 0L) };
          inline Overall& setFirstCheckInTime(int64_t firstCheckInTime) { DARABONBA_PTR_SET_VALUE(firstCheckInTime_, firstCheckInTime) };


          // lastCheckOutTime Field Functions 
          bool hasLastCheckOutTime() const { return this->lastCheckOutTime_ != nullptr;};
          void deleteLastCheckOutTime() { this->lastCheckOutTime_ = nullptr;};
          inline int64_t getLastCheckOutTime() const { DARABONBA_PTR_GET_DEFAULT(lastCheckOutTime_, 0L) };
          inline Overall& setLastCheckOutTime(int64_t lastCheckOutTime) { DARABONBA_PTR_SET_VALUE(lastCheckOutTime_, lastCheckOutTime) };


          // maxBreakTime Field Functions 
          bool hasMaxBreakTime() const { return this->maxBreakTime_ != nullptr;};
          void deleteMaxBreakTime() { this->maxBreakTime_ = nullptr;};
          inline int64_t getMaxBreakTime() const { DARABONBA_PTR_GET_DEFAULT(maxBreakTime_, 0L) };
          inline Overall& setMaxBreakTime(int64_t maxBreakTime) { DARABONBA_PTR_SET_VALUE(maxBreakTime_, maxBreakTime) };


          // maxHoldTime Field Functions 
          bool hasMaxHoldTime() const { return this->maxHoldTime_ != nullptr;};
          void deleteMaxHoldTime() { this->maxHoldTime_ = nullptr;};
          inline int64_t getMaxHoldTime() const { DARABONBA_PTR_GET_DEFAULT(maxHoldTime_, 0L) };
          inline Overall& setMaxHoldTime(int64_t maxHoldTime) { DARABONBA_PTR_SET_VALUE(maxHoldTime_, maxHoldTime) };


          // maxReadyTime Field Functions 
          bool hasMaxReadyTime() const { return this->maxReadyTime_ != nullptr;};
          void deleteMaxReadyTime() { this->maxReadyTime_ = nullptr;};
          inline int64_t getMaxReadyTime() const { DARABONBA_PTR_GET_DEFAULT(maxReadyTime_, 0L) };
          inline Overall& setMaxReadyTime(int64_t maxReadyTime) { DARABONBA_PTR_SET_VALUE(maxReadyTime_, maxReadyTime) };


          // maxTalkTime Field Functions 
          bool hasMaxTalkTime() const { return this->maxTalkTime_ != nullptr;};
          void deleteMaxTalkTime() { this->maxTalkTime_ = nullptr;};
          inline int64_t getMaxTalkTime() const { DARABONBA_PTR_GET_DEFAULT(maxTalkTime_, 0L) };
          inline Overall& setMaxTalkTime(int64_t maxTalkTime) { DARABONBA_PTR_SET_VALUE(maxTalkTime_, maxTalkTime) };


          // maxWorkTime Field Functions 
          bool hasMaxWorkTime() const { return this->maxWorkTime_ != nullptr;};
          void deleteMaxWorkTime() { this->maxWorkTime_ = nullptr;};
          inline int64_t getMaxWorkTime() const { DARABONBA_PTR_GET_DEFAULT(maxWorkTime_, 0L) };
          inline Overall& setMaxWorkTime(int64_t maxWorkTime) { DARABONBA_PTR_SET_VALUE(maxWorkTime_, maxWorkTime) };


          // occupancyRate Field Functions 
          bool hasOccupancyRate() const { return this->occupancyRate_ != nullptr;};
          void deleteOccupancyRate() { this->occupancyRate_ = nullptr;};
          inline float getOccupancyRate() const { DARABONBA_PTR_GET_DEFAULT(occupancyRate_, 0.0) };
          inline Overall& setOccupancyRate(float occupancyRate) { DARABONBA_PTR_SET_VALUE(occupancyRate_, occupancyRate) };


          // satisfactionIndex Field Functions 
          bool hasSatisfactionIndex() const { return this->satisfactionIndex_ != nullptr;};
          void deleteSatisfactionIndex() { this->satisfactionIndex_ = nullptr;};
          inline float getSatisfactionIndex() const { DARABONBA_PTR_GET_DEFAULT(satisfactionIndex_, 0.0) };
          inline Overall& setSatisfactionIndex(float satisfactionIndex) { DARABONBA_PTR_SET_VALUE(satisfactionIndex_, satisfactionIndex) };


          // satisfactionRate Field Functions 
          bool hasSatisfactionRate() const { return this->satisfactionRate_ != nullptr;};
          void deleteSatisfactionRate() { this->satisfactionRate_ = nullptr;};
          inline float getSatisfactionRate() const { DARABONBA_PTR_GET_DEFAULT(satisfactionRate_, 0.0) };
          inline Overall& setSatisfactionRate(float satisfactionRate) { DARABONBA_PTR_SET_VALUE(satisfactionRate_, satisfactionRate) };


          // satisfactionSurveysOffered Field Functions 
          bool hasSatisfactionSurveysOffered() const { return this->satisfactionSurveysOffered_ != nullptr;};
          void deleteSatisfactionSurveysOffered() { this->satisfactionSurveysOffered_ = nullptr;};
          inline int64_t getSatisfactionSurveysOffered() const { DARABONBA_PTR_GET_DEFAULT(satisfactionSurveysOffered_, 0L) };
          inline Overall& setSatisfactionSurveysOffered(int64_t satisfactionSurveysOffered) { DARABONBA_PTR_SET_VALUE(satisfactionSurveysOffered_, satisfactionSurveysOffered) };


          // satisfactionSurveysResponded Field Functions 
          bool hasSatisfactionSurveysResponded() const { return this->satisfactionSurveysResponded_ != nullptr;};
          void deleteSatisfactionSurveysResponded() { this->satisfactionSurveysResponded_ = nullptr;};
          inline int64_t getSatisfactionSurveysResponded() const { DARABONBA_PTR_GET_DEFAULT(satisfactionSurveysResponded_, 0L) };
          inline Overall& setSatisfactionSurveysResponded(int64_t satisfactionSurveysResponded) { DARABONBA_PTR_SET_VALUE(satisfactionSurveysResponded_, satisfactionSurveysResponded) };


          // totalBreakTime Field Functions 
          bool hasTotalBreakTime() const { return this->totalBreakTime_ != nullptr;};
          void deleteTotalBreakTime() { this->totalBreakTime_ = nullptr;};
          inline int64_t getTotalBreakTime() const { DARABONBA_PTR_GET_DEFAULT(totalBreakTime_, 0L) };
          inline Overall& setTotalBreakTime(int64_t totalBreakTime) { DARABONBA_PTR_SET_VALUE(totalBreakTime_, totalBreakTime) };


          // totalCalls Field Functions 
          bool hasTotalCalls() const { return this->totalCalls_ != nullptr;};
          void deleteTotalCalls() { this->totalCalls_ = nullptr;};
          inline int64_t getTotalCalls() const { DARABONBA_PTR_GET_DEFAULT(totalCalls_, 0L) };
          inline Overall& setTotalCalls(int64_t totalCalls) { DARABONBA_PTR_SET_VALUE(totalCalls_, totalCalls) };


          // totalHoldTime Field Functions 
          bool hasTotalHoldTime() const { return this->totalHoldTime_ != nullptr;};
          void deleteTotalHoldTime() { this->totalHoldTime_ = nullptr;};
          inline int64_t getTotalHoldTime() const { DARABONBA_PTR_GET_DEFAULT(totalHoldTime_, 0L) };
          inline Overall& setTotalHoldTime(int64_t totalHoldTime) { DARABONBA_PTR_SET_VALUE(totalHoldTime_, totalHoldTime) };


          // totalLoggedInTime Field Functions 
          bool hasTotalLoggedInTime() const { return this->totalLoggedInTime_ != nullptr;};
          void deleteTotalLoggedInTime() { this->totalLoggedInTime_ = nullptr;};
          inline int64_t getTotalLoggedInTime() const { DARABONBA_PTR_GET_DEFAULT(totalLoggedInTime_, 0L) };
          inline Overall& setTotalLoggedInTime(int64_t totalLoggedInTime) { DARABONBA_PTR_SET_VALUE(totalLoggedInTime_, totalLoggedInTime) };


          // totalOffSiteLoggedInTime Field Functions 
          bool hasTotalOffSiteLoggedInTime() const { return this->totalOffSiteLoggedInTime_ != nullptr;};
          void deleteTotalOffSiteLoggedInTime() { this->totalOffSiteLoggedInTime_ = nullptr;};
          inline int64_t getTotalOffSiteLoggedInTime() const { DARABONBA_PTR_GET_DEFAULT(totalOffSiteLoggedInTime_, 0L) };
          inline Overall& setTotalOffSiteLoggedInTime(int64_t totalOffSiteLoggedInTime) { DARABONBA_PTR_SET_VALUE(totalOffSiteLoggedInTime_, totalOffSiteLoggedInTime) };


          // totalOffSiteOnlineTime Field Functions 
          bool hasTotalOffSiteOnlineTime() const { return this->totalOffSiteOnlineTime_ != nullptr;};
          void deleteTotalOffSiteOnlineTime() { this->totalOffSiteOnlineTime_ = nullptr;};
          inline int64_t getTotalOffSiteOnlineTime() const { DARABONBA_PTR_GET_DEFAULT(totalOffSiteOnlineTime_, 0L) };
          inline Overall& setTotalOffSiteOnlineTime(int64_t totalOffSiteOnlineTime) { DARABONBA_PTR_SET_VALUE(totalOffSiteOnlineTime_, totalOffSiteOnlineTime) };


          // totalOfficePhoneLoggedInTime Field Functions 
          bool hasTotalOfficePhoneLoggedInTime() const { return this->totalOfficePhoneLoggedInTime_ != nullptr;};
          void deleteTotalOfficePhoneLoggedInTime() { this->totalOfficePhoneLoggedInTime_ = nullptr;};
          inline int64_t getTotalOfficePhoneLoggedInTime() const { DARABONBA_PTR_GET_DEFAULT(totalOfficePhoneLoggedInTime_, 0L) };
          inline Overall& setTotalOfficePhoneLoggedInTime(int64_t totalOfficePhoneLoggedInTime) { DARABONBA_PTR_SET_VALUE(totalOfficePhoneLoggedInTime_, totalOfficePhoneLoggedInTime) };


          // totalOfficePhoneOnlineTime Field Functions 
          bool hasTotalOfficePhoneOnlineTime() const { return this->totalOfficePhoneOnlineTime_ != nullptr;};
          void deleteTotalOfficePhoneOnlineTime() { this->totalOfficePhoneOnlineTime_ = nullptr;};
          inline int64_t getTotalOfficePhoneOnlineTime() const { DARABONBA_PTR_GET_DEFAULT(totalOfficePhoneOnlineTime_, 0L) };
          inline Overall& setTotalOfficePhoneOnlineTime(int64_t totalOfficePhoneOnlineTime) { DARABONBA_PTR_SET_VALUE(totalOfficePhoneOnlineTime_, totalOfficePhoneOnlineTime) };


          // totalOnSiteLoggedInTime Field Functions 
          bool hasTotalOnSiteLoggedInTime() const { return this->totalOnSiteLoggedInTime_ != nullptr;};
          void deleteTotalOnSiteLoggedInTime() { this->totalOnSiteLoggedInTime_ = nullptr;};
          inline int64_t getTotalOnSiteLoggedInTime() const { DARABONBA_PTR_GET_DEFAULT(totalOnSiteLoggedInTime_, 0L) };
          inline Overall& setTotalOnSiteLoggedInTime(int64_t totalOnSiteLoggedInTime) { DARABONBA_PTR_SET_VALUE(totalOnSiteLoggedInTime_, totalOnSiteLoggedInTime) };


          // totalOnSiteOnlineTime Field Functions 
          bool hasTotalOnSiteOnlineTime() const { return this->totalOnSiteOnlineTime_ != nullptr;};
          void deleteTotalOnSiteOnlineTime() { this->totalOnSiteOnlineTime_ = nullptr;};
          inline int64_t getTotalOnSiteOnlineTime() const { DARABONBA_PTR_GET_DEFAULT(totalOnSiteOnlineTime_, 0L) };
          inline Overall& setTotalOnSiteOnlineTime(int64_t totalOnSiteOnlineTime) { DARABONBA_PTR_SET_VALUE(totalOnSiteOnlineTime_, totalOnSiteOnlineTime) };


          // totalOutboundScenarioLoggedInTime Field Functions 
          bool hasTotalOutboundScenarioLoggedInTime() const { return this->totalOutboundScenarioLoggedInTime_ != nullptr;};
          void deleteTotalOutboundScenarioLoggedInTime() { this->totalOutboundScenarioLoggedInTime_ = nullptr;};
          inline int64_t getTotalOutboundScenarioLoggedInTime() const { DARABONBA_PTR_GET_DEFAULT(totalOutboundScenarioLoggedInTime_, 0L) };
          inline Overall& setTotalOutboundScenarioLoggedInTime(int64_t totalOutboundScenarioLoggedInTime) { DARABONBA_PTR_SET_VALUE(totalOutboundScenarioLoggedInTime_, totalOutboundScenarioLoggedInTime) };


          // totalOutboundScenarioReadyTime Field Functions 
          bool hasTotalOutboundScenarioReadyTime() const { return this->totalOutboundScenarioReadyTime_ != nullptr;};
          void deleteTotalOutboundScenarioReadyTime() { this->totalOutboundScenarioReadyTime_ = nullptr;};
          inline int64_t getTotalOutboundScenarioReadyTime() const { DARABONBA_PTR_GET_DEFAULT(totalOutboundScenarioReadyTime_, 0L) };
          inline Overall& setTotalOutboundScenarioReadyTime(int64_t totalOutboundScenarioReadyTime) { DARABONBA_PTR_SET_VALUE(totalOutboundScenarioReadyTime_, totalOutboundScenarioReadyTime) };


          // totalOutboundScenarioTime Field Functions 
          bool hasTotalOutboundScenarioTime() const { return this->totalOutboundScenarioTime_ != nullptr;};
          void deleteTotalOutboundScenarioTime() { this->totalOutboundScenarioTime_ = nullptr;};
          inline int64_t getTotalOutboundScenarioTime() const { DARABONBA_PTR_GET_DEFAULT(totalOutboundScenarioTime_, 0L) };
          inline Overall& setTotalOutboundScenarioTime(int64_t totalOutboundScenarioTime) { DARABONBA_PTR_SET_VALUE(totalOutboundScenarioTime_, totalOutboundScenarioTime) };


          // totalReadyTime Field Functions 
          bool hasTotalReadyTime() const { return this->totalReadyTime_ != nullptr;};
          void deleteTotalReadyTime() { this->totalReadyTime_ = nullptr;};
          inline int64_t getTotalReadyTime() const { DARABONBA_PTR_GET_DEFAULT(totalReadyTime_, 0L) };
          inline Overall& setTotalReadyTime(int64_t totalReadyTime) { DARABONBA_PTR_SET_VALUE(totalReadyTime_, totalReadyTime) };


          // totalTalkTime Field Functions 
          bool hasTotalTalkTime() const { return this->totalTalkTime_ != nullptr;};
          void deleteTotalTalkTime() { this->totalTalkTime_ = nullptr;};
          inline int64_t getTotalTalkTime() const { DARABONBA_PTR_GET_DEFAULT(totalTalkTime_, 0L) };
          inline Overall& setTotalTalkTime(int64_t totalTalkTime) { DARABONBA_PTR_SET_VALUE(totalTalkTime_, totalTalkTime) };


          // totalWorkTime Field Functions 
          bool hasTotalWorkTime() const { return this->totalWorkTime_ != nullptr;};
          void deleteTotalWorkTime() { this->totalWorkTime_ = nullptr;};
          inline int64_t getTotalWorkTime() const { DARABONBA_PTR_GET_DEFAULT(totalWorkTime_, 0L) };
          inline Overall& setTotalWorkTime(int64_t totalWorkTime) { DARABONBA_PTR_SET_VALUE(totalWorkTime_, totalWorkTime) };


        protected:
          // The average break duration. Formula: TotalBreakTime / number of breaks. The number of breaks is a non-API statistical field. Unit: seconds.
          shared_ptr<float> averageBreakTime_ {};
          // The average hold duration. Unit: seconds. Formula: TotalHoldTime / (inbound CallsHold + outbound CallsHold).
          shared_ptr<float> averageHoldTime_ {};
          // The average ready duration. Formula: TotalReadyTime / number of ready states. The number of ready states is a non-API statistical field. Unit: seconds.
          shared_ptr<float> averageReadyTime_ {};
          // The average talk duration. Formula: TotalTalkTime / (CallsAnswered + CallsHandled). Unit: seconds.
          shared_ptr<float> averageTalkTime_ {};
          // The average after-call work duration. Formula: TotalWorkTime / TotalCalls. Unit: seconds.
          shared_ptr<float> averageWorkTime_ {};
          // The statistics for each break type.
          shared_ptr<vector<Overall::BreakCodeDetailList>> breakCodeDetailList_ {};
          // The earliest check-in time. The value is a UNIX timestamp. Unit: milliseconds.
          shared_ptr<int64_t> firstCheckInTime_ {};
          // The last check-out time. The value is a UNIX timestamp. Unit: milliseconds.
          shared_ptr<int64_t> lastCheckOutTime_ {};
          // The maximum break duration. Unit: seconds.
          shared_ptr<int64_t> maxBreakTime_ {};
          // The maximum hold time. Unit: seconds.
          shared_ptr<int64_t> maxHoldTime_ {};
          // The maximum ready duration. Unit: seconds.
          shared_ptr<int64_t> maxReadyTime_ {};
          // The maximum talk time. Unit: seconds.
          shared_ptr<int64_t> maxTalkTime_ {};
          // The maximum after-call work (ACW) time. Unit: seconds.
          shared_ptr<int64_t> maxWorkTime_ {};
          // The agent occupancy rate. Formula: (TotalWorkTime + TotalTalkTime) / TotalLoggedInTime.
          shared_ptr<float> occupancyRate_ {};
          // The satisfaction index, which is the average value of satisfaction survey key presses (single-digit numbers).
          shared_ptr<float> satisfactionIndex_ {};
          // The satisfaction rate. Formula: number of satisfied ratings/number of satisfaction survey responses.
          shared_ptr<float> satisfactionRate_ {};
          // The number of satisfaction surveys sent.
          shared_ptr<int64_t> satisfactionSurveysOffered_ {};
          // The number of satisfaction survey responses.
          shared_ptr<int64_t> satisfactionSurveysResponded_ {};
          // The total break duration. Unit: seconds.
          shared_ptr<int64_t> totalBreakTime_ {};
          // The total number of calls. Formula: CallsOffered + CallsDialed.
          shared_ptr<int64_t> totalCalls_ {};
          // The total hold duration. Unit: seconds.
          shared_ptr<int64_t> totalHoldTime_ {};
          // The total logged-in duration, excluding break time. Unit: seconds.
          shared_ptr<int64_t> totalLoggedInTime_ {};
          // The total off-site online duration. Unit: seconds.
          shared_ptr<int64_t> totalOffSiteLoggedInTime_ {};
          // The total off-site online duration. Unit: seconds.
          shared_ptr<int64_t> totalOffSiteOnlineTime_ {};
          // The total online duration in office phone mode. Unit: seconds.
          shared_ptr<int64_t> totalOfficePhoneLoggedInTime_ {};
          // The total online duration in office phone mode. Unit: seconds.
          shared_ptr<int64_t> totalOfficePhoneOnlineTime_ {};
          // The total on-site online duration. Unit: seconds.
          shared_ptr<int64_t> totalOnSiteLoggedInTime_ {};
          // The total on-site online duration. Unit: seconds.
          shared_ptr<int64_t> totalOnSiteOnlineTime_ {};
          // The total outbound-only online duration. Unit: seconds.
          shared_ptr<int64_t> totalOutboundScenarioLoggedInTime_ {};
          // The total outbound-only idle duration. Unit: seconds.
          shared_ptr<int64_t> totalOutboundScenarioReadyTime_ {};
          // The total outbound-only online duration. Unit: seconds.
          shared_ptr<int64_t> totalOutboundScenarioTime_ {};
          // The total ready duration. Unit: seconds.
          shared_ptr<int64_t> totalReadyTime_ {};
          // The total talk time. Unit: seconds.
          shared_ptr<int64_t> totalTalkTime_ {};
          // The total after-call work (ACW) time. Unit: seconds.
          shared_ptr<int64_t> totalWorkTime_ {};
        };

        class Outbound : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Outbound& obj) { 
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
          friend void from_json(const Darabonba::Json& j, Outbound& obj) { 
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
          Outbound() = default ;
          Outbound(const Outbound &) = default ;
          Outbound(Outbound &&) = default ;
          Outbound(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Outbound() = default ;
          Outbound& operator=(const Outbound &) = default ;
          Outbound& operator=(Outbound &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->answerRate_ == nullptr
        && this->averageDialingTime_ == nullptr && this->averageHoldTime_ == nullptr && this->averageRingTime_ == nullptr && this->averageTalkTime_ == nullptr && this->averageWorkTime_ == nullptr
        && this->callsAnswered_ == nullptr && this->callsAttendedTransferIn_ == nullptr && this->callsAttendedTransferOut_ == nullptr && this->callsBlindTransferIn_ == nullptr && this->callsBlindTransferOut_ == nullptr
        && this->callsDialed_ == nullptr && this->callsHold_ == nullptr && this->callsRinged_ == nullptr && this->maxDialingTime_ == nullptr && this->maxHoldTime_ == nullptr
        && this->maxRingTime_ == nullptr && this->maxTalkTime_ == nullptr && this->maxWorkTime_ == nullptr && this->satisfactionIndex_ == nullptr && this->satisfactionRate_ == nullptr
        && this->satisfactionSurveysOffered_ == nullptr && this->satisfactionSurveysResponded_ == nullptr && this->totalDialingTime_ == nullptr && this->totalHoldTime_ == nullptr && this->totalRingTime_ == nullptr
        && this->totalTalkTime_ == nullptr && this->totalWorkTime_ == nullptr; };
          // answerRate Field Functions 
          bool hasAnswerRate() const { return this->answerRate_ != nullptr;};
          void deleteAnswerRate() { this->answerRate_ = nullptr;};
          inline float getAnswerRate() const { DARABONBA_PTR_GET_DEFAULT(answerRate_, 0.0) };
          inline Outbound& setAnswerRate(float answerRate) { DARABONBA_PTR_SET_VALUE(answerRate_, answerRate) };


          // averageDialingTime Field Functions 
          bool hasAverageDialingTime() const { return this->averageDialingTime_ != nullptr;};
          void deleteAverageDialingTime() { this->averageDialingTime_ = nullptr;};
          inline float getAverageDialingTime() const { DARABONBA_PTR_GET_DEFAULT(averageDialingTime_, 0.0) };
          inline Outbound& setAverageDialingTime(float averageDialingTime) { DARABONBA_PTR_SET_VALUE(averageDialingTime_, averageDialingTime) };


          // averageHoldTime Field Functions 
          bool hasAverageHoldTime() const { return this->averageHoldTime_ != nullptr;};
          void deleteAverageHoldTime() { this->averageHoldTime_ = nullptr;};
          inline float getAverageHoldTime() const { DARABONBA_PTR_GET_DEFAULT(averageHoldTime_, 0.0) };
          inline Outbound& setAverageHoldTime(float averageHoldTime) { DARABONBA_PTR_SET_VALUE(averageHoldTime_, averageHoldTime) };


          // averageRingTime Field Functions 
          bool hasAverageRingTime() const { return this->averageRingTime_ != nullptr;};
          void deleteAverageRingTime() { this->averageRingTime_ = nullptr;};
          inline float getAverageRingTime() const { DARABONBA_PTR_GET_DEFAULT(averageRingTime_, 0.0) };
          inline Outbound& setAverageRingTime(float averageRingTime) { DARABONBA_PTR_SET_VALUE(averageRingTime_, averageRingTime) };


          // averageTalkTime Field Functions 
          bool hasAverageTalkTime() const { return this->averageTalkTime_ != nullptr;};
          void deleteAverageTalkTime() { this->averageTalkTime_ = nullptr;};
          inline float getAverageTalkTime() const { DARABONBA_PTR_GET_DEFAULT(averageTalkTime_, 0.0) };
          inline Outbound& setAverageTalkTime(float averageTalkTime) { DARABONBA_PTR_SET_VALUE(averageTalkTime_, averageTalkTime) };


          // averageWorkTime Field Functions 
          bool hasAverageWorkTime() const { return this->averageWorkTime_ != nullptr;};
          void deleteAverageWorkTime() { this->averageWorkTime_ = nullptr;};
          inline float getAverageWorkTime() const { DARABONBA_PTR_GET_DEFAULT(averageWorkTime_, 0.0) };
          inline Outbound& setAverageWorkTime(float averageWorkTime) { DARABONBA_PTR_SET_VALUE(averageWorkTime_, averageWorkTime) };


          // callsAnswered Field Functions 
          bool hasCallsAnswered() const { return this->callsAnswered_ != nullptr;};
          void deleteCallsAnswered() { this->callsAnswered_ = nullptr;};
          inline int64_t getCallsAnswered() const { DARABONBA_PTR_GET_DEFAULT(callsAnswered_, 0L) };
          inline Outbound& setCallsAnswered(int64_t callsAnswered) { DARABONBA_PTR_SET_VALUE(callsAnswered_, callsAnswered) };


          // callsAttendedTransferIn Field Functions 
          bool hasCallsAttendedTransferIn() const { return this->callsAttendedTransferIn_ != nullptr;};
          void deleteCallsAttendedTransferIn() { this->callsAttendedTransferIn_ = nullptr;};
          inline int64_t getCallsAttendedTransferIn() const { DARABONBA_PTR_GET_DEFAULT(callsAttendedTransferIn_, 0L) };
          inline Outbound& setCallsAttendedTransferIn(int64_t callsAttendedTransferIn) { DARABONBA_PTR_SET_VALUE(callsAttendedTransferIn_, callsAttendedTransferIn) };


          // callsAttendedTransferOut Field Functions 
          bool hasCallsAttendedTransferOut() const { return this->callsAttendedTransferOut_ != nullptr;};
          void deleteCallsAttendedTransferOut() { this->callsAttendedTransferOut_ = nullptr;};
          inline int64_t getCallsAttendedTransferOut() const { DARABONBA_PTR_GET_DEFAULT(callsAttendedTransferOut_, 0L) };
          inline Outbound& setCallsAttendedTransferOut(int64_t callsAttendedTransferOut) { DARABONBA_PTR_SET_VALUE(callsAttendedTransferOut_, callsAttendedTransferOut) };


          // callsBlindTransferIn Field Functions 
          bool hasCallsBlindTransferIn() const { return this->callsBlindTransferIn_ != nullptr;};
          void deleteCallsBlindTransferIn() { this->callsBlindTransferIn_ = nullptr;};
          inline int64_t getCallsBlindTransferIn() const { DARABONBA_PTR_GET_DEFAULT(callsBlindTransferIn_, 0L) };
          inline Outbound& setCallsBlindTransferIn(int64_t callsBlindTransferIn) { DARABONBA_PTR_SET_VALUE(callsBlindTransferIn_, callsBlindTransferIn) };


          // callsBlindTransferOut Field Functions 
          bool hasCallsBlindTransferOut() const { return this->callsBlindTransferOut_ != nullptr;};
          void deleteCallsBlindTransferOut() { this->callsBlindTransferOut_ = nullptr;};
          inline int64_t getCallsBlindTransferOut() const { DARABONBA_PTR_GET_DEFAULT(callsBlindTransferOut_, 0L) };
          inline Outbound& setCallsBlindTransferOut(int64_t callsBlindTransferOut) { DARABONBA_PTR_SET_VALUE(callsBlindTransferOut_, callsBlindTransferOut) };


          // callsDialed Field Functions 
          bool hasCallsDialed() const { return this->callsDialed_ != nullptr;};
          void deleteCallsDialed() { this->callsDialed_ = nullptr;};
          inline int64_t getCallsDialed() const { DARABONBA_PTR_GET_DEFAULT(callsDialed_, 0L) };
          inline Outbound& setCallsDialed(int64_t callsDialed) { DARABONBA_PTR_SET_VALUE(callsDialed_, callsDialed) };


          // callsHold Field Functions 
          bool hasCallsHold() const { return this->callsHold_ != nullptr;};
          void deleteCallsHold() { this->callsHold_ = nullptr;};
          inline int64_t getCallsHold() const { DARABONBA_PTR_GET_DEFAULT(callsHold_, 0L) };
          inline Outbound& setCallsHold(int64_t callsHold) { DARABONBA_PTR_SET_VALUE(callsHold_, callsHold) };


          // callsRinged Field Functions 
          bool hasCallsRinged() const { return this->callsRinged_ != nullptr;};
          void deleteCallsRinged() { this->callsRinged_ = nullptr;};
          inline int64_t getCallsRinged() const { DARABONBA_PTR_GET_DEFAULT(callsRinged_, 0L) };
          inline Outbound& setCallsRinged(int64_t callsRinged) { DARABONBA_PTR_SET_VALUE(callsRinged_, callsRinged) };


          // maxDialingTime Field Functions 
          bool hasMaxDialingTime() const { return this->maxDialingTime_ != nullptr;};
          void deleteMaxDialingTime() { this->maxDialingTime_ = nullptr;};
          inline int64_t getMaxDialingTime() const { DARABONBA_PTR_GET_DEFAULT(maxDialingTime_, 0L) };
          inline Outbound& setMaxDialingTime(int64_t maxDialingTime) { DARABONBA_PTR_SET_VALUE(maxDialingTime_, maxDialingTime) };


          // maxHoldTime Field Functions 
          bool hasMaxHoldTime() const { return this->maxHoldTime_ != nullptr;};
          void deleteMaxHoldTime() { this->maxHoldTime_ = nullptr;};
          inline int64_t getMaxHoldTime() const { DARABONBA_PTR_GET_DEFAULT(maxHoldTime_, 0L) };
          inline Outbound& setMaxHoldTime(int64_t maxHoldTime) { DARABONBA_PTR_SET_VALUE(maxHoldTime_, maxHoldTime) };


          // maxRingTime Field Functions 
          bool hasMaxRingTime() const { return this->maxRingTime_ != nullptr;};
          void deleteMaxRingTime() { this->maxRingTime_ = nullptr;};
          inline int64_t getMaxRingTime() const { DARABONBA_PTR_GET_DEFAULT(maxRingTime_, 0L) };
          inline Outbound& setMaxRingTime(int64_t maxRingTime) { DARABONBA_PTR_SET_VALUE(maxRingTime_, maxRingTime) };


          // maxTalkTime Field Functions 
          bool hasMaxTalkTime() const { return this->maxTalkTime_ != nullptr;};
          void deleteMaxTalkTime() { this->maxTalkTime_ = nullptr;};
          inline int64_t getMaxTalkTime() const { DARABONBA_PTR_GET_DEFAULT(maxTalkTime_, 0L) };
          inline Outbound& setMaxTalkTime(int64_t maxTalkTime) { DARABONBA_PTR_SET_VALUE(maxTalkTime_, maxTalkTime) };


          // maxWorkTime Field Functions 
          bool hasMaxWorkTime() const { return this->maxWorkTime_ != nullptr;};
          void deleteMaxWorkTime() { this->maxWorkTime_ = nullptr;};
          inline int64_t getMaxWorkTime() const { DARABONBA_PTR_GET_DEFAULT(maxWorkTime_, 0L) };
          inline Outbound& setMaxWorkTime(int64_t maxWorkTime) { DARABONBA_PTR_SET_VALUE(maxWorkTime_, maxWorkTime) };


          // satisfactionIndex Field Functions 
          bool hasSatisfactionIndex() const { return this->satisfactionIndex_ != nullptr;};
          void deleteSatisfactionIndex() { this->satisfactionIndex_ = nullptr;};
          inline float getSatisfactionIndex() const { DARABONBA_PTR_GET_DEFAULT(satisfactionIndex_, 0.0) };
          inline Outbound& setSatisfactionIndex(float satisfactionIndex) { DARABONBA_PTR_SET_VALUE(satisfactionIndex_, satisfactionIndex) };


          // satisfactionRate Field Functions 
          bool hasSatisfactionRate() const { return this->satisfactionRate_ != nullptr;};
          void deleteSatisfactionRate() { this->satisfactionRate_ = nullptr;};
          inline float getSatisfactionRate() const { DARABONBA_PTR_GET_DEFAULT(satisfactionRate_, 0.0) };
          inline Outbound& setSatisfactionRate(float satisfactionRate) { DARABONBA_PTR_SET_VALUE(satisfactionRate_, satisfactionRate) };


          // satisfactionSurveysOffered Field Functions 
          bool hasSatisfactionSurveysOffered() const { return this->satisfactionSurveysOffered_ != nullptr;};
          void deleteSatisfactionSurveysOffered() { this->satisfactionSurveysOffered_ = nullptr;};
          inline int64_t getSatisfactionSurveysOffered() const { DARABONBA_PTR_GET_DEFAULT(satisfactionSurveysOffered_, 0L) };
          inline Outbound& setSatisfactionSurveysOffered(int64_t satisfactionSurveysOffered) { DARABONBA_PTR_SET_VALUE(satisfactionSurveysOffered_, satisfactionSurveysOffered) };


          // satisfactionSurveysResponded Field Functions 
          bool hasSatisfactionSurveysResponded() const { return this->satisfactionSurveysResponded_ != nullptr;};
          void deleteSatisfactionSurveysResponded() { this->satisfactionSurveysResponded_ = nullptr;};
          inline int64_t getSatisfactionSurveysResponded() const { DARABONBA_PTR_GET_DEFAULT(satisfactionSurveysResponded_, 0L) };
          inline Outbound& setSatisfactionSurveysResponded(int64_t satisfactionSurveysResponded) { DARABONBA_PTR_SET_VALUE(satisfactionSurveysResponded_, satisfactionSurveysResponded) };


          // totalDialingTime Field Functions 
          bool hasTotalDialingTime() const { return this->totalDialingTime_ != nullptr;};
          void deleteTotalDialingTime() { this->totalDialingTime_ = nullptr;};
          inline int64_t getTotalDialingTime() const { DARABONBA_PTR_GET_DEFAULT(totalDialingTime_, 0L) };
          inline Outbound& setTotalDialingTime(int64_t totalDialingTime) { DARABONBA_PTR_SET_VALUE(totalDialingTime_, totalDialingTime) };


          // totalHoldTime Field Functions 
          bool hasTotalHoldTime() const { return this->totalHoldTime_ != nullptr;};
          void deleteTotalHoldTime() { this->totalHoldTime_ = nullptr;};
          inline int64_t getTotalHoldTime() const { DARABONBA_PTR_GET_DEFAULT(totalHoldTime_, 0L) };
          inline Outbound& setTotalHoldTime(int64_t totalHoldTime) { DARABONBA_PTR_SET_VALUE(totalHoldTime_, totalHoldTime) };


          // totalRingTime Field Functions 
          bool hasTotalRingTime() const { return this->totalRingTime_ != nullptr;};
          void deleteTotalRingTime() { this->totalRingTime_ = nullptr;};
          inline int64_t getTotalRingTime() const { DARABONBA_PTR_GET_DEFAULT(totalRingTime_, 0L) };
          inline Outbound& setTotalRingTime(int64_t totalRingTime) { DARABONBA_PTR_SET_VALUE(totalRingTime_, totalRingTime) };


          // totalTalkTime Field Functions 
          bool hasTotalTalkTime() const { return this->totalTalkTime_ != nullptr;};
          void deleteTotalTalkTime() { this->totalTalkTime_ = nullptr;};
          inline int64_t getTotalTalkTime() const { DARABONBA_PTR_GET_DEFAULT(totalTalkTime_, 0L) };
          inline Outbound& setTotalTalkTime(int64_t totalTalkTime) { DARABONBA_PTR_SET_VALUE(totalTalkTime_, totalTalkTime) };


          // totalWorkTime Field Functions 
          bool hasTotalWorkTime() const { return this->totalWorkTime_ != nullptr;};
          void deleteTotalWorkTime() { this->totalWorkTime_ = nullptr;};
          inline int64_t getTotalWorkTime() const { DARABONBA_PTR_GET_DEFAULT(totalWorkTime_, 0L) };
          inline Outbound& setTotalWorkTime(int64_t totalWorkTime) { DARABONBA_PTR_SET_VALUE(totalWorkTime_, totalWorkTime) };


        protected:
          // The answer rate. Formula: CallsAnswered/CallsDialed. Because the answer event and the dial event may fall within different time ranges, the result may exceed 100% in some cases.
          shared_ptr<float> answerRate_ {};
          // The average dialing time. Formula: TotalDialingTime/CallsDialed. Unit: seconds.
          shared_ptr<float> averageDialingTime_ {};
          // The average hold time. Formula: TotalHoldTime/CallsHold. Unit: seconds.
          shared_ptr<float> averageHoldTime_ {};
          // The average ring time. Formula: TotalRingTime/CallsRinged. Unit: seconds.
          shared_ptr<float> averageRingTime_ {};
          // The average talk time. Formula: TotalTalkTime/CallsAnswered. Unit: seconds.
          shared_ptr<float> averageTalkTime_ {};
          // The average after-call work (ACW) time. Formula: TotalWorkTime/CallsDialed. Unit: seconds.
          shared_ptr<float> averageWorkTime_ {};
          // The number of calls answered.
          shared_ptr<int64_t> callsAnswered_ {};
          // The number of attended transfers in. If a call is transferred in to this agent multiple times, each transfer is counted separately.
          shared_ptr<int64_t> callsAttendedTransferIn_ {};
          // The number of attended transfers out. If a call is transferred out to other agents multiple times, each transfer is counted separately.
          shared_ptr<int64_t> callsAttendedTransferOut_ {};
          // The number of blind transfers in. If a call is transferred in to this agent multiple times, each transfer is counted separately.
          shared_ptr<int64_t> callsBlindTransferIn_ {};
          // The number of blind transfers out. If a call is transferred out to other agents multiple times, each transfer is counted separately.
          shared_ptr<int64_t> callsBlindTransferOut_ {};
          // The number of calls dialed.
          shared_ptr<int64_t> callsDialed_ {};
          // The number of holds, which is the number of times calls were placed on hold.
          shared_ptr<int64_t> callsHold_ {};
          // The number of calls that rang the agent.
          shared_ptr<int64_t> callsRinged_ {};
          // The maximum dialing time. Unit: seconds.
          shared_ptr<int64_t> maxDialingTime_ {};
          // The maximum hold time. Unit: seconds.
          shared_ptr<int64_t> maxHoldTime_ {};
          // The maximum ring time. Unit: seconds.
          shared_ptr<int64_t> maxRingTime_ {};
          // The maximum talk time. Unit: seconds.
          shared_ptr<int64_t> maxTalkTime_ {};
          // The maximum after-call work (ACW) time. Unit: seconds.
          shared_ptr<int64_t> maxWorkTime_ {};
          // The satisfaction index, which is the average value of satisfaction survey key presses (single-digit numbers).
          shared_ptr<float> satisfactionIndex_ {};
          // The satisfaction rate. Formula: number of satisfied ratings/number of satisfaction survey responses.
          shared_ptr<float> satisfactionRate_ {};
          // The number of satisfaction surveys sent.
          shared_ptr<int64_t> satisfactionSurveysOffered_ {};
          // The number of satisfaction survey responses.
          shared_ptr<int64_t> satisfactionSurveysResponded_ {};
          // The total dialing time. Unit: seconds.
          shared_ptr<int64_t> totalDialingTime_ {};
          // The total hold time. Unit: seconds.
          shared_ptr<int64_t> totalHoldTime_ {};
          // The total ring time. Unit: seconds.
          shared_ptr<int64_t> totalRingTime_ {};
          // The total talk time. Unit: seconds.
          shared_ptr<int64_t> totalTalkTime_ {};
          // The total after-call work (ACW) time. Unit: seconds.
          shared_ptr<int64_t> totalWorkTime_ {};
        };

        class Internal : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Internal& obj) { 
            DARABONBA_PTR_TO_JSON(AverageTalkTime, averageTalkTime_);
            DARABONBA_PTR_TO_JSON(CallsAnswered, callsAnswered_);
            DARABONBA_PTR_TO_JSON(CallsDialed, callsDialed_);
            DARABONBA_PTR_TO_JSON(CallsHandled, callsHandled_);
            DARABONBA_PTR_TO_JSON(CallsOffered, callsOffered_);
            DARABONBA_PTR_TO_JSON(CallsTalked, callsTalked_);
            DARABONBA_PTR_TO_JSON(MaxTalkTime, maxTalkTime_);
            DARABONBA_PTR_TO_JSON(TotalTalkTime, totalTalkTime_);
          };
          friend void from_json(const Darabonba::Json& j, Internal& obj) { 
            DARABONBA_PTR_FROM_JSON(AverageTalkTime, averageTalkTime_);
            DARABONBA_PTR_FROM_JSON(CallsAnswered, callsAnswered_);
            DARABONBA_PTR_FROM_JSON(CallsDialed, callsDialed_);
            DARABONBA_PTR_FROM_JSON(CallsHandled, callsHandled_);
            DARABONBA_PTR_FROM_JSON(CallsOffered, callsOffered_);
            DARABONBA_PTR_FROM_JSON(CallsTalked, callsTalked_);
            DARABONBA_PTR_FROM_JSON(MaxTalkTime, maxTalkTime_);
            DARABONBA_PTR_FROM_JSON(TotalTalkTime, totalTalkTime_);
          };
          Internal() = default ;
          Internal(const Internal &) = default ;
          Internal(Internal &&) = default ;
          Internal(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Internal() = default ;
          Internal& operator=(const Internal &) = default ;
          Internal& operator=(Internal &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->averageTalkTime_ == nullptr
        && this->callsAnswered_ == nullptr && this->callsDialed_ == nullptr && this->callsHandled_ == nullptr && this->callsOffered_ == nullptr && this->callsTalked_ == nullptr
        && this->maxTalkTime_ == nullptr && this->totalTalkTime_ == nullptr; };
          // averageTalkTime Field Functions 
          bool hasAverageTalkTime() const { return this->averageTalkTime_ != nullptr;};
          void deleteAverageTalkTime() { this->averageTalkTime_ = nullptr;};
          inline float getAverageTalkTime() const { DARABONBA_PTR_GET_DEFAULT(averageTalkTime_, 0.0) };
          inline Internal& setAverageTalkTime(float averageTalkTime) { DARABONBA_PTR_SET_VALUE(averageTalkTime_, averageTalkTime) };


          // callsAnswered Field Functions 
          bool hasCallsAnswered() const { return this->callsAnswered_ != nullptr;};
          void deleteCallsAnswered() { this->callsAnswered_ = nullptr;};
          inline int64_t getCallsAnswered() const { DARABONBA_PTR_GET_DEFAULT(callsAnswered_, 0L) };
          inline Internal& setCallsAnswered(int64_t callsAnswered) { DARABONBA_PTR_SET_VALUE(callsAnswered_, callsAnswered) };


          // callsDialed Field Functions 
          bool hasCallsDialed() const { return this->callsDialed_ != nullptr;};
          void deleteCallsDialed() { this->callsDialed_ = nullptr;};
          inline int64_t getCallsDialed() const { DARABONBA_PTR_GET_DEFAULT(callsDialed_, 0L) };
          inline Internal& setCallsDialed(int64_t callsDialed) { DARABONBA_PTR_SET_VALUE(callsDialed_, callsDialed) };


          // callsHandled Field Functions 
          bool hasCallsHandled() const { return this->callsHandled_ != nullptr;};
          void deleteCallsHandled() { this->callsHandled_ = nullptr;};
          inline int64_t getCallsHandled() const { DARABONBA_PTR_GET_DEFAULT(callsHandled_, 0L) };
          inline Internal& setCallsHandled(int64_t callsHandled) { DARABONBA_PTR_SET_VALUE(callsHandled_, callsHandled) };


          // callsOffered Field Functions 
          bool hasCallsOffered() const { return this->callsOffered_ != nullptr;};
          void deleteCallsOffered() { this->callsOffered_ = nullptr;};
          inline int64_t getCallsOffered() const { DARABONBA_PTR_GET_DEFAULT(callsOffered_, 0L) };
          inline Internal& setCallsOffered(int64_t callsOffered) { DARABONBA_PTR_SET_VALUE(callsOffered_, callsOffered) };


          // callsTalked Field Functions 
          bool hasCallsTalked() const { return this->callsTalked_ != nullptr;};
          void deleteCallsTalked() { this->callsTalked_ = nullptr;};
          inline int64_t getCallsTalked() const { DARABONBA_PTR_GET_DEFAULT(callsTalked_, 0L) };
          inline Internal& setCallsTalked(int64_t callsTalked) { DARABONBA_PTR_SET_VALUE(callsTalked_, callsTalked) };


          // maxTalkTime Field Functions 
          bool hasMaxTalkTime() const { return this->maxTalkTime_ != nullptr;};
          void deleteMaxTalkTime() { this->maxTalkTime_ = nullptr;};
          inline int64_t getMaxTalkTime() const { DARABONBA_PTR_GET_DEFAULT(maxTalkTime_, 0L) };
          inline Internal& setMaxTalkTime(int64_t maxTalkTime) { DARABONBA_PTR_SET_VALUE(maxTalkTime_, maxTalkTime) };


          // totalTalkTime Field Functions 
          bool hasTotalTalkTime() const { return this->totalTalkTime_ != nullptr;};
          void deleteTotalTalkTime() { this->totalTalkTime_ = nullptr;};
          inline int64_t getTotalTalkTime() const { DARABONBA_PTR_GET_DEFAULT(totalTalkTime_, 0L) };
          inline Internal& setTotalTalkTime(int64_t totalTalkTime) { DARABONBA_PTR_SET_VALUE(totalTalkTime_, totalTalkTime) };


        protected:
          // The average talk duration. Unit: seconds.
          shared_ptr<float> averageTalkTime_ {};
          // The number of calls answered.
          shared_ptr<int64_t> callsAnswered_ {};
          // The number of calls dialed.
          shared_ptr<int64_t> callsDialed_ {};
          // The number of calls answered.
          shared_ptr<int64_t> callsHandled_ {};
          // The number of inbound calls.
          shared_ptr<int64_t> callsOffered_ {};
          // The number of calls participated in.
          shared_ptr<int64_t> callsTalked_ {};
          // The maximum talk time. Unit: seconds.
          shared_ptr<int64_t> maxTalkTime_ {};
          // The total talk time. Unit: seconds.
          shared_ptr<int64_t> totalTalkTime_ {};
        };

        class Inbound : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Inbound& obj) { 
            DARABONBA_PTR_TO_JSON(AccessChannelTypeDetails, accessChannelTypeDetails_);
            DARABONBA_PTR_TO_JSON(AverageFirstResponseTime, averageFirstResponseTime_);
            DARABONBA_PTR_TO_JSON(AverageHoldTime, averageHoldTime_);
            DARABONBA_PTR_TO_JSON(AverageResponseTime, averageResponseTime_);
            DARABONBA_PTR_TO_JSON(AverageRingTime, averageRingTime_);
            DARABONBA_PTR_TO_JSON(AverageTalkTime, averageTalkTime_);
            DARABONBA_PTR_TO_JSON(AverageWorkTime, averageWorkTime_);
            DARABONBA_PTR_TO_JSON(CallsAttendedTransferIn, callsAttendedTransferIn_);
            DARABONBA_PTR_TO_JSON(CallsAttendedTransferOut, callsAttendedTransferOut_);
            DARABONBA_PTR_TO_JSON(CallsBlindTransferIn, callsBlindTransferIn_);
            DARABONBA_PTR_TO_JSON(CallsBlindTransferOut, callsBlindTransferOut_);
            DARABONBA_PTR_TO_JSON(CallsHandled, callsHandled_);
            DARABONBA_PTR_TO_JSON(CallsHold, callsHold_);
            DARABONBA_PTR_TO_JSON(CallsOffered, callsOffered_);
            DARABONBA_PTR_TO_JSON(CallsRinged, callsRinged_);
            DARABONBA_PTR_TO_JSON(HandleRate, handleRate_);
            DARABONBA_PTR_TO_JSON(MaxHoldTime, maxHoldTime_);
            DARABONBA_PTR_TO_JSON(MaxRingTime, maxRingTime_);
            DARABONBA_PTR_TO_JSON(MaxTalkTime, maxTalkTime_);
            DARABONBA_PTR_TO_JSON(MaxWorkTime, maxWorkTime_);
            DARABONBA_PTR_TO_JSON(SatisfactionIndex, satisfactionIndex_);
            DARABONBA_PTR_TO_JSON(SatisfactionRate, satisfactionRate_);
            DARABONBA_PTR_TO_JSON(SatisfactionSurveysOffered, satisfactionSurveysOffered_);
            DARABONBA_PTR_TO_JSON(SatisfactionSurveysResponded, satisfactionSurveysResponded_);
            DARABONBA_PTR_TO_JSON(ServiceLevel15, serviceLevel15_);
            DARABONBA_PTR_TO_JSON(TotalHoldTime, totalHoldTime_);
            DARABONBA_PTR_TO_JSON(TotalMessagesSent, totalMessagesSent_);
            DARABONBA_PTR_TO_JSON(TotalMessagesSentByAgent, totalMessagesSentByAgent_);
            DARABONBA_PTR_TO_JSON(TotalMessagesSentByCustomer, totalMessagesSentByCustomer_);
            DARABONBA_PTR_TO_JSON(TotalRingTime, totalRingTime_);
            DARABONBA_PTR_TO_JSON(TotalTalkTime, totalTalkTime_);
            DARABONBA_PTR_TO_JSON(TotalWorkTime, totalWorkTime_);
          };
          friend void from_json(const Darabonba::Json& j, Inbound& obj) { 
            DARABONBA_PTR_FROM_JSON(AccessChannelTypeDetails, accessChannelTypeDetails_);
            DARABONBA_PTR_FROM_JSON(AverageFirstResponseTime, averageFirstResponseTime_);
            DARABONBA_PTR_FROM_JSON(AverageHoldTime, averageHoldTime_);
            DARABONBA_PTR_FROM_JSON(AverageResponseTime, averageResponseTime_);
            DARABONBA_PTR_FROM_JSON(AverageRingTime, averageRingTime_);
            DARABONBA_PTR_FROM_JSON(AverageTalkTime, averageTalkTime_);
            DARABONBA_PTR_FROM_JSON(AverageWorkTime, averageWorkTime_);
            DARABONBA_PTR_FROM_JSON(CallsAttendedTransferIn, callsAttendedTransferIn_);
            DARABONBA_PTR_FROM_JSON(CallsAttendedTransferOut, callsAttendedTransferOut_);
            DARABONBA_PTR_FROM_JSON(CallsBlindTransferIn, callsBlindTransferIn_);
            DARABONBA_PTR_FROM_JSON(CallsBlindTransferOut, callsBlindTransferOut_);
            DARABONBA_PTR_FROM_JSON(CallsHandled, callsHandled_);
            DARABONBA_PTR_FROM_JSON(CallsHold, callsHold_);
            DARABONBA_PTR_FROM_JSON(CallsOffered, callsOffered_);
            DARABONBA_PTR_FROM_JSON(CallsRinged, callsRinged_);
            DARABONBA_PTR_FROM_JSON(HandleRate, handleRate_);
            DARABONBA_PTR_FROM_JSON(MaxHoldTime, maxHoldTime_);
            DARABONBA_PTR_FROM_JSON(MaxRingTime, maxRingTime_);
            DARABONBA_PTR_FROM_JSON(MaxTalkTime, maxTalkTime_);
            DARABONBA_PTR_FROM_JSON(MaxWorkTime, maxWorkTime_);
            DARABONBA_PTR_FROM_JSON(SatisfactionIndex, satisfactionIndex_);
            DARABONBA_PTR_FROM_JSON(SatisfactionRate, satisfactionRate_);
            DARABONBA_PTR_FROM_JSON(SatisfactionSurveysOffered, satisfactionSurveysOffered_);
            DARABONBA_PTR_FROM_JSON(SatisfactionSurveysResponded, satisfactionSurveysResponded_);
            DARABONBA_PTR_FROM_JSON(ServiceLevel15, serviceLevel15_);
            DARABONBA_PTR_FROM_JSON(TotalHoldTime, totalHoldTime_);
            DARABONBA_PTR_FROM_JSON(TotalMessagesSent, totalMessagesSent_);
            DARABONBA_PTR_FROM_JSON(TotalMessagesSentByAgent, totalMessagesSentByAgent_);
            DARABONBA_PTR_FROM_JSON(TotalMessagesSentByCustomer, totalMessagesSentByCustomer_);
            DARABONBA_PTR_FROM_JSON(TotalRingTime, totalRingTime_);
            DARABONBA_PTR_FROM_JSON(TotalTalkTime, totalTalkTime_);
            DARABONBA_PTR_FROM_JSON(TotalWorkTime, totalWorkTime_);
          };
          Inbound() = default ;
          Inbound(const Inbound &) = default ;
          Inbound(Inbound &&) = default ;
          Inbound(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Inbound() = default ;
          Inbound& operator=(const Inbound &) = default ;
          Inbound& operator=(Inbound &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class AccessChannelTypeDetails : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const AccessChannelTypeDetails& obj) { 
              DARABONBA_PTR_TO_JSON(AccessChannelType, accessChannelType_);
              DARABONBA_PTR_TO_JSON(CallsOffered, callsOffered_);
            };
            friend void from_json(const Darabonba::Json& j, AccessChannelTypeDetails& obj) { 
              DARABONBA_PTR_FROM_JSON(AccessChannelType, accessChannelType_);
              DARABONBA_PTR_FROM_JSON(CallsOffered, callsOffered_);
            };
            AccessChannelTypeDetails() = default ;
            AccessChannelTypeDetails(const AccessChannelTypeDetails &) = default ;
            AccessChannelTypeDetails(AccessChannelTypeDetails &&) = default ;
            AccessChannelTypeDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~AccessChannelTypeDetails() = default ;
            AccessChannelTypeDetails& operator=(const AccessChannelTypeDetails &) = default ;
            AccessChannelTypeDetails& operator=(AccessChannelTypeDetails &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->accessChannelType_ == nullptr
        && this->callsOffered_ == nullptr; };
            // accessChannelType Field Functions 
            bool hasAccessChannelType() const { return this->accessChannelType_ != nullptr;};
            void deleteAccessChannelType() { this->accessChannelType_ = nullptr;};
            inline string getAccessChannelType() const { DARABONBA_PTR_GET_DEFAULT(accessChannelType_, "") };
            inline AccessChannelTypeDetails& setAccessChannelType(string accessChannelType) { DARABONBA_PTR_SET_VALUE(accessChannelType_, accessChannelType) };


            // callsOffered Field Functions 
            bool hasCallsOffered() const { return this->callsOffered_ != nullptr;};
            void deleteCallsOffered() { this->callsOffered_ = nullptr;};
            inline int64_t getCallsOffered() const { DARABONBA_PTR_GET_DEFAULT(callsOffered_, 0L) };
            inline AccessChannelTypeDetails& setCallsOffered(int64_t callsOffered) { DARABONBA_PTR_SET_VALUE(callsOffered_, callsOffered) };


          protected:
            // The channel type.
            shared_ptr<string> accessChannelType_ {};
            // The number of sessions offered.
            shared_ptr<int64_t> callsOffered_ {};
          };

          virtual bool empty() const override { return this->accessChannelTypeDetails_ == nullptr
        && this->averageFirstResponseTime_ == nullptr && this->averageHoldTime_ == nullptr && this->averageResponseTime_ == nullptr && this->averageRingTime_ == nullptr && this->averageTalkTime_ == nullptr
        && this->averageWorkTime_ == nullptr && this->callsAttendedTransferIn_ == nullptr && this->callsAttendedTransferOut_ == nullptr && this->callsBlindTransferIn_ == nullptr && this->callsBlindTransferOut_ == nullptr
        && this->callsHandled_ == nullptr && this->callsHold_ == nullptr && this->callsOffered_ == nullptr && this->callsRinged_ == nullptr && this->handleRate_ == nullptr
        && this->maxHoldTime_ == nullptr && this->maxRingTime_ == nullptr && this->maxTalkTime_ == nullptr && this->maxWorkTime_ == nullptr && this->satisfactionIndex_ == nullptr
        && this->satisfactionRate_ == nullptr && this->satisfactionSurveysOffered_ == nullptr && this->satisfactionSurveysResponded_ == nullptr && this->serviceLevel15_ == nullptr && this->totalHoldTime_ == nullptr
        && this->totalMessagesSent_ == nullptr && this->totalMessagesSentByAgent_ == nullptr && this->totalMessagesSentByCustomer_ == nullptr && this->totalRingTime_ == nullptr && this->totalTalkTime_ == nullptr
        && this->totalWorkTime_ == nullptr; };
          // accessChannelTypeDetails Field Functions 
          bool hasAccessChannelTypeDetails() const { return this->accessChannelTypeDetails_ != nullptr;};
          void deleteAccessChannelTypeDetails() { this->accessChannelTypeDetails_ = nullptr;};
          inline const vector<Inbound::AccessChannelTypeDetails> & getAccessChannelTypeDetails() const { DARABONBA_PTR_GET_CONST(accessChannelTypeDetails_, vector<Inbound::AccessChannelTypeDetails>) };
          inline vector<Inbound::AccessChannelTypeDetails> getAccessChannelTypeDetails() { DARABONBA_PTR_GET(accessChannelTypeDetails_, vector<Inbound::AccessChannelTypeDetails>) };
          inline Inbound& setAccessChannelTypeDetails(const vector<Inbound::AccessChannelTypeDetails> & accessChannelTypeDetails) { DARABONBA_PTR_SET_VALUE(accessChannelTypeDetails_, accessChannelTypeDetails) };
          inline Inbound& setAccessChannelTypeDetails(vector<Inbound::AccessChannelTypeDetails> && accessChannelTypeDetails) { DARABONBA_PTR_SET_RVALUE(accessChannelTypeDetails_, accessChannelTypeDetails) };


          // averageFirstResponseTime Field Functions 
          bool hasAverageFirstResponseTime() const { return this->averageFirstResponseTime_ != nullptr;};
          void deleteAverageFirstResponseTime() { this->averageFirstResponseTime_ = nullptr;};
          inline float getAverageFirstResponseTime() const { DARABONBA_PTR_GET_DEFAULT(averageFirstResponseTime_, 0.0) };
          inline Inbound& setAverageFirstResponseTime(float averageFirstResponseTime) { DARABONBA_PTR_SET_VALUE(averageFirstResponseTime_, averageFirstResponseTime) };


          // averageHoldTime Field Functions 
          bool hasAverageHoldTime() const { return this->averageHoldTime_ != nullptr;};
          void deleteAverageHoldTime() { this->averageHoldTime_ = nullptr;};
          inline float getAverageHoldTime() const { DARABONBA_PTR_GET_DEFAULT(averageHoldTime_, 0.0) };
          inline Inbound& setAverageHoldTime(float averageHoldTime) { DARABONBA_PTR_SET_VALUE(averageHoldTime_, averageHoldTime) };


          // averageResponseTime Field Functions 
          bool hasAverageResponseTime() const { return this->averageResponseTime_ != nullptr;};
          void deleteAverageResponseTime() { this->averageResponseTime_ = nullptr;};
          inline float getAverageResponseTime() const { DARABONBA_PTR_GET_DEFAULT(averageResponseTime_, 0.0) };
          inline Inbound& setAverageResponseTime(float averageResponseTime) { DARABONBA_PTR_SET_VALUE(averageResponseTime_, averageResponseTime) };


          // averageRingTime Field Functions 
          bool hasAverageRingTime() const { return this->averageRingTime_ != nullptr;};
          void deleteAverageRingTime() { this->averageRingTime_ = nullptr;};
          inline float getAverageRingTime() const { DARABONBA_PTR_GET_DEFAULT(averageRingTime_, 0.0) };
          inline Inbound& setAverageRingTime(float averageRingTime) { DARABONBA_PTR_SET_VALUE(averageRingTime_, averageRingTime) };


          // averageTalkTime Field Functions 
          bool hasAverageTalkTime() const { return this->averageTalkTime_ != nullptr;};
          void deleteAverageTalkTime() { this->averageTalkTime_ = nullptr;};
          inline float getAverageTalkTime() const { DARABONBA_PTR_GET_DEFAULT(averageTalkTime_, 0.0) };
          inline Inbound& setAverageTalkTime(float averageTalkTime) { DARABONBA_PTR_SET_VALUE(averageTalkTime_, averageTalkTime) };


          // averageWorkTime Field Functions 
          bool hasAverageWorkTime() const { return this->averageWorkTime_ != nullptr;};
          void deleteAverageWorkTime() { this->averageWorkTime_ = nullptr;};
          inline float getAverageWorkTime() const { DARABONBA_PTR_GET_DEFAULT(averageWorkTime_, 0.0) };
          inline Inbound& setAverageWorkTime(float averageWorkTime) { DARABONBA_PTR_SET_VALUE(averageWorkTime_, averageWorkTime) };


          // callsAttendedTransferIn Field Functions 
          bool hasCallsAttendedTransferIn() const { return this->callsAttendedTransferIn_ != nullptr;};
          void deleteCallsAttendedTransferIn() { this->callsAttendedTransferIn_ = nullptr;};
          inline int64_t getCallsAttendedTransferIn() const { DARABONBA_PTR_GET_DEFAULT(callsAttendedTransferIn_, 0L) };
          inline Inbound& setCallsAttendedTransferIn(int64_t callsAttendedTransferIn) { DARABONBA_PTR_SET_VALUE(callsAttendedTransferIn_, callsAttendedTransferIn) };


          // callsAttendedTransferOut Field Functions 
          bool hasCallsAttendedTransferOut() const { return this->callsAttendedTransferOut_ != nullptr;};
          void deleteCallsAttendedTransferOut() { this->callsAttendedTransferOut_ = nullptr;};
          inline int64_t getCallsAttendedTransferOut() const { DARABONBA_PTR_GET_DEFAULT(callsAttendedTransferOut_, 0L) };
          inline Inbound& setCallsAttendedTransferOut(int64_t callsAttendedTransferOut) { DARABONBA_PTR_SET_VALUE(callsAttendedTransferOut_, callsAttendedTransferOut) };


          // callsBlindTransferIn Field Functions 
          bool hasCallsBlindTransferIn() const { return this->callsBlindTransferIn_ != nullptr;};
          void deleteCallsBlindTransferIn() { this->callsBlindTransferIn_ = nullptr;};
          inline int64_t getCallsBlindTransferIn() const { DARABONBA_PTR_GET_DEFAULT(callsBlindTransferIn_, 0L) };
          inline Inbound& setCallsBlindTransferIn(int64_t callsBlindTransferIn) { DARABONBA_PTR_SET_VALUE(callsBlindTransferIn_, callsBlindTransferIn) };


          // callsBlindTransferOut Field Functions 
          bool hasCallsBlindTransferOut() const { return this->callsBlindTransferOut_ != nullptr;};
          void deleteCallsBlindTransferOut() { this->callsBlindTransferOut_ = nullptr;};
          inline int64_t getCallsBlindTransferOut() const { DARABONBA_PTR_GET_DEFAULT(callsBlindTransferOut_, 0L) };
          inline Inbound& setCallsBlindTransferOut(int64_t callsBlindTransferOut) { DARABONBA_PTR_SET_VALUE(callsBlindTransferOut_, callsBlindTransferOut) };


          // callsHandled Field Functions 
          bool hasCallsHandled() const { return this->callsHandled_ != nullptr;};
          void deleteCallsHandled() { this->callsHandled_ = nullptr;};
          inline int64_t getCallsHandled() const { DARABONBA_PTR_GET_DEFAULT(callsHandled_, 0L) };
          inline Inbound& setCallsHandled(int64_t callsHandled) { DARABONBA_PTR_SET_VALUE(callsHandled_, callsHandled) };


          // callsHold Field Functions 
          bool hasCallsHold() const { return this->callsHold_ != nullptr;};
          void deleteCallsHold() { this->callsHold_ = nullptr;};
          inline int64_t getCallsHold() const { DARABONBA_PTR_GET_DEFAULT(callsHold_, 0L) };
          inline Inbound& setCallsHold(int64_t callsHold) { DARABONBA_PTR_SET_VALUE(callsHold_, callsHold) };


          // callsOffered Field Functions 
          bool hasCallsOffered() const { return this->callsOffered_ != nullptr;};
          void deleteCallsOffered() { this->callsOffered_ = nullptr;};
          inline int64_t getCallsOffered() const { DARABONBA_PTR_GET_DEFAULT(callsOffered_, 0L) };
          inline Inbound& setCallsOffered(int64_t callsOffered) { DARABONBA_PTR_SET_VALUE(callsOffered_, callsOffered) };


          // callsRinged Field Functions 
          bool hasCallsRinged() const { return this->callsRinged_ != nullptr;};
          void deleteCallsRinged() { this->callsRinged_ = nullptr;};
          inline int64_t getCallsRinged() const { DARABONBA_PTR_GET_DEFAULT(callsRinged_, 0L) };
          inline Inbound& setCallsRinged(int64_t callsRinged) { DARABONBA_PTR_SET_VALUE(callsRinged_, callsRinged) };


          // handleRate Field Functions 
          bool hasHandleRate() const { return this->handleRate_ != nullptr;};
          void deleteHandleRate() { this->handleRate_ = nullptr;};
          inline float getHandleRate() const { DARABONBA_PTR_GET_DEFAULT(handleRate_, 0.0) };
          inline Inbound& setHandleRate(float handleRate) { DARABONBA_PTR_SET_VALUE(handleRate_, handleRate) };


          // maxHoldTime Field Functions 
          bool hasMaxHoldTime() const { return this->maxHoldTime_ != nullptr;};
          void deleteMaxHoldTime() { this->maxHoldTime_ = nullptr;};
          inline int64_t getMaxHoldTime() const { DARABONBA_PTR_GET_DEFAULT(maxHoldTime_, 0L) };
          inline Inbound& setMaxHoldTime(int64_t maxHoldTime) { DARABONBA_PTR_SET_VALUE(maxHoldTime_, maxHoldTime) };


          // maxRingTime Field Functions 
          bool hasMaxRingTime() const { return this->maxRingTime_ != nullptr;};
          void deleteMaxRingTime() { this->maxRingTime_ = nullptr;};
          inline int64_t getMaxRingTime() const { DARABONBA_PTR_GET_DEFAULT(maxRingTime_, 0L) };
          inline Inbound& setMaxRingTime(int64_t maxRingTime) { DARABONBA_PTR_SET_VALUE(maxRingTime_, maxRingTime) };


          // maxTalkTime Field Functions 
          bool hasMaxTalkTime() const { return this->maxTalkTime_ != nullptr;};
          void deleteMaxTalkTime() { this->maxTalkTime_ = nullptr;};
          inline int64_t getMaxTalkTime() const { DARABONBA_PTR_GET_DEFAULT(maxTalkTime_, 0L) };
          inline Inbound& setMaxTalkTime(int64_t maxTalkTime) { DARABONBA_PTR_SET_VALUE(maxTalkTime_, maxTalkTime) };


          // maxWorkTime Field Functions 
          bool hasMaxWorkTime() const { return this->maxWorkTime_ != nullptr;};
          void deleteMaxWorkTime() { this->maxWorkTime_ = nullptr;};
          inline int64_t getMaxWorkTime() const { DARABONBA_PTR_GET_DEFAULT(maxWorkTime_, 0L) };
          inline Inbound& setMaxWorkTime(int64_t maxWorkTime) { DARABONBA_PTR_SET_VALUE(maxWorkTime_, maxWorkTime) };


          // satisfactionIndex Field Functions 
          bool hasSatisfactionIndex() const { return this->satisfactionIndex_ != nullptr;};
          void deleteSatisfactionIndex() { this->satisfactionIndex_ = nullptr;};
          inline float getSatisfactionIndex() const { DARABONBA_PTR_GET_DEFAULT(satisfactionIndex_, 0.0) };
          inline Inbound& setSatisfactionIndex(float satisfactionIndex) { DARABONBA_PTR_SET_VALUE(satisfactionIndex_, satisfactionIndex) };


          // satisfactionRate Field Functions 
          bool hasSatisfactionRate() const { return this->satisfactionRate_ != nullptr;};
          void deleteSatisfactionRate() { this->satisfactionRate_ = nullptr;};
          inline float getSatisfactionRate() const { DARABONBA_PTR_GET_DEFAULT(satisfactionRate_, 0.0) };
          inline Inbound& setSatisfactionRate(float satisfactionRate) { DARABONBA_PTR_SET_VALUE(satisfactionRate_, satisfactionRate) };


          // satisfactionSurveysOffered Field Functions 
          bool hasSatisfactionSurveysOffered() const { return this->satisfactionSurveysOffered_ != nullptr;};
          void deleteSatisfactionSurveysOffered() { this->satisfactionSurveysOffered_ = nullptr;};
          inline int64_t getSatisfactionSurveysOffered() const { DARABONBA_PTR_GET_DEFAULT(satisfactionSurveysOffered_, 0L) };
          inline Inbound& setSatisfactionSurveysOffered(int64_t satisfactionSurveysOffered) { DARABONBA_PTR_SET_VALUE(satisfactionSurveysOffered_, satisfactionSurveysOffered) };


          // satisfactionSurveysResponded Field Functions 
          bool hasSatisfactionSurveysResponded() const { return this->satisfactionSurveysResponded_ != nullptr;};
          void deleteSatisfactionSurveysResponded() { this->satisfactionSurveysResponded_ = nullptr;};
          inline int64_t getSatisfactionSurveysResponded() const { DARABONBA_PTR_GET_DEFAULT(satisfactionSurveysResponded_, 0L) };
          inline Inbound& setSatisfactionSurveysResponded(int64_t satisfactionSurveysResponded) { DARABONBA_PTR_SET_VALUE(satisfactionSurveysResponded_, satisfactionSurveysResponded) };


          // serviceLevel15 Field Functions 
          bool hasServiceLevel15() const { return this->serviceLevel15_ != nullptr;};
          void deleteServiceLevel15() { this->serviceLevel15_ = nullptr;};
          inline float getServiceLevel15() const { DARABONBA_PTR_GET_DEFAULT(serviceLevel15_, 0.0) };
          inline Inbound& setServiceLevel15(float serviceLevel15) { DARABONBA_PTR_SET_VALUE(serviceLevel15_, serviceLevel15) };


          // totalHoldTime Field Functions 
          bool hasTotalHoldTime() const { return this->totalHoldTime_ != nullptr;};
          void deleteTotalHoldTime() { this->totalHoldTime_ = nullptr;};
          inline int64_t getTotalHoldTime() const { DARABONBA_PTR_GET_DEFAULT(totalHoldTime_, 0L) };
          inline Inbound& setTotalHoldTime(int64_t totalHoldTime) { DARABONBA_PTR_SET_VALUE(totalHoldTime_, totalHoldTime) };


          // totalMessagesSent Field Functions 
          bool hasTotalMessagesSent() const { return this->totalMessagesSent_ != nullptr;};
          void deleteTotalMessagesSent() { this->totalMessagesSent_ = nullptr;};
          inline int64_t getTotalMessagesSent() const { DARABONBA_PTR_GET_DEFAULT(totalMessagesSent_, 0L) };
          inline Inbound& setTotalMessagesSent(int64_t totalMessagesSent) { DARABONBA_PTR_SET_VALUE(totalMessagesSent_, totalMessagesSent) };


          // totalMessagesSentByAgent Field Functions 
          bool hasTotalMessagesSentByAgent() const { return this->totalMessagesSentByAgent_ != nullptr;};
          void deleteTotalMessagesSentByAgent() { this->totalMessagesSentByAgent_ = nullptr;};
          inline int64_t getTotalMessagesSentByAgent() const { DARABONBA_PTR_GET_DEFAULT(totalMessagesSentByAgent_, 0L) };
          inline Inbound& setTotalMessagesSentByAgent(int64_t totalMessagesSentByAgent) { DARABONBA_PTR_SET_VALUE(totalMessagesSentByAgent_, totalMessagesSentByAgent) };


          // totalMessagesSentByCustomer Field Functions 
          bool hasTotalMessagesSentByCustomer() const { return this->totalMessagesSentByCustomer_ != nullptr;};
          void deleteTotalMessagesSentByCustomer() { this->totalMessagesSentByCustomer_ = nullptr;};
          inline string getTotalMessagesSentByCustomer() const { DARABONBA_PTR_GET_DEFAULT(totalMessagesSentByCustomer_, "") };
          inline Inbound& setTotalMessagesSentByCustomer(string totalMessagesSentByCustomer) { DARABONBA_PTR_SET_VALUE(totalMessagesSentByCustomer_, totalMessagesSentByCustomer) };


          // totalRingTime Field Functions 
          bool hasTotalRingTime() const { return this->totalRingTime_ != nullptr;};
          void deleteTotalRingTime() { this->totalRingTime_ = nullptr;};
          inline int64_t getTotalRingTime() const { DARABONBA_PTR_GET_DEFAULT(totalRingTime_, 0L) };
          inline Inbound& setTotalRingTime(int64_t totalRingTime) { DARABONBA_PTR_SET_VALUE(totalRingTime_, totalRingTime) };


          // totalTalkTime Field Functions 
          bool hasTotalTalkTime() const { return this->totalTalkTime_ != nullptr;};
          void deleteTotalTalkTime() { this->totalTalkTime_ = nullptr;};
          inline int64_t getTotalTalkTime() const { DARABONBA_PTR_GET_DEFAULT(totalTalkTime_, 0L) };
          inline Inbound& setTotalTalkTime(int64_t totalTalkTime) { DARABONBA_PTR_SET_VALUE(totalTalkTime_, totalTalkTime) };


          // totalWorkTime Field Functions 
          bool hasTotalWorkTime() const { return this->totalWorkTime_ != nullptr;};
          void deleteTotalWorkTime() { this->totalWorkTime_ = nullptr;};
          inline int64_t getTotalWorkTime() const { DARABONBA_PTR_GET_DEFAULT(totalWorkTime_, 0L) };
          inline Inbound& setTotalWorkTime(int64_t totalWorkTime) { DARABONBA_PTR_SET_VALUE(totalWorkTime_, totalWorkTime) };


        protected:
          // The statistics by channel.
          shared_ptr<vector<Inbound::AccessChannelTypeDetails>> accessChannelTypeDetails_ {};
          // The average first response time for chat sessions. Unit: seconds.
          shared_ptr<float> averageFirstResponseTime_ {};
          // The average hold time. Formula: TotalHoldTime/CallsHold. Unit: seconds.
          shared_ptr<float> averageHoldTime_ {};
          // The average response time for chat sessions.
          shared_ptr<float> averageResponseTime_ {};
          // The average ring time. Formula: TotalRingTime/CallsRinged. Unit: seconds.
          shared_ptr<float> averageRingTime_ {};
          // The average talk time. Formula: TotalTalkTime/CallsHandled. Unit: seconds.
          shared_ptr<float> averageTalkTime_ {};
          // The average after-call work (ACW) time. Formula: TotalWorkTime/CallsHandled. Unit: seconds.
          shared_ptr<float> averageWorkTime_ {};
          // The number of attended transfers in. If a call is transferred in to this agent multiple times, each transfer is counted separately.
          shared_ptr<int64_t> callsAttendedTransferIn_ {};
          // The number of attended transfers out. If a call is transferred out to other agents multiple times, each transfer is counted separately.
          shared_ptr<int64_t> callsAttendedTransferOut_ {};
          // The number of blind transfers in. If a call is transferred in to this agent multiple times, each transfer is counted separately.
          shared_ptr<int64_t> callsBlindTransferIn_ {};
          // The number of blind transfers out. If a call is transferred out to other agents multiple times, each transfer is counted separately.
          shared_ptr<int64_t> callsBlindTransferOut_ {};
          // The number of calls answered by the agent.
          shared_ptr<int64_t> callsHandled_ {};
          // The number of holds, which is the number of times calls were placed on hold.
          shared_ptr<int64_t> callsHold_ {};
          // The number of calls offered, which is the number of calls assigned to this agent, including calls blind-transferred and attended-transferred from other agents.
          shared_ptr<int64_t> callsOffered_ {};
          // The number of calls that rang the agent.
          shared_ptr<int64_t> callsRinged_ {};
          // The handle rate. Formula: CallsHandled/CallsOffered. Because the answer event and the offered event may fall within different time ranges, the result may exceed 100% in some cases.
          shared_ptr<float> handleRate_ {};
          // The maximum hold time. Unit: seconds.
          shared_ptr<int64_t> maxHoldTime_ {};
          // The maximum ring time. Unit: seconds.
          shared_ptr<int64_t> maxRingTime_ {};
          // The maximum talk time. Unit: seconds.
          shared_ptr<int64_t> maxTalkTime_ {};
          // The maximum after-call work (ACW) time. Unit: seconds.
          shared_ptr<int64_t> maxWorkTime_ {};
          // The satisfaction index, which is the average value of satisfaction survey key presses (single-digit numbers).
          shared_ptr<float> satisfactionIndex_ {};
          // The satisfaction rate. Formula: number of satisfied ratings/number of satisfaction survey responses.
          shared_ptr<float> satisfactionRate_ {};
          // The number of satisfaction surveys sent.
          shared_ptr<int64_t> satisfactionSurveysOffered_ {};
          // The number of satisfaction survey responses.
          shared_ptr<int64_t> satisfactionSurveysResponded_ {};
          // The 15-second service level.
          shared_ptr<float> serviceLevel15_ {};
          // The total hold time. Unit: seconds.
          shared_ptr<int64_t> totalHoldTime_ {};
          // The total number of messages sent in chat sessions.
          shared_ptr<int64_t> totalMessagesSent_ {};
          // The total number of messages sent by the agent in chat sessions.
          shared_ptr<int64_t> totalMessagesSentByAgent_ {};
          // The total number of messages sent by the customer in chat sessions.
          shared_ptr<string> totalMessagesSentByCustomer_ {};
          // The total ring time. Unit: seconds.
          shared_ptr<int64_t> totalRingTime_ {};
          // The total talk time. Unit: seconds.
          shared_ptr<int64_t> totalTalkTime_ {};
          // The total after-call work (ACW) time. Unit: seconds.
          shared_ptr<int64_t> totalWorkTime_ {};
        };

        class Back2Back : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Back2Back& obj) { 
            DARABONBA_PTR_TO_JSON(AgentHandleRate, agentHandleRate_);
            DARABONBA_PTR_TO_JSON(AnswerRate, answerRate_);
            DARABONBA_PTR_TO_JSON(AverageCustomerRingTime, averageCustomerRingTime_);
            DARABONBA_PTR_TO_JSON(AverageRingTime, averageRingTime_);
            DARABONBA_PTR_TO_JSON(AverageTalkTime, averageTalkTime_);
            DARABONBA_PTR_TO_JSON(CallsAgentHandled, callsAgentHandled_);
            DARABONBA_PTR_TO_JSON(CallsAnswered, callsAnswered_);
            DARABONBA_PTR_TO_JSON(CallsCustomerAnswered, callsCustomerAnswered_);
            DARABONBA_PTR_TO_JSON(CallsDialed, callsDialed_);
            DARABONBA_PTR_TO_JSON(CustomerAnswerRate, customerAnswerRate_);
            DARABONBA_PTR_TO_JSON(MaxCustomerRingTime, maxCustomerRingTime_);
            DARABONBA_PTR_TO_JSON(MaxRingTime, maxRingTime_);
            DARABONBA_PTR_TO_JSON(MaxTalkTime, maxTalkTime_);
            DARABONBA_PTR_TO_JSON(TotalCustomerRingTime, totalCustomerRingTime_);
            DARABONBA_PTR_TO_JSON(TotalRingTime, totalRingTime_);
            DARABONBA_PTR_TO_JSON(TotalTalkTime, totalTalkTime_);
          };
          friend void from_json(const Darabonba::Json& j, Back2Back& obj) { 
            DARABONBA_PTR_FROM_JSON(AgentHandleRate, agentHandleRate_);
            DARABONBA_PTR_FROM_JSON(AnswerRate, answerRate_);
            DARABONBA_PTR_FROM_JSON(AverageCustomerRingTime, averageCustomerRingTime_);
            DARABONBA_PTR_FROM_JSON(AverageRingTime, averageRingTime_);
            DARABONBA_PTR_FROM_JSON(AverageTalkTime, averageTalkTime_);
            DARABONBA_PTR_FROM_JSON(CallsAgentHandled, callsAgentHandled_);
            DARABONBA_PTR_FROM_JSON(CallsAnswered, callsAnswered_);
            DARABONBA_PTR_FROM_JSON(CallsCustomerAnswered, callsCustomerAnswered_);
            DARABONBA_PTR_FROM_JSON(CallsDialed, callsDialed_);
            DARABONBA_PTR_FROM_JSON(CustomerAnswerRate, customerAnswerRate_);
            DARABONBA_PTR_FROM_JSON(MaxCustomerRingTime, maxCustomerRingTime_);
            DARABONBA_PTR_FROM_JSON(MaxRingTime, maxRingTime_);
            DARABONBA_PTR_FROM_JSON(MaxTalkTime, maxTalkTime_);
            DARABONBA_PTR_FROM_JSON(TotalCustomerRingTime, totalCustomerRingTime_);
            DARABONBA_PTR_FROM_JSON(TotalRingTime, totalRingTime_);
            DARABONBA_PTR_FROM_JSON(TotalTalkTime, totalTalkTime_);
          };
          Back2Back() = default ;
          Back2Back(const Back2Back &) = default ;
          Back2Back(Back2Back &&) = default ;
          Back2Back(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Back2Back() = default ;
          Back2Back& operator=(const Back2Back &) = default ;
          Back2Back& operator=(Back2Back &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->agentHandleRate_ == nullptr
        && this->answerRate_ == nullptr && this->averageCustomerRingTime_ == nullptr && this->averageRingTime_ == nullptr && this->averageTalkTime_ == nullptr && this->callsAgentHandled_ == nullptr
        && this->callsAnswered_ == nullptr && this->callsCustomerAnswered_ == nullptr && this->callsDialed_ == nullptr && this->customerAnswerRate_ == nullptr && this->maxCustomerRingTime_ == nullptr
        && this->maxRingTime_ == nullptr && this->maxTalkTime_ == nullptr && this->totalCustomerRingTime_ == nullptr && this->totalRingTime_ == nullptr && this->totalTalkTime_ == nullptr; };
          // agentHandleRate Field Functions 
          bool hasAgentHandleRate() const { return this->agentHandleRate_ != nullptr;};
          void deleteAgentHandleRate() { this->agentHandleRate_ = nullptr;};
          inline string getAgentHandleRate() const { DARABONBA_PTR_GET_DEFAULT(agentHandleRate_, "") };
          inline Back2Back& setAgentHandleRate(string agentHandleRate) { DARABONBA_PTR_SET_VALUE(agentHandleRate_, agentHandleRate) };


          // answerRate Field Functions 
          bool hasAnswerRate() const { return this->answerRate_ != nullptr;};
          void deleteAnswerRate() { this->answerRate_ = nullptr;};
          inline string getAnswerRate() const { DARABONBA_PTR_GET_DEFAULT(answerRate_, "") };
          inline Back2Back& setAnswerRate(string answerRate) { DARABONBA_PTR_SET_VALUE(answerRate_, answerRate) };


          // averageCustomerRingTime Field Functions 
          bool hasAverageCustomerRingTime() const { return this->averageCustomerRingTime_ != nullptr;};
          void deleteAverageCustomerRingTime() { this->averageCustomerRingTime_ = nullptr;};
          inline string getAverageCustomerRingTime() const { DARABONBA_PTR_GET_DEFAULT(averageCustomerRingTime_, "") };
          inline Back2Back& setAverageCustomerRingTime(string averageCustomerRingTime) { DARABONBA_PTR_SET_VALUE(averageCustomerRingTime_, averageCustomerRingTime) };


          // averageRingTime Field Functions 
          bool hasAverageRingTime() const { return this->averageRingTime_ != nullptr;};
          void deleteAverageRingTime() { this->averageRingTime_ = nullptr;};
          inline string getAverageRingTime() const { DARABONBA_PTR_GET_DEFAULT(averageRingTime_, "") };
          inline Back2Back& setAverageRingTime(string averageRingTime) { DARABONBA_PTR_SET_VALUE(averageRingTime_, averageRingTime) };


          // averageTalkTime Field Functions 
          bool hasAverageTalkTime() const { return this->averageTalkTime_ != nullptr;};
          void deleteAverageTalkTime() { this->averageTalkTime_ = nullptr;};
          inline string getAverageTalkTime() const { DARABONBA_PTR_GET_DEFAULT(averageTalkTime_, "") };
          inline Back2Back& setAverageTalkTime(string averageTalkTime) { DARABONBA_PTR_SET_VALUE(averageTalkTime_, averageTalkTime) };


          // callsAgentHandled Field Functions 
          bool hasCallsAgentHandled() const { return this->callsAgentHandled_ != nullptr;};
          void deleteCallsAgentHandled() { this->callsAgentHandled_ = nullptr;};
          inline string getCallsAgentHandled() const { DARABONBA_PTR_GET_DEFAULT(callsAgentHandled_, "") };
          inline Back2Back& setCallsAgentHandled(string callsAgentHandled) { DARABONBA_PTR_SET_VALUE(callsAgentHandled_, callsAgentHandled) };


          // callsAnswered Field Functions 
          bool hasCallsAnswered() const { return this->callsAnswered_ != nullptr;};
          void deleteCallsAnswered() { this->callsAnswered_ = nullptr;};
          inline string getCallsAnswered() const { DARABONBA_PTR_GET_DEFAULT(callsAnswered_, "") };
          inline Back2Back& setCallsAnswered(string callsAnswered) { DARABONBA_PTR_SET_VALUE(callsAnswered_, callsAnswered) };


          // callsCustomerAnswered Field Functions 
          bool hasCallsCustomerAnswered() const { return this->callsCustomerAnswered_ != nullptr;};
          void deleteCallsCustomerAnswered() { this->callsCustomerAnswered_ = nullptr;};
          inline string getCallsCustomerAnswered() const { DARABONBA_PTR_GET_DEFAULT(callsCustomerAnswered_, "") };
          inline Back2Back& setCallsCustomerAnswered(string callsCustomerAnswered) { DARABONBA_PTR_SET_VALUE(callsCustomerAnswered_, callsCustomerAnswered) };


          // callsDialed Field Functions 
          bool hasCallsDialed() const { return this->callsDialed_ != nullptr;};
          void deleteCallsDialed() { this->callsDialed_ = nullptr;};
          inline string getCallsDialed() const { DARABONBA_PTR_GET_DEFAULT(callsDialed_, "") };
          inline Back2Back& setCallsDialed(string callsDialed) { DARABONBA_PTR_SET_VALUE(callsDialed_, callsDialed) };


          // customerAnswerRate Field Functions 
          bool hasCustomerAnswerRate() const { return this->customerAnswerRate_ != nullptr;};
          void deleteCustomerAnswerRate() { this->customerAnswerRate_ = nullptr;};
          inline string getCustomerAnswerRate() const { DARABONBA_PTR_GET_DEFAULT(customerAnswerRate_, "") };
          inline Back2Back& setCustomerAnswerRate(string customerAnswerRate) { DARABONBA_PTR_SET_VALUE(customerAnswerRate_, customerAnswerRate) };


          // maxCustomerRingTime Field Functions 
          bool hasMaxCustomerRingTime() const { return this->maxCustomerRingTime_ != nullptr;};
          void deleteMaxCustomerRingTime() { this->maxCustomerRingTime_ = nullptr;};
          inline string getMaxCustomerRingTime() const { DARABONBA_PTR_GET_DEFAULT(maxCustomerRingTime_, "") };
          inline Back2Back& setMaxCustomerRingTime(string maxCustomerRingTime) { DARABONBA_PTR_SET_VALUE(maxCustomerRingTime_, maxCustomerRingTime) };


          // maxRingTime Field Functions 
          bool hasMaxRingTime() const { return this->maxRingTime_ != nullptr;};
          void deleteMaxRingTime() { this->maxRingTime_ = nullptr;};
          inline string getMaxRingTime() const { DARABONBA_PTR_GET_DEFAULT(maxRingTime_, "") };
          inline Back2Back& setMaxRingTime(string maxRingTime) { DARABONBA_PTR_SET_VALUE(maxRingTime_, maxRingTime) };


          // maxTalkTime Field Functions 
          bool hasMaxTalkTime() const { return this->maxTalkTime_ != nullptr;};
          void deleteMaxTalkTime() { this->maxTalkTime_ = nullptr;};
          inline string getMaxTalkTime() const { DARABONBA_PTR_GET_DEFAULT(maxTalkTime_, "") };
          inline Back2Back& setMaxTalkTime(string maxTalkTime) { DARABONBA_PTR_SET_VALUE(maxTalkTime_, maxTalkTime) };


          // totalCustomerRingTime Field Functions 
          bool hasTotalCustomerRingTime() const { return this->totalCustomerRingTime_ != nullptr;};
          void deleteTotalCustomerRingTime() { this->totalCustomerRingTime_ = nullptr;};
          inline string getTotalCustomerRingTime() const { DARABONBA_PTR_GET_DEFAULT(totalCustomerRingTime_, "") };
          inline Back2Back& setTotalCustomerRingTime(string totalCustomerRingTime) { DARABONBA_PTR_SET_VALUE(totalCustomerRingTime_, totalCustomerRingTime) };


          // totalRingTime Field Functions 
          bool hasTotalRingTime() const { return this->totalRingTime_ != nullptr;};
          void deleteTotalRingTime() { this->totalRingTime_ = nullptr;};
          inline string getTotalRingTime() const { DARABONBA_PTR_GET_DEFAULT(totalRingTime_, "") };
          inline Back2Back& setTotalRingTime(string totalRingTime) { DARABONBA_PTR_SET_VALUE(totalRingTime_, totalRingTime) };


          // totalTalkTime Field Functions 
          bool hasTotalTalkTime() const { return this->totalTalkTime_ != nullptr;};
          void deleteTotalTalkTime() { this->totalTalkTime_ = nullptr;};
          inline string getTotalTalkTime() const { DARABONBA_PTR_GET_DEFAULT(totalTalkTime_, "") };
          inline Back2Back& setTotalTalkTime(string totalTalkTime) { DARABONBA_PTR_SET_VALUE(totalTalkTime_, totalTalkTime) };


        protected:
          // The agent answer rate.
          shared_ptr<string> agentHandleRate_ {};
          // The answer rate. Formula: CallsAnswered/CallsDialed. Because the answer event and the dial event may fall within different time ranges, the result may exceed 100% in some cases.
          shared_ptr<string> answerRate_ {};
          // The average customer-side ring duration. Unit: seconds.
          shared_ptr<string> averageCustomerRingTime_ {};
          // The average ring duration. Unit: seconds.
          shared_ptr<string> averageRingTime_ {};
          // The average talk duration. Unit: seconds.
          shared_ptr<string> averageTalkTime_ {};
          // The number of calls answered by the agent.
          shared_ptr<string> callsAgentHandled_ {};
          // The number of calls answered.
          shared_ptr<string> callsAnswered_ {};
          // The number of calls answered by the customer.
          shared_ptr<string> callsCustomerAnswered_ {};
          // The number of calls dialed.
          shared_ptr<string> callsDialed_ {};
          // The customer answer rate.
          shared_ptr<string> customerAnswerRate_ {};
          // The maximum customer-side ring duration. Unit: seconds.
          shared_ptr<string> maxCustomerRingTime_ {};
          // The maximum ring time. Unit: seconds.
          shared_ptr<string> maxRingTime_ {};
          // The maximum talk time. Unit: seconds.
          shared_ptr<string> maxTalkTime_ {};
          // The total customer-side ring duration. Unit: seconds.
          shared_ptr<string> totalCustomerRingTime_ {};
          // The total ring time. Unit: seconds.
          shared_ptr<string> totalRingTime_ {};
          // The total talk time. Unit: seconds.
          shared_ptr<string> totalTalkTime_ {};
        };

        virtual bool empty() const override { return this->agentId_ == nullptr
        && this->agentName_ == nullptr && this->back2Back_ == nullptr && this->displayId_ == nullptr && this->inbound_ == nullptr && this->internal_ == nullptr
        && this->outbound_ == nullptr && this->overall_ == nullptr && this->skillGroupIds_ == nullptr && this->skillGroupNames_ == nullptr; };
        // agentId Field Functions 
        bool hasAgentId() const { return this->agentId_ != nullptr;};
        void deleteAgentId() { this->agentId_ = nullptr;};
        inline string getAgentId() const { DARABONBA_PTR_GET_DEFAULT(agentId_, "") };
        inline List& setAgentId(string agentId) { DARABONBA_PTR_SET_VALUE(agentId_, agentId) };


        // agentName Field Functions 
        bool hasAgentName() const { return this->agentName_ != nullptr;};
        void deleteAgentName() { this->agentName_ = nullptr;};
        inline string getAgentName() const { DARABONBA_PTR_GET_DEFAULT(agentName_, "") };
        inline List& setAgentName(string agentName) { DARABONBA_PTR_SET_VALUE(agentName_, agentName) };


        // back2Back Field Functions 
        bool hasBack2Back() const { return this->back2Back_ != nullptr;};
        void deleteBack2Back() { this->back2Back_ = nullptr;};
        inline const List::Back2Back & getBack2Back() const { DARABONBA_PTR_GET_CONST(back2Back_, List::Back2Back) };
        inline List::Back2Back getBack2Back() { DARABONBA_PTR_GET(back2Back_, List::Back2Back) };
        inline List& setBack2Back(const List::Back2Back & back2Back) { DARABONBA_PTR_SET_VALUE(back2Back_, back2Back) };
        inline List& setBack2Back(List::Back2Back && back2Back) { DARABONBA_PTR_SET_RVALUE(back2Back_, back2Back) };


        // displayId Field Functions 
        bool hasDisplayId() const { return this->displayId_ != nullptr;};
        void deleteDisplayId() { this->displayId_ = nullptr;};
        inline string getDisplayId() const { DARABONBA_PTR_GET_DEFAULT(displayId_, "") };
        inline List& setDisplayId(string displayId) { DARABONBA_PTR_SET_VALUE(displayId_, displayId) };


        // inbound Field Functions 
        bool hasInbound() const { return this->inbound_ != nullptr;};
        void deleteInbound() { this->inbound_ = nullptr;};
        inline const List::Inbound & getInbound() const { DARABONBA_PTR_GET_CONST(inbound_, List::Inbound) };
        inline List::Inbound getInbound() { DARABONBA_PTR_GET(inbound_, List::Inbound) };
        inline List& setInbound(const List::Inbound & inbound) { DARABONBA_PTR_SET_VALUE(inbound_, inbound) };
        inline List& setInbound(List::Inbound && inbound) { DARABONBA_PTR_SET_RVALUE(inbound_, inbound) };


        // internal Field Functions 
        bool hasInternal() const { return this->internal_ != nullptr;};
        void deleteInternal() { this->internal_ = nullptr;};
        inline const List::Internal & getInternal() const { DARABONBA_PTR_GET_CONST(internal_, List::Internal) };
        inline List::Internal getInternal() { DARABONBA_PTR_GET(internal_, List::Internal) };
        inline List& setInternal(const List::Internal & internal) { DARABONBA_PTR_SET_VALUE(internal_, internal) };
        inline List& setInternal(List::Internal && internal) { DARABONBA_PTR_SET_RVALUE(internal_, internal) };


        // outbound Field Functions 
        bool hasOutbound() const { return this->outbound_ != nullptr;};
        void deleteOutbound() { this->outbound_ = nullptr;};
        inline const List::Outbound & getOutbound() const { DARABONBA_PTR_GET_CONST(outbound_, List::Outbound) };
        inline List::Outbound getOutbound() { DARABONBA_PTR_GET(outbound_, List::Outbound) };
        inline List& setOutbound(const List::Outbound & outbound) { DARABONBA_PTR_SET_VALUE(outbound_, outbound) };
        inline List& setOutbound(List::Outbound && outbound) { DARABONBA_PTR_SET_RVALUE(outbound_, outbound) };


        // overall Field Functions 
        bool hasOverall() const { return this->overall_ != nullptr;};
        void deleteOverall() { this->overall_ = nullptr;};
        inline const List::Overall & getOverall() const { DARABONBA_PTR_GET_CONST(overall_, List::Overall) };
        inline List::Overall getOverall() { DARABONBA_PTR_GET(overall_, List::Overall) };
        inline List& setOverall(const List::Overall & overall) { DARABONBA_PTR_SET_VALUE(overall_, overall) };
        inline List& setOverall(List::Overall && overall) { DARABONBA_PTR_SET_RVALUE(overall_, overall) };


        // skillGroupIds Field Functions 
        bool hasSkillGroupIds() const { return this->skillGroupIds_ != nullptr;};
        void deleteSkillGroupIds() { this->skillGroupIds_ = nullptr;};
        inline string getSkillGroupIds() const { DARABONBA_PTR_GET_DEFAULT(skillGroupIds_, "") };
        inline List& setSkillGroupIds(string skillGroupIds) { DARABONBA_PTR_SET_VALUE(skillGroupIds_, skillGroupIds) };


        // skillGroupNames Field Functions 
        bool hasSkillGroupNames() const { return this->skillGroupNames_ != nullptr;};
        void deleteSkillGroupNames() { this->skillGroupNames_ = nullptr;};
        inline string getSkillGroupNames() const { DARABONBA_PTR_GET_DEFAULT(skillGroupNames_, "") };
        inline List& setSkillGroupNames(string skillGroupNames) { DARABONBA_PTR_SET_VALUE(skillGroupNames_, skillGroupNames) };


      protected:
        // The agent ID.
        shared_ptr<string> agentId_ {};
        // The agent name.
        shared_ptr<string> agentName_ {};
        // The back-to-back call metrics.
        shared_ptr<List::Back2Back> back2Back_ {};
        // The agent display ID.
        shared_ptr<string> displayId_ {};
        // The inbound data.
        shared_ptr<List::Inbound> inbound_ {};
        // The internal call metrics.
        shared_ptr<List::Internal> internal_ {};
        // The outbound data.
        shared_ptr<List::Outbound> outbound_ {};
        // The overall data.
        shared_ptr<List::Overall> overall_ {};
        // The list of skill group IDs to which the agent belongs. The format is a JSON array character string. Each array element is a skill group ID.
        shared_ptr<string> skillGroupIds_ {};
        // The list of skill group names to which the agent belongs. The format is a JSON array character string. Each array element is a skill group name.
        shared_ptr<string> skillGroupNames_ {};
      };

      virtual bool empty() const override { return this->list_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
      // list Field Functions 
      bool hasList() const { return this->list_ != nullptr;};
      void deleteList() { this->list_ = nullptr;};
      inline const vector<Data::List> & getList() const { DARABONBA_PTR_GET_CONST(list_, vector<Data::List>) };
      inline vector<Data::List> getList() { DARABONBA_PTR_GET(list_, vector<Data::List>) };
      inline Data& setList(const vector<Data::List> & list) { DARABONBA_PTR_SET_VALUE(list_, list) };
      inline Data& setList(vector<Data::List> && list) { DARABONBA_PTR_SET_RVALUE(list_, list) };


      // pageNumber Field Functions 
      bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
      void deletePageNumber() { this->pageNumber_ = nullptr;};
      inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
      inline Data& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline Data& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline Data& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The list of agent historical data.
      shared_ptr<vector<Data::List>> list_ {};
      // The page number. Valid values: 1 to 100.
      shared_ptr<int32_t> pageNumber_ {};
      // The page size. Valid values: 1 to 100.
      shared_ptr<int32_t> pageSize_ {};
      // The total count.
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListHistoricalAgentReportResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListHistoricalAgentReportResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListHistoricalAgentReportResponseBody::Data) };
    inline ListHistoricalAgentReportResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListHistoricalAgentReportResponseBody::Data) };
    inline ListHistoricalAgentReportResponseBody& setData(const ListHistoricalAgentReportResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListHistoricalAgentReportResponseBody& setData(ListHistoricalAgentReportResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListHistoricalAgentReportResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListHistoricalAgentReportResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListHistoricalAgentReportResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The response code.
    shared_ptr<string> code_ {};
    // The data.
    shared_ptr<ListHistoricalAgentReportResponseBody::Data> data_ {};
    // The HTTP status code.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The response message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
