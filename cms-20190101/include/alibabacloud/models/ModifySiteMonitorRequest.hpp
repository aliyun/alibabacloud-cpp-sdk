// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYSITEMONITORREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYSITEMONITORREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class ModifySiteMonitorRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifySiteMonitorRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Address, address_);
      DARABONBA_PTR_TO_JSON(AlertIds, alertIds_);
      DARABONBA_PTR_TO_JSON(CustomSchedule, customSchedule_);
      DARABONBA_PTR_TO_JSON(Interval, interval_);
      DARABONBA_PTR_TO_JSON(IntervalUnit, intervalUnit_);
      DARABONBA_PTR_TO_JSON(IspCities, ispCities_);
      DARABONBA_PTR_TO_JSON(OptionsJson, optionsJson_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(TaskName, taskName_);
    };
    friend void from_json(const Darabonba::Json& j, ModifySiteMonitorRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Address, address_);
      DARABONBA_PTR_FROM_JSON(AlertIds, alertIds_);
      DARABONBA_PTR_FROM_JSON(CustomSchedule, customSchedule_);
      DARABONBA_PTR_FROM_JSON(Interval, interval_);
      DARABONBA_PTR_FROM_JSON(IntervalUnit, intervalUnit_);
      DARABONBA_PTR_FROM_JSON(IspCities, ispCities_);
      DARABONBA_PTR_FROM_JSON(OptionsJson, optionsJson_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(TaskName, taskName_);
    };
    ModifySiteMonitorRequest() = default ;
    ModifySiteMonitorRequest(const ModifySiteMonitorRequest &) = default ;
    ModifySiteMonitorRequest(ModifySiteMonitorRequest &&) = default ;
    ModifySiteMonitorRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifySiteMonitorRequest() = default ;
    ModifySiteMonitorRequest& operator=(const ModifySiteMonitorRequest &) = default ;
    ModifySiteMonitorRequest& operator=(ModifySiteMonitorRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->address_ == nullptr
        && this->alertIds_ == nullptr && this->customSchedule_ == nullptr && this->interval_ == nullptr && this->intervalUnit_ == nullptr && this->ispCities_ == nullptr
        && this->optionsJson_ == nullptr && this->regionId_ == nullptr && this->taskId_ == nullptr && this->taskName_ == nullptr; };
    // address Field Functions 
    bool hasAddress() const { return this->address_ != nullptr;};
    void deleteAddress() { this->address_ = nullptr;};
    inline string getAddress() const { DARABONBA_PTR_GET_DEFAULT(address_, "") };
    inline ModifySiteMonitorRequest& setAddress(string address) { DARABONBA_PTR_SET_VALUE(address_, address) };


    // alertIds Field Functions 
    bool hasAlertIds() const { return this->alertIds_ != nullptr;};
    void deleteAlertIds() { this->alertIds_ = nullptr;};
    inline string getAlertIds() const { DARABONBA_PTR_GET_DEFAULT(alertIds_, "") };
    inline ModifySiteMonitorRequest& setAlertIds(string alertIds) { DARABONBA_PTR_SET_VALUE(alertIds_, alertIds) };


    // customSchedule Field Functions 
    bool hasCustomSchedule() const { return this->customSchedule_ != nullptr;};
    void deleteCustomSchedule() { this->customSchedule_ = nullptr;};
    inline string getCustomSchedule() const { DARABONBA_PTR_GET_DEFAULT(customSchedule_, "") };
    inline ModifySiteMonitorRequest& setCustomSchedule(string customSchedule) { DARABONBA_PTR_SET_VALUE(customSchedule_, customSchedule) };


    // interval Field Functions 
    bool hasInterval() const { return this->interval_ != nullptr;};
    void deleteInterval() { this->interval_ = nullptr;};
    inline string getInterval() const { DARABONBA_PTR_GET_DEFAULT(interval_, "") };
    inline ModifySiteMonitorRequest& setInterval(string interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


    // intervalUnit Field Functions 
    bool hasIntervalUnit() const { return this->intervalUnit_ != nullptr;};
    void deleteIntervalUnit() { this->intervalUnit_ = nullptr;};
    inline string getIntervalUnit() const { DARABONBA_PTR_GET_DEFAULT(intervalUnit_, "") };
    inline ModifySiteMonitorRequest& setIntervalUnit(string intervalUnit) { DARABONBA_PTR_SET_VALUE(intervalUnit_, intervalUnit) };


    // ispCities Field Functions 
    bool hasIspCities() const { return this->ispCities_ != nullptr;};
    void deleteIspCities() { this->ispCities_ = nullptr;};
    inline string getIspCities() const { DARABONBA_PTR_GET_DEFAULT(ispCities_, "") };
    inline ModifySiteMonitorRequest& setIspCities(string ispCities) { DARABONBA_PTR_SET_VALUE(ispCities_, ispCities) };


    // optionsJson Field Functions 
    bool hasOptionsJson() const { return this->optionsJson_ != nullptr;};
    void deleteOptionsJson() { this->optionsJson_ = nullptr;};
    inline string getOptionsJson() const { DARABONBA_PTR_GET_DEFAULT(optionsJson_, "") };
    inline ModifySiteMonitorRequest& setOptionsJson(string optionsJson) { DARABONBA_PTR_SET_VALUE(optionsJson_, optionsJson) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifySiteMonitorRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline ModifySiteMonitorRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // taskName Field Functions 
    bool hasTaskName() const { return this->taskName_ != nullptr;};
    void deleteTaskName() { this->taskName_ = nullptr;};
    inline string getTaskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
    inline ModifySiteMonitorRequest& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


  protected:
    // The URL or IP address of the monitoring task.
    shared_ptr<string> address_ {};
    // The ID of the alert rule. The ID of an existing alert rule in CloudMonitor. You can call the DescribeMetricRuleList operation to query alert rule IDs. For more information, see [DescribeMetricRuleList](https://help.aliyun.com/document_detail/114941.html).
    shared_ptr<string> alertIds_ {};
    // The custom monitoring schedule. You can select a specific time period from Monday to Sunday for monitoring.
    shared_ptr<string> customSchedule_ {};
    // The monitoring frequency. Valid values: 1, 5, and 15. Unit: minutes. Default value: 1.
    shared_ptr<string> interval_ {};
    // The unit of the monitoring metrics.
    // 
    // Unit: milliseconds (ms).
    shared_ptr<string> intervalUnit_ {};
    // The detection point information. The value is in JSONArray format, for example: `[{"city":"546","isp":"465"},{"city":"572","isp":"465"},{"city":"738","isp":"465"}]`, where `city` corresponds to Beijing, Hangzhou, and Qingdao respectively.
    // 
    // > You can call the DescribeSiteMonitorISPCityList operation to query detection point information. For more information, see [DescribeSiteMonitorISPCityList](https://help.aliyun.com/document_detail/115045.html). If this parameter is left empty, the system randomly selects three detection points.
    shared_ptr<string> ispCities_ {};
    // The advanced extended options for the protocol type of the monitoring task. Different protocol types correspond to different extended options.
    shared_ptr<string> optionsJson_ {};
    shared_ptr<string> regionId_ {};
    // The ID of the monitoring task.
    // 
    // This parameter is required.
    shared_ptr<string> taskId_ {};
    // The name of the monitoring task. The name must be 4 to 100 characters in length and can contain letters, digits, underscores (_), and Chinese characters.
    shared_ptr<string> taskName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
