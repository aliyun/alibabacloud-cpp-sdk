// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETIMINGSYNTHETICTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATETIMINGSYNTHETICTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateTimingSyntheticTaskRequestAvailableAssertions.hpp>
#include <alibabacloud/models/CreateTimingSyntheticTaskRequestCommonSetting.hpp>
#include <alibabacloud/models/CreateTimingSyntheticTaskRequestCustomPeriod.hpp>
#include <alibabacloud/models/CreateTimingSyntheticTaskRequestMonitorConf.hpp>
#include <alibabacloud/models/CreateTimingSyntheticTaskRequestMonitors.hpp>
#include <alibabacloud/models/CreateTimingSyntheticTaskRequestTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class CreateTimingSyntheticTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTimingSyntheticTaskRequest& obj) { 
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
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(TaskType, taskType_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTimingSyntheticTaskRequest& obj) { 
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
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(TaskType, taskType_);
    };
    CreateTimingSyntheticTaskRequest() = default ;
    CreateTimingSyntheticTaskRequest(const CreateTimingSyntheticTaskRequest &) = default ;
    CreateTimingSyntheticTaskRequest(CreateTimingSyntheticTaskRequest &&) = default ;
    CreateTimingSyntheticTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTimingSyntheticTaskRequest() = default ;
    CreateTimingSyntheticTaskRequest& operator=(const CreateTimingSyntheticTaskRequest &) = default ;
    CreateTimingSyntheticTaskRequest& operator=(CreateTimingSyntheticTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->availableAssertions_ != nullptr
        && this->commonSetting_ != nullptr && this->customPeriod_ != nullptr && this->frequency_ != nullptr && this->monitorCategory_ != nullptr && this->monitorConf_ != nullptr
        && this->monitors_ != nullptr && this->name_ != nullptr && this->regionId_ != nullptr && this->resourceGroupId_ != nullptr && this->tags_ != nullptr
        && this->taskType_ != nullptr; };
    // availableAssertions Field Functions 
    bool hasAvailableAssertions() const { return this->availableAssertions_ != nullptr;};
    void deleteAvailableAssertions() { this->availableAssertions_ = nullptr;};
    inline const vector<CreateTimingSyntheticTaskRequestAvailableAssertions> & availableAssertions() const { DARABONBA_PTR_GET_CONST(availableAssertions_, vector<CreateTimingSyntheticTaskRequestAvailableAssertions>) };
    inline vector<CreateTimingSyntheticTaskRequestAvailableAssertions> availableAssertions() { DARABONBA_PTR_GET(availableAssertions_, vector<CreateTimingSyntheticTaskRequestAvailableAssertions>) };
    inline CreateTimingSyntheticTaskRequest& setAvailableAssertions(const vector<CreateTimingSyntheticTaskRequestAvailableAssertions> & availableAssertions) { DARABONBA_PTR_SET_VALUE(availableAssertions_, availableAssertions) };
    inline CreateTimingSyntheticTaskRequest& setAvailableAssertions(vector<CreateTimingSyntheticTaskRequestAvailableAssertions> && availableAssertions) { DARABONBA_PTR_SET_RVALUE(availableAssertions_, availableAssertions) };


    // commonSetting Field Functions 
    bool hasCommonSetting() const { return this->commonSetting_ != nullptr;};
    void deleteCommonSetting() { this->commonSetting_ = nullptr;};
    inline const CreateTimingSyntheticTaskRequestCommonSetting & commonSetting() const { DARABONBA_PTR_GET_CONST(commonSetting_, CreateTimingSyntheticTaskRequestCommonSetting) };
    inline CreateTimingSyntheticTaskRequestCommonSetting commonSetting() { DARABONBA_PTR_GET(commonSetting_, CreateTimingSyntheticTaskRequestCommonSetting) };
    inline CreateTimingSyntheticTaskRequest& setCommonSetting(const CreateTimingSyntheticTaskRequestCommonSetting & commonSetting) { DARABONBA_PTR_SET_VALUE(commonSetting_, commonSetting) };
    inline CreateTimingSyntheticTaskRequest& setCommonSetting(CreateTimingSyntheticTaskRequestCommonSetting && commonSetting) { DARABONBA_PTR_SET_RVALUE(commonSetting_, commonSetting) };


    // customPeriod Field Functions 
    bool hasCustomPeriod() const { return this->customPeriod_ != nullptr;};
    void deleteCustomPeriod() { this->customPeriod_ = nullptr;};
    inline const CreateTimingSyntheticTaskRequestCustomPeriod & customPeriod() const { DARABONBA_PTR_GET_CONST(customPeriod_, CreateTimingSyntheticTaskRequestCustomPeriod) };
    inline CreateTimingSyntheticTaskRequestCustomPeriod customPeriod() { DARABONBA_PTR_GET(customPeriod_, CreateTimingSyntheticTaskRequestCustomPeriod) };
    inline CreateTimingSyntheticTaskRequest& setCustomPeriod(const CreateTimingSyntheticTaskRequestCustomPeriod & customPeriod) { DARABONBA_PTR_SET_VALUE(customPeriod_, customPeriod) };
    inline CreateTimingSyntheticTaskRequest& setCustomPeriod(CreateTimingSyntheticTaskRequestCustomPeriod && customPeriod) { DARABONBA_PTR_SET_RVALUE(customPeriod_, customPeriod) };


    // frequency Field Functions 
    bool hasFrequency() const { return this->frequency_ != nullptr;};
    void deleteFrequency() { this->frequency_ = nullptr;};
    inline string frequency() const { DARABONBA_PTR_GET_DEFAULT(frequency_, "") };
    inline CreateTimingSyntheticTaskRequest& setFrequency(string frequency) { DARABONBA_PTR_SET_VALUE(frequency_, frequency) };


    // monitorCategory Field Functions 
    bool hasMonitorCategory() const { return this->monitorCategory_ != nullptr;};
    void deleteMonitorCategory() { this->monitorCategory_ = nullptr;};
    inline int32_t monitorCategory() const { DARABONBA_PTR_GET_DEFAULT(monitorCategory_, 0) };
    inline CreateTimingSyntheticTaskRequest& setMonitorCategory(int32_t monitorCategory) { DARABONBA_PTR_SET_VALUE(monitorCategory_, monitorCategory) };


    // monitorConf Field Functions 
    bool hasMonitorConf() const { return this->monitorConf_ != nullptr;};
    void deleteMonitorConf() { this->monitorConf_ = nullptr;};
    inline const CreateTimingSyntheticTaskRequestMonitorConf & monitorConf() const { DARABONBA_PTR_GET_CONST(monitorConf_, CreateTimingSyntheticTaskRequestMonitorConf) };
    inline CreateTimingSyntheticTaskRequestMonitorConf monitorConf() { DARABONBA_PTR_GET(monitorConf_, CreateTimingSyntheticTaskRequestMonitorConf) };
    inline CreateTimingSyntheticTaskRequest& setMonitorConf(const CreateTimingSyntheticTaskRequestMonitorConf & monitorConf) { DARABONBA_PTR_SET_VALUE(monitorConf_, monitorConf) };
    inline CreateTimingSyntheticTaskRequest& setMonitorConf(CreateTimingSyntheticTaskRequestMonitorConf && monitorConf) { DARABONBA_PTR_SET_RVALUE(monitorConf_, monitorConf) };


    // monitors Field Functions 
    bool hasMonitors() const { return this->monitors_ != nullptr;};
    void deleteMonitors() { this->monitors_ = nullptr;};
    inline const vector<CreateTimingSyntheticTaskRequestMonitors> & monitors() const { DARABONBA_PTR_GET_CONST(monitors_, vector<CreateTimingSyntheticTaskRequestMonitors>) };
    inline vector<CreateTimingSyntheticTaskRequestMonitors> monitors() { DARABONBA_PTR_GET(monitors_, vector<CreateTimingSyntheticTaskRequestMonitors>) };
    inline CreateTimingSyntheticTaskRequest& setMonitors(const vector<CreateTimingSyntheticTaskRequestMonitors> & monitors) { DARABONBA_PTR_SET_VALUE(monitors_, monitors) };
    inline CreateTimingSyntheticTaskRequest& setMonitors(vector<CreateTimingSyntheticTaskRequestMonitors> && monitors) { DARABONBA_PTR_SET_RVALUE(monitors_, monitors) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateTimingSyntheticTaskRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateTimingSyntheticTaskRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateTimingSyntheticTaskRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<CreateTimingSyntheticTaskRequestTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<CreateTimingSyntheticTaskRequestTags>) };
    inline vector<CreateTimingSyntheticTaskRequestTags> tags() { DARABONBA_PTR_GET(tags_, vector<CreateTimingSyntheticTaskRequestTags>) };
    inline CreateTimingSyntheticTaskRequest& setTags(const vector<CreateTimingSyntheticTaskRequestTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline CreateTimingSyntheticTaskRequest& setTags(vector<CreateTimingSyntheticTaskRequestTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // taskType Field Functions 
    bool hasTaskType() const { return this->taskType_ != nullptr;};
    void deleteTaskType() { this->taskType_ = nullptr;};
    inline int32_t taskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, 0) };
    inline CreateTimingSyntheticTaskRequest& setTaskType(int32_t taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


  protected:
    // The list of assertions.
    std::shared_ptr<vector<CreateTimingSyntheticTaskRequestAvailableAssertions>> availableAssertions_ = nullptr;
    // The general settings.
    std::shared_ptr<CreateTimingSyntheticTaskRequestCommonSetting> commonSetting_ = nullptr;
    // The general settings.
    std::shared_ptr<CreateTimingSyntheticTaskRequestCustomPeriod> customPeriod_ = nullptr;
    // The detection frequency. Valid values: 1m, 5m, 10m, 15m, 20m, 30m, 1h, 2h, 3h, 4h, 6h, 8h, 12h, and 24h.
    // 
    // This parameter is required.
    std::shared_ptr<string> frequency_ = nullptr;
    // The detection point type. Valid values:
    // 
    // - 1: PC
    // - 2: mobile device
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> monitorCategory_ = nullptr;
    // The monitoring configurations.
    // 
    // This parameter is required.
    std::shared_ptr<CreateTimingSyntheticTaskRequestMonitorConf> monitorConf_ = nullptr;
    // The list of detection points.
    // 
    // This parameter is required.
    std::shared_ptr<vector<CreateTimingSyntheticTaskRequestMonitors>> monitors_ = nullptr;
    // The name of the task.
    // 
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    // The region ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The parameter is optional.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The tag list.
    std::shared_ptr<vector<CreateTimingSyntheticTaskRequestTags>> tags_ = nullptr;
    // The type of the task. Valid values:
    // 
    // 1: ICMP. 2: TCP. 3: DNS. 4: HTTP. 5: website speed measurement. 6: file download.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> taskType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
