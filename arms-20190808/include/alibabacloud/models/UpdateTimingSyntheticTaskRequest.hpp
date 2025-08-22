// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATETIMINGSYNTHETICTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATETIMINGSYNTHETICTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateTimingSyntheticTaskRequestAvailableAssertions.hpp>
#include <alibabacloud/models/UpdateTimingSyntheticTaskRequestCommonSetting.hpp>
#include <alibabacloud/models/UpdateTimingSyntheticTaskRequestCustomPeriod.hpp>
#include <alibabacloud/models/UpdateTimingSyntheticTaskRequestMonitorConf.hpp>
#include <alibabacloud/models/UpdateTimingSyntheticTaskRequestMonitors.hpp>
#include <alibabacloud/models/UpdateTimingSyntheticTaskRequestTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class UpdateTimingSyntheticTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateTimingSyntheticTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AvailableAssertions, availableAssertions_);
      DARABONBA_PTR_TO_JSON(CommonSetting, commonSetting_);
      DARABONBA_PTR_TO_JSON(CustomPeriod, customPeriod_);
      DARABONBA_PTR_TO_JSON(Frequency, frequency_);
      DARABONBA_PTR_TO_JSON(MonitorConf, monitorConf_);
      DARABONBA_PTR_TO_JSON(Monitors, monitors_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateTimingSyntheticTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AvailableAssertions, availableAssertions_);
      DARABONBA_PTR_FROM_JSON(CommonSetting, commonSetting_);
      DARABONBA_PTR_FROM_JSON(CustomPeriod, customPeriod_);
      DARABONBA_PTR_FROM_JSON(Frequency, frequency_);
      DARABONBA_PTR_FROM_JSON(MonitorConf, monitorConf_);
      DARABONBA_PTR_FROM_JSON(Monitors, monitors_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    UpdateTimingSyntheticTaskRequest() = default ;
    UpdateTimingSyntheticTaskRequest(const UpdateTimingSyntheticTaskRequest &) = default ;
    UpdateTimingSyntheticTaskRequest(UpdateTimingSyntheticTaskRequest &&) = default ;
    UpdateTimingSyntheticTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateTimingSyntheticTaskRequest() = default ;
    UpdateTimingSyntheticTaskRequest& operator=(const UpdateTimingSyntheticTaskRequest &) = default ;
    UpdateTimingSyntheticTaskRequest& operator=(UpdateTimingSyntheticTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->availableAssertions_ != nullptr
        && this->commonSetting_ != nullptr && this->customPeriod_ != nullptr && this->frequency_ != nullptr && this->monitorConf_ != nullptr && this->monitors_ != nullptr
        && this->name_ != nullptr && this->regionId_ != nullptr && this->resourceGroupId_ != nullptr && this->tags_ != nullptr && this->taskId_ != nullptr; };
    // availableAssertions Field Functions 
    bool hasAvailableAssertions() const { return this->availableAssertions_ != nullptr;};
    void deleteAvailableAssertions() { this->availableAssertions_ = nullptr;};
    inline const vector<UpdateTimingSyntheticTaskRequestAvailableAssertions> & availableAssertions() const { DARABONBA_PTR_GET_CONST(availableAssertions_, vector<UpdateTimingSyntheticTaskRequestAvailableAssertions>) };
    inline vector<UpdateTimingSyntheticTaskRequestAvailableAssertions> availableAssertions() { DARABONBA_PTR_GET(availableAssertions_, vector<UpdateTimingSyntheticTaskRequestAvailableAssertions>) };
    inline UpdateTimingSyntheticTaskRequest& setAvailableAssertions(const vector<UpdateTimingSyntheticTaskRequestAvailableAssertions> & availableAssertions) { DARABONBA_PTR_SET_VALUE(availableAssertions_, availableAssertions) };
    inline UpdateTimingSyntheticTaskRequest& setAvailableAssertions(vector<UpdateTimingSyntheticTaskRequestAvailableAssertions> && availableAssertions) { DARABONBA_PTR_SET_RVALUE(availableAssertions_, availableAssertions) };


    // commonSetting Field Functions 
    bool hasCommonSetting() const { return this->commonSetting_ != nullptr;};
    void deleteCommonSetting() { this->commonSetting_ = nullptr;};
    inline const UpdateTimingSyntheticTaskRequestCommonSetting & commonSetting() const { DARABONBA_PTR_GET_CONST(commonSetting_, UpdateTimingSyntheticTaskRequestCommonSetting) };
    inline UpdateTimingSyntheticTaskRequestCommonSetting commonSetting() { DARABONBA_PTR_GET(commonSetting_, UpdateTimingSyntheticTaskRequestCommonSetting) };
    inline UpdateTimingSyntheticTaskRequest& setCommonSetting(const UpdateTimingSyntheticTaskRequestCommonSetting & commonSetting) { DARABONBA_PTR_SET_VALUE(commonSetting_, commonSetting) };
    inline UpdateTimingSyntheticTaskRequest& setCommonSetting(UpdateTimingSyntheticTaskRequestCommonSetting && commonSetting) { DARABONBA_PTR_SET_RVALUE(commonSetting_, commonSetting) };


    // customPeriod Field Functions 
    bool hasCustomPeriod() const { return this->customPeriod_ != nullptr;};
    void deleteCustomPeriod() { this->customPeriod_ = nullptr;};
    inline const UpdateTimingSyntheticTaskRequestCustomPeriod & customPeriod() const { DARABONBA_PTR_GET_CONST(customPeriod_, UpdateTimingSyntheticTaskRequestCustomPeriod) };
    inline UpdateTimingSyntheticTaskRequestCustomPeriod customPeriod() { DARABONBA_PTR_GET(customPeriod_, UpdateTimingSyntheticTaskRequestCustomPeriod) };
    inline UpdateTimingSyntheticTaskRequest& setCustomPeriod(const UpdateTimingSyntheticTaskRequestCustomPeriod & customPeriod) { DARABONBA_PTR_SET_VALUE(customPeriod_, customPeriod) };
    inline UpdateTimingSyntheticTaskRequest& setCustomPeriod(UpdateTimingSyntheticTaskRequestCustomPeriod && customPeriod) { DARABONBA_PTR_SET_RVALUE(customPeriod_, customPeriod) };


    // frequency Field Functions 
    bool hasFrequency() const { return this->frequency_ != nullptr;};
    void deleteFrequency() { this->frequency_ = nullptr;};
    inline string frequency() const { DARABONBA_PTR_GET_DEFAULT(frequency_, "") };
    inline UpdateTimingSyntheticTaskRequest& setFrequency(string frequency) { DARABONBA_PTR_SET_VALUE(frequency_, frequency) };


    // monitorConf Field Functions 
    bool hasMonitorConf() const { return this->monitorConf_ != nullptr;};
    void deleteMonitorConf() { this->monitorConf_ = nullptr;};
    inline const UpdateTimingSyntheticTaskRequestMonitorConf & monitorConf() const { DARABONBA_PTR_GET_CONST(monitorConf_, UpdateTimingSyntheticTaskRequestMonitorConf) };
    inline UpdateTimingSyntheticTaskRequestMonitorConf monitorConf() { DARABONBA_PTR_GET(monitorConf_, UpdateTimingSyntheticTaskRequestMonitorConf) };
    inline UpdateTimingSyntheticTaskRequest& setMonitorConf(const UpdateTimingSyntheticTaskRequestMonitorConf & monitorConf) { DARABONBA_PTR_SET_VALUE(monitorConf_, monitorConf) };
    inline UpdateTimingSyntheticTaskRequest& setMonitorConf(UpdateTimingSyntheticTaskRequestMonitorConf && monitorConf) { DARABONBA_PTR_SET_RVALUE(monitorConf_, monitorConf) };


    // monitors Field Functions 
    bool hasMonitors() const { return this->monitors_ != nullptr;};
    void deleteMonitors() { this->monitors_ = nullptr;};
    inline const vector<UpdateTimingSyntheticTaskRequestMonitors> & monitors() const { DARABONBA_PTR_GET_CONST(monitors_, vector<UpdateTimingSyntheticTaskRequestMonitors>) };
    inline vector<UpdateTimingSyntheticTaskRequestMonitors> monitors() { DARABONBA_PTR_GET(monitors_, vector<UpdateTimingSyntheticTaskRequestMonitors>) };
    inline UpdateTimingSyntheticTaskRequest& setMonitors(const vector<UpdateTimingSyntheticTaskRequestMonitors> & monitors) { DARABONBA_PTR_SET_VALUE(monitors_, monitors) };
    inline UpdateTimingSyntheticTaskRequest& setMonitors(vector<UpdateTimingSyntheticTaskRequestMonitors> && monitors) { DARABONBA_PTR_SET_RVALUE(monitors_, monitors) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateTimingSyntheticTaskRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdateTimingSyntheticTaskRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline UpdateTimingSyntheticTaskRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<UpdateTimingSyntheticTaskRequestTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<UpdateTimingSyntheticTaskRequestTags>) };
    inline vector<UpdateTimingSyntheticTaskRequestTags> tags() { DARABONBA_PTR_GET(tags_, vector<UpdateTimingSyntheticTaskRequestTags>) };
    inline UpdateTimingSyntheticTaskRequest& setTags(const vector<UpdateTimingSyntheticTaskRequestTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline UpdateTimingSyntheticTaskRequest& setTags(vector<UpdateTimingSyntheticTaskRequestTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline UpdateTimingSyntheticTaskRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    // The list of assertions.
    std::shared_ptr<vector<UpdateTimingSyntheticTaskRequestAvailableAssertions>> availableAssertions_ = nullptr;
    // The general settings.
    std::shared_ptr<UpdateTimingSyntheticTaskRequestCommonSetting> commonSetting_ = nullptr;
    // The custom cycle.
    std::shared_ptr<UpdateTimingSyntheticTaskRequestCustomPeriod> customPeriod_ = nullptr;
    // The detection frequency. Valid values: 1m, 5m, 10m, 15m, 20m, 30m, 1h, 2h, 3h, 4h, 6h, 8h, 12h, and 24h.
    std::shared_ptr<string> frequency_ = nullptr;
    // The monitoring configurations.
    std::shared_ptr<UpdateTimingSyntheticTaskRequestMonitorConf> monitorConf_ = nullptr;
    // The list of monitoring points.
    std::shared_ptr<vector<UpdateTimingSyntheticTaskRequestMonitors>> monitors_ = nullptr;
    // The name of the task.
    std::shared_ptr<string> name_ = nullptr;
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
    // The resource group ID.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The list of tags.
    std::shared_ptr<vector<UpdateTimingSyntheticTaskRequestTags>> tags_ = nullptr;
    // The ID of the synthetic monitoring task.
    std::shared_ptr<string> taskId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
