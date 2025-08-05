// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEJOBMONITORRULERESPONSEBODYMONITORRULES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEJOBMONITORRULERESPONSEBODYMONITORRULES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class DescribeJobMonitorRuleResponseBodyMonitorRules : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeJobMonitorRuleResponseBodyMonitorRules& obj) { 
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
    friend void from_json(const Darabonba::Json& j, DescribeJobMonitorRuleResponseBodyMonitorRules& obj) { 
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
    DescribeJobMonitorRuleResponseBodyMonitorRules() = default ;
    DescribeJobMonitorRuleResponseBodyMonitorRules(const DescribeJobMonitorRuleResponseBodyMonitorRules &) = default ;
    DescribeJobMonitorRuleResponseBodyMonitorRules(DescribeJobMonitorRuleResponseBodyMonitorRules &&) = default ;
    DescribeJobMonitorRuleResponseBodyMonitorRules(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeJobMonitorRuleResponseBodyMonitorRules() = default ;
    DescribeJobMonitorRuleResponseBodyMonitorRules& operator=(const DescribeJobMonitorRuleResponseBodyMonitorRules &) = default ;
    DescribeJobMonitorRuleResponseBodyMonitorRules& operator=(DescribeJobMonitorRuleResponseBodyMonitorRules &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->delayRuleTime_ != nullptr
        && this->jobId_ != nullptr && this->jobType_ != nullptr && this->noticeValue_ != nullptr && this->period_ != nullptr && this->phone_ != nullptr
        && this->state_ != nullptr && this->times_ != nullptr && this->type_ != nullptr; };
    // delayRuleTime Field Functions 
    bool hasDelayRuleTime() const { return this->delayRuleTime_ != nullptr;};
    void deleteDelayRuleTime() { this->delayRuleTime_ = nullptr;};
    inline int64_t delayRuleTime() const { DARABONBA_PTR_GET_DEFAULT(delayRuleTime_, 0L) };
    inline DescribeJobMonitorRuleResponseBodyMonitorRules& setDelayRuleTime(int64_t delayRuleTime) { DARABONBA_PTR_SET_VALUE(delayRuleTime_, delayRuleTime) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline DescribeJobMonitorRuleResponseBodyMonitorRules& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // jobType Field Functions 
    bool hasJobType() const { return this->jobType_ != nullptr;};
    void deleteJobType() { this->jobType_ = nullptr;};
    inline string jobType() const { DARABONBA_PTR_GET_DEFAULT(jobType_, "") };
    inline DescribeJobMonitorRuleResponseBodyMonitorRules& setJobType(string jobType) { DARABONBA_PTR_SET_VALUE(jobType_, jobType) };


    // noticeValue Field Functions 
    bool hasNoticeValue() const { return this->noticeValue_ != nullptr;};
    void deleteNoticeValue() { this->noticeValue_ = nullptr;};
    inline int32_t noticeValue() const { DARABONBA_PTR_GET_DEFAULT(noticeValue_, 0) };
    inline DescribeJobMonitorRuleResponseBodyMonitorRules& setNoticeValue(int32_t noticeValue) { DARABONBA_PTR_SET_VALUE(noticeValue_, noticeValue) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline int32_t period() const { DARABONBA_PTR_GET_DEFAULT(period_, 0) };
    inline DescribeJobMonitorRuleResponseBodyMonitorRules& setPeriod(int32_t period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // phone Field Functions 
    bool hasPhone() const { return this->phone_ != nullptr;};
    void deletePhone() { this->phone_ = nullptr;};
    inline string phone() const { DARABONBA_PTR_GET_DEFAULT(phone_, "") };
    inline DescribeJobMonitorRuleResponseBodyMonitorRules& setPhone(string phone) { DARABONBA_PTR_SET_VALUE(phone_, phone) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string state() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline DescribeJobMonitorRuleResponseBodyMonitorRules& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    // times Field Functions 
    bool hasTimes() const { return this->times_ != nullptr;};
    void deleteTimes() { this->times_ = nullptr;};
    inline int32_t times() const { DARABONBA_PTR_GET_DEFAULT(times_, 0) };
    inline DescribeJobMonitorRuleResponseBodyMonitorRules& setTimes(int32_t times) { DARABONBA_PTR_SET_VALUE(times_, times) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeJobMonitorRuleResponseBodyMonitorRules& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The threshold that triggers the alert.
    // 
    // *   If the request parameter **Type** of the [CreateJobMonitorRule](https://help.aliyun.com/document_detail/212332.html) operation is set to **delay**, the unit of DelayRuleTime is seconds.
    // *   If the request parameter **Type** of the [CreateJobMonitorRule](https://help.aliyun.com/document_detail/212332.html) operation is set to **full_timeout**, the unit of DelayRuleTime is hours.
    std::shared_ptr<int64_t> delayRuleTime_ = nullptr;
    // Task ID.
    std::shared_ptr<string> jobId_ = nullptr;
    // The task type of the DTS instance, with values: - **normal**: Migration or synchronization task. - **full_check**: Associated full check task. - **etl_check**: Associated incremental check task.
    std::shared_ptr<string> jobType_ = nullptr;
    // Alarm threshold.
    std::shared_ptr<int32_t> noticeValue_ = nullptr;
    // The statistical period for incremental validation tasks, in minutes.
    // > Currently supported values are 1 minute, 5 minutes, 10 minutes, and 30 minutes.
    std::shared_ptr<int32_t> period_ = nullptr;
    // The mobile phone numbers that receive alert notifications. Multiple mobile numbers are separated by commas (,).
    std::shared_ptr<string> phone_ = nullptr;
    // Indicates whether the monitoring rule is enabled. Valid values:
    // 
    // *   **Y**: The monitoring rule is enabled.
    // *   **N**: The monitoring rule is disabled.
    std::shared_ptr<string> state_ = nullptr;
    // The number of cycles for the incremental validation task.
    std::shared_ptr<int32_t> times_ = nullptr;
    // The type of the monitoring rule. Valid values:
    // 
    // *   **delay**: If the task latency reaches the threshold, an alert is triggered.
    // *   **error**: If an exception occurs, an alert is triggered.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
