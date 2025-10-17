// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEJOBMONITORRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEJOBMONITORRULEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class CreateJobMonitorRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateJobMonitorRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DelayRuleTime, delayRuleTime_);
      DARABONBA_PTR_TO_JSON(DtsJobId, dtsJobId_);
      DARABONBA_PTR_TO_JSON(NoticeValue, noticeValue_);
      DARABONBA_PTR_TO_JSON(Period, period_);
      DARABONBA_PTR_TO_JSON(Phone, phone_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(State, state_);
      DARABONBA_PTR_TO_JSON(Times, times_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, CreateJobMonitorRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DelayRuleTime, delayRuleTime_);
      DARABONBA_PTR_FROM_JSON(DtsJobId, dtsJobId_);
      DARABONBA_PTR_FROM_JSON(NoticeValue, noticeValue_);
      DARABONBA_PTR_FROM_JSON(Period, period_);
      DARABONBA_PTR_FROM_JSON(Phone, phone_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(State, state_);
      DARABONBA_PTR_FROM_JSON(Times, times_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    CreateJobMonitorRuleRequest() = default ;
    CreateJobMonitorRuleRequest(const CreateJobMonitorRuleRequest &) = default ;
    CreateJobMonitorRuleRequest(CreateJobMonitorRuleRequest &&) = default ;
    CreateJobMonitorRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateJobMonitorRuleRequest() = default ;
    CreateJobMonitorRuleRequest& operator=(const CreateJobMonitorRuleRequest &) = default ;
    CreateJobMonitorRuleRequest& operator=(CreateJobMonitorRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->delayRuleTime_ == nullptr
        && return this->dtsJobId_ == nullptr && return this->noticeValue_ == nullptr && return this->period_ == nullptr && return this->phone_ == nullptr && return this->regionId_ == nullptr
        && return this->resourceGroupId_ == nullptr && return this->state_ == nullptr && return this->times_ == nullptr && return this->type_ == nullptr; };
    // delayRuleTime Field Functions 
    bool hasDelayRuleTime() const { return this->delayRuleTime_ != nullptr;};
    void deleteDelayRuleTime() { this->delayRuleTime_ = nullptr;};
    inline int64_t delayRuleTime() const { DARABONBA_PTR_GET_DEFAULT(delayRuleTime_, 0L) };
    inline CreateJobMonitorRuleRequest& setDelayRuleTime(int64_t delayRuleTime) { DARABONBA_PTR_SET_VALUE(delayRuleTime_, delayRuleTime) };


    // dtsJobId Field Functions 
    bool hasDtsJobId() const { return this->dtsJobId_ != nullptr;};
    void deleteDtsJobId() { this->dtsJobId_ = nullptr;};
    inline string dtsJobId() const { DARABONBA_PTR_GET_DEFAULT(dtsJobId_, "") };
    inline CreateJobMonitorRuleRequest& setDtsJobId(string dtsJobId) { DARABONBA_PTR_SET_VALUE(dtsJobId_, dtsJobId) };


    // noticeValue Field Functions 
    bool hasNoticeValue() const { return this->noticeValue_ != nullptr;};
    void deleteNoticeValue() { this->noticeValue_ = nullptr;};
    inline int32_t noticeValue() const { DARABONBA_PTR_GET_DEFAULT(noticeValue_, 0) };
    inline CreateJobMonitorRuleRequest& setNoticeValue(int32_t noticeValue) { DARABONBA_PTR_SET_VALUE(noticeValue_, noticeValue) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline int32_t period() const { DARABONBA_PTR_GET_DEFAULT(period_, 0) };
    inline CreateJobMonitorRuleRequest& setPeriod(int32_t period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // phone Field Functions 
    bool hasPhone() const { return this->phone_ != nullptr;};
    void deletePhone() { this->phone_ = nullptr;};
    inline string phone() const { DARABONBA_PTR_GET_DEFAULT(phone_, "") };
    inline CreateJobMonitorRuleRequest& setPhone(string phone) { DARABONBA_PTR_SET_VALUE(phone_, phone) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateJobMonitorRuleRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateJobMonitorRuleRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string state() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline CreateJobMonitorRuleRequest& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    // times Field Functions 
    bool hasTimes() const { return this->times_ != nullptr;};
    void deleteTimes() { this->times_ = nullptr;};
    inline int32_t times() const { DARABONBA_PTR_GET_DEFAULT(times_, 0) };
    inline CreateJobMonitorRuleRequest& setTimes(int32_t times) { DARABONBA_PTR_SET_VALUE(times_, times) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline CreateJobMonitorRuleRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The threshold for triggering an alert.
    // 
    // *   If **Type** is set to **delay**, the threshold must be an integer in units of seconds. You can specify the threshold based on your business requirements. To prevent jitters caused by network and database overloads, we recommend that you set the threshold to more than 10 seconds.
    // *   If **Type** is set to **full_timeout**, the threshold must be an integer in units of hours.
    // 
    // > This parameter is required if **Type** is set to **delay** or **full_timeout** and **State** is set to **Y**.
    std::shared_ptr<int64_t> delayRuleTime_ = nullptr;
    // The ID of the data migration, data synchronization, or change tracking task. You can call the [DescribeDtsJobs](https://help.aliyun.com/document_detail/209702.html) operation to query the task ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> dtsJobId_ = nullptr;
    // The alert threshold.
    std::shared_ptr<int32_t> noticeValue_ = nullptr;
    // The statistical period of the incremental data verification task. Unit: minutes.
    // 
    // > Valid values: 1, 3, 5, and 30.
    std::shared_ptr<int32_t> period_ = nullptr;
    // The mobile numbers that receive alert notifications. Separate multiple mobile numbers with commas (,).
    // 
    // > 
    // 
    // *   This parameter is available only for users of the China site (aliyun.com). Only mobile numbers in the Chinese mainland are supported. You can specify up to 10 mobile numbers.
    // 
    // *   Users of the international site (alibabacloud.com) cannot receive notifications on alerts by using mobile numbers, but can configure alert rules for DTS tasks in the CloudMonitor console. For more information, see [Configure alert rules for DTS tasks in the CloudMonitor console](https://help.aliyun.com/document_detail/175876.html).
    std::shared_ptr<string> phone_ = nullptr;
    // The region ID of the DTS instance. For more information, see [Supported regions](https://help.aliyun.com/document_detail/141033.html).
    std::shared_ptr<string> regionId_ = nullptr;
    // Resource group ID.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // Specifies whether to enable the alert rule. Valid values:
    // 
    // *   **Y**: enables the alert rule.
    // *   **N**: disables the alert rule.
    // 
    // Default value: **Y**.
    std::shared_ptr<string> state_ = nullptr;
    // The number of statistical periods of the incremental data verification task.
    std::shared_ptr<int32_t> times_ = nullptr;
    // The metric that is used to monitor the task. Valid values:
    // 
    // *   **delay**: the **Latency** metric.
    // *   **error**: the **Status** metric.
    // *   **full_timeout**: the **Full Timeout** metric.
    // 
    // Default value: **error**. You must manually set this value.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
