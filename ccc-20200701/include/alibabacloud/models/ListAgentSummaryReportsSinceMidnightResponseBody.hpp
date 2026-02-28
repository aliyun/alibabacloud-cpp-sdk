// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAGENTSUMMARYREPORTSSINCEMIDNIGHTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAGENTSUMMARYREPORTSSINCEMIDNIGHTRESPONSEBODY_HPP_
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
  class ListAgentSummaryReportsSinceMidnightResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAgentSummaryReportsSinceMidnightResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(PagedAgentSummaryReport, pagedAgentSummaryReport_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListAgentSummaryReportsSinceMidnightResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(PagedAgentSummaryReport, pagedAgentSummaryReport_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListAgentSummaryReportsSinceMidnightResponseBody() = default ;
    ListAgentSummaryReportsSinceMidnightResponseBody(const ListAgentSummaryReportsSinceMidnightResponseBody &) = default ;
    ListAgentSummaryReportsSinceMidnightResponseBody(ListAgentSummaryReportsSinceMidnightResponseBody &&) = default ;
    ListAgentSummaryReportsSinceMidnightResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAgentSummaryReportsSinceMidnightResponseBody() = default ;
    ListAgentSummaryReportsSinceMidnightResponseBody& operator=(const ListAgentSummaryReportsSinceMidnightResponseBody &) = default ;
    ListAgentSummaryReportsSinceMidnightResponseBody& operator=(ListAgentSummaryReportsSinceMidnightResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PagedAgentSummaryReport : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PagedAgentSummaryReport& obj) { 
        DARABONBA_PTR_TO_JSON(List, list_);
        DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, PagedAgentSummaryReport& obj) { 
        DARABONBA_PTR_FROM_JSON(List, list_);
        DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      PagedAgentSummaryReport() = default ;
      PagedAgentSummaryReport(const PagedAgentSummaryReport &) = default ;
      PagedAgentSummaryReport(PagedAgentSummaryReport &&) = default ;
      PagedAgentSummaryReport(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PagedAgentSummaryReport() = default ;
      PagedAgentSummaryReport& operator=(const PagedAgentSummaryReport &) = default ;
      PagedAgentSummaryReport& operator=(PagedAgentSummaryReport &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class List : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const List& obj) { 
          DARABONBA_PTR_TO_JSON(AgentId, agentId_);
          DARABONBA_PTR_TO_JSON(AgentName, agentName_);
          DARABONBA_PTR_TO_JSON(Inbound, inbound_);
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_TO_JSON(LoginName, loginName_);
          DARABONBA_PTR_TO_JSON(Outbound, outbound_);
          DARABONBA_PTR_TO_JSON(Overall, overall_);
          DARABONBA_PTR_TO_JSON(SkillGroupIds, skillGroupIds_);
          DARABONBA_PTR_TO_JSON(SkillGroupNames, skillGroupNames_);
          DARABONBA_PTR_TO_JSON(Timestamp, timestamp_);
        };
        friend void from_json(const Darabonba::Json& j, List& obj) { 
          DARABONBA_PTR_FROM_JSON(AgentId, agentId_);
          DARABONBA_PTR_FROM_JSON(AgentName, agentName_);
          DARABONBA_PTR_FROM_JSON(Inbound, inbound_);
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_FROM_JSON(LoginName, loginName_);
          DARABONBA_PTR_FROM_JSON(Outbound, outbound_);
          DARABONBA_PTR_FROM_JSON(Overall, overall_);
          DARABONBA_PTR_FROM_JSON(SkillGroupIds, skillGroupIds_);
          DARABONBA_PTR_FROM_JSON(SkillGroupNames, skillGroupNames_);
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
          friend void from_json(const Darabonba::Json& j, Overall& obj) { 
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
        && this->occupancyRate_ == nullptr && this->oneTransferCalls_ == nullptr && this->satisfactionIndex_ == nullptr && this->satisfactionSurveysOffered_ == nullptr && this->satisfactionSurveysResponded_ == nullptr
        && this->totalBreakTime_ == nullptr && this->totalCalls_ == nullptr && this->totalLoggedInTime_ == nullptr && this->totalReadyTime_ == nullptr && this->totalTalkTime_ == nullptr
        && this->totalWorkTime_ == nullptr; };
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


          // oneTransferCalls Field Functions 
          bool hasOneTransferCalls() const { return this->oneTransferCalls_ != nullptr;};
          void deleteOneTransferCalls() { this->oneTransferCalls_ = nullptr;};
          inline int64_t getOneTransferCalls() const { DARABONBA_PTR_GET_DEFAULT(oneTransferCalls_, 0L) };
          inline Overall& setOneTransferCalls(int64_t oneTransferCalls) { DARABONBA_PTR_SET_VALUE(oneTransferCalls_, oneTransferCalls) };


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
          shared_ptr<int64_t> oneTransferCalls_ {};
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
          friend void from_json(const Darabonba::Json& j, Outbound& obj) { 
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
        && this->averageDialingTime_ == nullptr && this->averageTalkTime_ == nullptr && this->averageWorkTime_ == nullptr && this->callsAnswered_ == nullptr && this->callsDialed_ == nullptr
        && this->maxDialingTime_ == nullptr && this->maxTalkTime_ == nullptr && this->maxWorkTime_ == nullptr && this->satisfactionIndex_ == nullptr && this->satisfactionSurveysOffered_ == nullptr
        && this->satisfactionSurveysResponded_ == nullptr && this->totalDialingTime_ == nullptr && this->totalTalkTime_ == nullptr && this->totalWorkTime_ == nullptr; };
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
          inline string getMaxWorkTime() const { DARABONBA_PTR_GET_DEFAULT(maxWorkTime_, "") };
          inline Outbound& setMaxWorkTime(string maxWorkTime) { DARABONBA_PTR_SET_VALUE(maxWorkTime_, maxWorkTime) };


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
          shared_ptr<int64_t> callsAnswered_ {};
          shared_ptr<int64_t> callsDialed_ {};
          shared_ptr<int64_t> maxDialingTime_ {};
          shared_ptr<int64_t> maxTalkTime_ {};
          shared_ptr<string> maxWorkTime_ {};
          shared_ptr<float> satisfactionIndex_ {};
          shared_ptr<int64_t> satisfactionSurveysOffered_ {};
          shared_ptr<int64_t> satisfactionSurveysResponded_ {};
          shared_ptr<int64_t> totalDialingTime_ {};
          shared_ptr<int64_t> totalTalkTime_ {};
          shared_ptr<int64_t> totalWorkTime_ {};
        };

        class Inbound : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Inbound& obj) { 
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
          friend void from_json(const Darabonba::Json& j, Inbound& obj) { 
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
          virtual bool empty() const override { return this->averageRingTime_ == nullptr
        && this->averageTalkTime_ == nullptr && this->averageWorkTime_ == nullptr && this->callsHandled_ == nullptr && this->callsOffered_ == nullptr && this->handleRate_ == nullptr
        && this->maxRingTime_ == nullptr && this->maxTalkTime_ == nullptr && this->maxWorkTime_ == nullptr && this->satisfactionIndex_ == nullptr && this->satisfactionSurveysOffered_ == nullptr
        && this->satisfactionSurveysResponded_ == nullptr && this->serviceLevel20_ == nullptr && this->totalRingTime_ == nullptr && this->totalTalkTime_ == nullptr && this->totalWorkTime_ == nullptr; };
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


          // handleRate Field Functions 
          bool hasHandleRate() const { return this->handleRate_ != nullptr;};
          void deleteHandleRate() { this->handleRate_ = nullptr;};
          inline float getHandleRate() const { DARABONBA_PTR_GET_DEFAULT(handleRate_, 0.0) };
          inline Inbound& setHandleRate(float handleRate) { DARABONBA_PTR_SET_VALUE(handleRate_, handleRate) };


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
          shared_ptr<int64_t> averageRingTime_ {};
          shared_ptr<int64_t> averageTalkTime_ {};
          shared_ptr<int64_t> averageWorkTime_ {};
          shared_ptr<int64_t> callsHandled_ {};
          shared_ptr<int64_t> callsOffered_ {};
          shared_ptr<float> handleRate_ {};
          shared_ptr<int64_t> maxRingTime_ {};
          shared_ptr<int64_t> maxTalkTime_ {};
          shared_ptr<int64_t> maxWorkTime_ {};
          shared_ptr<float> satisfactionIndex_ {};
          shared_ptr<int64_t> satisfactionSurveysOffered_ {};
          shared_ptr<int64_t> satisfactionSurveysResponded_ {};
          shared_ptr<float> serviceLevel20_ {};
          shared_ptr<int64_t> totalRingTime_ {};
          shared_ptr<int64_t> totalTalkTime_ {};
          shared_ptr<int64_t> totalWorkTime_ {};
        };

        virtual bool empty() const override { return this->agentId_ == nullptr
        && this->agentName_ == nullptr && this->inbound_ == nullptr && this->instanceId_ == nullptr && this->loginName_ == nullptr && this->outbound_ == nullptr
        && this->overall_ == nullptr && this->skillGroupIds_ == nullptr && this->skillGroupNames_ == nullptr && this->timestamp_ == nullptr; };
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


        // loginName Field Functions 
        bool hasLoginName() const { return this->loginName_ != nullptr;};
        void deleteLoginName() { this->loginName_ = nullptr;};
        inline string getLoginName() const { DARABONBA_PTR_GET_DEFAULT(loginName_, "") };
        inline List& setLoginName(string loginName) { DARABONBA_PTR_SET_VALUE(loginName_, loginName) };


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


        // timestamp Field Functions 
        bool hasTimestamp() const { return this->timestamp_ != nullptr;};
        void deleteTimestamp() { this->timestamp_ = nullptr;};
        inline string getTimestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, "") };
        inline List& setTimestamp(string timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


      protected:
        shared_ptr<string> agentId_ {};
        shared_ptr<string> agentName_ {};
        shared_ptr<List::Inbound> inbound_ {};
        shared_ptr<string> instanceId_ {};
        shared_ptr<string> loginName_ {};
        shared_ptr<List::Outbound> outbound_ {};
        shared_ptr<List::Overall> overall_ {};
        shared_ptr<string> skillGroupIds_ {};
        shared_ptr<string> skillGroupNames_ {};
        shared_ptr<string> timestamp_ {};
      };

      virtual bool empty() const override { return this->list_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
      // list Field Functions 
      bool hasList() const { return this->list_ != nullptr;};
      void deleteList() { this->list_ = nullptr;};
      inline const vector<PagedAgentSummaryReport::List> & getList() const { DARABONBA_PTR_GET_CONST(list_, vector<PagedAgentSummaryReport::List>) };
      inline vector<PagedAgentSummaryReport::List> getList() { DARABONBA_PTR_GET(list_, vector<PagedAgentSummaryReport::List>) };
      inline PagedAgentSummaryReport& setList(const vector<PagedAgentSummaryReport::List> & list) { DARABONBA_PTR_SET_VALUE(list_, list) };
      inline PagedAgentSummaryReport& setList(vector<PagedAgentSummaryReport::List> && list) { DARABONBA_PTR_SET_RVALUE(list_, list) };


      // pageNumber Field Functions 
      bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
      void deletePageNumber() { this->pageNumber_ = nullptr;};
      inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
      inline PagedAgentSummaryReport& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline PagedAgentSummaryReport& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline PagedAgentSummaryReport& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      shared_ptr<vector<PagedAgentSummaryReport::List>> list_ {};
      shared_ptr<int32_t> pageNumber_ {};
      shared_ptr<int32_t> pageSize_ {};
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->pagedAgentSummaryReport_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListAgentSummaryReportsSinceMidnightResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListAgentSummaryReportsSinceMidnightResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListAgentSummaryReportsSinceMidnightResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // pagedAgentSummaryReport Field Functions 
    bool hasPagedAgentSummaryReport() const { return this->pagedAgentSummaryReport_ != nullptr;};
    void deletePagedAgentSummaryReport() { this->pagedAgentSummaryReport_ = nullptr;};
    inline const ListAgentSummaryReportsSinceMidnightResponseBody::PagedAgentSummaryReport & getPagedAgentSummaryReport() const { DARABONBA_PTR_GET_CONST(pagedAgentSummaryReport_, ListAgentSummaryReportsSinceMidnightResponseBody::PagedAgentSummaryReport) };
    inline ListAgentSummaryReportsSinceMidnightResponseBody::PagedAgentSummaryReport getPagedAgentSummaryReport() { DARABONBA_PTR_GET(pagedAgentSummaryReport_, ListAgentSummaryReportsSinceMidnightResponseBody::PagedAgentSummaryReport) };
    inline ListAgentSummaryReportsSinceMidnightResponseBody& setPagedAgentSummaryReport(const ListAgentSummaryReportsSinceMidnightResponseBody::PagedAgentSummaryReport & pagedAgentSummaryReport) { DARABONBA_PTR_SET_VALUE(pagedAgentSummaryReport_, pagedAgentSummaryReport) };
    inline ListAgentSummaryReportsSinceMidnightResponseBody& setPagedAgentSummaryReport(ListAgentSummaryReportsSinceMidnightResponseBody::PagedAgentSummaryReport && pagedAgentSummaryReport) { DARABONBA_PTR_SET_RVALUE(pagedAgentSummaryReport_, pagedAgentSummaryReport) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAgentSummaryReportsSinceMidnightResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListAgentSummaryReportsSinceMidnightResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<ListAgentSummaryReportsSinceMidnightResponseBody::PagedAgentSummaryReport> pagedAgentSummaryReport_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
