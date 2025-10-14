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
        && return this->alertIds_ == nullptr && return this->customSchedule_ == nullptr && return this->interval_ == nullptr && return this->intervalUnit_ == nullptr && return this->ispCities_ == nullptr
        && return this->optionsJson_ == nullptr && return this->regionId_ == nullptr && return this->taskId_ == nullptr && return this->taskName_ == nullptr; };
    // address Field Functions 
    bool hasAddress() const { return this->address_ != nullptr;};
    void deleteAddress() { this->address_ = nullptr;};
    inline string address() const { DARABONBA_PTR_GET_DEFAULT(address_, "") };
    inline ModifySiteMonitorRequest& setAddress(string address) { DARABONBA_PTR_SET_VALUE(address_, address) };


    // alertIds Field Functions 
    bool hasAlertIds() const { return this->alertIds_ != nullptr;};
    void deleteAlertIds() { this->alertIds_ = nullptr;};
    inline string alertIds() const { DARABONBA_PTR_GET_DEFAULT(alertIds_, "") };
    inline ModifySiteMonitorRequest& setAlertIds(string alertIds) { DARABONBA_PTR_SET_VALUE(alertIds_, alertIds) };


    // customSchedule Field Functions 
    bool hasCustomSchedule() const { return this->customSchedule_ != nullptr;};
    void deleteCustomSchedule() { this->customSchedule_ = nullptr;};
    inline string customSchedule() const { DARABONBA_PTR_GET_DEFAULT(customSchedule_, "") };
    inline ModifySiteMonitorRequest& setCustomSchedule(string customSchedule) { DARABONBA_PTR_SET_VALUE(customSchedule_, customSchedule) };


    // interval Field Functions 
    bool hasInterval() const { return this->interval_ != nullptr;};
    void deleteInterval() { this->interval_ = nullptr;};
    inline string interval() const { DARABONBA_PTR_GET_DEFAULT(interval_, "") };
    inline ModifySiteMonitorRequest& setInterval(string interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


    // intervalUnit Field Functions 
    bool hasIntervalUnit() const { return this->intervalUnit_ != nullptr;};
    void deleteIntervalUnit() { this->intervalUnit_ = nullptr;};
    inline string intervalUnit() const { DARABONBA_PTR_GET_DEFAULT(intervalUnit_, "") };
    inline ModifySiteMonitorRequest& setIntervalUnit(string intervalUnit) { DARABONBA_PTR_SET_VALUE(intervalUnit_, intervalUnit) };


    // ispCities Field Functions 
    bool hasIspCities() const { return this->ispCities_ != nullptr;};
    void deleteIspCities() { this->ispCities_ = nullptr;};
    inline string ispCities() const { DARABONBA_PTR_GET_DEFAULT(ispCities_, "") };
    inline ModifySiteMonitorRequest& setIspCities(string ispCities) { DARABONBA_PTR_SET_VALUE(ispCities_, ispCities) };


    // optionsJson Field Functions 
    bool hasOptionsJson() const { return this->optionsJson_ != nullptr;};
    void deleteOptionsJson() { this->optionsJson_ = nullptr;};
    inline string optionsJson() const { DARABONBA_PTR_GET_DEFAULT(optionsJson_, "") };
    inline ModifySiteMonitorRequest& setOptionsJson(string optionsJson) { DARABONBA_PTR_SET_VALUE(optionsJson_, optionsJson) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifySiteMonitorRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline ModifySiteMonitorRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // taskName Field Functions 
    bool hasTaskName() const { return this->taskName_ != nullptr;};
    void deleteTaskName() { this->taskName_ = nullptr;};
    inline string taskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
    inline ModifySiteMonitorRequest& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


  protected:
    // The URL or IP address that is monitored by the task.
    std::shared_ptr<string> address_ = nullptr;
    // The ID of the alert rule. You can call the DescribeMetricRuleList operation to query the IDs of existing alert rules in CloudMonitor. For more information, see [DescribeMetricRuleList](https://help.aliyun.com/document_detail/114941.html).
    std::shared_ptr<string> alertIds_ = nullptr;
    // The custom detection period. You can only select a time period from Monday to Sunday for detection.
    std::shared_ptr<string> customSchedule_ = nullptr;
    // The interval at which detection requests are sent. Valid values: 1, 5, and 15. Unit: minutes. Default value: 1.
    std::shared_ptr<string> interval_ = nullptr;
    // The unit of the metric.
    // 
    // Unit: milliseconds.
    std::shared_ptr<string> intervalUnit_ = nullptr;
    // The information of the detection points. The value is a JSON array. Example: `[{"city":"546","isp":"465"},{"city":"572","isp":"465"},{"city":"738","isp":"465"}]`. The values of the `city` field indicate Beijing, Hangzhou, and Qingdao.
    // 
    // > You can call the DescribeSiteMonitorISPCityList operation to query the detection points. For more information, see [DescribeSiteMonitorISPCityList](https://help.aliyun.com/document_detail/115045.html). If you leave this parameter empty, the system randomly selects three detection points.
    std::shared_ptr<string> ispCities_ = nullptr;
    // The extended options of the protocol that is used by the site monitoring task. The options vary based on the protocol.
    std::shared_ptr<string> optionsJson_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the site monitoring task.
    // 
    // This parameter is required.
    std::shared_ptr<string> taskId_ = nullptr;
    // The name of the site monitoring task. The name must be 4 to 100 characters in length, and can contain letters, digits, and underscores (_).
    std::shared_ptr<string> taskName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
