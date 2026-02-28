// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSKILLGROUPSUMMARYREPORTSSINCEMIDNIGHTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSKILLGROUPSUMMARYREPORTSSINCEMIDNIGHTRESPONSEBODY_HPP_
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
  class ListSkillGroupSummaryReportsSinceMidnightResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSkillGroupSummaryReportsSinceMidnightResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(PagedSkillGroupSummaryReport, pagedSkillGroupSummaryReport_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListSkillGroupSummaryReportsSinceMidnightResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(PagedSkillGroupSummaryReport, pagedSkillGroupSummaryReport_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListSkillGroupSummaryReportsSinceMidnightResponseBody() = default ;
    ListSkillGroupSummaryReportsSinceMidnightResponseBody(const ListSkillGroupSummaryReportsSinceMidnightResponseBody &) = default ;
    ListSkillGroupSummaryReportsSinceMidnightResponseBody(ListSkillGroupSummaryReportsSinceMidnightResponseBody &&) = default ;
    ListSkillGroupSummaryReportsSinceMidnightResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSkillGroupSummaryReportsSinceMidnightResponseBody() = default ;
    ListSkillGroupSummaryReportsSinceMidnightResponseBody& operator=(const ListSkillGroupSummaryReportsSinceMidnightResponseBody &) = default ;
    ListSkillGroupSummaryReportsSinceMidnightResponseBody& operator=(ListSkillGroupSummaryReportsSinceMidnightResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PagedSkillGroupSummaryReport : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PagedSkillGroupSummaryReport& obj) { 
        DARABONBA_PTR_TO_JSON(List, list_);
        DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, PagedSkillGroupSummaryReport& obj) { 
        DARABONBA_PTR_FROM_JSON(List, list_);
        DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      PagedSkillGroupSummaryReport() = default ;
      PagedSkillGroupSummaryReport(const PagedSkillGroupSummaryReport &) = default ;
      PagedSkillGroupSummaryReport(PagedSkillGroupSummaryReport &&) = default ;
      PagedSkillGroupSummaryReport(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PagedSkillGroupSummaryReport() = default ;
      PagedSkillGroupSummaryReport& operator=(const PagedSkillGroupSummaryReport &) = default ;
      PagedSkillGroupSummaryReport& operator=(PagedSkillGroupSummaryReport &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class List : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const List& obj) { 
          DARABONBA_PTR_TO_JSON(Inbound, inbound_);
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_TO_JSON(Outbound, outbound_);
          DARABONBA_PTR_TO_JSON(Overall, overall_);
          DARABONBA_PTR_TO_JSON(SkillGroupId, skillGroupId_);
          DARABONBA_PTR_TO_JSON(SkillGroupName, skillGroupName_);
          DARABONBA_PTR_TO_JSON(Timestamp, timestamp_);
        };
        friend void from_json(const Darabonba::Json& j, List& obj) { 
          DARABONBA_PTR_FROM_JSON(Inbound, inbound_);
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_FROM_JSON(Outbound, outbound_);
          DARABONBA_PTR_FROM_JSON(Overall, overall_);
          DARABONBA_PTR_FROM_JSON(SkillGroupId, skillGroupId_);
          DARABONBA_PTR_FROM_JSON(SkillGroupName, skillGroupName_);
          DARABONBA_PTR_FROM_JSON(Timestamp, timestamp_);
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
            DARABONBA_PTR_TO_JSON(AverageReadyTime, averageReadyTime_);
            DARABONBA_PTR_TO_JSON(AverageTalkTime, averageTalkTime_);
            DARABONBA_PTR_TO_JSON(AverageWorkTime, averageWorkTime_);
            DARABONBA_PTR_TO_JSON(MaxReadyTime, maxReadyTime_);
            DARABONBA_PTR_TO_JSON(MaxTalkTime, maxTalkTime_);
            DARABONBA_PTR_TO_JSON(MaxWorkTime, maxWorkTime_);
            DARABONBA_PTR_TO_JSON(OccupancyRate, occupancyRate_);
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
          friend void from_json(const Darabonba::Json& j, Overall& obj) { 
            DARABONBA_PTR_FROM_JSON(AverageReadyTime, averageReadyTime_);
            DARABONBA_PTR_FROM_JSON(AverageTalkTime, averageTalkTime_);
            DARABONBA_PTR_FROM_JSON(AverageWorkTime, averageWorkTime_);
            DARABONBA_PTR_FROM_JSON(MaxReadyTime, maxReadyTime_);
            DARABONBA_PTR_FROM_JSON(MaxTalkTime, maxTalkTime_);
            DARABONBA_PTR_FROM_JSON(MaxWorkTime, maxWorkTime_);
            DARABONBA_PTR_FROM_JSON(OccupancyRate, occupancyRate_);
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
          virtual bool empty() const override { return this->averageReadyTime_ == nullptr
        && this->averageTalkTime_ == nullptr && this->averageWorkTime_ == nullptr && this->maxReadyTime_ == nullptr && this->maxTalkTime_ == nullptr && this->maxWorkTime_ == nullptr
        && this->occupancyRate_ == nullptr && this->satisfactionIndex_ == nullptr && this->satisfactionSurveysOffered_ == nullptr && this->satisfactionSurveysResponded_ == nullptr && this->totalBreakTime_ == nullptr
        && this->totalCalls_ == nullptr && this->totalLoggedInTime_ == nullptr && this->totalReadyTime_ == nullptr && this->totalTalkTime_ == nullptr && this->totalWorkTime_ == nullptr; };
          // averageReadyTime Field Functions 
          bool hasAverageReadyTime() const { return this->averageReadyTime_ != nullptr;};
          void deleteAverageReadyTime() { this->averageReadyTime_ = nullptr;};
          inline int64_t getAverageReadyTime() const { DARABONBA_PTR_GET_DEFAULT(averageReadyTime_, 0L) };
          inline Overall& setAverageReadyTime(int64_t averageReadyTime) { DARABONBA_PTR_SET_VALUE(averageReadyTime_, averageReadyTime) };


          // averageTalkTime Field Functions 
          bool hasAverageTalkTime() const { return this->averageTalkTime_ != nullptr;};
          void deleteAverageTalkTime() { this->averageTalkTime_ = nullptr;};
          inline int64_t getAverageTalkTime() const { DARABONBA_PTR_GET_DEFAULT(averageTalkTime_, 0L) };
          inline Overall& setAverageTalkTime(int64_t averageTalkTime) { DARABONBA_PTR_SET_VALUE(averageTalkTime_, averageTalkTime) };


          // averageWorkTime Field Functions 
          bool hasAverageWorkTime() const { return this->averageWorkTime_ != nullptr;};
          void deleteAverageWorkTime() { this->averageWorkTime_ = nullptr;};
          inline int64_t getAverageWorkTime() const { DARABONBA_PTR_GET_DEFAULT(averageWorkTime_, 0L) };
          inline Overall& setAverageWorkTime(int64_t averageWorkTime) { DARABONBA_PTR_SET_VALUE(averageWorkTime_, averageWorkTime) };


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


          // totalLoggedInTime Field Functions 
          bool hasTotalLoggedInTime() const { return this->totalLoggedInTime_ != nullptr;};
          void deleteTotalLoggedInTime() { this->totalLoggedInTime_ = nullptr;};
          inline int64_t getTotalLoggedInTime() const { DARABONBA_PTR_GET_DEFAULT(totalLoggedInTime_, 0L) };
          inline Overall& setTotalLoggedInTime(int64_t totalLoggedInTime) { DARABONBA_PTR_SET_VALUE(totalLoggedInTime_, totalLoggedInTime) };


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
          shared_ptr<int64_t> averageReadyTime_ {};
          shared_ptr<int64_t> averageTalkTime_ {};
          shared_ptr<int64_t> averageWorkTime_ {};
          shared_ptr<int64_t> maxReadyTime_ {};
          shared_ptr<int64_t> maxTalkTime_ {};
          shared_ptr<int64_t> maxWorkTime_ {};
          shared_ptr<float> occupancyRate_ {};
          shared_ptr<float> satisfactionIndex_ {};
          shared_ptr<int64_t> satisfactionSurveysOffered_ {};
          shared_ptr<int64_t> satisfactionSurveysResponded_ {};
          shared_ptr<int64_t> totalBreakTime_ {};
          shared_ptr<int64_t> totalCalls_ {};
          shared_ptr<int64_t> totalLoggedInTime_ {};
          shared_ptr<int64_t> totalReadyTime_ {};
          shared_ptr<int64_t> totalTalkTime_ {};
          shared_ptr<int64_t> totalWorkTime_ {};
        };

        class Outbound : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Outbound& obj) { 
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
          friend void from_json(const Darabonba::Json& j, Outbound& obj) { 
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
        && this->averageDialingTime_ == nullptr && this->averageTalkTime_ == nullptr && this->averageWorkTime_ == nullptr && this->callsAbandoned_ == nullptr && this->callsAgentHandled_ == nullptr
        && this->callsAnswered_ == nullptr && this->callsDialed_ == nullptr && this->callsOffered_ == nullptr && this->callsQueuingCancelled_ == nullptr && this->callsQueuingFailed_ == nullptr
        && this->callsQueuingFailure_ == nullptr && this->callsQueuingOverflow_ == nullptr && this->callsQueuingRerouted_ == nullptr && this->callsQueuingTimeout_ == nullptr && this->callsServiceLevel30_ == nullptr
        && this->callsServiceLevel30V2_ == nullptr && this->maxDialingTime_ == nullptr && this->maxTalkTime_ == nullptr && this->maxWorkTime_ == nullptr && this->satisfactionIndex_ == nullptr
        && this->satisfactionSurveysOffered_ == nullptr && this->satisfactionSurveysResponded_ == nullptr && this->totalDialingTime_ == nullptr && this->totalTalkTime_ == nullptr && this->totalWaitTime_ == nullptr
        && this->totalWorkTime_ == nullptr; };
          // answerRate Field Functions 
          bool hasAnswerRate() const { return this->answerRate_ != nullptr;};
          void deleteAnswerRate() { this->answerRate_ = nullptr;};
          inline float getAnswerRate() const { DARABONBA_PTR_GET_DEFAULT(answerRate_, 0.0) };
          inline Outbound& setAnswerRate(float answerRate) { DARABONBA_PTR_SET_VALUE(answerRate_, answerRate) };


          // averageDialingTime Field Functions 
          bool hasAverageDialingTime() const { return this->averageDialingTime_ != nullptr;};
          void deleteAverageDialingTime() { this->averageDialingTime_ = nullptr;};
          inline int64_t getAverageDialingTime() const { DARABONBA_PTR_GET_DEFAULT(averageDialingTime_, 0L) };
          inline Outbound& setAverageDialingTime(int64_t averageDialingTime) { DARABONBA_PTR_SET_VALUE(averageDialingTime_, averageDialingTime) };


          // averageTalkTime Field Functions 
          bool hasAverageTalkTime() const { return this->averageTalkTime_ != nullptr;};
          void deleteAverageTalkTime() { this->averageTalkTime_ = nullptr;};
          inline int64_t getAverageTalkTime() const { DARABONBA_PTR_GET_DEFAULT(averageTalkTime_, 0L) };
          inline Outbound& setAverageTalkTime(int64_t averageTalkTime) { DARABONBA_PTR_SET_VALUE(averageTalkTime_, averageTalkTime) };


          // averageWorkTime Field Functions 
          bool hasAverageWorkTime() const { return this->averageWorkTime_ != nullptr;};
          void deleteAverageWorkTime() { this->averageWorkTime_ = nullptr;};
          inline int64_t getAverageWorkTime() const { DARABONBA_PTR_GET_DEFAULT(averageWorkTime_, 0L) };
          inline Outbound& setAverageWorkTime(int64_t averageWorkTime) { DARABONBA_PTR_SET_VALUE(averageWorkTime_, averageWorkTime) };


          // callsAbandoned Field Functions 
          bool hasCallsAbandoned() const { return this->callsAbandoned_ != nullptr;};
          void deleteCallsAbandoned() { this->callsAbandoned_ = nullptr;};
          inline int64_t getCallsAbandoned() const { DARABONBA_PTR_GET_DEFAULT(callsAbandoned_, 0L) };
          inline Outbound& setCallsAbandoned(int64_t callsAbandoned) { DARABONBA_PTR_SET_VALUE(callsAbandoned_, callsAbandoned) };


          // callsAgentHandled Field Functions 
          bool hasCallsAgentHandled() const { return this->callsAgentHandled_ != nullptr;};
          void deleteCallsAgentHandled() { this->callsAgentHandled_ = nullptr;};
          inline int64_t getCallsAgentHandled() const { DARABONBA_PTR_GET_DEFAULT(callsAgentHandled_, 0L) };
          inline Outbound& setCallsAgentHandled(int64_t callsAgentHandled) { DARABONBA_PTR_SET_VALUE(callsAgentHandled_, callsAgentHandled) };


          // callsAnswered Field Functions 
          bool hasCallsAnswered() const { return this->callsAnswered_ != nullptr;};
          void deleteCallsAnswered() { this->callsAnswered_ = nullptr;};
          inline int64_t getCallsAnswered() const { DARABONBA_PTR_GET_DEFAULT(callsAnswered_, 0L) };
          inline Outbound& setCallsAnswered(int64_t callsAnswered) { DARABONBA_PTR_SET_VALUE(callsAnswered_, callsAnswered) };


          // callsDialed Field Functions 
          bool hasCallsDialed() const { return this->callsDialed_ != nullptr;};
          void deleteCallsDialed() { this->callsDialed_ = nullptr;};
          inline int64_t getCallsDialed() const { DARABONBA_PTR_GET_DEFAULT(callsDialed_, 0L) };
          inline Outbound& setCallsDialed(int64_t callsDialed) { DARABONBA_PTR_SET_VALUE(callsDialed_, callsDialed) };


          // callsOffered Field Functions 
          bool hasCallsOffered() const { return this->callsOffered_ != nullptr;};
          void deleteCallsOffered() { this->callsOffered_ = nullptr;};
          inline int64_t getCallsOffered() const { DARABONBA_PTR_GET_DEFAULT(callsOffered_, 0L) };
          inline Outbound& setCallsOffered(int64_t callsOffered) { DARABONBA_PTR_SET_VALUE(callsOffered_, callsOffered) };


          // callsQueuingCancelled Field Functions 
          bool hasCallsQueuingCancelled() const { return this->callsQueuingCancelled_ != nullptr;};
          void deleteCallsQueuingCancelled() { this->callsQueuingCancelled_ = nullptr;};
          inline int64_t getCallsQueuingCancelled() const { DARABONBA_PTR_GET_DEFAULT(callsQueuingCancelled_, 0L) };
          inline Outbound& setCallsQueuingCancelled(int64_t callsQueuingCancelled) { DARABONBA_PTR_SET_VALUE(callsQueuingCancelled_, callsQueuingCancelled) };


          // callsQueuingFailed Field Functions 
          bool hasCallsQueuingFailed() const { return this->callsQueuingFailed_ != nullptr;};
          void deleteCallsQueuingFailed() { this->callsQueuingFailed_ = nullptr;};
          inline int64_t getCallsQueuingFailed() const { DARABONBA_PTR_GET_DEFAULT(callsQueuingFailed_, 0L) };
          inline Outbound& setCallsQueuingFailed(int64_t callsQueuingFailed) { DARABONBA_PTR_SET_VALUE(callsQueuingFailed_, callsQueuingFailed) };


          // callsQueuingFailure Field Functions 
          bool hasCallsQueuingFailure() const { return this->callsQueuingFailure_ != nullptr;};
          void deleteCallsQueuingFailure() { this->callsQueuingFailure_ = nullptr;};
          inline int64_t getCallsQueuingFailure() const { DARABONBA_PTR_GET_DEFAULT(callsQueuingFailure_, 0L) };
          inline Outbound& setCallsQueuingFailure(int64_t callsQueuingFailure) { DARABONBA_PTR_SET_VALUE(callsQueuingFailure_, callsQueuingFailure) };


          // callsQueuingOverflow Field Functions 
          bool hasCallsQueuingOverflow() const { return this->callsQueuingOverflow_ != nullptr;};
          void deleteCallsQueuingOverflow() { this->callsQueuingOverflow_ = nullptr;};
          inline int64_t getCallsQueuingOverflow() const { DARABONBA_PTR_GET_DEFAULT(callsQueuingOverflow_, 0L) };
          inline Outbound& setCallsQueuingOverflow(int64_t callsQueuingOverflow) { DARABONBA_PTR_SET_VALUE(callsQueuingOverflow_, callsQueuingOverflow) };


          // callsQueuingRerouted Field Functions 
          bool hasCallsQueuingRerouted() const { return this->callsQueuingRerouted_ != nullptr;};
          void deleteCallsQueuingRerouted() { this->callsQueuingRerouted_ = nullptr;};
          inline int64_t getCallsQueuingRerouted() const { DARABONBA_PTR_GET_DEFAULT(callsQueuingRerouted_, 0L) };
          inline Outbound& setCallsQueuingRerouted(int64_t callsQueuingRerouted) { DARABONBA_PTR_SET_VALUE(callsQueuingRerouted_, callsQueuingRerouted) };


          // callsQueuingTimeout Field Functions 
          bool hasCallsQueuingTimeout() const { return this->callsQueuingTimeout_ != nullptr;};
          void deleteCallsQueuingTimeout() { this->callsQueuingTimeout_ = nullptr;};
          inline int64_t getCallsQueuingTimeout() const { DARABONBA_PTR_GET_DEFAULT(callsQueuingTimeout_, 0L) };
          inline Outbound& setCallsQueuingTimeout(int64_t callsQueuingTimeout) { DARABONBA_PTR_SET_VALUE(callsQueuingTimeout_, callsQueuingTimeout) };


          // callsServiceLevel30 Field Functions 
          bool hasCallsServiceLevel30() const { return this->callsServiceLevel30_ != nullptr;};
          void deleteCallsServiceLevel30() { this->callsServiceLevel30_ = nullptr;};
          inline string getCallsServiceLevel30() const { DARABONBA_PTR_GET_DEFAULT(callsServiceLevel30_, "") };
          inline Outbound& setCallsServiceLevel30(string callsServiceLevel30) { DARABONBA_PTR_SET_VALUE(callsServiceLevel30_, callsServiceLevel30) };


          // callsServiceLevel30V2 Field Functions 
          bool hasCallsServiceLevel30V2() const { return this->callsServiceLevel30V2_ != nullptr;};
          void deleteCallsServiceLevel30V2() { this->callsServiceLevel30V2_ = nullptr;};
          inline int64_t getCallsServiceLevel30V2() const { DARABONBA_PTR_GET_DEFAULT(callsServiceLevel30V2_, 0L) };
          inline Outbound& setCallsServiceLevel30V2(int64_t callsServiceLevel30V2) { DARABONBA_PTR_SET_VALUE(callsServiceLevel30V2_, callsServiceLevel30V2) };


          // maxDialingTime Field Functions 
          bool hasMaxDialingTime() const { return this->maxDialingTime_ != nullptr;};
          void deleteMaxDialingTime() { this->maxDialingTime_ = nullptr;};
          inline int64_t getMaxDialingTime() const { DARABONBA_PTR_GET_DEFAULT(maxDialingTime_, 0L) };
          inline Outbound& setMaxDialingTime(int64_t maxDialingTime) { DARABONBA_PTR_SET_VALUE(maxDialingTime_, maxDialingTime) };


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


          // totalTalkTime Field Functions 
          bool hasTotalTalkTime() const { return this->totalTalkTime_ != nullptr;};
          void deleteTotalTalkTime() { this->totalTalkTime_ = nullptr;};
          inline int64_t getTotalTalkTime() const { DARABONBA_PTR_GET_DEFAULT(totalTalkTime_, 0L) };
          inline Outbound& setTotalTalkTime(int64_t totalTalkTime) { DARABONBA_PTR_SET_VALUE(totalTalkTime_, totalTalkTime) };


          // totalWaitTime Field Functions 
          bool hasTotalWaitTime() const { return this->totalWaitTime_ != nullptr;};
          void deleteTotalWaitTime() { this->totalWaitTime_ = nullptr;};
          inline int64_t getTotalWaitTime() const { DARABONBA_PTR_GET_DEFAULT(totalWaitTime_, 0L) };
          inline Outbound& setTotalWaitTime(int64_t totalWaitTime) { DARABONBA_PTR_SET_VALUE(totalWaitTime_, totalWaitTime) };


          // totalWorkTime Field Functions 
          bool hasTotalWorkTime() const { return this->totalWorkTime_ != nullptr;};
          void deleteTotalWorkTime() { this->totalWorkTime_ = nullptr;};
          inline int64_t getTotalWorkTime() const { DARABONBA_PTR_GET_DEFAULT(totalWorkTime_, 0L) };
          inline Outbound& setTotalWorkTime(int64_t totalWorkTime) { DARABONBA_PTR_SET_VALUE(totalWorkTime_, totalWorkTime) };


        protected:
          shared_ptr<float> answerRate_ {};
          shared_ptr<int64_t> averageDialingTime_ {};
          shared_ptr<int64_t> averageTalkTime_ {};
          shared_ptr<int64_t> averageWorkTime_ {};
          shared_ptr<int64_t> callsAbandoned_ {};
          shared_ptr<int64_t> callsAgentHandled_ {};
          shared_ptr<int64_t> callsAnswered_ {};
          shared_ptr<int64_t> callsDialed_ {};
          shared_ptr<int64_t> callsOffered_ {};
          shared_ptr<int64_t> callsQueuingCancelled_ {};
          shared_ptr<int64_t> callsQueuingFailed_ {};
          shared_ptr<int64_t> callsQueuingFailure_ {};
          shared_ptr<int64_t> callsQueuingOverflow_ {};
          shared_ptr<int64_t> callsQueuingRerouted_ {};
          shared_ptr<int64_t> callsQueuingTimeout_ {};
          shared_ptr<string> callsServiceLevel30_ {};
          shared_ptr<int64_t> callsServiceLevel30V2_ {};
          shared_ptr<int64_t> maxDialingTime_ {};
          shared_ptr<int64_t> maxTalkTime_ {};
          shared_ptr<int64_t> maxWorkTime_ {};
          shared_ptr<float> satisfactionIndex_ {};
          shared_ptr<int64_t> satisfactionSurveysOffered_ {};
          shared_ptr<int64_t> satisfactionSurveysResponded_ {};
          shared_ptr<int64_t> totalDialingTime_ {};
          shared_ptr<int64_t> totalTalkTime_ {};
          shared_ptr<int64_t> totalWaitTime_ {};
          shared_ptr<int64_t> totalWorkTime_ {};
        };

        class Inbound : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Inbound& obj) { 
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
          friend void from_json(const Darabonba::Json& j, Inbound& obj) { 
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
          virtual bool empty() const override { return this->abandonedInQueueOfQueueCount_ == nullptr
        && this->answeredByAgentOfQueueCount_ == nullptr && this->answeredByAgentOfQueueMaxWaitTimeDuration_ == nullptr && this->answeredByAgentOfQueueWaitTimeDuration_ == nullptr && this->averageRingTime_ == nullptr && this->averageTalkTime_ == nullptr
        && this->averageWorkTime_ == nullptr && this->callsAbandoned_ == nullptr && this->callsAttendedTransferOut_ == nullptr && this->callsBlindTransferOut_ == nullptr && this->callsHandled_ == nullptr
        && this->callsOffered_ == nullptr && this->callsOverflow_ == nullptr && this->callsQueuingCanceled_ == nullptr && this->callsQueuingFailure_ == nullptr && this->callsQueuingRerouted_ == nullptr
        && this->callsQueuingTimeout_ == nullptr && this->callsServiceLevel10_ == nullptr && this->callsServiceLevel20_ == nullptr && this->callsServiceLevel30_ == nullptr && this->callsTimeout_ == nullptr
        && this->giveUpByAgentOfQueueCount_ == nullptr && this->handleRate_ == nullptr && this->inComingQueueOfQueueCount_ == nullptr && this->maxRingTime_ == nullptr && this->maxTalkTime_ == nullptr
        && this->maxWorkTime_ == nullptr && this->overFlowInQueueOfQueueCount_ == nullptr && this->queueMaxWaitTimeDuration_ == nullptr && this->queueWaitTimeDuration_ == nullptr && this->satisfactionIndex_ == nullptr
        && this->satisfactionSurveysOffered_ == nullptr && this->satisfactionSurveysResponded_ == nullptr && this->serviceLevel20_ == nullptr && this->totalRingTime_ == nullptr && this->totalTalkTime_ == nullptr
        && this->totalWorkTime_ == nullptr; };
          // abandonedInQueueOfQueueCount Field Functions 
          bool hasAbandonedInQueueOfQueueCount() const { return this->abandonedInQueueOfQueueCount_ != nullptr;};
          void deleteAbandonedInQueueOfQueueCount() { this->abandonedInQueueOfQueueCount_ = nullptr;};
          inline int64_t getAbandonedInQueueOfQueueCount() const { DARABONBA_PTR_GET_DEFAULT(abandonedInQueueOfQueueCount_, 0L) };
          inline Inbound& setAbandonedInQueueOfQueueCount(int64_t abandonedInQueueOfQueueCount) { DARABONBA_PTR_SET_VALUE(abandonedInQueueOfQueueCount_, abandonedInQueueOfQueueCount) };


          // answeredByAgentOfQueueCount Field Functions 
          bool hasAnsweredByAgentOfQueueCount() const { return this->answeredByAgentOfQueueCount_ != nullptr;};
          void deleteAnsweredByAgentOfQueueCount() { this->answeredByAgentOfQueueCount_ = nullptr;};
          inline int64_t getAnsweredByAgentOfQueueCount() const { DARABONBA_PTR_GET_DEFAULT(answeredByAgentOfQueueCount_, 0L) };
          inline Inbound& setAnsweredByAgentOfQueueCount(int64_t answeredByAgentOfQueueCount) { DARABONBA_PTR_SET_VALUE(answeredByAgentOfQueueCount_, answeredByAgentOfQueueCount) };


          // answeredByAgentOfQueueMaxWaitTimeDuration Field Functions 
          bool hasAnsweredByAgentOfQueueMaxWaitTimeDuration() const { return this->answeredByAgentOfQueueMaxWaitTimeDuration_ != nullptr;};
          void deleteAnsweredByAgentOfQueueMaxWaitTimeDuration() { this->answeredByAgentOfQueueMaxWaitTimeDuration_ = nullptr;};
          inline int64_t getAnsweredByAgentOfQueueMaxWaitTimeDuration() const { DARABONBA_PTR_GET_DEFAULT(answeredByAgentOfQueueMaxWaitTimeDuration_, 0L) };
          inline Inbound& setAnsweredByAgentOfQueueMaxWaitTimeDuration(int64_t answeredByAgentOfQueueMaxWaitTimeDuration) { DARABONBA_PTR_SET_VALUE(answeredByAgentOfQueueMaxWaitTimeDuration_, answeredByAgentOfQueueMaxWaitTimeDuration) };


          // answeredByAgentOfQueueWaitTimeDuration Field Functions 
          bool hasAnsweredByAgentOfQueueWaitTimeDuration() const { return this->answeredByAgentOfQueueWaitTimeDuration_ != nullptr;};
          void deleteAnsweredByAgentOfQueueWaitTimeDuration() { this->answeredByAgentOfQueueWaitTimeDuration_ = nullptr;};
          inline int64_t getAnsweredByAgentOfQueueWaitTimeDuration() const { DARABONBA_PTR_GET_DEFAULT(answeredByAgentOfQueueWaitTimeDuration_, 0L) };
          inline Inbound& setAnsweredByAgentOfQueueWaitTimeDuration(int64_t answeredByAgentOfQueueWaitTimeDuration) { DARABONBA_PTR_SET_VALUE(answeredByAgentOfQueueWaitTimeDuration_, answeredByAgentOfQueueWaitTimeDuration) };


          // averageRingTime Field Functions 
          bool hasAverageRingTime() const { return this->averageRingTime_ != nullptr;};
          void deleteAverageRingTime() { this->averageRingTime_ = nullptr;};
          inline int64_t getAverageRingTime() const { DARABONBA_PTR_GET_DEFAULT(averageRingTime_, 0L) };
          inline Inbound& setAverageRingTime(int64_t averageRingTime) { DARABONBA_PTR_SET_VALUE(averageRingTime_, averageRingTime) };


          // averageTalkTime Field Functions 
          bool hasAverageTalkTime() const { return this->averageTalkTime_ != nullptr;};
          void deleteAverageTalkTime() { this->averageTalkTime_ = nullptr;};
          inline int64_t getAverageTalkTime() const { DARABONBA_PTR_GET_DEFAULT(averageTalkTime_, 0L) };
          inline Inbound& setAverageTalkTime(int64_t averageTalkTime) { DARABONBA_PTR_SET_VALUE(averageTalkTime_, averageTalkTime) };


          // averageWorkTime Field Functions 
          bool hasAverageWorkTime() const { return this->averageWorkTime_ != nullptr;};
          void deleteAverageWorkTime() { this->averageWorkTime_ = nullptr;};
          inline int64_t getAverageWorkTime() const { DARABONBA_PTR_GET_DEFAULT(averageWorkTime_, 0L) };
          inline Inbound& setAverageWorkTime(int64_t averageWorkTime) { DARABONBA_PTR_SET_VALUE(averageWorkTime_, averageWorkTime) };


          // callsAbandoned Field Functions 
          bool hasCallsAbandoned() const { return this->callsAbandoned_ != nullptr;};
          void deleteCallsAbandoned() { this->callsAbandoned_ = nullptr;};
          inline int64_t getCallsAbandoned() const { DARABONBA_PTR_GET_DEFAULT(callsAbandoned_, 0L) };
          inline Inbound& setCallsAbandoned(int64_t callsAbandoned) { DARABONBA_PTR_SET_VALUE(callsAbandoned_, callsAbandoned) };


          // callsAttendedTransferOut Field Functions 
          bool hasCallsAttendedTransferOut() const { return this->callsAttendedTransferOut_ != nullptr;};
          void deleteCallsAttendedTransferOut() { this->callsAttendedTransferOut_ = nullptr;};
          inline int64_t getCallsAttendedTransferOut() const { DARABONBA_PTR_GET_DEFAULT(callsAttendedTransferOut_, 0L) };
          inline Inbound& setCallsAttendedTransferOut(int64_t callsAttendedTransferOut) { DARABONBA_PTR_SET_VALUE(callsAttendedTransferOut_, callsAttendedTransferOut) };


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


          // callsOffered Field Functions 
          bool hasCallsOffered() const { return this->callsOffered_ != nullptr;};
          void deleteCallsOffered() { this->callsOffered_ = nullptr;};
          inline int64_t getCallsOffered() const { DARABONBA_PTR_GET_DEFAULT(callsOffered_, 0L) };
          inline Inbound& setCallsOffered(int64_t callsOffered) { DARABONBA_PTR_SET_VALUE(callsOffered_, callsOffered) };


          // callsOverflow Field Functions 
          bool hasCallsOverflow() const { return this->callsOverflow_ != nullptr;};
          void deleteCallsOverflow() { this->callsOverflow_ = nullptr;};
          inline string getCallsOverflow() const { DARABONBA_PTR_GET_DEFAULT(callsOverflow_, "") };
          inline Inbound& setCallsOverflow(string callsOverflow) { DARABONBA_PTR_SET_VALUE(callsOverflow_, callsOverflow) };


          // callsQueuingCanceled Field Functions 
          bool hasCallsQueuingCanceled() const { return this->callsQueuingCanceled_ != nullptr;};
          void deleteCallsQueuingCanceled() { this->callsQueuingCanceled_ = nullptr;};
          inline string getCallsQueuingCanceled() const { DARABONBA_PTR_GET_DEFAULT(callsQueuingCanceled_, "") };
          inline Inbound& setCallsQueuingCanceled(string callsQueuingCanceled) { DARABONBA_PTR_SET_VALUE(callsQueuingCanceled_, callsQueuingCanceled) };


          // callsQueuingFailure Field Functions 
          bool hasCallsQueuingFailure() const { return this->callsQueuingFailure_ != nullptr;};
          void deleteCallsQueuingFailure() { this->callsQueuingFailure_ = nullptr;};
          inline string getCallsQueuingFailure() const { DARABONBA_PTR_GET_DEFAULT(callsQueuingFailure_, "") };
          inline Inbound& setCallsQueuingFailure(string callsQueuingFailure) { DARABONBA_PTR_SET_VALUE(callsQueuingFailure_, callsQueuingFailure) };


          // callsQueuingRerouted Field Functions 
          bool hasCallsQueuingRerouted() const { return this->callsQueuingRerouted_ != nullptr;};
          void deleteCallsQueuingRerouted() { this->callsQueuingRerouted_ = nullptr;};
          inline string getCallsQueuingRerouted() const { DARABONBA_PTR_GET_DEFAULT(callsQueuingRerouted_, "") };
          inline Inbound& setCallsQueuingRerouted(string callsQueuingRerouted) { DARABONBA_PTR_SET_VALUE(callsQueuingRerouted_, callsQueuingRerouted) };


          // callsQueuingTimeout Field Functions 
          bool hasCallsQueuingTimeout() const { return this->callsQueuingTimeout_ != nullptr;};
          void deleteCallsQueuingTimeout() { this->callsQueuingTimeout_ = nullptr;};
          inline int64_t getCallsQueuingTimeout() const { DARABONBA_PTR_GET_DEFAULT(callsQueuingTimeout_, 0L) };
          inline Inbound& setCallsQueuingTimeout(int64_t callsQueuingTimeout) { DARABONBA_PTR_SET_VALUE(callsQueuingTimeout_, callsQueuingTimeout) };


          // callsServiceLevel10 Field Functions 
          bool hasCallsServiceLevel10() const { return this->callsServiceLevel10_ != nullptr;};
          void deleteCallsServiceLevel10() { this->callsServiceLevel10_ = nullptr;};
          inline int64_t getCallsServiceLevel10() const { DARABONBA_PTR_GET_DEFAULT(callsServiceLevel10_, 0L) };
          inline Inbound& setCallsServiceLevel10(int64_t callsServiceLevel10) { DARABONBA_PTR_SET_VALUE(callsServiceLevel10_, callsServiceLevel10) };


          // callsServiceLevel20 Field Functions 
          bool hasCallsServiceLevel20() const { return this->callsServiceLevel20_ != nullptr;};
          void deleteCallsServiceLevel20() { this->callsServiceLevel20_ = nullptr;};
          inline int64_t getCallsServiceLevel20() const { DARABONBA_PTR_GET_DEFAULT(callsServiceLevel20_, 0L) };
          inline Inbound& setCallsServiceLevel20(int64_t callsServiceLevel20) { DARABONBA_PTR_SET_VALUE(callsServiceLevel20_, callsServiceLevel20) };


          // callsServiceLevel30 Field Functions 
          bool hasCallsServiceLevel30() const { return this->callsServiceLevel30_ != nullptr;};
          void deleteCallsServiceLevel30() { this->callsServiceLevel30_ = nullptr;};
          inline int64_t getCallsServiceLevel30() const { DARABONBA_PTR_GET_DEFAULT(callsServiceLevel30_, 0L) };
          inline Inbound& setCallsServiceLevel30(int64_t callsServiceLevel30) { DARABONBA_PTR_SET_VALUE(callsServiceLevel30_, callsServiceLevel30) };


          // callsTimeout Field Functions 
          bool hasCallsTimeout() const { return this->callsTimeout_ != nullptr;};
          void deleteCallsTimeout() { this->callsTimeout_ = nullptr;};
          inline int64_t getCallsTimeout() const { DARABONBA_PTR_GET_DEFAULT(callsTimeout_, 0L) };
          inline Inbound& setCallsTimeout(int64_t callsTimeout) { DARABONBA_PTR_SET_VALUE(callsTimeout_, callsTimeout) };


          // giveUpByAgentOfQueueCount Field Functions 
          bool hasGiveUpByAgentOfQueueCount() const { return this->giveUpByAgentOfQueueCount_ != nullptr;};
          void deleteGiveUpByAgentOfQueueCount() { this->giveUpByAgentOfQueueCount_ = nullptr;};
          inline int64_t getGiveUpByAgentOfQueueCount() const { DARABONBA_PTR_GET_DEFAULT(giveUpByAgentOfQueueCount_, 0L) };
          inline Inbound& setGiveUpByAgentOfQueueCount(int64_t giveUpByAgentOfQueueCount) { DARABONBA_PTR_SET_VALUE(giveUpByAgentOfQueueCount_, giveUpByAgentOfQueueCount) };


          // handleRate Field Functions 
          bool hasHandleRate() const { return this->handleRate_ != nullptr;};
          void deleteHandleRate() { this->handleRate_ = nullptr;};
          inline float getHandleRate() const { DARABONBA_PTR_GET_DEFAULT(handleRate_, 0.0) };
          inline Inbound& setHandleRate(float handleRate) { DARABONBA_PTR_SET_VALUE(handleRate_, handleRate) };


          // inComingQueueOfQueueCount Field Functions 
          bool hasInComingQueueOfQueueCount() const { return this->inComingQueueOfQueueCount_ != nullptr;};
          void deleteInComingQueueOfQueueCount() { this->inComingQueueOfQueueCount_ = nullptr;};
          inline int64_t getInComingQueueOfQueueCount() const { DARABONBA_PTR_GET_DEFAULT(inComingQueueOfQueueCount_, 0L) };
          inline Inbound& setInComingQueueOfQueueCount(int64_t inComingQueueOfQueueCount) { DARABONBA_PTR_SET_VALUE(inComingQueueOfQueueCount_, inComingQueueOfQueueCount) };


          // maxRingTime Field Functions 
          bool hasMaxRingTime() const { return this->maxRingTime_ != nullptr;};
          void deleteMaxRingTime() { this->maxRingTime_ = nullptr;};
          inline int64_t getMaxRingTime() const { DARABONBA_PTR_GET_DEFAULT(maxRingTime_, 0L) };
          inline Inbound& setMaxRingTime(int64_t maxRingTime) { DARABONBA_PTR_SET_VALUE(maxRingTime_, maxRingTime) };


          // maxTalkTime Field Functions 
          bool hasMaxTalkTime() const { return this->maxTalkTime_ != nullptr;};
          void deleteMaxTalkTime() { this->maxTalkTime_ = nullptr;};
          inline string getMaxTalkTime() const { DARABONBA_PTR_GET_DEFAULT(maxTalkTime_, "") };
          inline Inbound& setMaxTalkTime(string maxTalkTime) { DARABONBA_PTR_SET_VALUE(maxTalkTime_, maxTalkTime) };


          // maxWorkTime Field Functions 
          bool hasMaxWorkTime() const { return this->maxWorkTime_ != nullptr;};
          void deleteMaxWorkTime() { this->maxWorkTime_ = nullptr;};
          inline int64_t getMaxWorkTime() const { DARABONBA_PTR_GET_DEFAULT(maxWorkTime_, 0L) };
          inline Inbound& setMaxWorkTime(int64_t maxWorkTime) { DARABONBA_PTR_SET_VALUE(maxWorkTime_, maxWorkTime) };


          // overFlowInQueueOfQueueCount Field Functions 
          bool hasOverFlowInQueueOfQueueCount() const { return this->overFlowInQueueOfQueueCount_ != nullptr;};
          void deleteOverFlowInQueueOfQueueCount() { this->overFlowInQueueOfQueueCount_ = nullptr;};
          inline int64_t getOverFlowInQueueOfQueueCount() const { DARABONBA_PTR_GET_DEFAULT(overFlowInQueueOfQueueCount_, 0L) };
          inline Inbound& setOverFlowInQueueOfQueueCount(int64_t overFlowInQueueOfQueueCount) { DARABONBA_PTR_SET_VALUE(overFlowInQueueOfQueueCount_, overFlowInQueueOfQueueCount) };


          // queueMaxWaitTimeDuration Field Functions 
          bool hasQueueMaxWaitTimeDuration() const { return this->queueMaxWaitTimeDuration_ != nullptr;};
          void deleteQueueMaxWaitTimeDuration() { this->queueMaxWaitTimeDuration_ = nullptr;};
          inline int64_t getQueueMaxWaitTimeDuration() const { DARABONBA_PTR_GET_DEFAULT(queueMaxWaitTimeDuration_, 0L) };
          inline Inbound& setQueueMaxWaitTimeDuration(int64_t queueMaxWaitTimeDuration) { DARABONBA_PTR_SET_VALUE(queueMaxWaitTimeDuration_, queueMaxWaitTimeDuration) };


          // queueWaitTimeDuration Field Functions 
          bool hasQueueWaitTimeDuration() const { return this->queueWaitTimeDuration_ != nullptr;};
          void deleteQueueWaitTimeDuration() { this->queueWaitTimeDuration_ = nullptr;};
          inline int64_t getQueueWaitTimeDuration() const { DARABONBA_PTR_GET_DEFAULT(queueWaitTimeDuration_, 0L) };
          inline Inbound& setQueueWaitTimeDuration(int64_t queueWaitTimeDuration) { DARABONBA_PTR_SET_VALUE(queueWaitTimeDuration_, queueWaitTimeDuration) };


          // satisfactionIndex Field Functions 
          bool hasSatisfactionIndex() const { return this->satisfactionIndex_ != nullptr;};
          void deleteSatisfactionIndex() { this->satisfactionIndex_ = nullptr;};
          inline float getSatisfactionIndex() const { DARABONBA_PTR_GET_DEFAULT(satisfactionIndex_, 0.0) };
          inline Inbound& setSatisfactionIndex(float satisfactionIndex) { DARABONBA_PTR_SET_VALUE(satisfactionIndex_, satisfactionIndex) };


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


          // serviceLevel20 Field Functions 
          bool hasServiceLevel20() const { return this->serviceLevel20_ != nullptr;};
          void deleteServiceLevel20() { this->serviceLevel20_ = nullptr;};
          inline float getServiceLevel20() const { DARABONBA_PTR_GET_DEFAULT(serviceLevel20_, 0.0) };
          inline Inbound& setServiceLevel20(float serviceLevel20) { DARABONBA_PTR_SET_VALUE(serviceLevel20_, serviceLevel20) };


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
          shared_ptr<int64_t> abandonedInQueueOfQueueCount_ {};
          shared_ptr<int64_t> answeredByAgentOfQueueCount_ {};
          shared_ptr<int64_t> answeredByAgentOfQueueMaxWaitTimeDuration_ {};
          shared_ptr<int64_t> answeredByAgentOfQueueWaitTimeDuration_ {};
          shared_ptr<int64_t> averageRingTime_ {};
          shared_ptr<int64_t> averageTalkTime_ {};
          shared_ptr<int64_t> averageWorkTime_ {};
          shared_ptr<int64_t> callsAbandoned_ {};
          shared_ptr<int64_t> callsAttendedTransferOut_ {};
          shared_ptr<int64_t> callsBlindTransferOut_ {};
          shared_ptr<int64_t> callsHandled_ {};
          shared_ptr<int64_t> callsOffered_ {};
          shared_ptr<string> callsOverflow_ {};
          shared_ptr<string> callsQueuingCanceled_ {};
          shared_ptr<string> callsQueuingFailure_ {};
          shared_ptr<string> callsQueuingRerouted_ {};
          shared_ptr<int64_t> callsQueuingTimeout_ {};
          shared_ptr<int64_t> callsServiceLevel10_ {};
          shared_ptr<int64_t> callsServiceLevel20_ {};
          shared_ptr<int64_t> callsServiceLevel30_ {};
          shared_ptr<int64_t> callsTimeout_ {};
          shared_ptr<int64_t> giveUpByAgentOfQueueCount_ {};
          shared_ptr<float> handleRate_ {};
          shared_ptr<int64_t> inComingQueueOfQueueCount_ {};
          shared_ptr<int64_t> maxRingTime_ {};
          shared_ptr<string> maxTalkTime_ {};
          shared_ptr<int64_t> maxWorkTime_ {};
          shared_ptr<int64_t> overFlowInQueueOfQueueCount_ {};
          shared_ptr<int64_t> queueMaxWaitTimeDuration_ {};
          shared_ptr<int64_t> queueWaitTimeDuration_ {};
          shared_ptr<float> satisfactionIndex_ {};
          shared_ptr<int64_t> satisfactionSurveysOffered_ {};
          shared_ptr<int64_t> satisfactionSurveysResponded_ {};
          shared_ptr<float> serviceLevel20_ {};
          shared_ptr<int64_t> totalRingTime_ {};
          shared_ptr<int64_t> totalTalkTime_ {};
          shared_ptr<int64_t> totalWorkTime_ {};
        };

        virtual bool empty() const override { return this->inbound_ == nullptr
        && this->instanceId_ == nullptr && this->outbound_ == nullptr && this->overall_ == nullptr && this->skillGroupId_ == nullptr && this->skillGroupName_ == nullptr
        && this->timestamp_ == nullptr; };
        // inbound Field Functions 
        bool hasInbound() const { return this->inbound_ != nullptr;};
        void deleteInbound() { this->inbound_ = nullptr;};
        inline const List::Inbound & getInbound() const { DARABONBA_PTR_GET_CONST(inbound_, List::Inbound) };
        inline List::Inbound getInbound() { DARABONBA_PTR_GET(inbound_, List::Inbound) };
        inline List& setInbound(const List::Inbound & inbound) { DARABONBA_PTR_SET_VALUE(inbound_, inbound) };
        inline List& setInbound(List::Inbound && inbound) { DARABONBA_PTR_SET_RVALUE(inbound_, inbound) };


        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline List& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


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


        // skillGroupId Field Functions 
        bool hasSkillGroupId() const { return this->skillGroupId_ != nullptr;};
        void deleteSkillGroupId() { this->skillGroupId_ = nullptr;};
        inline string getSkillGroupId() const { DARABONBA_PTR_GET_DEFAULT(skillGroupId_, "") };
        inline List& setSkillGroupId(string skillGroupId) { DARABONBA_PTR_SET_VALUE(skillGroupId_, skillGroupId) };


        // skillGroupName Field Functions 
        bool hasSkillGroupName() const { return this->skillGroupName_ != nullptr;};
        void deleteSkillGroupName() { this->skillGroupName_ = nullptr;};
        inline string getSkillGroupName() const { DARABONBA_PTR_GET_DEFAULT(skillGroupName_, "") };
        inline List& setSkillGroupName(string skillGroupName) { DARABONBA_PTR_SET_VALUE(skillGroupName_, skillGroupName) };


        // timestamp Field Functions 
        bool hasTimestamp() const { return this->timestamp_ != nullptr;};
        void deleteTimestamp() { this->timestamp_ = nullptr;};
        inline string getTimestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, "") };
        inline List& setTimestamp(string timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


      protected:
        shared_ptr<List::Inbound> inbound_ {};
        shared_ptr<string> instanceId_ {};
        shared_ptr<List::Outbound> outbound_ {};
        shared_ptr<List::Overall> overall_ {};
        shared_ptr<string> skillGroupId_ {};
        shared_ptr<string> skillGroupName_ {};
        shared_ptr<string> timestamp_ {};
      };

      virtual bool empty() const override { return this->list_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
      // list Field Functions 
      bool hasList() const { return this->list_ != nullptr;};
      void deleteList() { this->list_ = nullptr;};
      inline const vector<PagedSkillGroupSummaryReport::List> & getList() const { DARABONBA_PTR_GET_CONST(list_, vector<PagedSkillGroupSummaryReport::List>) };
      inline vector<PagedSkillGroupSummaryReport::List> getList() { DARABONBA_PTR_GET(list_, vector<PagedSkillGroupSummaryReport::List>) };
      inline PagedSkillGroupSummaryReport& setList(const vector<PagedSkillGroupSummaryReport::List> & list) { DARABONBA_PTR_SET_VALUE(list_, list) };
      inline PagedSkillGroupSummaryReport& setList(vector<PagedSkillGroupSummaryReport::List> && list) { DARABONBA_PTR_SET_RVALUE(list_, list) };


      // pageNumber Field Functions 
      bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
      void deletePageNumber() { this->pageNumber_ = nullptr;};
      inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
      inline PagedSkillGroupSummaryReport& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline PagedSkillGroupSummaryReport& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline PagedSkillGroupSummaryReport& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      shared_ptr<vector<PagedSkillGroupSummaryReport::List>> list_ {};
      shared_ptr<int32_t> pageNumber_ {};
      shared_ptr<int32_t> pageSize_ {};
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->pagedSkillGroupSummaryReport_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListSkillGroupSummaryReportsSinceMidnightResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListSkillGroupSummaryReportsSinceMidnightResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListSkillGroupSummaryReportsSinceMidnightResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // pagedSkillGroupSummaryReport Field Functions 
    bool hasPagedSkillGroupSummaryReport() const { return this->pagedSkillGroupSummaryReport_ != nullptr;};
    void deletePagedSkillGroupSummaryReport() { this->pagedSkillGroupSummaryReport_ = nullptr;};
    inline const ListSkillGroupSummaryReportsSinceMidnightResponseBody::PagedSkillGroupSummaryReport & getPagedSkillGroupSummaryReport() const { DARABONBA_PTR_GET_CONST(pagedSkillGroupSummaryReport_, ListSkillGroupSummaryReportsSinceMidnightResponseBody::PagedSkillGroupSummaryReport) };
    inline ListSkillGroupSummaryReportsSinceMidnightResponseBody::PagedSkillGroupSummaryReport getPagedSkillGroupSummaryReport() { DARABONBA_PTR_GET(pagedSkillGroupSummaryReport_, ListSkillGroupSummaryReportsSinceMidnightResponseBody::PagedSkillGroupSummaryReport) };
    inline ListSkillGroupSummaryReportsSinceMidnightResponseBody& setPagedSkillGroupSummaryReport(const ListSkillGroupSummaryReportsSinceMidnightResponseBody::PagedSkillGroupSummaryReport & pagedSkillGroupSummaryReport) { DARABONBA_PTR_SET_VALUE(pagedSkillGroupSummaryReport_, pagedSkillGroupSummaryReport) };
    inline ListSkillGroupSummaryReportsSinceMidnightResponseBody& setPagedSkillGroupSummaryReport(ListSkillGroupSummaryReportsSinceMidnightResponseBody::PagedSkillGroupSummaryReport && pagedSkillGroupSummaryReport) { DARABONBA_PTR_SET_RVALUE(pagedSkillGroupSummaryReport_, pagedSkillGroupSummaryReport) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListSkillGroupSummaryReportsSinceMidnightResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListSkillGroupSummaryReportsSinceMidnightResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<ListSkillGroupSummaryReportsSinceMidnightResponseBody::PagedSkillGroupSummaryReport> pagedSkillGroupSummaryReport_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
