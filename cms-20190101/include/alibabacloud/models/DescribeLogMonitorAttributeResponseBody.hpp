// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELOGMONITORATTRIBUTERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELOGMONITORATTRIBUTERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeLogMonitorAttributeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLogMonitorAttributeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(LogMonitor, logMonitor_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLogMonitorAttributeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(LogMonitor, logMonitor_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeLogMonitorAttributeResponseBody() = default ;
    DescribeLogMonitorAttributeResponseBody(const DescribeLogMonitorAttributeResponseBody &) = default ;
    DescribeLogMonitorAttributeResponseBody(DescribeLogMonitorAttributeResponseBody &&) = default ;
    DescribeLogMonitorAttributeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLogMonitorAttributeResponseBody() = default ;
    DescribeLogMonitorAttributeResponseBody& operator=(const DescribeLogMonitorAttributeResponseBody &) = default ;
    DescribeLogMonitorAttributeResponseBody& operator=(DescribeLogMonitorAttributeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class LogMonitor : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const LogMonitor& obj) { 
        DARABONBA_PTR_TO_JSON(Aggregates, aggregates_);
        DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_TO_JSON(GroupId, groupId_);
        DARABONBA_PTR_TO_JSON(Groupbys, groupbys_);
        DARABONBA_PTR_TO_JSON(LogId, logId_);
        DARABONBA_PTR_TO_JSON(MetricExpress, metricExpress_);
        DARABONBA_PTR_TO_JSON(MetricName, metricName_);
        DARABONBA_PTR_TO_JSON(SlsLogstore, slsLogstore_);
        DARABONBA_PTR_TO_JSON(SlsProject, slsProject_);
        DARABONBA_PTR_TO_JSON(SlsRegionId, slsRegionId_);
        DARABONBA_PTR_TO_JSON(Tumblingwindows, tumblingwindows_);
        DARABONBA_PTR_TO_JSON(ValueFilter, valueFilter_);
        DARABONBA_PTR_TO_JSON(ValueFilterRelation, valueFilterRelation_);
      };
      friend void from_json(const Darabonba::Json& j, LogMonitor& obj) { 
        DARABONBA_PTR_FROM_JSON(Aggregates, aggregates_);
        DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
        DARABONBA_PTR_FROM_JSON(Groupbys, groupbys_);
        DARABONBA_PTR_FROM_JSON(LogId, logId_);
        DARABONBA_PTR_FROM_JSON(MetricExpress, metricExpress_);
        DARABONBA_PTR_FROM_JSON(MetricName, metricName_);
        DARABONBA_PTR_FROM_JSON(SlsLogstore, slsLogstore_);
        DARABONBA_PTR_FROM_JSON(SlsProject, slsProject_);
        DARABONBA_PTR_FROM_JSON(SlsRegionId, slsRegionId_);
        DARABONBA_PTR_FROM_JSON(Tumblingwindows, tumblingwindows_);
        DARABONBA_PTR_FROM_JSON(ValueFilter, valueFilter_);
        DARABONBA_PTR_FROM_JSON(ValueFilterRelation, valueFilterRelation_);
      };
      LogMonitor() = default ;
      LogMonitor(const LogMonitor &) = default ;
      LogMonitor(LogMonitor &&) = default ;
      LogMonitor(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~LogMonitor() = default ;
      LogMonitor& operator=(const LogMonitor &) = default ;
      LogMonitor& operator=(LogMonitor &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ValueFilter : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ValueFilter& obj) { 
          DARABONBA_PTR_TO_JSON(Key, key_);
          DARABONBA_PTR_TO_JSON(Operator, operator_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, ValueFilter& obj) { 
          DARABONBA_PTR_FROM_JSON(Key, key_);
          DARABONBA_PTR_FROM_JSON(Operator, operator_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
        };
        ValueFilter() = default ;
        ValueFilter(const ValueFilter &) = default ;
        ValueFilter(ValueFilter &&) = default ;
        ValueFilter(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ValueFilter() = default ;
        ValueFilter& operator=(const ValueFilter &) = default ;
        ValueFilter& operator=(ValueFilter &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->key_ == nullptr
        && this->operator_ == nullptr && this->value_ == nullptr; };
        // key Field Functions 
        bool hasKey() const { return this->key_ != nullptr;};
        void deleteKey() { this->key_ = nullptr;};
        inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
        inline ValueFilter& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


        // operator Field Functions 
        bool hasOperator() const { return this->operator_ != nullptr;};
        void deleteOperator() { this->operator_ = nullptr;};
        inline string getOperator() const { DARABONBA_PTR_GET_DEFAULT(operator_, "") };
        inline ValueFilter& setOperator(string _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline ValueFilter& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        // The name of the log field used for matching in the filter condition.
        shared_ptr<string> key_ {};
        // The method that is used to match the field value. Valid values:
        // 
        // *   `contain`: contains
        // *   `notContain`: does not contain
        // *   `>`: greater than
        // *   `<`: less than
        // *   `>=`: greater than or equal to
        // *   `<=`: less than or equal to
        shared_ptr<string> operator_ {};
        // The field value to be matched in the filter condition.
        shared_ptr<string> value_ {};
      };

      class Aggregates : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Aggregates& obj) { 
          DARABONBA_PTR_TO_JSON(Alias, alias_);
          DARABONBA_PTR_TO_JSON(FieldName, fieldName_);
          DARABONBA_PTR_TO_JSON(Function, function_);
          DARABONBA_PTR_TO_JSON(Max, max_);
          DARABONBA_PTR_TO_JSON(Min, min_);
        };
        friend void from_json(const Darabonba::Json& j, Aggregates& obj) { 
          DARABONBA_PTR_FROM_JSON(Alias, alias_);
          DARABONBA_PTR_FROM_JSON(FieldName, fieldName_);
          DARABONBA_PTR_FROM_JSON(Function, function_);
          DARABONBA_PTR_FROM_JSON(Max, max_);
          DARABONBA_PTR_FROM_JSON(Min, min_);
        };
        Aggregates() = default ;
        Aggregates(const Aggregates &) = default ;
        Aggregates(Aggregates &&) = default ;
        Aggregates(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Aggregates() = default ;
        Aggregates& operator=(const Aggregates &) = default ;
        Aggregates& operator=(Aggregates &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->alias_ == nullptr
        && this->fieldName_ == nullptr && this->function_ == nullptr && this->max_ == nullptr && this->min_ == nullptr; };
        // alias Field Functions 
        bool hasAlias() const { return this->alias_ != nullptr;};
        void deleteAlias() { this->alias_ = nullptr;};
        inline string getAlias() const { DARABONBA_PTR_GET_DEFAULT(alias_, "") };
        inline Aggregates& setAlias(string alias) { DARABONBA_PTR_SET_VALUE(alias_, alias) };


        // fieldName Field Functions 
        bool hasFieldName() const { return this->fieldName_ != nullptr;};
        void deleteFieldName() { this->fieldName_ = nullptr;};
        inline string getFieldName() const { DARABONBA_PTR_GET_DEFAULT(fieldName_, "") };
        inline Aggregates& setFieldName(string fieldName) { DARABONBA_PTR_SET_VALUE(fieldName_, fieldName) };


        // function Field Functions 
        bool hasFunction() const { return this->function_ != nullptr;};
        void deleteFunction() { this->function_ = nullptr;};
        inline string getFunction() const { DARABONBA_PTR_GET_DEFAULT(function_, "") };
        inline Aggregates& setFunction(string function) { DARABONBA_PTR_SET_VALUE(function_, function) };


        // max Field Functions 
        bool hasMax() const { return this->max_ != nullptr;};
        void deleteMax() { this->max_ = nullptr;};
        inline string getMax() const { DARABONBA_PTR_GET_DEFAULT(max_, "") };
        inline Aggregates& setMax(string max) { DARABONBA_PTR_SET_VALUE(max_, max) };


        // min Field Functions 
        bool hasMin() const { return this->min_ != nullptr;};
        void deleteMin() { this->min_ = nullptr;};
        inline string getMin() const { DARABONBA_PTR_GET_DEFAULT(min_, "") };
        inline Aggregates& setMin(string min) { DARABONBA_PTR_SET_VALUE(min_, min) };


      protected:
        // The alias of the field.
        shared_ptr<string> alias_ {};
        // The name of the field in logs.
        shared_ptr<string> fieldName_ {};
        // The function that is used to aggregate the monitoring data of logs within a statistical period. Valid values:
        // 
        // *   count: counts the number
        // *   sum: calculates the total value
        // *   avg: calculates the average value
        // *   max: calculates the maximum value
        // *   min: calculates the minimum value
        // *   countps: calculates the number of values of the specified field divided by the total number of seconds within a statistical period
        // *   sumps: calculates the sum of the values of the specified field divided by the total number of seconds within a statistical period
        // *   distinct: calculates the number of unique values of the specified field within a statistical period
        shared_ptr<string> function_ {};
        // The maximum value.
        shared_ptr<string> max_ {};
        // The minimum value.
        shared_ptr<string> min_ {};
      };

      virtual bool empty() const override { return this->aggregates_ == nullptr
        && this->gmtCreate_ == nullptr && this->groupId_ == nullptr && this->groupbys_ == nullptr && this->logId_ == nullptr && this->metricExpress_ == nullptr
        && this->metricName_ == nullptr && this->slsLogstore_ == nullptr && this->slsProject_ == nullptr && this->slsRegionId_ == nullptr && this->tumblingwindows_ == nullptr
        && this->valueFilter_ == nullptr && this->valueFilterRelation_ == nullptr; };
      // aggregates Field Functions 
      bool hasAggregates() const { return this->aggregates_ != nullptr;};
      void deleteAggregates() { this->aggregates_ = nullptr;};
      inline const vector<LogMonitor::Aggregates> & getAggregates() const { DARABONBA_PTR_GET_CONST(aggregates_, vector<LogMonitor::Aggregates>) };
      inline vector<LogMonitor::Aggregates> getAggregates() { DARABONBA_PTR_GET(aggregates_, vector<LogMonitor::Aggregates>) };
      inline LogMonitor& setAggregates(const vector<LogMonitor::Aggregates> & aggregates) { DARABONBA_PTR_SET_VALUE(aggregates_, aggregates) };
      inline LogMonitor& setAggregates(vector<LogMonitor::Aggregates> && aggregates) { DARABONBA_PTR_SET_RVALUE(aggregates_, aggregates) };


      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline int64_t getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
      inline LogMonitor& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


      // groupId Field Functions 
      bool hasGroupId() const { return this->groupId_ != nullptr;};
      void deleteGroupId() { this->groupId_ = nullptr;};
      inline int64_t getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, 0L) };
      inline LogMonitor& setGroupId(int64_t groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


      // groupbys Field Functions 
      bool hasGroupbys() const { return this->groupbys_ != nullptr;};
      void deleteGroupbys() { this->groupbys_ = nullptr;};
      inline const vector<string> & getGroupbys() const { DARABONBA_PTR_GET_CONST(groupbys_, vector<string>) };
      inline vector<string> getGroupbys() { DARABONBA_PTR_GET(groupbys_, vector<string>) };
      inline LogMonitor& setGroupbys(const vector<string> & groupbys) { DARABONBA_PTR_SET_VALUE(groupbys_, groupbys) };
      inline LogMonitor& setGroupbys(vector<string> && groupbys) { DARABONBA_PTR_SET_RVALUE(groupbys_, groupbys) };


      // logId Field Functions 
      bool hasLogId() const { return this->logId_ != nullptr;};
      void deleteLogId() { this->logId_ = nullptr;};
      inline int64_t getLogId() const { DARABONBA_PTR_GET_DEFAULT(logId_, 0L) };
      inline LogMonitor& setLogId(int64_t logId) { DARABONBA_PTR_SET_VALUE(logId_, logId) };


      // metricExpress Field Functions 
      bool hasMetricExpress() const { return this->metricExpress_ != nullptr;};
      void deleteMetricExpress() { this->metricExpress_ = nullptr;};
      inline string getMetricExpress() const { DARABONBA_PTR_GET_DEFAULT(metricExpress_, "") };
      inline LogMonitor& setMetricExpress(string metricExpress) { DARABONBA_PTR_SET_VALUE(metricExpress_, metricExpress) };


      // metricName Field Functions 
      bool hasMetricName() const { return this->metricName_ != nullptr;};
      void deleteMetricName() { this->metricName_ = nullptr;};
      inline string getMetricName() const { DARABONBA_PTR_GET_DEFAULT(metricName_, "") };
      inline LogMonitor& setMetricName(string metricName) { DARABONBA_PTR_SET_VALUE(metricName_, metricName) };


      // slsLogstore Field Functions 
      bool hasSlsLogstore() const { return this->slsLogstore_ != nullptr;};
      void deleteSlsLogstore() { this->slsLogstore_ = nullptr;};
      inline string getSlsLogstore() const { DARABONBA_PTR_GET_DEFAULT(slsLogstore_, "") };
      inline LogMonitor& setSlsLogstore(string slsLogstore) { DARABONBA_PTR_SET_VALUE(slsLogstore_, slsLogstore) };


      // slsProject Field Functions 
      bool hasSlsProject() const { return this->slsProject_ != nullptr;};
      void deleteSlsProject() { this->slsProject_ = nullptr;};
      inline string getSlsProject() const { DARABONBA_PTR_GET_DEFAULT(slsProject_, "") };
      inline LogMonitor& setSlsProject(string slsProject) { DARABONBA_PTR_SET_VALUE(slsProject_, slsProject) };


      // slsRegionId Field Functions 
      bool hasSlsRegionId() const { return this->slsRegionId_ != nullptr;};
      void deleteSlsRegionId() { this->slsRegionId_ = nullptr;};
      inline string getSlsRegionId() const { DARABONBA_PTR_GET_DEFAULT(slsRegionId_, "") };
      inline LogMonitor& setSlsRegionId(string slsRegionId) { DARABONBA_PTR_SET_VALUE(slsRegionId_, slsRegionId) };


      // tumblingwindows Field Functions 
      bool hasTumblingwindows() const { return this->tumblingwindows_ != nullptr;};
      void deleteTumblingwindows() { this->tumblingwindows_ = nullptr;};
      inline const vector<string> & getTumblingwindows() const { DARABONBA_PTR_GET_CONST(tumblingwindows_, vector<string>) };
      inline vector<string> getTumblingwindows() { DARABONBA_PTR_GET(tumblingwindows_, vector<string>) };
      inline LogMonitor& setTumblingwindows(const vector<string> & tumblingwindows) { DARABONBA_PTR_SET_VALUE(tumblingwindows_, tumblingwindows) };
      inline LogMonitor& setTumblingwindows(vector<string> && tumblingwindows) { DARABONBA_PTR_SET_RVALUE(tumblingwindows_, tumblingwindows) };


      // valueFilter Field Functions 
      bool hasValueFilter() const { return this->valueFilter_ != nullptr;};
      void deleteValueFilter() { this->valueFilter_ = nullptr;};
      inline const vector<LogMonitor::ValueFilter> & getValueFilter() const { DARABONBA_PTR_GET_CONST(valueFilter_, vector<LogMonitor::ValueFilter>) };
      inline vector<LogMonitor::ValueFilter> getValueFilter() { DARABONBA_PTR_GET(valueFilter_, vector<LogMonitor::ValueFilter>) };
      inline LogMonitor& setValueFilter(const vector<LogMonitor::ValueFilter> & valueFilter) { DARABONBA_PTR_SET_VALUE(valueFilter_, valueFilter) };
      inline LogMonitor& setValueFilter(vector<LogMonitor::ValueFilter> && valueFilter) { DARABONBA_PTR_SET_RVALUE(valueFilter_, valueFilter) };


      // valueFilterRelation Field Functions 
      bool hasValueFilterRelation() const { return this->valueFilterRelation_ != nullptr;};
      void deleteValueFilterRelation() { this->valueFilterRelation_ = nullptr;};
      inline string getValueFilterRelation() const { DARABONBA_PTR_GET_DEFAULT(valueFilterRelation_, "") };
      inline LogMonitor& setValueFilterRelation(string valueFilterRelation) { DARABONBA_PTR_SET_VALUE(valueFilterRelation_, valueFilterRelation) };


    protected:
      // The aggregation logic.
      shared_ptr<vector<LogMonitor::Aggregates>> aggregates_ {};
      // The time when the metric was created.
      // 
      // This value is a UNIX timestamp that represents the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
      shared_ptr<int64_t> gmtCreate_ {};
      // The ID of the application group.
      shared_ptr<int64_t> groupId_ {};
      shared_ptr<vector<string>> groupbys_ {};
      // The ID of the log.
      shared_ptr<int64_t> logId_ {};
      // The extended field. The extended field allows you to perform basic operations on the aggregation results.
      // 
      // For example, if you have calculated TotalNumber and 5XXNumber by aggregating the data. TotalNumber indicates the total number of HTTP requests, and 5XXNumber indicates the number of HTTP requests whose status code is greater than 499. You can calculate the server error rate by adding the following formula to the extended field: 5XXNumber/TotalNumber\\*100.
      shared_ptr<string> metricExpress_ {};
      // The metric name. For more information, see [Appendix 1: Metrics](https://help.aliyun.com/document_detail/163515.html).
      shared_ptr<string> metricName_ {};
      // The name of the Simple Log Service Logstore.
      shared_ptr<string> slsLogstore_ {};
      // The name of the SLS project.
      shared_ptr<string> slsProject_ {};
      // The ID of the region where the Simple Log Service (SLS) Logstore resides.
      shared_ptr<string> slsRegionId_ {};
      shared_ptr<vector<string>> tumblingwindows_ {};
      // The condition that is used to filter logs. The ValueFilter and ValueFilterRelation parameters are used in pair. The filter condition is equivalent to the WHERE clause in SQL statements.
      // 
      // If no filter condition is specified, all logs are processed. For example, logs contain the Level and Error fields. If you need to calculate the number of times that logs of the Error level appear every minute, you can set the filter condition to Level=Error and count the number of logs that meet this condition.
      shared_ptr<vector<LogMonitor::ValueFilter>> valueFilter_ {};
      // The logical operator that is used between log filter conditions. The ValueFilter and ValueFilterRelation parameters must be used in pair. Valid values:
      // 
      // *   and
      // *   or
      shared_ptr<string> valueFilterRelation_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->logMonitor_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeLogMonitorAttributeResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // logMonitor Field Functions 
    bool hasLogMonitor() const { return this->logMonitor_ != nullptr;};
    void deleteLogMonitor() { this->logMonitor_ = nullptr;};
    inline const DescribeLogMonitorAttributeResponseBody::LogMonitor & getLogMonitor() const { DARABONBA_PTR_GET_CONST(logMonitor_, DescribeLogMonitorAttributeResponseBody::LogMonitor) };
    inline DescribeLogMonitorAttributeResponseBody::LogMonitor getLogMonitor() { DARABONBA_PTR_GET(logMonitor_, DescribeLogMonitorAttributeResponseBody::LogMonitor) };
    inline DescribeLogMonitorAttributeResponseBody& setLogMonitor(const DescribeLogMonitorAttributeResponseBody::LogMonitor & logMonitor) { DARABONBA_PTR_SET_VALUE(logMonitor_, logMonitor) };
    inline DescribeLogMonitorAttributeResponseBody& setLogMonitor(DescribeLogMonitorAttributeResponseBody::LogMonitor && logMonitor) { DARABONBA_PTR_SET_RVALUE(logMonitor_, logMonitor) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeLogMonitorAttributeResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLogMonitorAttributeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeLogMonitorAttributeResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The status code.
    // 
    // >  The status code 200 indicates that the request was successful.
    shared_ptr<string> code_ {};
    // The details of the log monitoring metric.
    shared_ptr<DescribeLogMonitorAttributeResponseBody::LogMonitor> logMonitor_ {};
    // The returned message. If the request was successful, a success message is returned. If the request failed, an error message is returned.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   true
    // *   false
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
