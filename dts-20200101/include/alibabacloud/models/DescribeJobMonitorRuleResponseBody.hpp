// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEJOBMONITORRULERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEJOBMONITORRULERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class DescribeJobMonitorRuleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeJobMonitorRuleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(DtsJobId, dtsJobId_);
      DARABONBA_PTR_TO_JSON(DynamicMessage, dynamicMessage_);
      DARABONBA_PTR_TO_JSON(ErrCode, errCode_);
      DARABONBA_PTR_TO_JSON(ErrMessage, errMessage_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(MonitorRules, monitorRules_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(Topics, topics_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeJobMonitorRuleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(DtsJobId, dtsJobId_);
      DARABONBA_PTR_FROM_JSON(DynamicMessage, dynamicMessage_);
      DARABONBA_PTR_FROM_JSON(ErrCode, errCode_);
      DARABONBA_PTR_FROM_JSON(ErrMessage, errMessage_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(MonitorRules, monitorRules_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(Topics, topics_);
    };
    DescribeJobMonitorRuleResponseBody() = default ;
    DescribeJobMonitorRuleResponseBody(const DescribeJobMonitorRuleResponseBody &) = default ;
    DescribeJobMonitorRuleResponseBody(DescribeJobMonitorRuleResponseBody &&) = default ;
    DescribeJobMonitorRuleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeJobMonitorRuleResponseBody() = default ;
    DescribeJobMonitorRuleResponseBody& operator=(const DescribeJobMonitorRuleResponseBody &) = default ;
    DescribeJobMonitorRuleResponseBody& operator=(DescribeJobMonitorRuleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class MonitorRules : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const MonitorRules& obj) { 
        DARABONBA_PTR_TO_JSON(DelayRuleTime, delayRuleTime_);
        DARABONBA_PTR_TO_JSON(JobId, jobId_);
        DARABONBA_PTR_TO_JSON(JobType, jobType_);
        DARABONBA_PTR_TO_JSON(NoticeValue, noticeValue_);
        DARABONBA_PTR_TO_JSON(Period, period_);
        DARABONBA_PTR_TO_JSON(Phone, phone_);
        DARABONBA_PTR_TO_JSON(State, state_);
        DARABONBA_PTR_TO_JSON(Times, times_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, MonitorRules& obj) { 
        DARABONBA_PTR_FROM_JSON(DelayRuleTime, delayRuleTime_);
        DARABONBA_PTR_FROM_JSON(JobId, jobId_);
        DARABONBA_PTR_FROM_JSON(JobType, jobType_);
        DARABONBA_PTR_FROM_JSON(NoticeValue, noticeValue_);
        DARABONBA_PTR_FROM_JSON(Period, period_);
        DARABONBA_PTR_FROM_JSON(Phone, phone_);
        DARABONBA_PTR_FROM_JSON(State, state_);
        DARABONBA_PTR_FROM_JSON(Times, times_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      MonitorRules() = default ;
      MonitorRules(const MonitorRules &) = default ;
      MonitorRules(MonitorRules &&) = default ;
      MonitorRules(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~MonitorRules() = default ;
      MonitorRules& operator=(const MonitorRules &) = default ;
      MonitorRules& operator=(MonitorRules &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->delayRuleTime_ == nullptr
        && this->jobId_ == nullptr && this->jobType_ == nullptr && this->noticeValue_ == nullptr && this->period_ == nullptr && this->phone_ == nullptr
        && this->state_ == nullptr && this->times_ == nullptr && this->type_ == nullptr; };
      // delayRuleTime Field Functions 
      bool hasDelayRuleTime() const { return this->delayRuleTime_ != nullptr;};
      void deleteDelayRuleTime() { this->delayRuleTime_ = nullptr;};
      inline int64_t getDelayRuleTime() const { DARABONBA_PTR_GET_DEFAULT(delayRuleTime_, 0L) };
      inline MonitorRules& setDelayRuleTime(int64_t delayRuleTime) { DARABONBA_PTR_SET_VALUE(delayRuleTime_, delayRuleTime) };


      // jobId Field Functions 
      bool hasJobId() const { return this->jobId_ != nullptr;};
      void deleteJobId() { this->jobId_ = nullptr;};
      inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
      inline MonitorRules& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


      // jobType Field Functions 
      bool hasJobType() const { return this->jobType_ != nullptr;};
      void deleteJobType() { this->jobType_ = nullptr;};
      inline string getJobType() const { DARABONBA_PTR_GET_DEFAULT(jobType_, "") };
      inline MonitorRules& setJobType(string jobType) { DARABONBA_PTR_SET_VALUE(jobType_, jobType) };


      // noticeValue Field Functions 
      bool hasNoticeValue() const { return this->noticeValue_ != nullptr;};
      void deleteNoticeValue() { this->noticeValue_ = nullptr;};
      inline int32_t getNoticeValue() const { DARABONBA_PTR_GET_DEFAULT(noticeValue_, 0) };
      inline MonitorRules& setNoticeValue(int32_t noticeValue) { DARABONBA_PTR_SET_VALUE(noticeValue_, noticeValue) };


      // period Field Functions 
      bool hasPeriod() const { return this->period_ != nullptr;};
      void deletePeriod() { this->period_ = nullptr;};
      inline int32_t getPeriod() const { DARABONBA_PTR_GET_DEFAULT(period_, 0) };
      inline MonitorRules& setPeriod(int32_t period) { DARABONBA_PTR_SET_VALUE(period_, period) };


      // phone Field Functions 
      bool hasPhone() const { return this->phone_ != nullptr;};
      void deletePhone() { this->phone_ = nullptr;};
      inline string getPhone() const { DARABONBA_PTR_GET_DEFAULT(phone_, "") };
      inline MonitorRules& setPhone(string phone) { DARABONBA_PTR_SET_VALUE(phone_, phone) };


      // state Field Functions 
      bool hasState() const { return this->state_ != nullptr;};
      void deleteState() { this->state_ = nullptr;};
      inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
      inline MonitorRules& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


      // times Field Functions 
      bool hasTimes() const { return this->times_ != nullptr;};
      void deleteTimes() { this->times_ = nullptr;};
      inline int32_t getTimes() const { DARABONBA_PTR_GET_DEFAULT(times_, 0) };
      inline MonitorRules& setTimes(int32_t times) { DARABONBA_PTR_SET_VALUE(times_, times) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline MonitorRules& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // The threshold that triggers the alert.
      // 
      // *   If the request parameter **Type** of the [CreateJobMonitorRule](https://help.aliyun.com/document_detail/212332.html) operation is set to **delay**, the unit of DelayRuleTime is seconds.
      // *   If the request parameter **Type** of the [CreateJobMonitorRule](https://help.aliyun.com/document_detail/212332.html) operation is set to **full_timeout**, the unit of DelayRuleTime is hours.
      shared_ptr<int64_t> delayRuleTime_ {};
      // Task ID.
      shared_ptr<string> jobId_ {};
      // The task type of the DTS instance, with values: - **normal**: Migration or synchronization task. - **full_check**: Associated full check task. - **etl_check**: Associated incremental check task.
      shared_ptr<string> jobType_ {};
      // Alarm threshold.
      shared_ptr<int32_t> noticeValue_ {};
      // The statistical period for incremental validation tasks, in minutes.
      // > Currently supported values are 1 minute, 5 minutes, 10 minutes, and 30 minutes.
      shared_ptr<int32_t> period_ {};
      // The mobile phone numbers that receive alert notifications. Multiple mobile numbers are separated by commas (,).
      shared_ptr<string> phone_ {};
      // Indicates whether the monitoring rule is enabled. Valid values:
      // 
      // *   **Y**: The monitoring rule is enabled.
      // *   **N**: The monitoring rule is disabled.
      shared_ptr<string> state_ {};
      // The number of cycles for the incremental validation task.
      shared_ptr<int32_t> times_ {};
      // The type of the monitoring rule. Valid values:
      // 
      // *   **delay**: If the task latency reaches the threshold, an alert is triggered.
      // *   **error**: If an exception occurs, an alert is triggered.
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->dtsJobId_ == nullptr && this->dynamicMessage_ == nullptr && this->errCode_ == nullptr && this->errMessage_ == nullptr && this->httpStatusCode_ == nullptr
        && this->monitorRules_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->topics_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeJobMonitorRuleResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // dtsJobId Field Functions 
    bool hasDtsJobId() const { return this->dtsJobId_ != nullptr;};
    void deleteDtsJobId() { this->dtsJobId_ = nullptr;};
    inline string getDtsJobId() const { DARABONBA_PTR_GET_DEFAULT(dtsJobId_, "") };
    inline DescribeJobMonitorRuleResponseBody& setDtsJobId(string dtsJobId) { DARABONBA_PTR_SET_VALUE(dtsJobId_, dtsJobId) };


    // dynamicMessage Field Functions 
    bool hasDynamicMessage() const { return this->dynamicMessage_ != nullptr;};
    void deleteDynamicMessage() { this->dynamicMessage_ = nullptr;};
    inline string getDynamicMessage() const { DARABONBA_PTR_GET_DEFAULT(dynamicMessage_, "") };
    inline DescribeJobMonitorRuleResponseBody& setDynamicMessage(string dynamicMessage) { DARABONBA_PTR_SET_VALUE(dynamicMessage_, dynamicMessage) };


    // errCode Field Functions 
    bool hasErrCode() const { return this->errCode_ != nullptr;};
    void deleteErrCode() { this->errCode_ = nullptr;};
    inline string getErrCode() const { DARABONBA_PTR_GET_DEFAULT(errCode_, "") };
    inline DescribeJobMonitorRuleResponseBody& setErrCode(string errCode) { DARABONBA_PTR_SET_VALUE(errCode_, errCode) };


    // errMessage Field Functions 
    bool hasErrMessage() const { return this->errMessage_ != nullptr;};
    void deleteErrMessage() { this->errMessage_ = nullptr;};
    inline string getErrMessage() const { DARABONBA_PTR_GET_DEFAULT(errMessage_, "") };
    inline DescribeJobMonitorRuleResponseBody& setErrMessage(string errMessage) { DARABONBA_PTR_SET_VALUE(errMessage_, errMessage) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline DescribeJobMonitorRuleResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // monitorRules Field Functions 
    bool hasMonitorRules() const { return this->monitorRules_ != nullptr;};
    void deleteMonitorRules() { this->monitorRules_ = nullptr;};
    inline const vector<DescribeJobMonitorRuleResponseBody::MonitorRules> & getMonitorRules() const { DARABONBA_PTR_GET_CONST(monitorRules_, vector<DescribeJobMonitorRuleResponseBody::MonitorRules>) };
    inline vector<DescribeJobMonitorRuleResponseBody::MonitorRules> getMonitorRules() { DARABONBA_PTR_GET(monitorRules_, vector<DescribeJobMonitorRuleResponseBody::MonitorRules>) };
    inline DescribeJobMonitorRuleResponseBody& setMonitorRules(const vector<DescribeJobMonitorRuleResponseBody::MonitorRules> & monitorRules) { DARABONBA_PTR_SET_VALUE(monitorRules_, monitorRules) };
    inline DescribeJobMonitorRuleResponseBody& setMonitorRules(vector<DescribeJobMonitorRuleResponseBody::MonitorRules> && monitorRules) { DARABONBA_PTR_SET_RVALUE(monitorRules_, monitorRules) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeJobMonitorRuleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeJobMonitorRuleResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // topics Field Functions 
    bool hasTopics() const { return this->topics_ != nullptr;};
    void deleteTopics() { this->topics_ = nullptr;};
    inline const vector<string> & getTopics() const { DARABONBA_PTR_GET_CONST(topics_, vector<string>) };
    inline vector<string> getTopics() { DARABONBA_PTR_GET(topics_, vector<string>) };
    inline DescribeJobMonitorRuleResponseBody& setTopics(const vector<string> & topics) { DARABONBA_PTR_SET_VALUE(topics_, topics) };
    inline DescribeJobMonitorRuleResponseBody& setTopics(vector<string> && topics) { DARABONBA_PTR_SET_RVALUE(topics_, topics) };


  protected:
    // The error code. This parameter will be removed in the future.
    shared_ptr<string> code_ {};
    // The ID of the data migration, data synchronization, or change tracking task.
    shared_ptr<string> dtsJobId_ {};
    // The dynamic part in the error message. This parameter is used to replace the **%s** variable in the **ErrMessage** parameter.
    // 
    // >  If the specified **DtsJobId** parameter is invalid, **The Value of Input Parameter %s is not valid** is returned for **ErrMessage** and **DtsJobId** is returned for **DynamicMessage**.
    shared_ptr<string> dynamicMessage_ {};
    // The error code returned if the call failed.
    shared_ptr<string> errCode_ {};
    // The error message returned if the call failed.
    shared_ptr<string> errMessage_ {};
    // The HTTP status code.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The monitoring rules of the DTS task.
    shared_ptr<vector<DescribeJobMonitorRuleResponseBody::MonitorRules>> monitorRules_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the call was successful. Valid values:
    // 
    // *   **true**: The call was successful.
    // *   **false**:The call failed.
    shared_ptr<bool> success_ {};
    // The topics of all subtasks in the distributed change tracking task.
    shared_ptr<vector<string>> topics_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
