// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETIMETRIGGERSCALINGRULESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETIMETRIGGERSCALINGRULESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Starrocks20221019
{
namespace Models
{
  class DescribeTimeTriggerScalingRulesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTimeTriggerScalingRulesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrCode, errCode_);
      DARABONBA_PTR_TO_JSON(ErrMessage, errMessage_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTimeTriggerScalingRulesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrCode, errCode_);
      DARABONBA_PTR_FROM_JSON(ErrMessage, errMessage_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeTimeTriggerScalingRulesResponseBody() = default ;
    DescribeTimeTriggerScalingRulesResponseBody(const DescribeTimeTriggerScalingRulesResponseBody &) = default ;
    DescribeTimeTriggerScalingRulesResponseBody(DescribeTimeTriggerScalingRulesResponseBody &&) = default ;
    DescribeTimeTriggerScalingRulesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTimeTriggerScalingRulesResponseBody() = default ;
    DescribeTimeTriggerScalingRulesResponseBody& operator=(const DescribeTimeTriggerScalingRulesResponseBody &) = default ;
    DescribeTimeTriggerScalingRulesResponseBody& operator=(DescribeTimeTriggerScalingRulesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(NodeNumber, nodeNumber_);
        DARABONBA_PTR_TO_JSON(ScalingInRule, scalingInRule_);
        DARABONBA_PTR_TO_JSON(ScalingOutRule, scalingOutRule_);
        DARABONBA_PTR_TO_JSON(ScalingRuleId, scalingRuleId_);
        DARABONBA_PTR_TO_JSON(ScalingRuleName, scalingRuleName_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(NodeNumber, nodeNumber_);
        DARABONBA_PTR_FROM_JSON(ScalingInRule, scalingInRule_);
        DARABONBA_PTR_FROM_JSON(ScalingOutRule, scalingOutRule_);
        DARABONBA_PTR_FROM_JSON(ScalingRuleId, scalingRuleId_);
        DARABONBA_PTR_FROM_JSON(ScalingRuleName, scalingRuleName_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
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
      class ScalingOutRule : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ScalingOutRule& obj) { 
          DARABONBA_PTR_TO_JSON(Day, day_);
          DARABONBA_PTR_TO_JSON(Hour, hour_);
          DARABONBA_PTR_TO_JSON(Minute, minute_);
          DARABONBA_PTR_TO_JSON(Month, month_);
          DARABONBA_PTR_TO_JSON(RecurrenceInterval, recurrenceInterval_);
          DARABONBA_PTR_TO_JSON(RecurrenceType, recurrenceType_);
          DARABONBA_PTR_TO_JSON(RecurrenceValues, recurrenceValues_);
          DARABONBA_PTR_TO_JSON(Second, second_);
          DARABONBA_PTR_TO_JSON(Year, year_);
        };
        friend void from_json(const Darabonba::Json& j, ScalingOutRule& obj) { 
          DARABONBA_PTR_FROM_JSON(Day, day_);
          DARABONBA_PTR_FROM_JSON(Hour, hour_);
          DARABONBA_PTR_FROM_JSON(Minute, minute_);
          DARABONBA_PTR_FROM_JSON(Month, month_);
          DARABONBA_PTR_FROM_JSON(RecurrenceInterval, recurrenceInterval_);
          DARABONBA_PTR_FROM_JSON(RecurrenceType, recurrenceType_);
          DARABONBA_PTR_FROM_JSON(RecurrenceValues, recurrenceValues_);
          DARABONBA_PTR_FROM_JSON(Second, second_);
          DARABONBA_PTR_FROM_JSON(Year, year_);
        };
        ScalingOutRule() = default ;
        ScalingOutRule(const ScalingOutRule &) = default ;
        ScalingOutRule(ScalingOutRule &&) = default ;
        ScalingOutRule(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ScalingOutRule() = default ;
        ScalingOutRule& operator=(const ScalingOutRule &) = default ;
        ScalingOutRule& operator=(ScalingOutRule &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->day_ == nullptr
        && this->hour_ == nullptr && this->minute_ == nullptr && this->month_ == nullptr && this->recurrenceInterval_ == nullptr && this->recurrenceType_ == nullptr
        && this->recurrenceValues_ == nullptr && this->second_ == nullptr && this->year_ == nullptr; };
        // day Field Functions 
        bool hasDay() const { return this->day_ != nullptr;};
        void deleteDay() { this->day_ = nullptr;};
        inline int32_t getDay() const { DARABONBA_PTR_GET_DEFAULT(day_, 0) };
        inline ScalingOutRule& setDay(int32_t day) { DARABONBA_PTR_SET_VALUE(day_, day) };


        // hour Field Functions 
        bool hasHour() const { return this->hour_ != nullptr;};
        void deleteHour() { this->hour_ = nullptr;};
        inline int32_t getHour() const { DARABONBA_PTR_GET_DEFAULT(hour_, 0) };
        inline ScalingOutRule& setHour(int32_t hour) { DARABONBA_PTR_SET_VALUE(hour_, hour) };


        // minute Field Functions 
        bool hasMinute() const { return this->minute_ != nullptr;};
        void deleteMinute() { this->minute_ = nullptr;};
        inline int32_t getMinute() const { DARABONBA_PTR_GET_DEFAULT(minute_, 0) };
        inline ScalingOutRule& setMinute(int32_t minute) { DARABONBA_PTR_SET_VALUE(minute_, minute) };


        // month Field Functions 
        bool hasMonth() const { return this->month_ != nullptr;};
        void deleteMonth() { this->month_ = nullptr;};
        inline int32_t getMonth() const { DARABONBA_PTR_GET_DEFAULT(month_, 0) };
        inline ScalingOutRule& setMonth(int32_t month) { DARABONBA_PTR_SET_VALUE(month_, month) };


        // recurrenceInterval Field Functions 
        bool hasRecurrenceInterval() const { return this->recurrenceInterval_ != nullptr;};
        void deleteRecurrenceInterval() { this->recurrenceInterval_ = nullptr;};
        inline int32_t getRecurrenceInterval() const { DARABONBA_PTR_GET_DEFAULT(recurrenceInterval_, 0) };
        inline ScalingOutRule& setRecurrenceInterval(int32_t recurrenceInterval) { DARABONBA_PTR_SET_VALUE(recurrenceInterval_, recurrenceInterval) };


        // recurrenceType Field Functions 
        bool hasRecurrenceType() const { return this->recurrenceType_ != nullptr;};
        void deleteRecurrenceType() { this->recurrenceType_ = nullptr;};
        inline string getRecurrenceType() const { DARABONBA_PTR_GET_DEFAULT(recurrenceType_, "") };
        inline ScalingOutRule& setRecurrenceType(string recurrenceType) { DARABONBA_PTR_SET_VALUE(recurrenceType_, recurrenceType) };


        // recurrenceValues Field Functions 
        bool hasRecurrenceValues() const { return this->recurrenceValues_ != nullptr;};
        void deleteRecurrenceValues() { this->recurrenceValues_ = nullptr;};
        inline const vector<string> & getRecurrenceValues() const { DARABONBA_PTR_GET_CONST(recurrenceValues_, vector<string>) };
        inline vector<string> getRecurrenceValues() { DARABONBA_PTR_GET(recurrenceValues_, vector<string>) };
        inline ScalingOutRule& setRecurrenceValues(const vector<string> & recurrenceValues) { DARABONBA_PTR_SET_VALUE(recurrenceValues_, recurrenceValues) };
        inline ScalingOutRule& setRecurrenceValues(vector<string> && recurrenceValues) { DARABONBA_PTR_SET_RVALUE(recurrenceValues_, recurrenceValues) };


        // second Field Functions 
        bool hasSecond() const { return this->second_ != nullptr;};
        void deleteSecond() { this->second_ = nullptr;};
        inline int32_t getSecond() const { DARABONBA_PTR_GET_DEFAULT(second_, 0) };
        inline ScalingOutRule& setSecond(int32_t second) { DARABONBA_PTR_SET_VALUE(second_, second) };


        // year Field Functions 
        bool hasYear() const { return this->year_ != nullptr;};
        void deleteYear() { this->year_ = nullptr;};
        inline int32_t getYear() const { DARABONBA_PTR_GET_DEFAULT(year_, 0) };
        inline ScalingOutRule& setYear(int32_t year) { DARABONBA_PTR_SET_VALUE(year_, year) };


      protected:
        shared_ptr<int32_t> day_ {};
        shared_ptr<int32_t> hour_ {};
        shared_ptr<int32_t> minute_ {};
        shared_ptr<int32_t> month_ {};
        shared_ptr<int32_t> recurrenceInterval_ {};
        shared_ptr<string> recurrenceType_ {};
        shared_ptr<vector<string>> recurrenceValues_ {};
        shared_ptr<int32_t> second_ {};
        shared_ptr<int32_t> year_ {};
      };

      class ScalingInRule : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ScalingInRule& obj) { 
          DARABONBA_PTR_TO_JSON(Day, day_);
          DARABONBA_PTR_TO_JSON(Hour, hour_);
          DARABONBA_PTR_TO_JSON(Minute, minute_);
          DARABONBA_PTR_TO_JSON(Month, month_);
          DARABONBA_PTR_TO_JSON(RecurrenceInterval, recurrenceInterval_);
          DARABONBA_PTR_TO_JSON(RecurrenceType, recurrenceType_);
          DARABONBA_PTR_TO_JSON(RecurrenceValues, recurrenceValues_);
          DARABONBA_PTR_TO_JSON(Second, second_);
          DARABONBA_PTR_TO_JSON(Year, year_);
        };
        friend void from_json(const Darabonba::Json& j, ScalingInRule& obj) { 
          DARABONBA_PTR_FROM_JSON(Day, day_);
          DARABONBA_PTR_FROM_JSON(Hour, hour_);
          DARABONBA_PTR_FROM_JSON(Minute, minute_);
          DARABONBA_PTR_FROM_JSON(Month, month_);
          DARABONBA_PTR_FROM_JSON(RecurrenceInterval, recurrenceInterval_);
          DARABONBA_PTR_FROM_JSON(RecurrenceType, recurrenceType_);
          DARABONBA_PTR_FROM_JSON(RecurrenceValues, recurrenceValues_);
          DARABONBA_PTR_FROM_JSON(Second, second_);
          DARABONBA_PTR_FROM_JSON(Year, year_);
        };
        ScalingInRule() = default ;
        ScalingInRule(const ScalingInRule &) = default ;
        ScalingInRule(ScalingInRule &&) = default ;
        ScalingInRule(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ScalingInRule() = default ;
        ScalingInRule& operator=(const ScalingInRule &) = default ;
        ScalingInRule& operator=(ScalingInRule &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->day_ == nullptr
        && this->hour_ == nullptr && this->minute_ == nullptr && this->month_ == nullptr && this->recurrenceInterval_ == nullptr && this->recurrenceType_ == nullptr
        && this->recurrenceValues_ == nullptr && this->second_ == nullptr && this->year_ == nullptr; };
        // day Field Functions 
        bool hasDay() const { return this->day_ != nullptr;};
        void deleteDay() { this->day_ = nullptr;};
        inline int32_t getDay() const { DARABONBA_PTR_GET_DEFAULT(day_, 0) };
        inline ScalingInRule& setDay(int32_t day) { DARABONBA_PTR_SET_VALUE(day_, day) };


        // hour Field Functions 
        bool hasHour() const { return this->hour_ != nullptr;};
        void deleteHour() { this->hour_ = nullptr;};
        inline int32_t getHour() const { DARABONBA_PTR_GET_DEFAULT(hour_, 0) };
        inline ScalingInRule& setHour(int32_t hour) { DARABONBA_PTR_SET_VALUE(hour_, hour) };


        // minute Field Functions 
        bool hasMinute() const { return this->minute_ != nullptr;};
        void deleteMinute() { this->minute_ = nullptr;};
        inline int32_t getMinute() const { DARABONBA_PTR_GET_DEFAULT(minute_, 0) };
        inline ScalingInRule& setMinute(int32_t minute) { DARABONBA_PTR_SET_VALUE(minute_, minute) };


        // month Field Functions 
        bool hasMonth() const { return this->month_ != nullptr;};
        void deleteMonth() { this->month_ = nullptr;};
        inline int32_t getMonth() const { DARABONBA_PTR_GET_DEFAULT(month_, 0) };
        inline ScalingInRule& setMonth(int32_t month) { DARABONBA_PTR_SET_VALUE(month_, month) };


        // recurrenceInterval Field Functions 
        bool hasRecurrenceInterval() const { return this->recurrenceInterval_ != nullptr;};
        void deleteRecurrenceInterval() { this->recurrenceInterval_ = nullptr;};
        inline int32_t getRecurrenceInterval() const { DARABONBA_PTR_GET_DEFAULT(recurrenceInterval_, 0) };
        inline ScalingInRule& setRecurrenceInterval(int32_t recurrenceInterval) { DARABONBA_PTR_SET_VALUE(recurrenceInterval_, recurrenceInterval) };


        // recurrenceType Field Functions 
        bool hasRecurrenceType() const { return this->recurrenceType_ != nullptr;};
        void deleteRecurrenceType() { this->recurrenceType_ = nullptr;};
        inline string getRecurrenceType() const { DARABONBA_PTR_GET_DEFAULT(recurrenceType_, "") };
        inline ScalingInRule& setRecurrenceType(string recurrenceType) { DARABONBA_PTR_SET_VALUE(recurrenceType_, recurrenceType) };


        // recurrenceValues Field Functions 
        bool hasRecurrenceValues() const { return this->recurrenceValues_ != nullptr;};
        void deleteRecurrenceValues() { this->recurrenceValues_ = nullptr;};
        inline const vector<string> & getRecurrenceValues() const { DARABONBA_PTR_GET_CONST(recurrenceValues_, vector<string>) };
        inline vector<string> getRecurrenceValues() { DARABONBA_PTR_GET(recurrenceValues_, vector<string>) };
        inline ScalingInRule& setRecurrenceValues(const vector<string> & recurrenceValues) { DARABONBA_PTR_SET_VALUE(recurrenceValues_, recurrenceValues) };
        inline ScalingInRule& setRecurrenceValues(vector<string> && recurrenceValues) { DARABONBA_PTR_SET_RVALUE(recurrenceValues_, recurrenceValues) };


        // second Field Functions 
        bool hasSecond() const { return this->second_ != nullptr;};
        void deleteSecond() { this->second_ = nullptr;};
        inline int32_t getSecond() const { DARABONBA_PTR_GET_DEFAULT(second_, 0) };
        inline ScalingInRule& setSecond(int32_t second) { DARABONBA_PTR_SET_VALUE(second_, second) };


        // year Field Functions 
        bool hasYear() const { return this->year_ != nullptr;};
        void deleteYear() { this->year_ = nullptr;};
        inline int32_t getYear() const { DARABONBA_PTR_GET_DEFAULT(year_, 0) };
        inline ScalingInRule& setYear(int32_t year) { DARABONBA_PTR_SET_VALUE(year_, year) };


      protected:
        shared_ptr<int32_t> day_ {};
        shared_ptr<int32_t> hour_ {};
        shared_ptr<int32_t> minute_ {};
        shared_ptr<int32_t> month_ {};
        shared_ptr<int32_t> recurrenceInterval_ {};
        shared_ptr<string> recurrenceType_ {};
        shared_ptr<vector<string>> recurrenceValues_ {};
        shared_ptr<int32_t> second_ {};
        shared_ptr<int32_t> year_ {};
      };

      virtual bool empty() const override { return this->nodeNumber_ == nullptr
        && this->scalingInRule_ == nullptr && this->scalingOutRule_ == nullptr && this->scalingRuleId_ == nullptr && this->scalingRuleName_ == nullptr && this->status_ == nullptr; };
      // nodeNumber Field Functions 
      bool hasNodeNumber() const { return this->nodeNumber_ != nullptr;};
      void deleteNodeNumber() { this->nodeNumber_ = nullptr;};
      inline string getNodeNumber() const { DARABONBA_PTR_GET_DEFAULT(nodeNumber_, "") };
      inline Data& setNodeNumber(string nodeNumber) { DARABONBA_PTR_SET_VALUE(nodeNumber_, nodeNumber) };


      // scalingInRule Field Functions 
      bool hasScalingInRule() const { return this->scalingInRule_ != nullptr;};
      void deleteScalingInRule() { this->scalingInRule_ = nullptr;};
      inline const Data::ScalingInRule & getScalingInRule() const { DARABONBA_PTR_GET_CONST(scalingInRule_, Data::ScalingInRule) };
      inline Data::ScalingInRule getScalingInRule() { DARABONBA_PTR_GET(scalingInRule_, Data::ScalingInRule) };
      inline Data& setScalingInRule(const Data::ScalingInRule & scalingInRule) { DARABONBA_PTR_SET_VALUE(scalingInRule_, scalingInRule) };
      inline Data& setScalingInRule(Data::ScalingInRule && scalingInRule) { DARABONBA_PTR_SET_RVALUE(scalingInRule_, scalingInRule) };


      // scalingOutRule Field Functions 
      bool hasScalingOutRule() const { return this->scalingOutRule_ != nullptr;};
      void deleteScalingOutRule() { this->scalingOutRule_ = nullptr;};
      inline const Data::ScalingOutRule & getScalingOutRule() const { DARABONBA_PTR_GET_CONST(scalingOutRule_, Data::ScalingOutRule) };
      inline Data::ScalingOutRule getScalingOutRule() { DARABONBA_PTR_GET(scalingOutRule_, Data::ScalingOutRule) };
      inline Data& setScalingOutRule(const Data::ScalingOutRule & scalingOutRule) { DARABONBA_PTR_SET_VALUE(scalingOutRule_, scalingOutRule) };
      inline Data& setScalingOutRule(Data::ScalingOutRule && scalingOutRule) { DARABONBA_PTR_SET_RVALUE(scalingOutRule_, scalingOutRule) };


      // scalingRuleId Field Functions 
      bool hasScalingRuleId() const { return this->scalingRuleId_ != nullptr;};
      void deleteScalingRuleId() { this->scalingRuleId_ = nullptr;};
      inline string getScalingRuleId() const { DARABONBA_PTR_GET_DEFAULT(scalingRuleId_, "") };
      inline Data& setScalingRuleId(string scalingRuleId) { DARABONBA_PTR_SET_VALUE(scalingRuleId_, scalingRuleId) };


      // scalingRuleName Field Functions 
      bool hasScalingRuleName() const { return this->scalingRuleName_ != nullptr;};
      void deleteScalingRuleName() { this->scalingRuleName_ = nullptr;};
      inline string getScalingRuleName() const { DARABONBA_PTR_GET_DEFAULT(scalingRuleName_, "") };
      inline Data& setScalingRuleName(string scalingRuleName) { DARABONBA_PTR_SET_VALUE(scalingRuleName_, scalingRuleName) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Data& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      shared_ptr<string> nodeNumber_ {};
      shared_ptr<Data::ScalingInRule> scalingInRule_ {};
      shared_ptr<Data::ScalingOutRule> scalingOutRule_ {};
      shared_ptr<string> scalingRuleId_ {};
      shared_ptr<string> scalingRuleName_ {};
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->data_ == nullptr && this->errCode_ == nullptr && this->errMessage_ == nullptr && this->httpStatusCode_ == nullptr && this->requestId_ == nullptr
        && this->success_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline DescribeTimeTriggerScalingRulesResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<DescribeTimeTriggerScalingRulesResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<DescribeTimeTriggerScalingRulesResponseBody::Data>) };
    inline vector<DescribeTimeTriggerScalingRulesResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<DescribeTimeTriggerScalingRulesResponseBody::Data>) };
    inline DescribeTimeTriggerScalingRulesResponseBody& setData(const vector<DescribeTimeTriggerScalingRulesResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeTimeTriggerScalingRulesResponseBody& setData(vector<DescribeTimeTriggerScalingRulesResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errCode Field Functions 
    bool hasErrCode() const { return this->errCode_ != nullptr;};
    void deleteErrCode() { this->errCode_ = nullptr;};
    inline string getErrCode() const { DARABONBA_PTR_GET_DEFAULT(errCode_, "") };
    inline DescribeTimeTriggerScalingRulesResponseBody& setErrCode(string errCode) { DARABONBA_PTR_SET_VALUE(errCode_, errCode) };


    // errMessage Field Functions 
    bool hasErrMessage() const { return this->errMessage_ != nullptr;};
    void deleteErrMessage() { this->errMessage_ = nullptr;};
    inline string getErrMessage() const { DARABONBA_PTR_GET_DEFAULT(errMessage_, "") };
    inline DescribeTimeTriggerScalingRulesResponseBody& setErrMessage(string errMessage) { DARABONBA_PTR_SET_VALUE(errMessage_, errMessage) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline DescribeTimeTriggerScalingRulesResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeTimeTriggerScalingRulesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeTimeTriggerScalingRulesResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> accessDeniedDetail_ {};
    shared_ptr<vector<DescribeTimeTriggerScalingRulesResponseBody::Data>> data_ {};
    shared_ptr<string> errCode_ {};
    shared_ptr<string> errMessage_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Starrocks20221019
#endif
