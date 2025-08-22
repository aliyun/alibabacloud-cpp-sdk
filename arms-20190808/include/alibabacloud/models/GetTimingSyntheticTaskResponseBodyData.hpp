// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTIMINGSYNTHETICTASKRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETTIMINGSYNTHETICTASKRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetTimingSyntheticTaskResponseBodyDataAvailableAssertions.hpp>
#include <alibabacloud/models/GetTimingSyntheticTaskResponseBodyDataCommonSetting.hpp>
#include <alibabacloud/models/GetTimingSyntheticTaskResponseBodyDataCustomPeriod.hpp>
#include <alibabacloud/models/GetTimingSyntheticTaskResponseBodyDataMonitorConf.hpp>
#include <alibabacloud/models/GetTimingSyntheticTaskResponseBodyDataMonitors.hpp>
#include <alibabacloud/models/GetTimingSyntheticTaskResponseBodyDataTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class GetTimingSyntheticTaskResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTimingSyntheticTaskResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AvailableAssertions, availableAssertions_);
      DARABONBA_PTR_TO_JSON(CommonSetting, commonSetting_);
      DARABONBA_PTR_TO_JSON(CustomPeriod, customPeriod_);
      DARABONBA_PTR_TO_JSON(Frequency, frequency_);
      DARABONBA_PTR_TO_JSON(MonitorCategory, monitorCategory_);
      DARABONBA_PTR_TO_JSON(MonitorConf, monitorConf_);
      DARABONBA_PTR_TO_JSON(Monitors, monitors_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(TaskType, taskType_);
    };
    friend void from_json(const Darabonba::Json& j, GetTimingSyntheticTaskResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AvailableAssertions, availableAssertions_);
      DARABONBA_PTR_FROM_JSON(CommonSetting, commonSetting_);
      DARABONBA_PTR_FROM_JSON(CustomPeriod, customPeriod_);
      DARABONBA_PTR_FROM_JSON(Frequency, frequency_);
      DARABONBA_PTR_FROM_JSON(MonitorCategory, monitorCategory_);
      DARABONBA_PTR_FROM_JSON(MonitorConf, monitorConf_);
      DARABONBA_PTR_FROM_JSON(Monitors, monitors_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(TaskType, taskType_);
    };
    GetTimingSyntheticTaskResponseBodyData() = default ;
    GetTimingSyntheticTaskResponseBodyData(const GetTimingSyntheticTaskResponseBodyData &) = default ;
    GetTimingSyntheticTaskResponseBodyData(GetTimingSyntheticTaskResponseBodyData &&) = default ;
    GetTimingSyntheticTaskResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTimingSyntheticTaskResponseBodyData() = default ;
    GetTimingSyntheticTaskResponseBodyData& operator=(const GetTimingSyntheticTaskResponseBodyData &) = default ;
    GetTimingSyntheticTaskResponseBodyData& operator=(GetTimingSyntheticTaskResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->availableAssertions_ != nullptr
        && this->commonSetting_ != nullptr && this->customPeriod_ != nullptr && this->frequency_ != nullptr && this->monitorCategory_ != nullptr && this->monitorConf_ != nullptr
        && this->monitors_ != nullptr && this->name_ != nullptr && this->regionId_ != nullptr && this->resourceGroupId_ != nullptr && this->status_ != nullptr
        && this->tags_ != nullptr && this->taskId_ != nullptr && this->taskType_ != nullptr; };
    // availableAssertions Field Functions 
    bool hasAvailableAssertions() const { return this->availableAssertions_ != nullptr;};
    void deleteAvailableAssertions() { this->availableAssertions_ = nullptr;};
    inline const vector<Models::GetTimingSyntheticTaskResponseBodyDataAvailableAssertions> & availableAssertions() const { DARABONBA_PTR_GET_CONST(availableAssertions_, vector<Models::GetTimingSyntheticTaskResponseBodyDataAvailableAssertions>) };
    inline vector<Models::GetTimingSyntheticTaskResponseBodyDataAvailableAssertions> availableAssertions() { DARABONBA_PTR_GET(availableAssertions_, vector<Models::GetTimingSyntheticTaskResponseBodyDataAvailableAssertions>) };
    inline GetTimingSyntheticTaskResponseBodyData& setAvailableAssertions(const vector<Models::GetTimingSyntheticTaskResponseBodyDataAvailableAssertions> & availableAssertions) { DARABONBA_PTR_SET_VALUE(availableAssertions_, availableAssertions) };
    inline GetTimingSyntheticTaskResponseBodyData& setAvailableAssertions(vector<Models::GetTimingSyntheticTaskResponseBodyDataAvailableAssertions> && availableAssertions) { DARABONBA_PTR_SET_RVALUE(availableAssertions_, availableAssertions) };


    // commonSetting Field Functions 
    bool hasCommonSetting() const { return this->commonSetting_ != nullptr;};
    void deleteCommonSetting() { this->commonSetting_ = nullptr;};
    inline const Models::GetTimingSyntheticTaskResponseBodyDataCommonSetting & commonSetting() const { DARABONBA_PTR_GET_CONST(commonSetting_, Models::GetTimingSyntheticTaskResponseBodyDataCommonSetting) };
    inline Models::GetTimingSyntheticTaskResponseBodyDataCommonSetting commonSetting() { DARABONBA_PTR_GET(commonSetting_, Models::GetTimingSyntheticTaskResponseBodyDataCommonSetting) };
    inline GetTimingSyntheticTaskResponseBodyData& setCommonSetting(const Models::GetTimingSyntheticTaskResponseBodyDataCommonSetting & commonSetting) { DARABONBA_PTR_SET_VALUE(commonSetting_, commonSetting) };
    inline GetTimingSyntheticTaskResponseBodyData& setCommonSetting(Models::GetTimingSyntheticTaskResponseBodyDataCommonSetting && commonSetting) { DARABONBA_PTR_SET_RVALUE(commonSetting_, commonSetting) };


    // customPeriod Field Functions 
    bool hasCustomPeriod() const { return this->customPeriod_ != nullptr;};
    void deleteCustomPeriod() { this->customPeriod_ = nullptr;};
    inline const Models::GetTimingSyntheticTaskResponseBodyDataCustomPeriod & customPeriod() const { DARABONBA_PTR_GET_CONST(customPeriod_, Models::GetTimingSyntheticTaskResponseBodyDataCustomPeriod) };
    inline Models::GetTimingSyntheticTaskResponseBodyDataCustomPeriod customPeriod() { DARABONBA_PTR_GET(customPeriod_, Models::GetTimingSyntheticTaskResponseBodyDataCustomPeriod) };
    inline GetTimingSyntheticTaskResponseBodyData& setCustomPeriod(const Models::GetTimingSyntheticTaskResponseBodyDataCustomPeriod & customPeriod) { DARABONBA_PTR_SET_VALUE(customPeriod_, customPeriod) };
    inline GetTimingSyntheticTaskResponseBodyData& setCustomPeriod(Models::GetTimingSyntheticTaskResponseBodyDataCustomPeriod && customPeriod) { DARABONBA_PTR_SET_RVALUE(customPeriod_, customPeriod) };


    // frequency Field Functions 
    bool hasFrequency() const { return this->frequency_ != nullptr;};
    void deleteFrequency() { this->frequency_ = nullptr;};
    inline string frequency() const { DARABONBA_PTR_GET_DEFAULT(frequency_, "") };
    inline GetTimingSyntheticTaskResponseBodyData& setFrequency(string frequency) { DARABONBA_PTR_SET_VALUE(frequency_, frequency) };


    // monitorCategory Field Functions 
    bool hasMonitorCategory() const { return this->monitorCategory_ != nullptr;};
    void deleteMonitorCategory() { this->monitorCategory_ = nullptr;};
    inline int64_t monitorCategory() const { DARABONBA_PTR_GET_DEFAULT(monitorCategory_, 0L) };
    inline GetTimingSyntheticTaskResponseBodyData& setMonitorCategory(int64_t monitorCategory) { DARABONBA_PTR_SET_VALUE(monitorCategory_, monitorCategory) };


    // monitorConf Field Functions 
    bool hasMonitorConf() const { return this->monitorConf_ != nullptr;};
    void deleteMonitorConf() { this->monitorConf_ = nullptr;};
    inline const Models::GetTimingSyntheticTaskResponseBodyDataMonitorConf & monitorConf() const { DARABONBA_PTR_GET_CONST(monitorConf_, Models::GetTimingSyntheticTaskResponseBodyDataMonitorConf) };
    inline Models::GetTimingSyntheticTaskResponseBodyDataMonitorConf monitorConf() { DARABONBA_PTR_GET(monitorConf_, Models::GetTimingSyntheticTaskResponseBodyDataMonitorConf) };
    inline GetTimingSyntheticTaskResponseBodyData& setMonitorConf(const Models::GetTimingSyntheticTaskResponseBodyDataMonitorConf & monitorConf) { DARABONBA_PTR_SET_VALUE(monitorConf_, monitorConf) };
    inline GetTimingSyntheticTaskResponseBodyData& setMonitorConf(Models::GetTimingSyntheticTaskResponseBodyDataMonitorConf && monitorConf) { DARABONBA_PTR_SET_RVALUE(monitorConf_, monitorConf) };


    // monitors Field Functions 
    bool hasMonitors() const { return this->monitors_ != nullptr;};
    void deleteMonitors() { this->monitors_ = nullptr;};
    inline const vector<Models::GetTimingSyntheticTaskResponseBodyDataMonitors> & monitors() const { DARABONBA_PTR_GET_CONST(monitors_, vector<Models::GetTimingSyntheticTaskResponseBodyDataMonitors>) };
    inline vector<Models::GetTimingSyntheticTaskResponseBodyDataMonitors> monitors() { DARABONBA_PTR_GET(monitors_, vector<Models::GetTimingSyntheticTaskResponseBodyDataMonitors>) };
    inline GetTimingSyntheticTaskResponseBodyData& setMonitors(const vector<Models::GetTimingSyntheticTaskResponseBodyDataMonitors> & monitors) { DARABONBA_PTR_SET_VALUE(monitors_, monitors) };
    inline GetTimingSyntheticTaskResponseBodyData& setMonitors(vector<Models::GetTimingSyntheticTaskResponseBodyDataMonitors> && monitors) { DARABONBA_PTR_SET_RVALUE(monitors_, monitors) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetTimingSyntheticTaskResponseBodyData& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetTimingSyntheticTaskResponseBodyData& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline GetTimingSyntheticTaskResponseBodyData& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetTimingSyntheticTaskResponseBodyData& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Models::GetTimingSyntheticTaskResponseBodyDataTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Models::GetTimingSyntheticTaskResponseBodyDataTags>) };
    inline vector<Models::GetTimingSyntheticTaskResponseBodyDataTags> tags() { DARABONBA_PTR_GET(tags_, vector<Models::GetTimingSyntheticTaskResponseBodyDataTags>) };
    inline GetTimingSyntheticTaskResponseBodyData& setTags(const vector<Models::GetTimingSyntheticTaskResponseBodyDataTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline GetTimingSyntheticTaskResponseBodyData& setTags(vector<Models::GetTimingSyntheticTaskResponseBodyDataTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline GetTimingSyntheticTaskResponseBodyData& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // taskType Field Functions 
    bool hasTaskType() const { return this->taskType_ != nullptr;};
    void deleteTaskType() { this->taskType_ = nullptr;};
    inline int32_t taskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, 0) };
    inline GetTimingSyntheticTaskResponseBodyData& setTaskType(int32_t taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


  protected:
    // The list of assertions.
    std::shared_ptr<vector<Models::GetTimingSyntheticTaskResponseBodyDataAvailableAssertions>> availableAssertions_ = nullptr;
    // The general settings.
    std::shared_ptr<Models::GetTimingSyntheticTaskResponseBodyDataCommonSetting> commonSetting_ = nullptr;
    // The custom cycle.
    std::shared_ptr<Models::GetTimingSyntheticTaskResponseBodyDataCustomPeriod> customPeriod_ = nullptr;
    // The detection frequency. Valid values: 1m, 5m, 10m, 15m, 20m, 30m, 1h, 2h, 3h, 4h, 6h, 8h, 12h, and 24h.
    std::shared_ptr<string> frequency_ = nullptr;
    // The detection point type. 1: PC. 2: mobile device.
    std::shared_ptr<int64_t> monitorCategory_ = nullptr;
    // The monitoring configurations.
    std::shared_ptr<Models::GetTimingSyntheticTaskResponseBodyDataMonitorConf> monitorConf_ = nullptr;
    // The list of monitoring points.
    std::shared_ptr<vector<Models::GetTimingSyntheticTaskResponseBodyDataMonitors>> monitors_ = nullptr;
    // The name of the task.
    std::shared_ptr<string> name_ = nullptr;
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the resource group.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // CREATING: The task is being created. RUNNING: The task is running. PARTIAL_RUNNING: The task is partially running. STOP: The task is stopped. LIMIT_STOP: The task is stopped due to quota insufficiency. EXCEPTION: The task is abnormal. DELETE: The task is deleted. DELETE_EXCEPTION: The task failed to be deleted.
    std::shared_ptr<string> status_ = nullptr;
    // The tag.
    std::shared_ptr<vector<Models::GetTimingSyntheticTaskResponseBodyDataTags>> tags_ = nullptr;
    // The ID of the synthetic monitoring task.
    std::shared_ptr<string> taskId_ = nullptr;
    // The type of the task. Valid values:
    // 
    // ICMP TCP DNS HTTP Website speed measurement File download
    std::shared_ptr<int32_t> taskType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
