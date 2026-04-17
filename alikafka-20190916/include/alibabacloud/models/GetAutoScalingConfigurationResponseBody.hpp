// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAUTOSCALINGCONFIGURATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETAUTOSCALINGCONFIGURATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alikafka20190916
{
namespace Models
{
  class GetAutoScalingConfigurationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAutoScalingConfigurationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetAutoScalingConfigurationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetAutoScalingConfigurationResponseBody() = default ;
    GetAutoScalingConfigurationResponseBody(const GetAutoScalingConfigurationResponseBody &) = default ;
    GetAutoScalingConfigurationResponseBody(GetAutoScalingConfigurationResponseBody &&) = default ;
    GetAutoScalingConfigurationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAutoScalingConfigurationResponseBody() = default ;
    GetAutoScalingConfigurationResponseBody& operator=(const GetAutoScalingConfigurationResponseBody &) = default ;
    GetAutoScalingConfigurationResponseBody& operator=(GetAutoScalingConfigurationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(ScheduledScalingRules, scheduledScalingRules_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(ScheduledScalingRules, scheduledScalingRules_);
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
      class ScheduledScalingRules : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ScheduledScalingRules& obj) { 
          DARABONBA_PTR_TO_JSON(ScheduledScalingRules, scheduledScalingRules_);
        };
        friend void from_json(const Darabonba::Json& j, ScheduledScalingRules& obj) { 
          DARABONBA_PTR_FROM_JSON(ScheduledScalingRules, scheduledScalingRules_);
        };
        ScheduledScalingRules() = default ;
        ScheduledScalingRules(const ScheduledScalingRules &) = default ;
        ScheduledScalingRules(ScheduledScalingRules &&) = default ;
        ScheduledScalingRules(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ScheduledScalingRules() = default ;
        ScheduledScalingRules& operator=(const ScheduledScalingRules &) = default ;
        ScheduledScalingRules& operator=(ScheduledScalingRules &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class ScheduledScalingRulesItem : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ScheduledScalingRulesItem& obj) { 
            DARABONBA_PTR_TO_JSON(DurationMinutes, durationMinutes_);
            DARABONBA_PTR_TO_JSON(Enable, enable_);
            DARABONBA_PTR_TO_JSON(EstimatedElasticScalingDownTimeSecs, estimatedElasticScalingDownTimeSecs_);
            DARABONBA_PTR_TO_JSON(EstimatedElasticScalingUpTimeSecs, estimatedElasticScalingUpTimeSecs_);
            DARABONBA_PTR_TO_JSON(FirstScheduledTime, firstScheduledTime_);
            DARABONBA_PTR_TO_JSON(RepeatType, repeatType_);
            DARABONBA_PTR_TO_JSON(ReservedPubFlow, reservedPubFlow_);
            DARABONBA_PTR_TO_JSON(ReservedSubFlow, reservedSubFlow_);
            DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
            DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
            DARABONBA_PTR_TO_JSON(ScheduleType, scheduleType_);
            DARABONBA_PTR_TO_JSON(TimeZone, timeZone_);
            DARABONBA_PTR_TO_JSON(WeeklyTypes, weeklyTypes_);
          };
          friend void from_json(const Darabonba::Json& j, ScheduledScalingRulesItem& obj) { 
            DARABONBA_PTR_FROM_JSON(DurationMinutes, durationMinutes_);
            DARABONBA_PTR_FROM_JSON(Enable, enable_);
            DARABONBA_PTR_FROM_JSON(EstimatedElasticScalingDownTimeSecs, estimatedElasticScalingDownTimeSecs_);
            DARABONBA_PTR_FROM_JSON(EstimatedElasticScalingUpTimeSecs, estimatedElasticScalingUpTimeSecs_);
            DARABONBA_PTR_FROM_JSON(FirstScheduledTime, firstScheduledTime_);
            DARABONBA_PTR_FROM_JSON(RepeatType, repeatType_);
            DARABONBA_PTR_FROM_JSON(ReservedPubFlow, reservedPubFlow_);
            DARABONBA_PTR_FROM_JSON(ReservedSubFlow, reservedSubFlow_);
            DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
            DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
            DARABONBA_PTR_FROM_JSON(ScheduleType, scheduleType_);
            DARABONBA_PTR_FROM_JSON(TimeZone, timeZone_);
            DARABONBA_PTR_FROM_JSON(WeeklyTypes, weeklyTypes_);
          };
          ScheduledScalingRulesItem() = default ;
          ScheduledScalingRulesItem(const ScheduledScalingRulesItem &) = default ;
          ScheduledScalingRulesItem(ScheduledScalingRulesItem &&) = default ;
          ScheduledScalingRulesItem(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ScheduledScalingRulesItem() = default ;
          ScheduledScalingRulesItem& operator=(const ScheduledScalingRulesItem &) = default ;
          ScheduledScalingRulesItem& operator=(ScheduledScalingRulesItem &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class WeeklyTypes : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const WeeklyTypes& obj) { 
              DARABONBA_PTR_TO_JSON(WeeklyTypes, weeklyTypes_);
            };
            friend void from_json(const Darabonba::Json& j, WeeklyTypes& obj) { 
              DARABONBA_PTR_FROM_JSON(WeeklyTypes, weeklyTypes_);
            };
            WeeklyTypes() = default ;
            WeeklyTypes(const WeeklyTypes &) = default ;
            WeeklyTypes(WeeklyTypes &&) = default ;
            WeeklyTypes(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~WeeklyTypes() = default ;
            WeeklyTypes& operator=(const WeeklyTypes &) = default ;
            WeeklyTypes& operator=(WeeklyTypes &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->weeklyTypes_ == nullptr; };
            // weeklyTypes Field Functions 
            bool hasWeeklyTypes() const { return this->weeklyTypes_ != nullptr;};
            void deleteWeeklyTypes() { this->weeklyTypes_ = nullptr;};
            inline const vector<string> & getWeeklyTypes() const { DARABONBA_PTR_GET_CONST(weeklyTypes_, vector<string>) };
            inline vector<string> getWeeklyTypes() { DARABONBA_PTR_GET(weeklyTypes_, vector<string>) };
            inline WeeklyTypes& setWeeklyTypes(const vector<string> & weeklyTypes) { DARABONBA_PTR_SET_VALUE(weeklyTypes_, weeklyTypes) };
            inline WeeklyTypes& setWeeklyTypes(vector<string> && weeklyTypes) { DARABONBA_PTR_SET_RVALUE(weeklyTypes_, weeklyTypes) };


          protected:
            shared_ptr<vector<string>> weeklyTypes_ {};
          };

          virtual bool empty() const override { return this->durationMinutes_ == nullptr
        && this->enable_ == nullptr && this->estimatedElasticScalingDownTimeSecs_ == nullptr && this->estimatedElasticScalingUpTimeSecs_ == nullptr && this->firstScheduledTime_ == nullptr && this->repeatType_ == nullptr
        && this->reservedPubFlow_ == nullptr && this->reservedSubFlow_ == nullptr && this->ruleId_ == nullptr && this->ruleName_ == nullptr && this->scheduleType_ == nullptr
        && this->timeZone_ == nullptr && this->weeklyTypes_ == nullptr; };
          // durationMinutes Field Functions 
          bool hasDurationMinutes() const { return this->durationMinutes_ != nullptr;};
          void deleteDurationMinutes() { this->durationMinutes_ = nullptr;};
          inline int64_t getDurationMinutes() const { DARABONBA_PTR_GET_DEFAULT(durationMinutes_, 0L) };
          inline ScheduledScalingRulesItem& setDurationMinutes(int64_t durationMinutes) { DARABONBA_PTR_SET_VALUE(durationMinutes_, durationMinutes) };


          // enable Field Functions 
          bool hasEnable() const { return this->enable_ != nullptr;};
          void deleteEnable() { this->enable_ = nullptr;};
          inline bool getEnable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
          inline ScheduledScalingRulesItem& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


          // estimatedElasticScalingDownTimeSecs Field Functions 
          bool hasEstimatedElasticScalingDownTimeSecs() const { return this->estimatedElasticScalingDownTimeSecs_ != nullptr;};
          void deleteEstimatedElasticScalingDownTimeSecs() { this->estimatedElasticScalingDownTimeSecs_ = nullptr;};
          inline int64_t getEstimatedElasticScalingDownTimeSecs() const { DARABONBA_PTR_GET_DEFAULT(estimatedElasticScalingDownTimeSecs_, 0L) };
          inline ScheduledScalingRulesItem& setEstimatedElasticScalingDownTimeSecs(int64_t estimatedElasticScalingDownTimeSecs) { DARABONBA_PTR_SET_VALUE(estimatedElasticScalingDownTimeSecs_, estimatedElasticScalingDownTimeSecs) };


          // estimatedElasticScalingUpTimeSecs Field Functions 
          bool hasEstimatedElasticScalingUpTimeSecs() const { return this->estimatedElasticScalingUpTimeSecs_ != nullptr;};
          void deleteEstimatedElasticScalingUpTimeSecs() { this->estimatedElasticScalingUpTimeSecs_ = nullptr;};
          inline int64_t getEstimatedElasticScalingUpTimeSecs() const { DARABONBA_PTR_GET_DEFAULT(estimatedElasticScalingUpTimeSecs_, 0L) };
          inline ScheduledScalingRulesItem& setEstimatedElasticScalingUpTimeSecs(int64_t estimatedElasticScalingUpTimeSecs) { DARABONBA_PTR_SET_VALUE(estimatedElasticScalingUpTimeSecs_, estimatedElasticScalingUpTimeSecs) };


          // firstScheduledTime Field Functions 
          bool hasFirstScheduledTime() const { return this->firstScheduledTime_ != nullptr;};
          void deleteFirstScheduledTime() { this->firstScheduledTime_ = nullptr;};
          inline int64_t getFirstScheduledTime() const { DARABONBA_PTR_GET_DEFAULT(firstScheduledTime_, 0L) };
          inline ScheduledScalingRulesItem& setFirstScheduledTime(int64_t firstScheduledTime) { DARABONBA_PTR_SET_VALUE(firstScheduledTime_, firstScheduledTime) };


          // repeatType Field Functions 
          bool hasRepeatType() const { return this->repeatType_ != nullptr;};
          void deleteRepeatType() { this->repeatType_ = nullptr;};
          inline string getRepeatType() const { DARABONBA_PTR_GET_DEFAULT(repeatType_, "") };
          inline ScheduledScalingRulesItem& setRepeatType(string repeatType) { DARABONBA_PTR_SET_VALUE(repeatType_, repeatType) };


          // reservedPubFlow Field Functions 
          bool hasReservedPubFlow() const { return this->reservedPubFlow_ != nullptr;};
          void deleteReservedPubFlow() { this->reservedPubFlow_ = nullptr;};
          inline int64_t getReservedPubFlow() const { DARABONBA_PTR_GET_DEFAULT(reservedPubFlow_, 0L) };
          inline ScheduledScalingRulesItem& setReservedPubFlow(int64_t reservedPubFlow) { DARABONBA_PTR_SET_VALUE(reservedPubFlow_, reservedPubFlow) };


          // reservedSubFlow Field Functions 
          bool hasReservedSubFlow() const { return this->reservedSubFlow_ != nullptr;};
          void deleteReservedSubFlow() { this->reservedSubFlow_ = nullptr;};
          inline int64_t getReservedSubFlow() const { DARABONBA_PTR_GET_DEFAULT(reservedSubFlow_, 0L) };
          inline ScheduledScalingRulesItem& setReservedSubFlow(int64_t reservedSubFlow) { DARABONBA_PTR_SET_VALUE(reservedSubFlow_, reservedSubFlow) };


          // ruleId Field Functions 
          bool hasRuleId() const { return this->ruleId_ != nullptr;};
          void deleteRuleId() { this->ruleId_ = nullptr;};
          inline int64_t getRuleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, 0L) };
          inline ScheduledScalingRulesItem& setRuleId(int64_t ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


          // ruleName Field Functions 
          bool hasRuleName() const { return this->ruleName_ != nullptr;};
          void deleteRuleName() { this->ruleName_ = nullptr;};
          inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
          inline ScheduledScalingRulesItem& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


          // scheduleType Field Functions 
          bool hasScheduleType() const { return this->scheduleType_ != nullptr;};
          void deleteScheduleType() { this->scheduleType_ = nullptr;};
          inline string getScheduleType() const { DARABONBA_PTR_GET_DEFAULT(scheduleType_, "") };
          inline ScheduledScalingRulesItem& setScheduleType(string scheduleType) { DARABONBA_PTR_SET_VALUE(scheduleType_, scheduleType) };


          // timeZone Field Functions 
          bool hasTimeZone() const { return this->timeZone_ != nullptr;};
          void deleteTimeZone() { this->timeZone_ = nullptr;};
          inline string getTimeZone() const { DARABONBA_PTR_GET_DEFAULT(timeZone_, "") };
          inline ScheduledScalingRulesItem& setTimeZone(string timeZone) { DARABONBA_PTR_SET_VALUE(timeZone_, timeZone) };


          // weeklyTypes Field Functions 
          bool hasWeeklyTypes() const { return this->weeklyTypes_ != nullptr;};
          void deleteWeeklyTypes() { this->weeklyTypes_ = nullptr;};
          inline const ScheduledScalingRulesItem::WeeklyTypes & getWeeklyTypes() const { DARABONBA_PTR_GET_CONST(weeklyTypes_, ScheduledScalingRulesItem::WeeklyTypes) };
          inline ScheduledScalingRulesItem::WeeklyTypes getWeeklyTypes() { DARABONBA_PTR_GET(weeklyTypes_, ScheduledScalingRulesItem::WeeklyTypes) };
          inline ScheduledScalingRulesItem& setWeeklyTypes(const ScheduledScalingRulesItem::WeeklyTypes & weeklyTypes) { DARABONBA_PTR_SET_VALUE(weeklyTypes_, weeklyTypes) };
          inline ScheduledScalingRulesItem& setWeeklyTypes(ScheduledScalingRulesItem::WeeklyTypes && weeklyTypes) { DARABONBA_PTR_SET_RVALUE(weeklyTypes_, weeklyTypes) };


        protected:
          shared_ptr<int64_t> durationMinutes_ {};
          shared_ptr<bool> enable_ {};
          shared_ptr<int64_t> estimatedElasticScalingDownTimeSecs_ {};
          shared_ptr<int64_t> estimatedElasticScalingUpTimeSecs_ {};
          shared_ptr<int64_t> firstScheduledTime_ {};
          shared_ptr<string> repeatType_ {};
          shared_ptr<int64_t> reservedPubFlow_ {};
          shared_ptr<int64_t> reservedSubFlow_ {};
          shared_ptr<int64_t> ruleId_ {};
          shared_ptr<string> ruleName_ {};
          shared_ptr<string> scheduleType_ {};
          shared_ptr<string> timeZone_ {};
          shared_ptr<ScheduledScalingRulesItem::WeeklyTypes> weeklyTypes_ {};
        };

        virtual bool empty() const override { return this->scheduledScalingRules_ == nullptr; };
        // scheduledScalingRules Field Functions 
        bool hasScheduledScalingRules() const { return this->scheduledScalingRules_ != nullptr;};
        void deleteScheduledScalingRules() { this->scheduledScalingRules_ = nullptr;};
        inline const vector<ScheduledScalingRules::ScheduledScalingRulesItem> & getScheduledScalingRules() const { DARABONBA_PTR_GET_CONST(scheduledScalingRules_, vector<ScheduledScalingRules::ScheduledScalingRulesItem>) };
        inline vector<ScheduledScalingRules::ScheduledScalingRulesItem> getScheduledScalingRules() { DARABONBA_PTR_GET(scheduledScalingRules_, vector<ScheduledScalingRules::ScheduledScalingRulesItem>) };
        inline ScheduledScalingRules& setScheduledScalingRules(const vector<ScheduledScalingRules::ScheduledScalingRulesItem> & scheduledScalingRules) { DARABONBA_PTR_SET_VALUE(scheduledScalingRules_, scheduledScalingRules) };
        inline ScheduledScalingRules& setScheduledScalingRules(vector<ScheduledScalingRules::ScheduledScalingRulesItem> && scheduledScalingRules) { DARABONBA_PTR_SET_RVALUE(scheduledScalingRules_, scheduledScalingRules) };


      protected:
        shared_ptr<vector<ScheduledScalingRules::ScheduledScalingRulesItem>> scheduledScalingRules_ {};
      };

      virtual bool empty() const override { return this->scheduledScalingRules_ == nullptr; };
      // scheduledScalingRules Field Functions 
      bool hasScheduledScalingRules() const { return this->scheduledScalingRules_ != nullptr;};
      void deleteScheduledScalingRules() { this->scheduledScalingRules_ = nullptr;};
      inline const Data::ScheduledScalingRules & getScheduledScalingRules() const { DARABONBA_PTR_GET_CONST(scheduledScalingRules_, Data::ScheduledScalingRules) };
      inline Data::ScheduledScalingRules getScheduledScalingRules() { DARABONBA_PTR_GET(scheduledScalingRules_, Data::ScheduledScalingRules) };
      inline Data& setScheduledScalingRules(const Data::ScheduledScalingRules & scheduledScalingRules) { DARABONBA_PTR_SET_VALUE(scheduledScalingRules_, scheduledScalingRules) };
      inline Data& setScheduledScalingRules(Data::ScheduledScalingRules && scheduledScalingRules) { DARABONBA_PTR_SET_RVALUE(scheduledScalingRules_, scheduledScalingRules) };


    protected:
      shared_ptr<Data::ScheduledScalingRules> scheduledScalingRules_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int64_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0L) };
    inline GetAutoScalingConfigurationResponseBody& setCode(int64_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetAutoScalingConfigurationResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetAutoScalingConfigurationResponseBody::Data) };
    inline GetAutoScalingConfigurationResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetAutoScalingConfigurationResponseBody::Data) };
    inline GetAutoScalingConfigurationResponseBody& setData(const GetAutoScalingConfigurationResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetAutoScalingConfigurationResponseBody& setData(GetAutoScalingConfigurationResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetAutoScalingConfigurationResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAutoScalingConfigurationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetAutoScalingConfigurationResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The response code. The value 200 indicates that the request was successful.
    shared_ptr<int64_t> code_ {};
    // The returned data.
    shared_ptr<GetAutoScalingConfigurationResponseBody::Data> data_ {};
    // The returned message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alikafka20190916
#endif
