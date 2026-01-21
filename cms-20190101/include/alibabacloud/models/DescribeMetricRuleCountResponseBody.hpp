// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMETRICRULECOUNTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMETRICRULECOUNTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeMetricRuleCountResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMetricRuleCountResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(MetricRuleCount, metricRuleCount_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMetricRuleCountResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(MetricRuleCount, metricRuleCount_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeMetricRuleCountResponseBody() = default ;
    DescribeMetricRuleCountResponseBody(const DescribeMetricRuleCountResponseBody &) = default ;
    DescribeMetricRuleCountResponseBody(DescribeMetricRuleCountResponseBody &&) = default ;
    DescribeMetricRuleCountResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMetricRuleCountResponseBody() = default ;
    DescribeMetricRuleCountResponseBody& operator=(const DescribeMetricRuleCountResponseBody &) = default ;
    DescribeMetricRuleCountResponseBody& operator=(DescribeMetricRuleCountResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class MetricRuleCount : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const MetricRuleCount& obj) { 
        DARABONBA_PTR_TO_JSON(Alarm, alarm_);
        DARABONBA_PTR_TO_JSON(Disable, disable_);
        DARABONBA_PTR_TO_JSON(Nodata, nodata_);
        DARABONBA_PTR_TO_JSON(Ok, ok_);
        DARABONBA_PTR_TO_JSON(Total, total_);
      };
      friend void from_json(const Darabonba::Json& j, MetricRuleCount& obj) { 
        DARABONBA_PTR_FROM_JSON(Alarm, alarm_);
        DARABONBA_PTR_FROM_JSON(Disable, disable_);
        DARABONBA_PTR_FROM_JSON(Nodata, nodata_);
        DARABONBA_PTR_FROM_JSON(Ok, ok_);
        DARABONBA_PTR_FROM_JSON(Total, total_);
      };
      MetricRuleCount() = default ;
      MetricRuleCount(const MetricRuleCount &) = default ;
      MetricRuleCount(MetricRuleCount &&) = default ;
      MetricRuleCount(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~MetricRuleCount() = default ;
      MetricRuleCount& operator=(const MetricRuleCount &) = default ;
      MetricRuleCount& operator=(MetricRuleCount &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->alarm_ == nullptr
        && this->disable_ == nullptr && this->nodata_ == nullptr && this->ok_ == nullptr && this->total_ == nullptr; };
      // alarm Field Functions 
      bool hasAlarm() const { return this->alarm_ != nullptr;};
      void deleteAlarm() { this->alarm_ = nullptr;};
      inline int32_t getAlarm() const { DARABONBA_PTR_GET_DEFAULT(alarm_, 0) };
      inline MetricRuleCount& setAlarm(int32_t alarm) { DARABONBA_PTR_SET_VALUE(alarm_, alarm) };


      // disable Field Functions 
      bool hasDisable() const { return this->disable_ != nullptr;};
      void deleteDisable() { this->disable_ = nullptr;};
      inline int32_t getDisable() const { DARABONBA_PTR_GET_DEFAULT(disable_, 0) };
      inline MetricRuleCount& setDisable(int32_t disable) { DARABONBA_PTR_SET_VALUE(disable_, disable) };


      // nodata Field Functions 
      bool hasNodata() const { return this->nodata_ != nullptr;};
      void deleteNodata() { this->nodata_ = nullptr;};
      inline int32_t getNodata() const { DARABONBA_PTR_GET_DEFAULT(nodata_, 0) };
      inline MetricRuleCount& setNodata(int32_t nodata) { DARABONBA_PTR_SET_VALUE(nodata_, nodata) };


      // ok Field Functions 
      bool hasOk() const { return this->ok_ != nullptr;};
      void deleteOk() { this->ok_ = nullptr;};
      inline int32_t getOk() const { DARABONBA_PTR_GET_DEFAULT(ok_, 0) };
      inline MetricRuleCount& setOk(int32_t ok) { DARABONBA_PTR_SET_VALUE(ok_, ok) };


      // total Field Functions 
      bool hasTotal() const { return this->total_ != nullptr;};
      void deleteTotal() { this->total_ = nullptr;};
      inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
      inline MetricRuleCount& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


    protected:
      // The number of alert rules with active alerts.
      shared_ptr<int32_t> alarm_ {};
      // The number of disabled alert rules.
      shared_ptr<int32_t> disable_ {};
      // The number of alert rules without data.
      shared_ptr<int32_t> nodata_ {};
      // The number of alert rules without active alerts.
      shared_ptr<int32_t> ok_ {};
      // The total number of alert rules.
      shared_ptr<int32_t> total_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->metricRuleCount_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeMetricRuleCountResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeMetricRuleCountResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // metricRuleCount Field Functions 
    bool hasMetricRuleCount() const { return this->metricRuleCount_ != nullptr;};
    void deleteMetricRuleCount() { this->metricRuleCount_ = nullptr;};
    inline const DescribeMetricRuleCountResponseBody::MetricRuleCount & getMetricRuleCount() const { DARABONBA_PTR_GET_CONST(metricRuleCount_, DescribeMetricRuleCountResponseBody::MetricRuleCount) };
    inline DescribeMetricRuleCountResponseBody::MetricRuleCount getMetricRuleCount() { DARABONBA_PTR_GET(metricRuleCount_, DescribeMetricRuleCountResponseBody::MetricRuleCount) };
    inline DescribeMetricRuleCountResponseBody& setMetricRuleCount(const DescribeMetricRuleCountResponseBody::MetricRuleCount & metricRuleCount) { DARABONBA_PTR_SET_VALUE(metricRuleCount_, metricRuleCount) };
    inline DescribeMetricRuleCountResponseBody& setMetricRuleCount(DescribeMetricRuleCountResponseBody::MetricRuleCount && metricRuleCount) { DARABONBA_PTR_SET_RVALUE(metricRuleCount_, metricRuleCount) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeMetricRuleCountResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeMetricRuleCountResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The responses code.
    // 
    // >  The status code 200 indicates that the request was successful.
    shared_ptr<string> code_ {};
    // The error message.
    shared_ptr<string> message_ {};
    // The number of alert rules in each state.
    shared_ptr<DescribeMetricRuleCountResponseBody::MetricRuleCount> metricRuleCount_ {};
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
