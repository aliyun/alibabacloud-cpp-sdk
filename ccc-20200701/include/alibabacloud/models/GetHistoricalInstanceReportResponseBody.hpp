// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETHISTORICALINSTANCEREPORTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETHISTORICALINSTANCEREPORTRESPONSEBODY_HPP_
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
  class GetHistoricalInstanceReportResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetHistoricalInstanceReportResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetHistoricalInstanceReportResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetHistoricalInstanceReportResponseBody() = default ;
    GetHistoricalInstanceReportResponseBody(const GetHistoricalInstanceReportResponseBody &) = default ;
    GetHistoricalInstanceReportResponseBody(GetHistoricalInstanceReportResponseBody &&) = default ;
    GetHistoricalInstanceReportResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetHistoricalInstanceReportResponseBody() = default ;
    GetHistoricalInstanceReportResponseBody& operator=(const GetHistoricalInstanceReportResponseBody &) = default ;
    GetHistoricalInstanceReportResponseBody& operator=(GetHistoricalInstanceReportResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Inbound, inbound_);
        DARABONBA_PTR_TO_JSON(Internal, internal_);
        DARABONBA_PTR_TO_JSON(Outbound, outbound_);
        DARABONBA_PTR_TO_JSON(Overall, overall_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Inbound, inbound_);
        DARABONBA_PTR_FROM_JSON(Internal, internal_);
        DARABONBA_PTR_FROM_JSON(Outbound, outbound_);
        DARABONBA_PTR_FROM_JSON(Overall, overall_);
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
      class Overall : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Overall& obj) { 
          DARABONBA_PTR_TO_JSON(AverageBreakTime, averageBreakTime_);
          DARABONBA_PTR_TO_JSON(AverageHoldTime, averageHoldTime_);
          DARABONBA_PTR_TO_JSON(AverageReadyTime, averageReadyTime_);
          DARABONBA_PTR_TO_JSON(AverageTalkTime, averageTalkTime_);
          DARABONBA_PTR_TO_JSON(AverageWorkTime, averageWorkTime_);
          DARABONBA_PTR_TO_JSON(MaxBreakTime, maxBreakTime_);
          DARABONBA_PTR_TO_JSON(MaxHoldTime, maxHoldTime_);
          DARABONBA_PTR_TO_JSON(MaxLoggedInAgents, maxLoggedInAgents_);
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
          DARABONBA_PTR_FROM_JSON(MaxBreakTime, maxBreakTime_);
          DARABONBA_PTR_FROM_JSON(MaxHoldTime, maxHoldTime_);
          DARABONBA_PTR_FROM_JSON(MaxLoggedInAgents, maxLoggedInAgents_);
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
        virtual bool empty() const override { return this->averageBreakTime_ == nullptr
        && this->averageHoldTime_ == nullptr && this->averageReadyTime_ == nullptr && this->averageTalkTime_ == nullptr && this->averageWorkTime_ == nullptr && this->maxBreakTime_ == nullptr
        && this->maxHoldTime_ == nullptr && this->maxLoggedInAgents_ == nullptr && this->maxReadyTime_ == nullptr && this->maxTalkTime_ == nullptr && this->maxWorkTime_ == nullptr
        && this->occupancyRate_ == nullptr && this->satisfactionIndex_ == nullptr && this->satisfactionRate_ == nullptr && this->satisfactionSurveysOffered_ == nullptr && this->satisfactionSurveysResponded_ == nullptr
        && this->totalBreakTime_ == nullptr && this->totalCalls_ == nullptr && this->totalHoldTime_ == nullptr && this->totalLoggedInTime_ == nullptr && this->totalReadyTime_ == nullptr
        && this->totalTalkTime_ == nullptr && this->totalWorkTime_ == nullptr; };
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


        // maxLoggedInAgents Field Functions 
        bool hasMaxLoggedInAgents() const { return this->maxLoggedInAgents_ != nullptr;};
        void deleteMaxLoggedInAgents() { this->maxLoggedInAgents_ = nullptr;};
        inline int64_t getMaxLoggedInAgents() const { DARABONBA_PTR_GET_DEFAULT(maxLoggedInAgents_, 0L) };
        inline Overall& setMaxLoggedInAgents(int64_t maxLoggedInAgents) { DARABONBA_PTR_SET_VALUE(maxLoggedInAgents_, maxLoggedInAgents) };


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
        shared_ptr<float> averageBreakTime_ {};
        shared_ptr<float> averageHoldTime_ {};
        shared_ptr<float> averageReadyTime_ {};
        shared_ptr<float> averageTalkTime_ {};
        shared_ptr<float> averageWorkTime_ {};
        shared_ptr<int64_t> maxBreakTime_ {};
        shared_ptr<int64_t> maxHoldTime_ {};
        shared_ptr<int64_t> maxLoggedInAgents_ {};
        shared_ptr<int64_t> maxReadyTime_ {};
        shared_ptr<int64_t> maxTalkTime_ {};
        shared_ptr<int64_t> maxWorkTime_ {};
        shared_ptr<float> occupancyRate_ {};
        shared_ptr<float> satisfactionIndex_ {};
        shared_ptr<float> satisfactionRate_ {};
        shared_ptr<int64_t> satisfactionSurveysOffered_ {};
        shared_ptr<int64_t> satisfactionSurveysResponded_ {};
        shared_ptr<int64_t> totalBreakTime_ {};
        shared_ptr<int64_t> totalCalls_ {};
        shared_ptr<int64_t> totalHoldTime_ {};
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
          DARABONBA_PTR_TO_JSON(AverageHoldTime, averageHoldTime_);
          DARABONBA_PTR_TO_JSON(AverageRingTime, averageRingTime_);
          DARABONBA_PTR_TO_JSON(AverageTalkTime, averageTalkTime_);
          DARABONBA_PTR_TO_JSON(AverageWorkTime, averageWorkTime_);
          DARABONBA_PTR_TO_JSON(CallsAnswered, callsAnswered_);
          DARABONBA_PTR_TO_JSON(CallsAttendedTransferred, callsAttendedTransferred_);
          DARABONBA_PTR_TO_JSON(CallsBlindTransferred, callsBlindTransferred_);
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
          DARABONBA_PTR_FROM_JSON(CallsAttendedTransferred, callsAttendedTransferred_);
          DARABONBA_PTR_FROM_JSON(CallsBlindTransferred, callsBlindTransferred_);
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
        && this->callsAnswered_ == nullptr && this->callsAttendedTransferred_ == nullptr && this->callsBlindTransferred_ == nullptr && this->callsDialed_ == nullptr && this->callsHold_ == nullptr
        && this->callsRinged_ == nullptr && this->maxDialingTime_ == nullptr && this->maxHoldTime_ == nullptr && this->maxRingTime_ == nullptr && this->maxTalkTime_ == nullptr
        && this->maxWorkTime_ == nullptr && this->satisfactionIndex_ == nullptr && this->satisfactionRate_ == nullptr && this->satisfactionSurveysOffered_ == nullptr && this->satisfactionSurveysResponded_ == nullptr
        && this->totalDialingTime_ == nullptr && this->totalHoldTime_ == nullptr && this->totalRingTime_ == nullptr && this->totalTalkTime_ == nullptr && this->totalWorkTime_ == nullptr; };
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


        // callsAttendedTransferred Field Functions 
        bool hasCallsAttendedTransferred() const { return this->callsAttendedTransferred_ != nullptr;};
        void deleteCallsAttendedTransferred() { this->callsAttendedTransferred_ = nullptr;};
        inline int64_t getCallsAttendedTransferred() const { DARABONBA_PTR_GET_DEFAULT(callsAttendedTransferred_, 0L) };
        inline Outbound& setCallsAttendedTransferred(int64_t callsAttendedTransferred) { DARABONBA_PTR_SET_VALUE(callsAttendedTransferred_, callsAttendedTransferred) };


        // callsBlindTransferred Field Functions 
        bool hasCallsBlindTransferred() const { return this->callsBlindTransferred_ != nullptr;};
        void deleteCallsBlindTransferred() { this->callsBlindTransferred_ = nullptr;};
        inline int64_t getCallsBlindTransferred() const { DARABONBA_PTR_GET_DEFAULT(callsBlindTransferred_, 0L) };
        inline Outbound& setCallsBlindTransferred(int64_t callsBlindTransferred) { DARABONBA_PTR_SET_VALUE(callsBlindTransferred_, callsBlindTransferred) };


        // callsDialed Field Functions 
        bool hasCallsDialed() const { return this->callsDialed_ != nullptr;};
        void deleteCallsDialed() { this->callsDialed_ = nullptr;};
        inline int64_t getCallsDialed() const { DARABONBA_PTR_GET_DEFAULT(callsDialed_, 0L) };
        inline Outbound& setCallsDialed(int64_t callsDialed) { DARABONBA_PTR_SET_VALUE(callsDialed_, callsDialed) };


        // callsHold Field Functions 
        bool hasCallsHold() const { return this->callsHold_ != nullptr;};
        void deleteCallsHold() { this->callsHold_ = nullptr;};
        inline int32_t getCallsHold() const { DARABONBA_PTR_GET_DEFAULT(callsHold_, 0) };
        inline Outbound& setCallsHold(int32_t callsHold) { DARABONBA_PTR_SET_VALUE(callsHold_, callsHold) };


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
        shared_ptr<float> answerRate_ {};
        shared_ptr<float> averageDialingTime_ {};
        shared_ptr<float> averageHoldTime_ {};
        shared_ptr<float> averageRingTime_ {};
        shared_ptr<float> averageTalkTime_ {};
        shared_ptr<float> averageWorkTime_ {};
        shared_ptr<int64_t> callsAnswered_ {};
        shared_ptr<int64_t> callsAttendedTransferred_ {};
        shared_ptr<int64_t> callsBlindTransferred_ {};
        shared_ptr<int64_t> callsDialed_ {};
        shared_ptr<int32_t> callsHold_ {};
        shared_ptr<int64_t> callsRinged_ {};
        shared_ptr<int64_t> maxDialingTime_ {};
        shared_ptr<int64_t> maxHoldTime_ {};
        shared_ptr<int64_t> maxRingTime_ {};
        shared_ptr<int64_t> maxTalkTime_ {};
        shared_ptr<int64_t> maxWorkTime_ {};
        shared_ptr<float> satisfactionIndex_ {};
        shared_ptr<float> satisfactionRate_ {};
        shared_ptr<int64_t> satisfactionSurveysOffered_ {};
        shared_ptr<int64_t> satisfactionSurveysResponded_ {};
        shared_ptr<int64_t> totalDialingTime_ {};
        shared_ptr<int64_t> totalHoldTime_ {};
        shared_ptr<int64_t> totalRingTime_ {};
        shared_ptr<int64_t> totalTalkTime_ {};
        shared_ptr<int64_t> totalWorkTime_ {};
      };

      class Internal : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Internal& obj) { 
          DARABONBA_PTR_TO_JSON(CallsAnswered, callsAnswered_);
          DARABONBA_PTR_TO_JSON(CallsDialed, callsDialed_);
        };
        friend void from_json(const Darabonba::Json& j, Internal& obj) { 
          DARABONBA_PTR_FROM_JSON(CallsAnswered, callsAnswered_);
          DARABONBA_PTR_FROM_JSON(CallsDialed, callsDialed_);
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
        virtual bool empty() const override { return this->callsAnswered_ == nullptr
        && this->callsDialed_ == nullptr; };
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


      protected:
        shared_ptr<int64_t> callsAnswered_ {};
        shared_ptr<int64_t> callsDialed_ {};
      };

      class Inbound : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Inbound& obj) { 
          DARABONBA_PTR_TO_JSON(AbandonRate, abandonRate_);
          DARABONBA_PTR_TO_JSON(AccessChannelTypeDetailList, accessChannelTypeDetailList_);
          DARABONBA_PTR_TO_JSON(AverageAbandonTime, averageAbandonTime_);
          DARABONBA_PTR_TO_JSON(AverageAbandonedInIVRTime, averageAbandonedInIVRTime_);
          DARABONBA_PTR_TO_JSON(AverageAbandonedInQueueTime, averageAbandonedInQueueTime_);
          DARABONBA_PTR_TO_JSON(AverageAbandonedInRingTime, averageAbandonedInRingTime_);
          DARABONBA_PTR_TO_JSON(AverageFirstResponseTime, averageFirstResponseTime_);
          DARABONBA_PTR_TO_JSON(AverageHoldTime, averageHoldTime_);
          DARABONBA_PTR_TO_JSON(AverageResponseTime, averageResponseTime_);
          DARABONBA_PTR_TO_JSON(AverageRingTime, averageRingTime_);
          DARABONBA_PTR_TO_JSON(AverageTalkTime, averageTalkTime_);
          DARABONBA_PTR_TO_JSON(AverageWaitTime, averageWaitTime_);
          DARABONBA_PTR_TO_JSON(AverageWorkTime, averageWorkTime_);
          DARABONBA_PTR_TO_JSON(CallsAbandoned, callsAbandoned_);
          DARABONBA_PTR_TO_JSON(CallsAbandonedInIVR, callsAbandonedInIVR_);
          DARABONBA_PTR_TO_JSON(CallsAbandonedInQueue, callsAbandonedInQueue_);
          DARABONBA_PTR_TO_JSON(CallsAbandonedInRing, callsAbandonedInRing_);
          DARABONBA_PTR_TO_JSON(CallsAbandonedInVoiceNavigator, callsAbandonedInVoiceNavigator_);
          DARABONBA_PTR_TO_JSON(CallsAttendedTransferred, callsAttendedTransferred_);
          DARABONBA_PTR_TO_JSON(CallsBlindTransferred, callsBlindTransferred_);
          DARABONBA_PTR_TO_JSON(CallsCausedIVRException, callsCausedIVRException_);
          DARABONBA_PTR_TO_JSON(CallsForwardToOutsideNumber, callsForwardToOutsideNumber_);
          DARABONBA_PTR_TO_JSON(CallsHandled, callsHandled_);
          DARABONBA_PTR_TO_JSON(CallsHold, callsHold_);
          DARABONBA_PTR_TO_JSON(CallsIVRException, callsIVRException_);
          DARABONBA_PTR_TO_JSON(CallsOffered, callsOffered_);
          DARABONBA_PTR_TO_JSON(CallsQueued, callsQueued_);
          DARABONBA_PTR_TO_JSON(CallsQueuingFailed, callsQueuingFailed_);
          DARABONBA_PTR_TO_JSON(CallsQueuingOverflow, callsQueuingOverflow_);
          DARABONBA_PTR_TO_JSON(CallsQueuingTimeout, callsQueuingTimeout_);
          DARABONBA_PTR_TO_JSON(CallsRinged, callsRinged_);
          DARABONBA_PTR_TO_JSON(CallsToVoicemail, callsToVoicemail_);
          DARABONBA_PTR_TO_JSON(CallsVoicemail, callsVoicemail_);
          DARABONBA_PTR_TO_JSON(HandleRate, handleRate_);
          DARABONBA_PTR_TO_JSON(MaxAbandonTime, maxAbandonTime_);
          DARABONBA_PTR_TO_JSON(MaxAbandonedInIVRTime, maxAbandonedInIVRTime_);
          DARABONBA_PTR_TO_JSON(MaxAbandonedInQueueTime, maxAbandonedInQueueTime_);
          DARABONBA_PTR_TO_JSON(MaxAbandonedInRingTime, maxAbandonedInRingTime_);
          DARABONBA_PTR_TO_JSON(MaxHoldTime, maxHoldTime_);
          DARABONBA_PTR_TO_JSON(MaxRingTime, maxRingTime_);
          DARABONBA_PTR_TO_JSON(MaxTalkTime, maxTalkTime_);
          DARABONBA_PTR_TO_JSON(MaxWaitTime, maxWaitTime_);
          DARABONBA_PTR_TO_JSON(MaxWorkTime, maxWorkTime_);
          DARABONBA_PTR_TO_JSON(SatisfactionIndex, satisfactionIndex_);
          DARABONBA_PTR_TO_JSON(SatisfactionRate, satisfactionRate_);
          DARABONBA_PTR_TO_JSON(SatisfactionSurveysOffered, satisfactionSurveysOffered_);
          DARABONBA_PTR_TO_JSON(SatisfactionSurveysResponded, satisfactionSurveysResponded_);
          DARABONBA_PTR_TO_JSON(ServiceLevel15, serviceLevel15_);
          DARABONBA_PTR_TO_JSON(ServiceLevel20, serviceLevel20_);
          DARABONBA_PTR_TO_JSON(ServiceLevel30, serviceLevel30_);
          DARABONBA_PTR_TO_JSON(TotalAbandonTime, totalAbandonTime_);
          DARABONBA_PTR_TO_JSON(TotalAbandonedInIVRTime, totalAbandonedInIVRTime_);
          DARABONBA_PTR_TO_JSON(TotalAbandonedInQueueTime, totalAbandonedInQueueTime_);
          DARABONBA_PTR_TO_JSON(TotalAbandonedInRingTime, totalAbandonedInRingTime_);
          DARABONBA_PTR_TO_JSON(TotalHoldTime, totalHoldTime_);
          DARABONBA_PTR_TO_JSON(TotalMessagesSent, totalMessagesSent_);
          DARABONBA_PTR_TO_JSON(TotalMessagesSentByAgent, totalMessagesSentByAgent_);
          DARABONBA_PTR_TO_JSON(TotalMessagesSentByCustomer, totalMessagesSentByCustomer_);
          DARABONBA_PTR_TO_JSON(TotalRingTime, totalRingTime_);
          DARABONBA_PTR_TO_JSON(TotalTalkTime, totalTalkTime_);
          DARABONBA_PTR_TO_JSON(TotalWaitTime, totalWaitTime_);
          DARABONBA_PTR_TO_JSON(TotalWorkTime, totalWorkTime_);
        };
        friend void from_json(const Darabonba::Json& j, Inbound& obj) { 
          DARABONBA_PTR_FROM_JSON(AbandonRate, abandonRate_);
          DARABONBA_PTR_FROM_JSON(AccessChannelTypeDetailList, accessChannelTypeDetailList_);
          DARABONBA_PTR_FROM_JSON(AverageAbandonTime, averageAbandonTime_);
          DARABONBA_PTR_FROM_JSON(AverageAbandonedInIVRTime, averageAbandonedInIVRTime_);
          DARABONBA_PTR_FROM_JSON(AverageAbandonedInQueueTime, averageAbandonedInQueueTime_);
          DARABONBA_PTR_FROM_JSON(AverageAbandonedInRingTime, averageAbandonedInRingTime_);
          DARABONBA_PTR_FROM_JSON(AverageFirstResponseTime, averageFirstResponseTime_);
          DARABONBA_PTR_FROM_JSON(AverageHoldTime, averageHoldTime_);
          DARABONBA_PTR_FROM_JSON(AverageResponseTime, averageResponseTime_);
          DARABONBA_PTR_FROM_JSON(AverageRingTime, averageRingTime_);
          DARABONBA_PTR_FROM_JSON(AverageTalkTime, averageTalkTime_);
          DARABONBA_PTR_FROM_JSON(AverageWaitTime, averageWaitTime_);
          DARABONBA_PTR_FROM_JSON(AverageWorkTime, averageWorkTime_);
          DARABONBA_PTR_FROM_JSON(CallsAbandoned, callsAbandoned_);
          DARABONBA_PTR_FROM_JSON(CallsAbandonedInIVR, callsAbandonedInIVR_);
          DARABONBA_PTR_FROM_JSON(CallsAbandonedInQueue, callsAbandonedInQueue_);
          DARABONBA_PTR_FROM_JSON(CallsAbandonedInRing, callsAbandonedInRing_);
          DARABONBA_PTR_FROM_JSON(CallsAbandonedInVoiceNavigator, callsAbandonedInVoiceNavigator_);
          DARABONBA_PTR_FROM_JSON(CallsAttendedTransferred, callsAttendedTransferred_);
          DARABONBA_PTR_FROM_JSON(CallsBlindTransferred, callsBlindTransferred_);
          DARABONBA_PTR_FROM_JSON(CallsCausedIVRException, callsCausedIVRException_);
          DARABONBA_PTR_FROM_JSON(CallsForwardToOutsideNumber, callsForwardToOutsideNumber_);
          DARABONBA_PTR_FROM_JSON(CallsHandled, callsHandled_);
          DARABONBA_PTR_FROM_JSON(CallsHold, callsHold_);
          DARABONBA_PTR_FROM_JSON(CallsIVRException, callsIVRException_);
          DARABONBA_PTR_FROM_JSON(CallsOffered, callsOffered_);
          DARABONBA_PTR_FROM_JSON(CallsQueued, callsQueued_);
          DARABONBA_PTR_FROM_JSON(CallsQueuingFailed, callsQueuingFailed_);
          DARABONBA_PTR_FROM_JSON(CallsQueuingOverflow, callsQueuingOverflow_);
          DARABONBA_PTR_FROM_JSON(CallsQueuingTimeout, callsQueuingTimeout_);
          DARABONBA_PTR_FROM_JSON(CallsRinged, callsRinged_);
          DARABONBA_PTR_FROM_JSON(CallsToVoicemail, callsToVoicemail_);
          DARABONBA_PTR_FROM_JSON(CallsVoicemail, callsVoicemail_);
          DARABONBA_PTR_FROM_JSON(HandleRate, handleRate_);
          DARABONBA_PTR_FROM_JSON(MaxAbandonTime, maxAbandonTime_);
          DARABONBA_PTR_FROM_JSON(MaxAbandonedInIVRTime, maxAbandonedInIVRTime_);
          DARABONBA_PTR_FROM_JSON(MaxAbandonedInQueueTime, maxAbandonedInQueueTime_);
          DARABONBA_PTR_FROM_JSON(MaxAbandonedInRingTime, maxAbandonedInRingTime_);
          DARABONBA_PTR_FROM_JSON(MaxHoldTime, maxHoldTime_);
          DARABONBA_PTR_FROM_JSON(MaxRingTime, maxRingTime_);
          DARABONBA_PTR_FROM_JSON(MaxTalkTime, maxTalkTime_);
          DARABONBA_PTR_FROM_JSON(MaxWaitTime, maxWaitTime_);
          DARABONBA_PTR_FROM_JSON(MaxWorkTime, maxWorkTime_);
          DARABONBA_PTR_FROM_JSON(SatisfactionIndex, satisfactionIndex_);
          DARABONBA_PTR_FROM_JSON(SatisfactionRate, satisfactionRate_);
          DARABONBA_PTR_FROM_JSON(SatisfactionSurveysOffered, satisfactionSurveysOffered_);
          DARABONBA_PTR_FROM_JSON(SatisfactionSurveysResponded, satisfactionSurveysResponded_);
          DARABONBA_PTR_FROM_JSON(ServiceLevel15, serviceLevel15_);
          DARABONBA_PTR_FROM_JSON(ServiceLevel20, serviceLevel20_);
          DARABONBA_PTR_FROM_JSON(ServiceLevel30, serviceLevel30_);
          DARABONBA_PTR_FROM_JSON(TotalAbandonTime, totalAbandonTime_);
          DARABONBA_PTR_FROM_JSON(TotalAbandonedInIVRTime, totalAbandonedInIVRTime_);
          DARABONBA_PTR_FROM_JSON(TotalAbandonedInQueueTime, totalAbandonedInQueueTime_);
          DARABONBA_PTR_FROM_JSON(TotalAbandonedInRingTime, totalAbandonedInRingTime_);
          DARABONBA_PTR_FROM_JSON(TotalHoldTime, totalHoldTime_);
          DARABONBA_PTR_FROM_JSON(TotalMessagesSent, totalMessagesSent_);
          DARABONBA_PTR_FROM_JSON(TotalMessagesSentByAgent, totalMessagesSentByAgent_);
          DARABONBA_PTR_FROM_JSON(TotalMessagesSentByCustomer, totalMessagesSentByCustomer_);
          DARABONBA_PTR_FROM_JSON(TotalRingTime, totalRingTime_);
          DARABONBA_PTR_FROM_JSON(TotalTalkTime, totalTalkTime_);
          DARABONBA_PTR_FROM_JSON(TotalWaitTime, totalWaitTime_);
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
        class AccessChannelTypeDetailList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const AccessChannelTypeDetailList& obj) { 
            DARABONBA_PTR_TO_JSON(AccessChannelType, accessChannelType_);
            DARABONBA_PTR_TO_JSON(CallsOffered, callsOffered_);
          };
          friend void from_json(const Darabonba::Json& j, AccessChannelTypeDetailList& obj) { 
            DARABONBA_PTR_FROM_JSON(AccessChannelType, accessChannelType_);
            DARABONBA_PTR_FROM_JSON(CallsOffered, callsOffered_);
          };
          AccessChannelTypeDetailList() = default ;
          AccessChannelTypeDetailList(const AccessChannelTypeDetailList &) = default ;
          AccessChannelTypeDetailList(AccessChannelTypeDetailList &&) = default ;
          AccessChannelTypeDetailList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~AccessChannelTypeDetailList() = default ;
          AccessChannelTypeDetailList& operator=(const AccessChannelTypeDetailList &) = default ;
          AccessChannelTypeDetailList& operator=(AccessChannelTypeDetailList &&) = default ;
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
          inline AccessChannelTypeDetailList& setAccessChannelType(string accessChannelType) { DARABONBA_PTR_SET_VALUE(accessChannelType_, accessChannelType) };


          // callsOffered Field Functions 
          bool hasCallsOffered() const { return this->callsOffered_ != nullptr;};
          void deleteCallsOffered() { this->callsOffered_ = nullptr;};
          inline int64_t getCallsOffered() const { DARABONBA_PTR_GET_DEFAULT(callsOffered_, 0L) };
          inline AccessChannelTypeDetailList& setCallsOffered(int64_t callsOffered) { DARABONBA_PTR_SET_VALUE(callsOffered_, callsOffered) };


        protected:
          shared_ptr<string> accessChannelType_ {};
          shared_ptr<int64_t> callsOffered_ {};
        };

        virtual bool empty() const override { return this->abandonRate_ == nullptr
        && this->accessChannelTypeDetailList_ == nullptr && this->averageAbandonTime_ == nullptr && this->averageAbandonedInIVRTime_ == nullptr && this->averageAbandonedInQueueTime_ == nullptr && this->averageAbandonedInRingTime_ == nullptr
        && this->averageFirstResponseTime_ == nullptr && this->averageHoldTime_ == nullptr && this->averageResponseTime_ == nullptr && this->averageRingTime_ == nullptr && this->averageTalkTime_ == nullptr
        && this->averageWaitTime_ == nullptr && this->averageWorkTime_ == nullptr && this->callsAbandoned_ == nullptr && this->callsAbandonedInIVR_ == nullptr && this->callsAbandonedInQueue_ == nullptr
        && this->callsAbandonedInRing_ == nullptr && this->callsAbandonedInVoiceNavigator_ == nullptr && this->callsAttendedTransferred_ == nullptr && this->callsBlindTransferred_ == nullptr && this->callsCausedIVRException_ == nullptr
        && this->callsForwardToOutsideNumber_ == nullptr && this->callsHandled_ == nullptr && this->callsHold_ == nullptr && this->callsIVRException_ == nullptr && this->callsOffered_ == nullptr
        && this->callsQueued_ == nullptr && this->callsQueuingFailed_ == nullptr && this->callsQueuingOverflow_ == nullptr && this->callsQueuingTimeout_ == nullptr && this->callsRinged_ == nullptr
        && this->callsToVoicemail_ == nullptr && this->callsVoicemail_ == nullptr && this->handleRate_ == nullptr && this->maxAbandonTime_ == nullptr && this->maxAbandonedInIVRTime_ == nullptr
        && this->maxAbandonedInQueueTime_ == nullptr && this->maxAbandonedInRingTime_ == nullptr && this->maxHoldTime_ == nullptr && this->maxRingTime_ == nullptr && this->maxTalkTime_ == nullptr
        && this->maxWaitTime_ == nullptr && this->maxWorkTime_ == nullptr && this->satisfactionIndex_ == nullptr && this->satisfactionRate_ == nullptr && this->satisfactionSurveysOffered_ == nullptr
        && this->satisfactionSurveysResponded_ == nullptr && this->serviceLevel15_ == nullptr && this->serviceLevel20_ == nullptr && this->serviceLevel30_ == nullptr && this->totalAbandonTime_ == nullptr
        && this->totalAbandonedInIVRTime_ == nullptr && this->totalAbandonedInQueueTime_ == nullptr && this->totalAbandonedInRingTime_ == nullptr && this->totalHoldTime_ == nullptr && this->totalMessagesSent_ == nullptr
        && this->totalMessagesSentByAgent_ == nullptr && this->totalMessagesSentByCustomer_ == nullptr && this->totalRingTime_ == nullptr && this->totalTalkTime_ == nullptr && this->totalWaitTime_ == nullptr
        && this->totalWorkTime_ == nullptr; };
        // abandonRate Field Functions 
        bool hasAbandonRate() const { return this->abandonRate_ != nullptr;};
        void deleteAbandonRate() { this->abandonRate_ = nullptr;};
        inline float getAbandonRate() const { DARABONBA_PTR_GET_DEFAULT(abandonRate_, 0.0) };
        inline Inbound& setAbandonRate(float abandonRate) { DARABONBA_PTR_SET_VALUE(abandonRate_, abandonRate) };


        // accessChannelTypeDetailList Field Functions 
        bool hasAccessChannelTypeDetailList() const { return this->accessChannelTypeDetailList_ != nullptr;};
        void deleteAccessChannelTypeDetailList() { this->accessChannelTypeDetailList_ = nullptr;};
        inline const vector<Inbound::AccessChannelTypeDetailList> & getAccessChannelTypeDetailList() const { DARABONBA_PTR_GET_CONST(accessChannelTypeDetailList_, vector<Inbound::AccessChannelTypeDetailList>) };
        inline vector<Inbound::AccessChannelTypeDetailList> getAccessChannelTypeDetailList() { DARABONBA_PTR_GET(accessChannelTypeDetailList_, vector<Inbound::AccessChannelTypeDetailList>) };
        inline Inbound& setAccessChannelTypeDetailList(const vector<Inbound::AccessChannelTypeDetailList> & accessChannelTypeDetailList) { DARABONBA_PTR_SET_VALUE(accessChannelTypeDetailList_, accessChannelTypeDetailList) };
        inline Inbound& setAccessChannelTypeDetailList(vector<Inbound::AccessChannelTypeDetailList> && accessChannelTypeDetailList) { DARABONBA_PTR_SET_RVALUE(accessChannelTypeDetailList_, accessChannelTypeDetailList) };


        // averageAbandonTime Field Functions 
        bool hasAverageAbandonTime() const { return this->averageAbandonTime_ != nullptr;};
        void deleteAverageAbandonTime() { this->averageAbandonTime_ = nullptr;};
        inline float getAverageAbandonTime() const { DARABONBA_PTR_GET_DEFAULT(averageAbandonTime_, 0.0) };
        inline Inbound& setAverageAbandonTime(float averageAbandonTime) { DARABONBA_PTR_SET_VALUE(averageAbandonTime_, averageAbandonTime) };


        // averageAbandonedInIVRTime Field Functions 
        bool hasAverageAbandonedInIVRTime() const { return this->averageAbandonedInIVRTime_ != nullptr;};
        void deleteAverageAbandonedInIVRTime() { this->averageAbandonedInIVRTime_ = nullptr;};
        inline float getAverageAbandonedInIVRTime() const { DARABONBA_PTR_GET_DEFAULT(averageAbandonedInIVRTime_, 0.0) };
        inline Inbound& setAverageAbandonedInIVRTime(float averageAbandonedInIVRTime) { DARABONBA_PTR_SET_VALUE(averageAbandonedInIVRTime_, averageAbandonedInIVRTime) };


        // averageAbandonedInQueueTime Field Functions 
        bool hasAverageAbandonedInQueueTime() const { return this->averageAbandonedInQueueTime_ != nullptr;};
        void deleteAverageAbandonedInQueueTime() { this->averageAbandonedInQueueTime_ = nullptr;};
        inline float getAverageAbandonedInQueueTime() const { DARABONBA_PTR_GET_DEFAULT(averageAbandonedInQueueTime_, 0.0) };
        inline Inbound& setAverageAbandonedInQueueTime(float averageAbandonedInQueueTime) { DARABONBA_PTR_SET_VALUE(averageAbandonedInQueueTime_, averageAbandonedInQueueTime) };


        // averageAbandonedInRingTime Field Functions 
        bool hasAverageAbandonedInRingTime() const { return this->averageAbandonedInRingTime_ != nullptr;};
        void deleteAverageAbandonedInRingTime() { this->averageAbandonedInRingTime_ = nullptr;};
        inline float getAverageAbandonedInRingTime() const { DARABONBA_PTR_GET_DEFAULT(averageAbandonedInRingTime_, 0.0) };
        inline Inbound& setAverageAbandonedInRingTime(float averageAbandonedInRingTime) { DARABONBA_PTR_SET_VALUE(averageAbandonedInRingTime_, averageAbandonedInRingTime) };


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


        // averageWaitTime Field Functions 
        bool hasAverageWaitTime() const { return this->averageWaitTime_ != nullptr;};
        void deleteAverageWaitTime() { this->averageWaitTime_ = nullptr;};
        inline float getAverageWaitTime() const { DARABONBA_PTR_GET_DEFAULT(averageWaitTime_, 0.0) };
        inline Inbound& setAverageWaitTime(float averageWaitTime) { DARABONBA_PTR_SET_VALUE(averageWaitTime_, averageWaitTime) };


        // averageWorkTime Field Functions 
        bool hasAverageWorkTime() const { return this->averageWorkTime_ != nullptr;};
        void deleteAverageWorkTime() { this->averageWorkTime_ = nullptr;};
        inline float getAverageWorkTime() const { DARABONBA_PTR_GET_DEFAULT(averageWorkTime_, 0.0) };
        inline Inbound& setAverageWorkTime(float averageWorkTime) { DARABONBA_PTR_SET_VALUE(averageWorkTime_, averageWorkTime) };


        // callsAbandoned Field Functions 
        bool hasCallsAbandoned() const { return this->callsAbandoned_ != nullptr;};
        void deleteCallsAbandoned() { this->callsAbandoned_ = nullptr;};
        inline int64_t getCallsAbandoned() const { DARABONBA_PTR_GET_DEFAULT(callsAbandoned_, 0L) };
        inline Inbound& setCallsAbandoned(int64_t callsAbandoned) { DARABONBA_PTR_SET_VALUE(callsAbandoned_, callsAbandoned) };


        // callsAbandonedInIVR Field Functions 
        bool hasCallsAbandonedInIVR() const { return this->callsAbandonedInIVR_ != nullptr;};
        void deleteCallsAbandonedInIVR() { this->callsAbandonedInIVR_ = nullptr;};
        inline int64_t getCallsAbandonedInIVR() const { DARABONBA_PTR_GET_DEFAULT(callsAbandonedInIVR_, 0L) };
        inline Inbound& setCallsAbandonedInIVR(int64_t callsAbandonedInIVR) { DARABONBA_PTR_SET_VALUE(callsAbandonedInIVR_, callsAbandonedInIVR) };


        // callsAbandonedInQueue Field Functions 
        bool hasCallsAbandonedInQueue() const { return this->callsAbandonedInQueue_ != nullptr;};
        void deleteCallsAbandonedInQueue() { this->callsAbandonedInQueue_ = nullptr;};
        inline int64_t getCallsAbandonedInQueue() const { DARABONBA_PTR_GET_DEFAULT(callsAbandonedInQueue_, 0L) };
        inline Inbound& setCallsAbandonedInQueue(int64_t callsAbandonedInQueue) { DARABONBA_PTR_SET_VALUE(callsAbandonedInQueue_, callsAbandonedInQueue) };


        // callsAbandonedInRing Field Functions 
        bool hasCallsAbandonedInRing() const { return this->callsAbandonedInRing_ != nullptr;};
        void deleteCallsAbandonedInRing() { this->callsAbandonedInRing_ = nullptr;};
        inline int64_t getCallsAbandonedInRing() const { DARABONBA_PTR_GET_DEFAULT(callsAbandonedInRing_, 0L) };
        inline Inbound& setCallsAbandonedInRing(int64_t callsAbandonedInRing) { DARABONBA_PTR_SET_VALUE(callsAbandonedInRing_, callsAbandonedInRing) };


        // callsAbandonedInVoiceNavigator Field Functions 
        bool hasCallsAbandonedInVoiceNavigator() const { return this->callsAbandonedInVoiceNavigator_ != nullptr;};
        void deleteCallsAbandonedInVoiceNavigator() { this->callsAbandonedInVoiceNavigator_ = nullptr;};
        inline int64_t getCallsAbandonedInVoiceNavigator() const { DARABONBA_PTR_GET_DEFAULT(callsAbandonedInVoiceNavigator_, 0L) };
        inline Inbound& setCallsAbandonedInVoiceNavigator(int64_t callsAbandonedInVoiceNavigator) { DARABONBA_PTR_SET_VALUE(callsAbandonedInVoiceNavigator_, callsAbandonedInVoiceNavigator) };


        // callsAttendedTransferred Field Functions 
        bool hasCallsAttendedTransferred() const { return this->callsAttendedTransferred_ != nullptr;};
        void deleteCallsAttendedTransferred() { this->callsAttendedTransferred_ = nullptr;};
        inline int64_t getCallsAttendedTransferred() const { DARABONBA_PTR_GET_DEFAULT(callsAttendedTransferred_, 0L) };
        inline Inbound& setCallsAttendedTransferred(int64_t callsAttendedTransferred) { DARABONBA_PTR_SET_VALUE(callsAttendedTransferred_, callsAttendedTransferred) };


        // callsBlindTransferred Field Functions 
        bool hasCallsBlindTransferred() const { return this->callsBlindTransferred_ != nullptr;};
        void deleteCallsBlindTransferred() { this->callsBlindTransferred_ = nullptr;};
        inline int64_t getCallsBlindTransferred() const { DARABONBA_PTR_GET_DEFAULT(callsBlindTransferred_, 0L) };
        inline Inbound& setCallsBlindTransferred(int64_t callsBlindTransferred) { DARABONBA_PTR_SET_VALUE(callsBlindTransferred_, callsBlindTransferred) };


        // callsCausedIVRException Field Functions 
        bool hasCallsCausedIVRException() const { return this->callsCausedIVRException_ != nullptr;};
        void deleteCallsCausedIVRException() { this->callsCausedIVRException_ = nullptr;};
        inline int64_t getCallsCausedIVRException() const { DARABONBA_PTR_GET_DEFAULT(callsCausedIVRException_, 0L) };
        inline Inbound& setCallsCausedIVRException(int64_t callsCausedIVRException) { DARABONBA_PTR_SET_VALUE(callsCausedIVRException_, callsCausedIVRException) };


        // callsForwardToOutsideNumber Field Functions 
        bool hasCallsForwardToOutsideNumber() const { return this->callsForwardToOutsideNumber_ != nullptr;};
        void deleteCallsForwardToOutsideNumber() { this->callsForwardToOutsideNumber_ = nullptr;};
        inline int64_t getCallsForwardToOutsideNumber() const { DARABONBA_PTR_GET_DEFAULT(callsForwardToOutsideNumber_, 0L) };
        inline Inbound& setCallsForwardToOutsideNumber(int64_t callsForwardToOutsideNumber) { DARABONBA_PTR_SET_VALUE(callsForwardToOutsideNumber_, callsForwardToOutsideNumber) };


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


        // callsIVRException Field Functions 
        bool hasCallsIVRException() const { return this->callsIVRException_ != nullptr;};
        void deleteCallsIVRException() { this->callsIVRException_ = nullptr;};
        inline int64_t getCallsIVRException() const { DARABONBA_PTR_GET_DEFAULT(callsIVRException_, 0L) };
        inline Inbound& setCallsIVRException(int64_t callsIVRException) { DARABONBA_PTR_SET_VALUE(callsIVRException_, callsIVRException) };


        // callsOffered Field Functions 
        bool hasCallsOffered() const { return this->callsOffered_ != nullptr;};
        void deleteCallsOffered() { this->callsOffered_ = nullptr;};
        inline int64_t getCallsOffered() const { DARABONBA_PTR_GET_DEFAULT(callsOffered_, 0L) };
        inline Inbound& setCallsOffered(int64_t callsOffered) { DARABONBA_PTR_SET_VALUE(callsOffered_, callsOffered) };


        // callsQueued Field Functions 
        bool hasCallsQueued() const { return this->callsQueued_ != nullptr;};
        void deleteCallsQueued() { this->callsQueued_ = nullptr;};
        inline int64_t getCallsQueued() const { DARABONBA_PTR_GET_DEFAULT(callsQueued_, 0L) };
        inline Inbound& setCallsQueued(int64_t callsQueued) { DARABONBA_PTR_SET_VALUE(callsQueued_, callsQueued) };


        // callsQueuingFailed Field Functions 
        bool hasCallsQueuingFailed() const { return this->callsQueuingFailed_ != nullptr;};
        void deleteCallsQueuingFailed() { this->callsQueuingFailed_ = nullptr;};
        inline int64_t getCallsQueuingFailed() const { DARABONBA_PTR_GET_DEFAULT(callsQueuingFailed_, 0L) };
        inline Inbound& setCallsQueuingFailed(int64_t callsQueuingFailed) { DARABONBA_PTR_SET_VALUE(callsQueuingFailed_, callsQueuingFailed) };


        // callsQueuingOverflow Field Functions 
        bool hasCallsQueuingOverflow() const { return this->callsQueuingOverflow_ != nullptr;};
        void deleteCallsQueuingOverflow() { this->callsQueuingOverflow_ = nullptr;};
        inline int64_t getCallsQueuingOverflow() const { DARABONBA_PTR_GET_DEFAULT(callsQueuingOverflow_, 0L) };
        inline Inbound& setCallsQueuingOverflow(int64_t callsQueuingOverflow) { DARABONBA_PTR_SET_VALUE(callsQueuingOverflow_, callsQueuingOverflow) };


        // callsQueuingTimeout Field Functions 
        bool hasCallsQueuingTimeout() const { return this->callsQueuingTimeout_ != nullptr;};
        void deleteCallsQueuingTimeout() { this->callsQueuingTimeout_ = nullptr;};
        inline int64_t getCallsQueuingTimeout() const { DARABONBA_PTR_GET_DEFAULT(callsQueuingTimeout_, 0L) };
        inline Inbound& setCallsQueuingTimeout(int64_t callsQueuingTimeout) { DARABONBA_PTR_SET_VALUE(callsQueuingTimeout_, callsQueuingTimeout) };


        // callsRinged Field Functions 
        bool hasCallsRinged() const { return this->callsRinged_ != nullptr;};
        void deleteCallsRinged() { this->callsRinged_ = nullptr;};
        inline int64_t getCallsRinged() const { DARABONBA_PTR_GET_DEFAULT(callsRinged_, 0L) };
        inline Inbound& setCallsRinged(int64_t callsRinged) { DARABONBA_PTR_SET_VALUE(callsRinged_, callsRinged) };


        // callsToVoicemail Field Functions 
        bool hasCallsToVoicemail() const { return this->callsToVoicemail_ != nullptr;};
        void deleteCallsToVoicemail() { this->callsToVoicemail_ = nullptr;};
        inline int64_t getCallsToVoicemail() const { DARABONBA_PTR_GET_DEFAULT(callsToVoicemail_, 0L) };
        inline Inbound& setCallsToVoicemail(int64_t callsToVoicemail) { DARABONBA_PTR_SET_VALUE(callsToVoicemail_, callsToVoicemail) };


        // callsVoicemail Field Functions 
        bool hasCallsVoicemail() const { return this->callsVoicemail_ != nullptr;};
        void deleteCallsVoicemail() { this->callsVoicemail_ = nullptr;};
        inline int64_t getCallsVoicemail() const { DARABONBA_PTR_GET_DEFAULT(callsVoicemail_, 0L) };
        inline Inbound& setCallsVoicemail(int64_t callsVoicemail) { DARABONBA_PTR_SET_VALUE(callsVoicemail_, callsVoicemail) };


        // handleRate Field Functions 
        bool hasHandleRate() const { return this->handleRate_ != nullptr;};
        void deleteHandleRate() { this->handleRate_ = nullptr;};
        inline float getHandleRate() const { DARABONBA_PTR_GET_DEFAULT(handleRate_, 0.0) };
        inline Inbound& setHandleRate(float handleRate) { DARABONBA_PTR_SET_VALUE(handleRate_, handleRate) };


        // maxAbandonTime Field Functions 
        bool hasMaxAbandonTime() const { return this->maxAbandonTime_ != nullptr;};
        void deleteMaxAbandonTime() { this->maxAbandonTime_ = nullptr;};
        inline int64_t getMaxAbandonTime() const { DARABONBA_PTR_GET_DEFAULT(maxAbandonTime_, 0L) };
        inline Inbound& setMaxAbandonTime(int64_t maxAbandonTime) { DARABONBA_PTR_SET_VALUE(maxAbandonTime_, maxAbandonTime) };


        // maxAbandonedInIVRTime Field Functions 
        bool hasMaxAbandonedInIVRTime() const { return this->maxAbandonedInIVRTime_ != nullptr;};
        void deleteMaxAbandonedInIVRTime() { this->maxAbandonedInIVRTime_ = nullptr;};
        inline int64_t getMaxAbandonedInIVRTime() const { DARABONBA_PTR_GET_DEFAULT(maxAbandonedInIVRTime_, 0L) };
        inline Inbound& setMaxAbandonedInIVRTime(int64_t maxAbandonedInIVRTime) { DARABONBA_PTR_SET_VALUE(maxAbandonedInIVRTime_, maxAbandonedInIVRTime) };


        // maxAbandonedInQueueTime Field Functions 
        bool hasMaxAbandonedInQueueTime() const { return this->maxAbandonedInQueueTime_ != nullptr;};
        void deleteMaxAbandonedInQueueTime() { this->maxAbandonedInQueueTime_ = nullptr;};
        inline int64_t getMaxAbandonedInQueueTime() const { DARABONBA_PTR_GET_DEFAULT(maxAbandonedInQueueTime_, 0L) };
        inline Inbound& setMaxAbandonedInQueueTime(int64_t maxAbandonedInQueueTime) { DARABONBA_PTR_SET_VALUE(maxAbandonedInQueueTime_, maxAbandonedInQueueTime) };


        // maxAbandonedInRingTime Field Functions 
        bool hasMaxAbandonedInRingTime() const { return this->maxAbandonedInRingTime_ != nullptr;};
        void deleteMaxAbandonedInRingTime() { this->maxAbandonedInRingTime_ = nullptr;};
        inline int64_t getMaxAbandonedInRingTime() const { DARABONBA_PTR_GET_DEFAULT(maxAbandonedInRingTime_, 0L) };
        inline Inbound& setMaxAbandonedInRingTime(int64_t maxAbandonedInRingTime) { DARABONBA_PTR_SET_VALUE(maxAbandonedInRingTime_, maxAbandonedInRingTime) };


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


        // maxWaitTime Field Functions 
        bool hasMaxWaitTime() const { return this->maxWaitTime_ != nullptr;};
        void deleteMaxWaitTime() { this->maxWaitTime_ = nullptr;};
        inline int64_t getMaxWaitTime() const { DARABONBA_PTR_GET_DEFAULT(maxWaitTime_, 0L) };
        inline Inbound& setMaxWaitTime(int64_t maxWaitTime) { DARABONBA_PTR_SET_VALUE(maxWaitTime_, maxWaitTime) };


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


        // serviceLevel20 Field Functions 
        bool hasServiceLevel20() const { return this->serviceLevel20_ != nullptr;};
        void deleteServiceLevel20() { this->serviceLevel20_ = nullptr;};
        inline float getServiceLevel20() const { DARABONBA_PTR_GET_DEFAULT(serviceLevel20_, 0.0) };
        inline Inbound& setServiceLevel20(float serviceLevel20) { DARABONBA_PTR_SET_VALUE(serviceLevel20_, serviceLevel20) };


        // serviceLevel30 Field Functions 
        bool hasServiceLevel30() const { return this->serviceLevel30_ != nullptr;};
        void deleteServiceLevel30() { this->serviceLevel30_ = nullptr;};
        inline float getServiceLevel30() const { DARABONBA_PTR_GET_DEFAULT(serviceLevel30_, 0.0) };
        inline Inbound& setServiceLevel30(float serviceLevel30) { DARABONBA_PTR_SET_VALUE(serviceLevel30_, serviceLevel30) };


        // totalAbandonTime Field Functions 
        bool hasTotalAbandonTime() const { return this->totalAbandonTime_ != nullptr;};
        void deleteTotalAbandonTime() { this->totalAbandonTime_ = nullptr;};
        inline int64_t getTotalAbandonTime() const { DARABONBA_PTR_GET_DEFAULT(totalAbandonTime_, 0L) };
        inline Inbound& setTotalAbandonTime(int64_t totalAbandonTime) { DARABONBA_PTR_SET_VALUE(totalAbandonTime_, totalAbandonTime) };


        // totalAbandonedInIVRTime Field Functions 
        bool hasTotalAbandonedInIVRTime() const { return this->totalAbandonedInIVRTime_ != nullptr;};
        void deleteTotalAbandonedInIVRTime() { this->totalAbandonedInIVRTime_ = nullptr;};
        inline int64_t getTotalAbandonedInIVRTime() const { DARABONBA_PTR_GET_DEFAULT(totalAbandonedInIVRTime_, 0L) };
        inline Inbound& setTotalAbandonedInIVRTime(int64_t totalAbandonedInIVRTime) { DARABONBA_PTR_SET_VALUE(totalAbandonedInIVRTime_, totalAbandonedInIVRTime) };


        // totalAbandonedInQueueTime Field Functions 
        bool hasTotalAbandonedInQueueTime() const { return this->totalAbandonedInQueueTime_ != nullptr;};
        void deleteTotalAbandonedInQueueTime() { this->totalAbandonedInQueueTime_ = nullptr;};
        inline int64_t getTotalAbandonedInQueueTime() const { DARABONBA_PTR_GET_DEFAULT(totalAbandonedInQueueTime_, 0L) };
        inline Inbound& setTotalAbandonedInQueueTime(int64_t totalAbandonedInQueueTime) { DARABONBA_PTR_SET_VALUE(totalAbandonedInQueueTime_, totalAbandonedInQueueTime) };


        // totalAbandonedInRingTime Field Functions 
        bool hasTotalAbandonedInRingTime() const { return this->totalAbandonedInRingTime_ != nullptr;};
        void deleteTotalAbandonedInRingTime() { this->totalAbandonedInRingTime_ = nullptr;};
        inline int64_t getTotalAbandonedInRingTime() const { DARABONBA_PTR_GET_DEFAULT(totalAbandonedInRingTime_, 0L) };
        inline Inbound& setTotalAbandonedInRingTime(int64_t totalAbandonedInRingTime) { DARABONBA_PTR_SET_VALUE(totalAbandonedInRingTime_, totalAbandonedInRingTime) };


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
        inline int64_t getTotalMessagesSentByCustomer() const { DARABONBA_PTR_GET_DEFAULT(totalMessagesSentByCustomer_, 0L) };
        inline Inbound& setTotalMessagesSentByCustomer(int64_t totalMessagesSentByCustomer) { DARABONBA_PTR_SET_VALUE(totalMessagesSentByCustomer_, totalMessagesSentByCustomer) };


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


        // totalWaitTime Field Functions 
        bool hasTotalWaitTime() const { return this->totalWaitTime_ != nullptr;};
        void deleteTotalWaitTime() { this->totalWaitTime_ = nullptr;};
        inline int64_t getTotalWaitTime() const { DARABONBA_PTR_GET_DEFAULT(totalWaitTime_, 0L) };
        inline Inbound& setTotalWaitTime(int64_t totalWaitTime) { DARABONBA_PTR_SET_VALUE(totalWaitTime_, totalWaitTime) };


        // totalWorkTime Field Functions 
        bool hasTotalWorkTime() const { return this->totalWorkTime_ != nullptr;};
        void deleteTotalWorkTime() { this->totalWorkTime_ = nullptr;};
        inline int64_t getTotalWorkTime() const { DARABONBA_PTR_GET_DEFAULT(totalWorkTime_, 0L) };
        inline Inbound& setTotalWorkTime(int64_t totalWorkTime) { DARABONBA_PTR_SET_VALUE(totalWorkTime_, totalWorkTime) };


      protected:
        shared_ptr<float> abandonRate_ {};
        shared_ptr<vector<Inbound::AccessChannelTypeDetailList>> accessChannelTypeDetailList_ {};
        shared_ptr<float> averageAbandonTime_ {};
        shared_ptr<float> averageAbandonedInIVRTime_ {};
        shared_ptr<float> averageAbandonedInQueueTime_ {};
        shared_ptr<float> averageAbandonedInRingTime_ {};
        shared_ptr<float> averageFirstResponseTime_ {};
        shared_ptr<float> averageHoldTime_ {};
        shared_ptr<float> averageResponseTime_ {};
        shared_ptr<float> averageRingTime_ {};
        shared_ptr<float> averageTalkTime_ {};
        shared_ptr<float> averageWaitTime_ {};
        shared_ptr<float> averageWorkTime_ {};
        shared_ptr<int64_t> callsAbandoned_ {};
        shared_ptr<int64_t> callsAbandonedInIVR_ {};
        shared_ptr<int64_t> callsAbandonedInQueue_ {};
        shared_ptr<int64_t> callsAbandonedInRing_ {};
        shared_ptr<int64_t> callsAbandonedInVoiceNavigator_ {};
        shared_ptr<int64_t> callsAttendedTransferred_ {};
        shared_ptr<int64_t> callsBlindTransferred_ {};
        shared_ptr<int64_t> callsCausedIVRException_ {};
        shared_ptr<int64_t> callsForwardToOutsideNumber_ {};
        shared_ptr<int64_t> callsHandled_ {};
        shared_ptr<int64_t> callsHold_ {};
        shared_ptr<int64_t> callsIVRException_ {};
        shared_ptr<int64_t> callsOffered_ {};
        shared_ptr<int64_t> callsQueued_ {};
        shared_ptr<int64_t> callsQueuingFailed_ {};
        shared_ptr<int64_t> callsQueuingOverflow_ {};
        shared_ptr<int64_t> callsQueuingTimeout_ {};
        shared_ptr<int64_t> callsRinged_ {};
        shared_ptr<int64_t> callsToVoicemail_ {};
        shared_ptr<int64_t> callsVoicemail_ {};
        shared_ptr<float> handleRate_ {};
        shared_ptr<int64_t> maxAbandonTime_ {};
        shared_ptr<int64_t> maxAbandonedInIVRTime_ {};
        shared_ptr<int64_t> maxAbandonedInQueueTime_ {};
        shared_ptr<int64_t> maxAbandonedInRingTime_ {};
        shared_ptr<int64_t> maxHoldTime_ {};
        shared_ptr<int64_t> maxRingTime_ {};
        shared_ptr<int64_t> maxTalkTime_ {};
        shared_ptr<int64_t> maxWaitTime_ {};
        shared_ptr<int64_t> maxWorkTime_ {};
        shared_ptr<float> satisfactionIndex_ {};
        shared_ptr<float> satisfactionRate_ {};
        shared_ptr<int64_t> satisfactionSurveysOffered_ {};
        shared_ptr<int64_t> satisfactionSurveysResponded_ {};
        shared_ptr<float> serviceLevel15_ {};
        shared_ptr<float> serviceLevel20_ {};
        shared_ptr<float> serviceLevel30_ {};
        shared_ptr<int64_t> totalAbandonTime_ {};
        shared_ptr<int64_t> totalAbandonedInIVRTime_ {};
        shared_ptr<int64_t> totalAbandonedInQueueTime_ {};
        shared_ptr<int64_t> totalAbandonedInRingTime_ {};
        shared_ptr<int64_t> totalHoldTime_ {};
        shared_ptr<int64_t> totalMessagesSent_ {};
        shared_ptr<int64_t> totalMessagesSentByAgent_ {};
        shared_ptr<int64_t> totalMessagesSentByCustomer_ {};
        shared_ptr<int64_t> totalRingTime_ {};
        shared_ptr<int64_t> totalTalkTime_ {};
        shared_ptr<int64_t> totalWaitTime_ {};
        shared_ptr<int64_t> totalWorkTime_ {};
      };

      virtual bool empty() const override { return this->inbound_ == nullptr
        && this->internal_ == nullptr && this->outbound_ == nullptr && this->overall_ == nullptr; };
      // inbound Field Functions 
      bool hasInbound() const { return this->inbound_ != nullptr;};
      void deleteInbound() { this->inbound_ = nullptr;};
      inline const Data::Inbound & getInbound() const { DARABONBA_PTR_GET_CONST(inbound_, Data::Inbound) };
      inline Data::Inbound getInbound() { DARABONBA_PTR_GET(inbound_, Data::Inbound) };
      inline Data& setInbound(const Data::Inbound & inbound) { DARABONBA_PTR_SET_VALUE(inbound_, inbound) };
      inline Data& setInbound(Data::Inbound && inbound) { DARABONBA_PTR_SET_RVALUE(inbound_, inbound) };


      // internal Field Functions 
      bool hasInternal() const { return this->internal_ != nullptr;};
      void deleteInternal() { this->internal_ = nullptr;};
      inline const Data::Internal & getInternal() const { DARABONBA_PTR_GET_CONST(internal_, Data::Internal) };
      inline Data::Internal getInternal() { DARABONBA_PTR_GET(internal_, Data::Internal) };
      inline Data& setInternal(const Data::Internal & internal) { DARABONBA_PTR_SET_VALUE(internal_, internal) };
      inline Data& setInternal(Data::Internal && internal) { DARABONBA_PTR_SET_RVALUE(internal_, internal) };


      // outbound Field Functions 
      bool hasOutbound() const { return this->outbound_ != nullptr;};
      void deleteOutbound() { this->outbound_ = nullptr;};
      inline const Data::Outbound & getOutbound() const { DARABONBA_PTR_GET_CONST(outbound_, Data::Outbound) };
      inline Data::Outbound getOutbound() { DARABONBA_PTR_GET(outbound_, Data::Outbound) };
      inline Data& setOutbound(const Data::Outbound & outbound) { DARABONBA_PTR_SET_VALUE(outbound_, outbound) };
      inline Data& setOutbound(Data::Outbound && outbound) { DARABONBA_PTR_SET_RVALUE(outbound_, outbound) };


      // overall Field Functions 
      bool hasOverall() const { return this->overall_ != nullptr;};
      void deleteOverall() { this->overall_ = nullptr;};
      inline const Data::Overall & getOverall() const { DARABONBA_PTR_GET_CONST(overall_, Data::Overall) };
      inline Data::Overall getOverall() { DARABONBA_PTR_GET(overall_, Data::Overall) };
      inline Data& setOverall(const Data::Overall & overall) { DARABONBA_PTR_SET_VALUE(overall_, overall) };
      inline Data& setOverall(Data::Overall && overall) { DARABONBA_PTR_SET_RVALUE(overall_, overall) };


    protected:
      shared_ptr<Data::Inbound> inbound_ {};
      shared_ptr<Data::Internal> internal_ {};
      shared_ptr<Data::Outbound> outbound_ {};
      shared_ptr<Data::Overall> overall_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetHistoricalInstanceReportResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetHistoricalInstanceReportResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetHistoricalInstanceReportResponseBody::Data) };
    inline GetHistoricalInstanceReportResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetHistoricalInstanceReportResponseBody::Data) };
    inline GetHistoricalInstanceReportResponseBody& setData(const GetHistoricalInstanceReportResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetHistoricalInstanceReportResponseBody& setData(GetHistoricalInstanceReportResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetHistoricalInstanceReportResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetHistoricalInstanceReportResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetHistoricalInstanceReportResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<GetHistoricalInstanceReportResponseBody::Data> data_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
