// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATETIMINGSYNTHETICTASKSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATETIMINGSYNTHETICTASKSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class UpdateTimingSyntheticTaskShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateTimingSyntheticTaskShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AvailableAssertions, availableAssertionsShrink_);
      DARABONBA_PTR_TO_JSON(CommonSetting, commonSettingShrink_);
      DARABONBA_PTR_TO_JSON(CustomPeriod, customPeriodShrink_);
      DARABONBA_PTR_TO_JSON(Frequency, frequency_);
      DARABONBA_PTR_TO_JSON(MonitorConf, monitorConfShrink_);
      DARABONBA_PTR_TO_JSON(Monitors, monitorsShrink_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Tags, tagsShrink_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateTimingSyntheticTaskShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AvailableAssertions, availableAssertionsShrink_);
      DARABONBA_PTR_FROM_JSON(CommonSetting, commonSettingShrink_);
      DARABONBA_PTR_FROM_JSON(CustomPeriod, customPeriodShrink_);
      DARABONBA_PTR_FROM_JSON(Frequency, frequency_);
      DARABONBA_PTR_FROM_JSON(MonitorConf, monitorConfShrink_);
      DARABONBA_PTR_FROM_JSON(Monitors, monitorsShrink_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Tags, tagsShrink_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    UpdateTimingSyntheticTaskShrinkRequest() = default ;
    UpdateTimingSyntheticTaskShrinkRequest(const UpdateTimingSyntheticTaskShrinkRequest &) = default ;
    UpdateTimingSyntheticTaskShrinkRequest(UpdateTimingSyntheticTaskShrinkRequest &&) = default ;
    UpdateTimingSyntheticTaskShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateTimingSyntheticTaskShrinkRequest() = default ;
    UpdateTimingSyntheticTaskShrinkRequest& operator=(const UpdateTimingSyntheticTaskShrinkRequest &) = default ;
    UpdateTimingSyntheticTaskShrinkRequest& operator=(UpdateTimingSyntheticTaskShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->availableAssertionsShrink_ != nullptr
        && this->commonSettingShrink_ != nullptr && this->customPeriodShrink_ != nullptr && this->frequency_ != nullptr && this->monitorConfShrink_ != nullptr && this->monitorsShrink_ != nullptr
        && this->name_ != nullptr && this->regionId_ != nullptr && this->resourceGroupId_ != nullptr && this->tagsShrink_ != nullptr && this->taskId_ != nullptr; };
    // availableAssertionsShrink Field Functions 
    bool hasAvailableAssertionsShrink() const { return this->availableAssertionsShrink_ != nullptr;};
    void deleteAvailableAssertionsShrink() { this->availableAssertionsShrink_ = nullptr;};
    inline string availableAssertionsShrink() const { DARABONBA_PTR_GET_DEFAULT(availableAssertionsShrink_, "") };
    inline UpdateTimingSyntheticTaskShrinkRequest& setAvailableAssertionsShrink(string availableAssertionsShrink) { DARABONBA_PTR_SET_VALUE(availableAssertionsShrink_, availableAssertionsShrink) };


    // commonSettingShrink Field Functions 
    bool hasCommonSettingShrink() const { return this->commonSettingShrink_ != nullptr;};
    void deleteCommonSettingShrink() { this->commonSettingShrink_ = nullptr;};
    inline string commonSettingShrink() const { DARABONBA_PTR_GET_DEFAULT(commonSettingShrink_, "") };
    inline UpdateTimingSyntheticTaskShrinkRequest& setCommonSettingShrink(string commonSettingShrink) { DARABONBA_PTR_SET_VALUE(commonSettingShrink_, commonSettingShrink) };


    // customPeriodShrink Field Functions 
    bool hasCustomPeriodShrink() const { return this->customPeriodShrink_ != nullptr;};
    void deleteCustomPeriodShrink() { this->customPeriodShrink_ = nullptr;};
    inline string customPeriodShrink() const { DARABONBA_PTR_GET_DEFAULT(customPeriodShrink_, "") };
    inline UpdateTimingSyntheticTaskShrinkRequest& setCustomPeriodShrink(string customPeriodShrink) { DARABONBA_PTR_SET_VALUE(customPeriodShrink_, customPeriodShrink) };


    // frequency Field Functions 
    bool hasFrequency() const { return this->frequency_ != nullptr;};
    void deleteFrequency() { this->frequency_ = nullptr;};
    inline string frequency() const { DARABONBA_PTR_GET_DEFAULT(frequency_, "") };
    inline UpdateTimingSyntheticTaskShrinkRequest& setFrequency(string frequency) { DARABONBA_PTR_SET_VALUE(frequency_, frequency) };


    // monitorConfShrink Field Functions 
    bool hasMonitorConfShrink() const { return this->monitorConfShrink_ != nullptr;};
    void deleteMonitorConfShrink() { this->monitorConfShrink_ = nullptr;};
    inline string monitorConfShrink() const { DARABONBA_PTR_GET_DEFAULT(monitorConfShrink_, "") };
    inline UpdateTimingSyntheticTaskShrinkRequest& setMonitorConfShrink(string monitorConfShrink) { DARABONBA_PTR_SET_VALUE(monitorConfShrink_, monitorConfShrink) };


    // monitorsShrink Field Functions 
    bool hasMonitorsShrink() const { return this->monitorsShrink_ != nullptr;};
    void deleteMonitorsShrink() { this->monitorsShrink_ = nullptr;};
    inline string monitorsShrink() const { DARABONBA_PTR_GET_DEFAULT(monitorsShrink_, "") };
    inline UpdateTimingSyntheticTaskShrinkRequest& setMonitorsShrink(string monitorsShrink) { DARABONBA_PTR_SET_VALUE(monitorsShrink_, monitorsShrink) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateTimingSyntheticTaskShrinkRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdateTimingSyntheticTaskShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline UpdateTimingSyntheticTaskShrinkRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // tagsShrink Field Functions 
    bool hasTagsShrink() const { return this->tagsShrink_ != nullptr;};
    void deleteTagsShrink() { this->tagsShrink_ = nullptr;};
    inline string tagsShrink() const { DARABONBA_PTR_GET_DEFAULT(tagsShrink_, "") };
    inline UpdateTimingSyntheticTaskShrinkRequest& setTagsShrink(string tagsShrink) { DARABONBA_PTR_SET_VALUE(tagsShrink_, tagsShrink) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline UpdateTimingSyntheticTaskShrinkRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    // The list of assertions.
    std::shared_ptr<string> availableAssertionsShrink_ = nullptr;
    // The general settings.
    std::shared_ptr<string> commonSettingShrink_ = nullptr;
    // The custom cycle.
    std::shared_ptr<string> customPeriodShrink_ = nullptr;
    // The detection frequency. Valid values: 1m, 5m, 10m, 15m, 20m, 30m, 1h, 2h, 3h, 4h, 6h, 8h, 12h, and 24h.
    std::shared_ptr<string> frequency_ = nullptr;
    // The monitoring configurations.
    std::shared_ptr<string> monitorConfShrink_ = nullptr;
    // The list of monitoring points.
    std::shared_ptr<string> monitorsShrink_ = nullptr;
    // The name of the task.
    std::shared_ptr<string> name_ = nullptr;
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
    // The resource group ID.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The list of tags.
    std::shared_ptr<string> tagsShrink_ = nullptr;
    // The ID of the synthetic monitoring task.
    std::shared_ptr<string> taskId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
