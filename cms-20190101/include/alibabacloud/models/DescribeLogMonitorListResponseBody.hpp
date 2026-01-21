// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELOGMONITORLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELOGMONITORLISTRESPONSEBODY_HPP_
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
  class DescribeLogMonitorListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLogMonitorListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(LogMonitorList, logMonitorList_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLogMonitorListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(LogMonitorList, logMonitorList_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    DescribeLogMonitorListResponseBody() = default ;
    DescribeLogMonitorListResponseBody(const DescribeLogMonitorListResponseBody &) = default ;
    DescribeLogMonitorListResponseBody(DescribeLogMonitorListResponseBody &&) = default ;
    DescribeLogMonitorListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLogMonitorListResponseBody() = default ;
    DescribeLogMonitorListResponseBody& operator=(const DescribeLogMonitorListResponseBody &) = default ;
    DescribeLogMonitorListResponseBody& operator=(DescribeLogMonitorListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class LogMonitorList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const LogMonitorList& obj) { 
        DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_TO_JSON(GroupId, groupId_);
        DARABONBA_PTR_TO_JSON(LogId, logId_);
        DARABONBA_PTR_TO_JSON(MetricName, metricName_);
        DARABONBA_PTR_TO_JSON(SlsLogstore, slsLogstore_);
        DARABONBA_PTR_TO_JSON(SlsProject, slsProject_);
        DARABONBA_PTR_TO_JSON(SlsRegionId, slsRegionId_);
        DARABONBA_PTR_TO_JSON(ValueFilter, valueFilter_);
        DARABONBA_PTR_TO_JSON(ValueFilterRelation, valueFilterRelation_);
      };
      friend void from_json(const Darabonba::Json& j, LogMonitorList& obj) { 
        DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
        DARABONBA_PTR_FROM_JSON(LogId, logId_);
        DARABONBA_PTR_FROM_JSON(MetricName, metricName_);
        DARABONBA_PTR_FROM_JSON(SlsLogstore, slsLogstore_);
        DARABONBA_PTR_FROM_JSON(SlsProject, slsProject_);
        DARABONBA_PTR_FROM_JSON(SlsRegionId, slsRegionId_);
        DARABONBA_PTR_FROM_JSON(ValueFilter, valueFilter_);
        DARABONBA_PTR_FROM_JSON(ValueFilterRelation, valueFilterRelation_);
      };
      LogMonitorList() = default ;
      LogMonitorList(const LogMonitorList &) = default ;
      LogMonitorList(LogMonitorList &&) = default ;
      LogMonitorList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~LogMonitorList() = default ;
      LogMonitorList& operator=(const LogMonitorList &) = default ;
      LogMonitorList& operator=(LogMonitorList &&) = default ;
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
        // *   contain: contains
        // *   notContain: does not contain
        // *   `>`: greater than
        // *   `<`: less than
        // *   `>=`: greater than or equal to
        // *   `<=`: less than or equal to
        shared_ptr<string> operator_ {};
        // The field value to be matched in the filter condition.
        shared_ptr<string> value_ {};
      };

      virtual bool empty() const override { return this->gmtCreate_ == nullptr
        && this->groupId_ == nullptr && this->logId_ == nullptr && this->metricName_ == nullptr && this->slsLogstore_ == nullptr && this->slsProject_ == nullptr
        && this->slsRegionId_ == nullptr && this->valueFilter_ == nullptr && this->valueFilterRelation_ == nullptr; };
      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline int64_t getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
      inline LogMonitorList& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


      // groupId Field Functions 
      bool hasGroupId() const { return this->groupId_ != nullptr;};
      void deleteGroupId() { this->groupId_ = nullptr;};
      inline int64_t getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, 0L) };
      inline LogMonitorList& setGroupId(int64_t groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


      // logId Field Functions 
      bool hasLogId() const { return this->logId_ != nullptr;};
      void deleteLogId() { this->logId_ = nullptr;};
      inline int64_t getLogId() const { DARABONBA_PTR_GET_DEFAULT(logId_, 0L) };
      inline LogMonitorList& setLogId(int64_t logId) { DARABONBA_PTR_SET_VALUE(logId_, logId) };


      // metricName Field Functions 
      bool hasMetricName() const { return this->metricName_ != nullptr;};
      void deleteMetricName() { this->metricName_ = nullptr;};
      inline string getMetricName() const { DARABONBA_PTR_GET_DEFAULT(metricName_, "") };
      inline LogMonitorList& setMetricName(string metricName) { DARABONBA_PTR_SET_VALUE(metricName_, metricName) };


      // slsLogstore Field Functions 
      bool hasSlsLogstore() const { return this->slsLogstore_ != nullptr;};
      void deleteSlsLogstore() { this->slsLogstore_ = nullptr;};
      inline string getSlsLogstore() const { DARABONBA_PTR_GET_DEFAULT(slsLogstore_, "") };
      inline LogMonitorList& setSlsLogstore(string slsLogstore) { DARABONBA_PTR_SET_VALUE(slsLogstore_, slsLogstore) };


      // slsProject Field Functions 
      bool hasSlsProject() const { return this->slsProject_ != nullptr;};
      void deleteSlsProject() { this->slsProject_ = nullptr;};
      inline string getSlsProject() const { DARABONBA_PTR_GET_DEFAULT(slsProject_, "") };
      inline LogMonitorList& setSlsProject(string slsProject) { DARABONBA_PTR_SET_VALUE(slsProject_, slsProject) };


      // slsRegionId Field Functions 
      bool hasSlsRegionId() const { return this->slsRegionId_ != nullptr;};
      void deleteSlsRegionId() { this->slsRegionId_ = nullptr;};
      inline string getSlsRegionId() const { DARABONBA_PTR_GET_DEFAULT(slsRegionId_, "") };
      inline LogMonitorList& setSlsRegionId(string slsRegionId) { DARABONBA_PTR_SET_VALUE(slsRegionId_, slsRegionId) };


      // valueFilter Field Functions 
      bool hasValueFilter() const { return this->valueFilter_ != nullptr;};
      void deleteValueFilter() { this->valueFilter_ = nullptr;};
      inline const vector<LogMonitorList::ValueFilter> & getValueFilter() const { DARABONBA_PTR_GET_CONST(valueFilter_, vector<LogMonitorList::ValueFilter>) };
      inline vector<LogMonitorList::ValueFilter> getValueFilter() { DARABONBA_PTR_GET(valueFilter_, vector<LogMonitorList::ValueFilter>) };
      inline LogMonitorList& setValueFilter(const vector<LogMonitorList::ValueFilter> & valueFilter) { DARABONBA_PTR_SET_VALUE(valueFilter_, valueFilter) };
      inline LogMonitorList& setValueFilter(vector<LogMonitorList::ValueFilter> && valueFilter) { DARABONBA_PTR_SET_RVALUE(valueFilter_, valueFilter) };


      // valueFilterRelation Field Functions 
      bool hasValueFilterRelation() const { return this->valueFilterRelation_ != nullptr;};
      void deleteValueFilterRelation() { this->valueFilterRelation_ = nullptr;};
      inline string getValueFilterRelation() const { DARABONBA_PTR_GET_DEFAULT(valueFilterRelation_, "") };
      inline LogMonitorList& setValueFilterRelation(string valueFilterRelation) { DARABONBA_PTR_SET_VALUE(valueFilterRelation_, valueFilterRelation) };


    protected:
      // The time when the log monitoring metric was created.
      // 
      // This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
      shared_ptr<int64_t> gmtCreate_ {};
      // The ID of the application group.
      shared_ptr<int64_t> groupId_ {};
      // The ID of the log monitoring metric.
      shared_ptr<int64_t> logId_ {};
      // The metric name. For more information, see [Appendix 1: Metrics](https://help.aliyun.com/document_detail/163515.html).
      shared_ptr<string> metricName_ {};
      // The name of the Simple Log Service (SLS) Logstore.
      shared_ptr<string> slsLogstore_ {};
      // The name of the SLS project.
      shared_ptr<string> slsProject_ {};
      // The ID of the region where the SLS Logstore resides.
      shared_ptr<string> slsRegionId_ {};
      // The condition that is used to filter logs. The ValueFilter and ValueFilterRelation parameters are used in pair. The filter condition is equivalent to the WHERE clause in SQL statements. If no filter condition is specified, all logs are processed. For example, logs contain the Level and Error fields. If you need to calculate the number of times that logs of the Error level appear every minute, you can set the filter condition to Level=Error and count the number of logs that meet this condition.
      shared_ptr<vector<LogMonitorList::ValueFilter>> valueFilter_ {};
      // The logical operator that is used between log filter conditions. The ValueFilter and ValueFilterRelation parameters are used in pair. Valid values:
      // 
      // *   and
      // *   or
      shared_ptr<string> valueFilterRelation_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->logMonitorList_ == nullptr && this->message_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr
        && this->success_ == nullptr && this->total_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeLogMonitorListResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // logMonitorList Field Functions 
    bool hasLogMonitorList() const { return this->logMonitorList_ != nullptr;};
    void deleteLogMonitorList() { this->logMonitorList_ = nullptr;};
    inline const vector<DescribeLogMonitorListResponseBody::LogMonitorList> & getLogMonitorList() const { DARABONBA_PTR_GET_CONST(logMonitorList_, vector<DescribeLogMonitorListResponseBody::LogMonitorList>) };
    inline vector<DescribeLogMonitorListResponseBody::LogMonitorList> getLogMonitorList() { DARABONBA_PTR_GET(logMonitorList_, vector<DescribeLogMonitorListResponseBody::LogMonitorList>) };
    inline DescribeLogMonitorListResponseBody& setLogMonitorList(const vector<DescribeLogMonitorListResponseBody::LogMonitorList> & logMonitorList) { DARABONBA_PTR_SET_VALUE(logMonitorList_, logMonitorList) };
    inline DescribeLogMonitorListResponseBody& setLogMonitorList(vector<DescribeLogMonitorListResponseBody::LogMonitorList> && logMonitorList) { DARABONBA_PTR_SET_RVALUE(logMonitorList_, logMonitorList) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeLogMonitorListResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeLogMonitorListResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeLogMonitorListResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLogMonitorListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeLogMonitorListResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int64_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
    inline DescribeLogMonitorListResponseBody& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // The status code.
    // 
    // >  The status code 200 indicates that the request was successful.
    shared_ptr<string> code_ {};
    // The log monitoring metrics.
    shared_ptr<vector<DescribeLogMonitorListResponseBody::LogMonitorList>> logMonitorList_ {};
    // The returned message.
    shared_ptr<string> message_ {};
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   true
    // *   false
    shared_ptr<bool> success_ {};
    // The total number of entries returned.
    shared_ptr<int64_t> total_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
