// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINTERVALSKILLGROUPREPORTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTINTERVALSKILLGROUPREPORTRESPONSEBODY_HPP_
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
  class ListIntervalSkillGroupReportResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListIntervalSkillGroupReportResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListIntervalSkillGroupReportResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListIntervalSkillGroupReportResponseBody() = default ;
    ListIntervalSkillGroupReportResponseBody(const ListIntervalSkillGroupReportResponseBody &) = default ;
    ListIntervalSkillGroupReportResponseBody(ListIntervalSkillGroupReportResponseBody &&) = default ;
    ListIntervalSkillGroupReportResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListIntervalSkillGroupReportResponseBody() = default ;
    ListIntervalSkillGroupReportResponseBody& operator=(const ListIntervalSkillGroupReportResponseBody &) = default ;
    ListIntervalSkillGroupReportResponseBody& operator=(ListIntervalSkillGroupReportResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Back2Back, back2Back_);
        DARABONBA_PTR_TO_JSON(Inbound, inbound_);
        DARABONBA_PTR_TO_JSON(Outbound, outbound_);
        DARABONBA_PTR_TO_JSON(Overall, overall_);
        DARABONBA_PTR_TO_JSON(StatsTime, statsTime_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Back2Back, back2Back_);
        DARABONBA_PTR_FROM_JSON(Inbound, inbound_);
        DARABONBA_PTR_FROM_JSON(Outbound, outbound_);
        DARABONBA_PTR_FROM_JSON(Overall, overall_);
        DARABONBA_PTR_FROM_JSON(StatsTime, statsTime_);
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
          DARABONBA_PTR_TO_JSON(BreakCodeDetailList, breakCodeDetailList_);
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
          shared_ptr<string> breakCode_ {};
          shared_ptr<int64_t> count_ {};
          shared_ptr<int64_t> duration_ {};
        };

        virtual bool empty() const override { return this->averageBreakTime_ == nullptr
        && this->averageHoldTime_ == nullptr && this->averageReadyTime_ == nullptr && this->averageTalkTime_ == nullptr && this->averageWorkTime_ == nullptr && this->breakCodeDetailList_ == nullptr
        && this->maxBreakTime_ == nullptr && this->maxHoldTime_ == nullptr && this->maxReadyTime_ == nullptr && this->maxTalkTime_ == nullptr && this->maxWorkTime_ == nullptr
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


        // breakCodeDetailList Field Functions 
        bool hasBreakCodeDetailList() const { return this->breakCodeDetailList_ != nullptr;};
        void deleteBreakCodeDetailList() { this->breakCodeDetailList_ = nullptr;};
        inline const vector<Overall::BreakCodeDetailList> & getBreakCodeDetailList() const { DARABONBA_PTR_GET_CONST(breakCodeDetailList_, vector<Overall::BreakCodeDetailList>) };
        inline vector<Overall::BreakCodeDetailList> getBreakCodeDetailList() { DARABONBA_PTR_GET(breakCodeDetailList_, vector<Overall::BreakCodeDetailList>) };
        inline Overall& setBreakCodeDetailList(const vector<Overall::BreakCodeDetailList> & breakCodeDetailList) { DARABONBA_PTR_SET_VALUE(breakCodeDetailList_, breakCodeDetailList) };
        inline Overall& setBreakCodeDetailList(vector<Overall::BreakCodeDetailList> && breakCodeDetailList) { DARABONBA_PTR_SET_RVALUE(breakCodeDetailList_, breakCodeDetailList) };


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
        shared_ptr<vector<Overall::BreakCodeDetailList>> breakCodeDetailList_ {};
        shared_ptr<int64_t> maxBreakTime_ {};
        shared_ptr<int64_t> maxHoldTime_ {};
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
        shared_ptr<float> answerRate_ {};
        shared_ptr<float> averageDialingTime_ {};
        shared_ptr<float> averageHoldTime_ {};
        shared_ptr<float> averageRingTime_ {};
        shared_ptr<float> averageTalkTime_ {};
        shared_ptr<float> averageWorkTime_ {};
        shared_ptr<int64_t> callsAnswered_ {};
        shared_ptr<int64_t> callsAttendedTransferIn_ {};
        shared_ptr<int64_t> callsAttendedTransferOut_ {};
        shared_ptr<int64_t> callsBlindTransferIn_ {};
        shared_ptr<int64_t> callsBlindTransferOut_ {};
        shared_ptr<int64_t> callsDialed_ {};
        shared_ptr<int64_t> callsHold_ {};
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

      class Inbound : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Inbound& obj) { 
          DARABONBA_PTR_TO_JSON(AbandonRate, abandonRate_);
          DARABONBA_PTR_TO_JSON(AverageAbandonTime, averageAbandonTime_);
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
          DARABONBA_PTR_TO_JSON(CallsAbandonedInQueue, callsAbandonedInQueue_);
          DARABONBA_PTR_TO_JSON(CallsAbandonedInRing, callsAbandonedInRing_);
          DARABONBA_PTR_TO_JSON(CallsAttendedTransferIn, callsAttendedTransferIn_);
          DARABONBA_PTR_TO_JSON(CallsAttendedTransferOut, callsAttendedTransferOut_);
          DARABONBA_PTR_TO_JSON(CallsBlindTransferIn, callsBlindTransferIn_);
          DARABONBA_PTR_TO_JSON(CallsBlindTransferOut, callsBlindTransferOut_);
          DARABONBA_PTR_TO_JSON(CallsHandled, callsHandled_);
          DARABONBA_PTR_TO_JSON(CallsHold, callsHold_);
          DARABONBA_PTR_TO_JSON(CallsOffered, callsOffered_);
          DARABONBA_PTR_TO_JSON(CallsOverflow, callsOverflow_);
          DARABONBA_PTR_TO_JSON(CallsQueued, callsQueued_);
          DARABONBA_PTR_TO_JSON(CallsQueuingOverflow, callsQueuingOverflow_);
          DARABONBA_PTR_TO_JSON(CallsQueuingTimeout, callsQueuingTimeout_);
          DARABONBA_PTR_TO_JSON(CallsRinged, callsRinged_);
          DARABONBA_PTR_TO_JSON(CallsTimeout, callsTimeout_);
          DARABONBA_PTR_TO_JSON(HandleRate, handleRate_);
          DARABONBA_PTR_TO_JSON(MaxAbandonTime, maxAbandonTime_);
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
          DARABONBA_PTR_TO_JSON(ServiceLevel20, serviceLevel20_);
          DARABONBA_PTR_TO_JSON(TotalAbandonTime, totalAbandonTime_);
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
          DARABONBA_PTR_FROM_JSON(AverageAbandonTime, averageAbandonTime_);
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
          DARABONBA_PTR_FROM_JSON(CallsAbandonedInQueue, callsAbandonedInQueue_);
          DARABONBA_PTR_FROM_JSON(CallsAbandonedInRing, callsAbandonedInRing_);
          DARABONBA_PTR_FROM_JSON(CallsAttendedTransferIn, callsAttendedTransferIn_);
          DARABONBA_PTR_FROM_JSON(CallsAttendedTransferOut, callsAttendedTransferOut_);
          DARABONBA_PTR_FROM_JSON(CallsBlindTransferIn, callsBlindTransferIn_);
          DARABONBA_PTR_FROM_JSON(CallsBlindTransferOut, callsBlindTransferOut_);
          DARABONBA_PTR_FROM_JSON(CallsHandled, callsHandled_);
          DARABONBA_PTR_FROM_JSON(CallsHold, callsHold_);
          DARABONBA_PTR_FROM_JSON(CallsOffered, callsOffered_);
          DARABONBA_PTR_FROM_JSON(CallsOverflow, callsOverflow_);
          DARABONBA_PTR_FROM_JSON(CallsQueued, callsQueued_);
          DARABONBA_PTR_FROM_JSON(CallsQueuingOverflow, callsQueuingOverflow_);
          DARABONBA_PTR_FROM_JSON(CallsQueuingTimeout, callsQueuingTimeout_);
          DARABONBA_PTR_FROM_JSON(CallsRinged, callsRinged_);
          DARABONBA_PTR_FROM_JSON(CallsTimeout, callsTimeout_);
          DARABONBA_PTR_FROM_JSON(HandleRate, handleRate_);
          DARABONBA_PTR_FROM_JSON(MaxAbandonTime, maxAbandonTime_);
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
          DARABONBA_PTR_FROM_JSON(ServiceLevel20, serviceLevel20_);
          DARABONBA_PTR_FROM_JSON(TotalAbandonTime, totalAbandonTime_);
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
        virtual bool empty() const override { return this->abandonRate_ == nullptr
        && this->averageAbandonTime_ == nullptr && this->averageAbandonedInQueueTime_ == nullptr && this->averageAbandonedInRingTime_ == nullptr && this->averageFirstResponseTime_ == nullptr && this->averageHoldTime_ == nullptr
        && this->averageResponseTime_ == nullptr && this->averageRingTime_ == nullptr && this->averageTalkTime_ == nullptr && this->averageWaitTime_ == nullptr && this->averageWorkTime_ == nullptr
        && this->callsAbandoned_ == nullptr && this->callsAbandonedInQueue_ == nullptr && this->callsAbandonedInRing_ == nullptr && this->callsAttendedTransferIn_ == nullptr && this->callsAttendedTransferOut_ == nullptr
        && this->callsBlindTransferIn_ == nullptr && this->callsBlindTransferOut_ == nullptr && this->callsHandled_ == nullptr && this->callsHold_ == nullptr && this->callsOffered_ == nullptr
        && this->callsOverflow_ == nullptr && this->callsQueued_ == nullptr && this->callsQueuingOverflow_ == nullptr && this->callsQueuingTimeout_ == nullptr && this->callsRinged_ == nullptr
        && this->callsTimeout_ == nullptr && this->handleRate_ == nullptr && this->maxAbandonTime_ == nullptr && this->maxAbandonedInQueueTime_ == nullptr && this->maxAbandonedInRingTime_ == nullptr
        && this->maxHoldTime_ == nullptr && this->maxRingTime_ == nullptr && this->maxTalkTime_ == nullptr && this->maxWaitTime_ == nullptr && this->maxWorkTime_ == nullptr
        && this->satisfactionIndex_ == nullptr && this->satisfactionRate_ == nullptr && this->satisfactionSurveysOffered_ == nullptr && this->satisfactionSurveysResponded_ == nullptr && this->serviceLevel20_ == nullptr
        && this->totalAbandonTime_ == nullptr && this->totalAbandonedInQueueTime_ == nullptr && this->totalAbandonedInRingTime_ == nullptr && this->totalHoldTime_ == nullptr && this->totalMessagesSent_ == nullptr
        && this->totalMessagesSentByAgent_ == nullptr && this->totalMessagesSentByCustomer_ == nullptr && this->totalRingTime_ == nullptr && this->totalTalkTime_ == nullptr && this->totalWaitTime_ == nullptr
        && this->totalWorkTime_ == nullptr; };
        // abandonRate Field Functions 
        bool hasAbandonRate() const { return this->abandonRate_ != nullptr;};
        void deleteAbandonRate() { this->abandonRate_ = nullptr;};
        inline float getAbandonRate() const { DARABONBA_PTR_GET_DEFAULT(abandonRate_, 0.0) };
        inline Inbound& setAbandonRate(float abandonRate) { DARABONBA_PTR_SET_VALUE(abandonRate_, abandonRate) };


        // averageAbandonTime Field Functions 
        bool hasAverageAbandonTime() const { return this->averageAbandonTime_ != nullptr;};
        void deleteAverageAbandonTime() { this->averageAbandonTime_ = nullptr;};
        inline float getAverageAbandonTime() const { DARABONBA_PTR_GET_DEFAULT(averageAbandonTime_, 0.0) };
        inline Inbound& setAverageAbandonTime(float averageAbandonTime) { DARABONBA_PTR_SET_VALUE(averageAbandonTime_, averageAbandonTime) };


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


        // callsOverflow Field Functions 
        bool hasCallsOverflow() const { return this->callsOverflow_ != nullptr;};
        void deleteCallsOverflow() { this->callsOverflow_ = nullptr;};
        inline int64_t getCallsOverflow() const { DARABONBA_PTR_GET_DEFAULT(callsOverflow_, 0L) };
        inline Inbound& setCallsOverflow(int64_t callsOverflow) { DARABONBA_PTR_SET_VALUE(callsOverflow_, callsOverflow) };


        // callsQueued Field Functions 
        bool hasCallsQueued() const { return this->callsQueued_ != nullptr;};
        void deleteCallsQueued() { this->callsQueued_ = nullptr;};
        inline int64_t getCallsQueued() const { DARABONBA_PTR_GET_DEFAULT(callsQueued_, 0L) };
        inline Inbound& setCallsQueued(int64_t callsQueued) { DARABONBA_PTR_SET_VALUE(callsQueued_, callsQueued) };


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


        // callsTimeout Field Functions 
        bool hasCallsTimeout() const { return this->callsTimeout_ != nullptr;};
        void deleteCallsTimeout() { this->callsTimeout_ = nullptr;};
        inline int64_t getCallsTimeout() const { DARABONBA_PTR_GET_DEFAULT(callsTimeout_, 0L) };
        inline Inbound& setCallsTimeout(int64_t callsTimeout) { DARABONBA_PTR_SET_VALUE(callsTimeout_, callsTimeout) };


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


        // serviceLevel20 Field Functions 
        bool hasServiceLevel20() const { return this->serviceLevel20_ != nullptr;};
        void deleteServiceLevel20() { this->serviceLevel20_ = nullptr;};
        inline float getServiceLevel20() const { DARABONBA_PTR_GET_DEFAULT(serviceLevel20_, 0.0) };
        inline Inbound& setServiceLevel20(float serviceLevel20) { DARABONBA_PTR_SET_VALUE(serviceLevel20_, serviceLevel20) };


        // totalAbandonTime Field Functions 
        bool hasTotalAbandonTime() const { return this->totalAbandonTime_ != nullptr;};
        void deleteTotalAbandonTime() { this->totalAbandonTime_ = nullptr;};
        inline int64_t getTotalAbandonTime() const { DARABONBA_PTR_GET_DEFAULT(totalAbandonTime_, 0L) };
        inline Inbound& setTotalAbandonTime(int64_t totalAbandonTime) { DARABONBA_PTR_SET_VALUE(totalAbandonTime_, totalAbandonTime) };


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
        shared_ptr<float> averageAbandonTime_ {};
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
        shared_ptr<int64_t> callsAbandonedInQueue_ {};
        shared_ptr<int64_t> callsAbandonedInRing_ {};
        shared_ptr<int64_t> callsAttendedTransferIn_ {};
        shared_ptr<int64_t> callsAttendedTransferOut_ {};
        shared_ptr<int64_t> callsBlindTransferIn_ {};
        shared_ptr<int64_t> callsBlindTransferOut_ {};
        shared_ptr<int64_t> callsHandled_ {};
        shared_ptr<int64_t> callsHold_ {};
        shared_ptr<int64_t> callsOffered_ {};
        shared_ptr<int64_t> callsOverflow_ {};
        shared_ptr<int64_t> callsQueued_ {};
        shared_ptr<int64_t> callsQueuingOverflow_ {};
        shared_ptr<int64_t> callsQueuingTimeout_ {};
        shared_ptr<int64_t> callsRinged_ {};
        shared_ptr<int64_t> callsTimeout_ {};
        shared_ptr<float> handleRate_ {};
        shared_ptr<int64_t> maxAbandonTime_ {};
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
        shared_ptr<float> serviceLevel20_ {};
        shared_ptr<int64_t> totalAbandonTime_ {};
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
        inline float getAgentHandleRate() const { DARABONBA_PTR_GET_DEFAULT(agentHandleRate_, 0.0) };
        inline Back2Back& setAgentHandleRate(float agentHandleRate) { DARABONBA_PTR_SET_VALUE(agentHandleRate_, agentHandleRate) };


        // answerRate Field Functions 
        bool hasAnswerRate() const { return this->answerRate_ != nullptr;};
        void deleteAnswerRate() { this->answerRate_ = nullptr;};
        inline string getAnswerRate() const { DARABONBA_PTR_GET_DEFAULT(answerRate_, "") };
        inline Back2Back& setAnswerRate(string answerRate) { DARABONBA_PTR_SET_VALUE(answerRate_, answerRate) };


        // averageCustomerRingTime Field Functions 
        bool hasAverageCustomerRingTime() const { return this->averageCustomerRingTime_ != nullptr;};
        void deleteAverageCustomerRingTime() { this->averageCustomerRingTime_ = nullptr;};
        inline float getAverageCustomerRingTime() const { DARABONBA_PTR_GET_DEFAULT(averageCustomerRingTime_, 0.0) };
        inline Back2Back& setAverageCustomerRingTime(float averageCustomerRingTime) { DARABONBA_PTR_SET_VALUE(averageCustomerRingTime_, averageCustomerRingTime) };


        // averageRingTime Field Functions 
        bool hasAverageRingTime() const { return this->averageRingTime_ != nullptr;};
        void deleteAverageRingTime() { this->averageRingTime_ = nullptr;};
        inline float getAverageRingTime() const { DARABONBA_PTR_GET_DEFAULT(averageRingTime_, 0.0) };
        inline Back2Back& setAverageRingTime(float averageRingTime) { DARABONBA_PTR_SET_VALUE(averageRingTime_, averageRingTime) };


        // averageTalkTime Field Functions 
        bool hasAverageTalkTime() const { return this->averageTalkTime_ != nullptr;};
        void deleteAverageTalkTime() { this->averageTalkTime_ = nullptr;};
        inline string getAverageTalkTime() const { DARABONBA_PTR_GET_DEFAULT(averageTalkTime_, "") };
        inline Back2Back& setAverageTalkTime(string averageTalkTime) { DARABONBA_PTR_SET_VALUE(averageTalkTime_, averageTalkTime) };


        // callsAgentHandled Field Functions 
        bool hasCallsAgentHandled() const { return this->callsAgentHandled_ != nullptr;};
        void deleteCallsAgentHandled() { this->callsAgentHandled_ = nullptr;};
        inline int64_t getCallsAgentHandled() const { DARABONBA_PTR_GET_DEFAULT(callsAgentHandled_, 0L) };
        inline Back2Back& setCallsAgentHandled(int64_t callsAgentHandled) { DARABONBA_PTR_SET_VALUE(callsAgentHandled_, callsAgentHandled) };


        // callsAnswered Field Functions 
        bool hasCallsAnswered() const { return this->callsAnswered_ != nullptr;};
        void deleteCallsAnswered() { this->callsAnswered_ = nullptr;};
        inline int64_t getCallsAnswered() const { DARABONBA_PTR_GET_DEFAULT(callsAnswered_, 0L) };
        inline Back2Back& setCallsAnswered(int64_t callsAnswered) { DARABONBA_PTR_SET_VALUE(callsAnswered_, callsAnswered) };


        // callsCustomerAnswered Field Functions 
        bool hasCallsCustomerAnswered() const { return this->callsCustomerAnswered_ != nullptr;};
        void deleteCallsCustomerAnswered() { this->callsCustomerAnswered_ = nullptr;};
        inline int64_t getCallsCustomerAnswered() const { DARABONBA_PTR_GET_DEFAULT(callsCustomerAnswered_, 0L) };
        inline Back2Back& setCallsCustomerAnswered(int64_t callsCustomerAnswered) { DARABONBA_PTR_SET_VALUE(callsCustomerAnswered_, callsCustomerAnswered) };


        // callsDialed Field Functions 
        bool hasCallsDialed() const { return this->callsDialed_ != nullptr;};
        void deleteCallsDialed() { this->callsDialed_ = nullptr;};
        inline int64_t getCallsDialed() const { DARABONBA_PTR_GET_DEFAULT(callsDialed_, 0L) };
        inline Back2Back& setCallsDialed(int64_t callsDialed) { DARABONBA_PTR_SET_VALUE(callsDialed_, callsDialed) };


        // customerAnswerRate Field Functions 
        bool hasCustomerAnswerRate() const { return this->customerAnswerRate_ != nullptr;};
        void deleteCustomerAnswerRate() { this->customerAnswerRate_ = nullptr;};
        inline float getCustomerAnswerRate() const { DARABONBA_PTR_GET_DEFAULT(customerAnswerRate_, 0.0) };
        inline Back2Back& setCustomerAnswerRate(float customerAnswerRate) { DARABONBA_PTR_SET_VALUE(customerAnswerRate_, customerAnswerRate) };


        // maxCustomerRingTime Field Functions 
        bool hasMaxCustomerRingTime() const { return this->maxCustomerRingTime_ != nullptr;};
        void deleteMaxCustomerRingTime() { this->maxCustomerRingTime_ = nullptr;};
        inline int64_t getMaxCustomerRingTime() const { DARABONBA_PTR_GET_DEFAULT(maxCustomerRingTime_, 0L) };
        inline Back2Back& setMaxCustomerRingTime(int64_t maxCustomerRingTime) { DARABONBA_PTR_SET_VALUE(maxCustomerRingTime_, maxCustomerRingTime) };


        // maxRingTime Field Functions 
        bool hasMaxRingTime() const { return this->maxRingTime_ != nullptr;};
        void deleteMaxRingTime() { this->maxRingTime_ = nullptr;};
        inline int64_t getMaxRingTime() const { DARABONBA_PTR_GET_DEFAULT(maxRingTime_, 0L) };
        inline Back2Back& setMaxRingTime(int64_t maxRingTime) { DARABONBA_PTR_SET_VALUE(maxRingTime_, maxRingTime) };


        // maxTalkTime Field Functions 
        bool hasMaxTalkTime() const { return this->maxTalkTime_ != nullptr;};
        void deleteMaxTalkTime() { this->maxTalkTime_ = nullptr;};
        inline string getMaxTalkTime() const { DARABONBA_PTR_GET_DEFAULT(maxTalkTime_, "") };
        inline Back2Back& setMaxTalkTime(string maxTalkTime) { DARABONBA_PTR_SET_VALUE(maxTalkTime_, maxTalkTime) };


        // totalCustomerRingTime Field Functions 
        bool hasTotalCustomerRingTime() const { return this->totalCustomerRingTime_ != nullptr;};
        void deleteTotalCustomerRingTime() { this->totalCustomerRingTime_ = nullptr;};
        inline int64_t getTotalCustomerRingTime() const { DARABONBA_PTR_GET_DEFAULT(totalCustomerRingTime_, 0L) };
        inline Back2Back& setTotalCustomerRingTime(int64_t totalCustomerRingTime) { DARABONBA_PTR_SET_VALUE(totalCustomerRingTime_, totalCustomerRingTime) };


        // totalRingTime Field Functions 
        bool hasTotalRingTime() const { return this->totalRingTime_ != nullptr;};
        void deleteTotalRingTime() { this->totalRingTime_ = nullptr;};
        inline int64_t getTotalRingTime() const { DARABONBA_PTR_GET_DEFAULT(totalRingTime_, 0L) };
        inline Back2Back& setTotalRingTime(int64_t totalRingTime) { DARABONBA_PTR_SET_VALUE(totalRingTime_, totalRingTime) };


        // totalTalkTime Field Functions 
        bool hasTotalTalkTime() const { return this->totalTalkTime_ != nullptr;};
        void deleteTotalTalkTime() { this->totalTalkTime_ = nullptr;};
        inline int64_t getTotalTalkTime() const { DARABONBA_PTR_GET_DEFAULT(totalTalkTime_, 0L) };
        inline Back2Back& setTotalTalkTime(int64_t totalTalkTime) { DARABONBA_PTR_SET_VALUE(totalTalkTime_, totalTalkTime) };


      protected:
        shared_ptr<float> agentHandleRate_ {};
        shared_ptr<string> answerRate_ {};
        shared_ptr<float> averageCustomerRingTime_ {};
        shared_ptr<float> averageRingTime_ {};
        shared_ptr<string> averageTalkTime_ {};
        shared_ptr<int64_t> callsAgentHandled_ {};
        shared_ptr<int64_t> callsAnswered_ {};
        shared_ptr<int64_t> callsCustomerAnswered_ {};
        shared_ptr<int64_t> callsDialed_ {};
        shared_ptr<float> customerAnswerRate_ {};
        shared_ptr<int64_t> maxCustomerRingTime_ {};
        shared_ptr<int64_t> maxRingTime_ {};
        shared_ptr<string> maxTalkTime_ {};
        shared_ptr<int64_t> totalCustomerRingTime_ {};
        shared_ptr<int64_t> totalRingTime_ {};
        shared_ptr<int64_t> totalTalkTime_ {};
      };

      virtual bool empty() const override { return this->back2Back_ == nullptr
        && this->inbound_ == nullptr && this->outbound_ == nullptr && this->overall_ == nullptr && this->statsTime_ == nullptr; };
      // back2Back Field Functions 
      bool hasBack2Back() const { return this->back2Back_ != nullptr;};
      void deleteBack2Back() { this->back2Back_ = nullptr;};
      inline const Data::Back2Back & getBack2Back() const { DARABONBA_PTR_GET_CONST(back2Back_, Data::Back2Back) };
      inline Data::Back2Back getBack2Back() { DARABONBA_PTR_GET(back2Back_, Data::Back2Back) };
      inline Data& setBack2Back(const Data::Back2Back & back2Back) { DARABONBA_PTR_SET_VALUE(back2Back_, back2Back) };
      inline Data& setBack2Back(Data::Back2Back && back2Back) { DARABONBA_PTR_SET_RVALUE(back2Back_, back2Back) };


      // inbound Field Functions 
      bool hasInbound() const { return this->inbound_ != nullptr;};
      void deleteInbound() { this->inbound_ = nullptr;};
      inline const Data::Inbound & getInbound() const { DARABONBA_PTR_GET_CONST(inbound_, Data::Inbound) };
      inline Data::Inbound getInbound() { DARABONBA_PTR_GET(inbound_, Data::Inbound) };
      inline Data& setInbound(const Data::Inbound & inbound) { DARABONBA_PTR_SET_VALUE(inbound_, inbound) };
      inline Data& setInbound(Data::Inbound && inbound) { DARABONBA_PTR_SET_RVALUE(inbound_, inbound) };


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


      // statsTime Field Functions 
      bool hasStatsTime() const { return this->statsTime_ != nullptr;};
      void deleteStatsTime() { this->statsTime_ = nullptr;};
      inline int64_t getStatsTime() const { DARABONBA_PTR_GET_DEFAULT(statsTime_, 0L) };
      inline Data& setStatsTime(int64_t statsTime) { DARABONBA_PTR_SET_VALUE(statsTime_, statsTime) };


    protected:
      shared_ptr<Data::Back2Back> back2Back_ {};
      shared_ptr<Data::Inbound> inbound_ {};
      shared_ptr<Data::Outbound> outbound_ {};
      shared_ptr<Data::Overall> overall_ {};
      shared_ptr<int64_t> statsTime_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListIntervalSkillGroupReportResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListIntervalSkillGroupReportResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListIntervalSkillGroupReportResponseBody::Data>) };
    inline vector<ListIntervalSkillGroupReportResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListIntervalSkillGroupReportResponseBody::Data>) };
    inline ListIntervalSkillGroupReportResponseBody& setData(const vector<ListIntervalSkillGroupReportResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListIntervalSkillGroupReportResponseBody& setData(vector<ListIntervalSkillGroupReportResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListIntervalSkillGroupReportResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListIntervalSkillGroupReportResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListIntervalSkillGroupReportResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<vector<ListIntervalSkillGroupReportResponseBody::Data>> data_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
