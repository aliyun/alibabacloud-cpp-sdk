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
        && this->dtsJobId_ == nullptr && this->noticeValue_ == nullptr && this->period_ == nullptr && this->phone_ == nullptr && this->regionId_ == nullptr
        && this->resourceGroupId_ == nullptr && this->state_ == nullptr && this->times_ == nullptr && this->type_ == nullptr; };
    // delayRuleTime Field Functions 
    bool hasDelayRuleTime() const { return this->delayRuleTime_ != nullptr;};
    void deleteDelayRuleTime() { this->delayRuleTime_ = nullptr;};
    inline int64_t getDelayRuleTime() const { DARABONBA_PTR_GET_DEFAULT(delayRuleTime_, 0L) };
    inline CreateJobMonitorRuleRequest& setDelayRuleTime(int64_t delayRuleTime) { DARABONBA_PTR_SET_VALUE(delayRuleTime_, delayRuleTime) };


    // dtsJobId Field Functions 
    bool hasDtsJobId() const { return this->dtsJobId_ != nullptr;};
    void deleteDtsJobId() { this->dtsJobId_ = nullptr;};
    inline string getDtsJobId() const { DARABONBA_PTR_GET_DEFAULT(dtsJobId_, "") };
    inline CreateJobMonitorRuleRequest& setDtsJobId(string dtsJobId) { DARABONBA_PTR_SET_VALUE(dtsJobId_, dtsJobId) };


    // noticeValue Field Functions 
    bool hasNoticeValue() const { return this->noticeValue_ != nullptr;};
    void deleteNoticeValue() { this->noticeValue_ = nullptr;};
    inline int32_t getNoticeValue() const { DARABONBA_PTR_GET_DEFAULT(noticeValue_, 0) };
    inline CreateJobMonitorRuleRequest& setNoticeValue(int32_t noticeValue) { DARABONBA_PTR_SET_VALUE(noticeValue_, noticeValue) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline int32_t getPeriod() const { DARABONBA_PTR_GET_DEFAULT(period_, 0) };
    inline CreateJobMonitorRuleRequest& setPeriod(int32_t period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // phone Field Functions 
    bool hasPhone() const { return this->phone_ != nullptr;};
    void deletePhone() { this->phone_ = nullptr;};
    inline string getPhone() const { DARABONBA_PTR_GET_DEFAULT(phone_, "") };
    inline CreateJobMonitorRuleRequest& setPhone(string phone) { DARABONBA_PTR_SET_VALUE(phone_, phone) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateJobMonitorRuleRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateJobMonitorRuleRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline CreateJobMonitorRuleRequest& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    // times Field Functions 
    bool hasTimes() const { return this->times_ != nullptr;};
    void deleteTimes() { this->times_ = nullptr;};
    inline int32_t getTimes() const { DARABONBA_PTR_GET_DEFAULT(times_, 0) };
    inline CreateJobMonitorRuleRequest& setTimes(int32_t times) { DARABONBA_PTR_SET_VALUE(times_, times) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline CreateJobMonitorRuleRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The threshold for triggering an alert.
    // 
    // - If **Type** is set to **delay**, the unit is seconds and the value must be an integer. Set the threshold based on your business requirements. A value of 10 or greater is recommended to avoid alert fluctuations caused by network issues or database loads.
    // 
    // - If **Type** is set to **full_timeout**, the unit is hours and the value must be an integer.
    // 
    // > This parameter is required when **Type** is set to **delay** or **full_timeout** and **State** is set to **Y**.
    shared_ptr<int64_t> delayRuleTime_ {};
    // The ID of the data migration, data synchronization, or change tracking task. You can call [DescribeDtsJobs](https://help.aliyun.com/document_detail/209702.html) to obtain the task ID.
    // 
    // This parameter is required.
    shared_ptr<string> dtsJobId_ {};
    // The alert threshold.
    shared_ptr<int32_t> noticeValue_ {};
    // The statistical period of the incremental verification task. Unit: minutes.
    // 
    // > Valid values: 1, 5, 10, and 30.
    shared_ptr<int32_t> period_ {};
    // The mobile phone numbers of alert contacts, separated by commas (,).
    // >-  This parameter is supported only on the China site (aliyun.com) and only for the Chinese mainland mobile phone numbers. A maximum of 10 mobile phone numbers can be specified.
    // - The international site does not support SMS-based alerting. You can only [set alert rules for DTS tasks through the CloudMonitor monitoring platform](https://help.aliyun.com/document_detail/175876.html).
    shared_ptr<string> phone_ {};
    // The region in which the DTS instance resides. For more information, see [List of supported regions](https://help.aliyun.com/document_detail/141033.html).
    shared_ptr<string> regionId_ {};
    // The resource group ID.
    shared_ptr<string> resourceGroupId_ {};
    // Specifies whether to enable the alert rule. Valid values:
    // 
    // - **Y**: Enable the alert rule.
    // - **N**: Disable the alert rule.
    // 
    // Default value: **Y**.
    shared_ptr<string> state_ {};
    // The number of statistical periods for the incremental verification task.
    shared_ptr<int32_t> times_ {};
    // The type of the alert metric. Valid values:
    // - **delay**: the **Latency** metric.
    // - **error**: the **Migration Status** metric.
    // - **full_timeout**: the **Full Migration Duration** metric.
    // 
    // Default value: **error**. This parameter must be manually specified.
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
