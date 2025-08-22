// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTIMINGSYNTHETICTASKSRESPONSEBODYDATAITEMS_HPP_
#define ALIBABACLOUD_MODELS_LISTTIMINGSYNTHETICTASKSRESPONSEBODYDATAITEMS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListTimingSyntheticTasksResponseBodyDataItemsCommonSetting.hpp>
#include <vector>
#include <alibabacloud/models/ListTimingSyntheticTasksResponseBodyDataItemsTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class ListTimingSyntheticTasksResponseBodyDataItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTimingSyntheticTasksResponseBodyDataItems& obj) { 
      DARABONBA_PTR_TO_JSON(CommonSetting, commonSetting_);
      DARABONBA_PTR_TO_JSON(Frequency, frequency_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(MonitorCategory, monitorCategory_);
      DARABONBA_PTR_TO_JSON(MonitorNum, monitorNum_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(TaskType, taskType_);
      DARABONBA_PTR_TO_JSON(Url, url_);
    };
    friend void from_json(const Darabonba::Json& j, ListTimingSyntheticTasksResponseBodyDataItems& obj) { 
      DARABONBA_PTR_FROM_JSON(CommonSetting, commonSetting_);
      DARABONBA_PTR_FROM_JSON(Frequency, frequency_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(MonitorCategory, monitorCategory_);
      DARABONBA_PTR_FROM_JSON(MonitorNum, monitorNum_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(TaskType, taskType_);
      DARABONBA_PTR_FROM_JSON(Url, url_);
    };
    ListTimingSyntheticTasksResponseBodyDataItems() = default ;
    ListTimingSyntheticTasksResponseBodyDataItems(const ListTimingSyntheticTasksResponseBodyDataItems &) = default ;
    ListTimingSyntheticTasksResponseBodyDataItems(ListTimingSyntheticTasksResponseBodyDataItems &&) = default ;
    ListTimingSyntheticTasksResponseBodyDataItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTimingSyntheticTasksResponseBodyDataItems() = default ;
    ListTimingSyntheticTasksResponseBodyDataItems& operator=(const ListTimingSyntheticTasksResponseBodyDataItems &) = default ;
    ListTimingSyntheticTasksResponseBodyDataItems& operator=(ListTimingSyntheticTasksResponseBodyDataItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->commonSetting_ != nullptr
        && this->frequency_ != nullptr && this->gmtCreate_ != nullptr && this->gmtModified_ != nullptr && this->monitorCategory_ != nullptr && this->monitorNum_ != nullptr
        && this->name_ != nullptr && this->regionId_ != nullptr && this->resourceGroupId_ != nullptr && this->status_ != nullptr && this->tags_ != nullptr
        && this->taskId_ != nullptr && this->taskType_ != nullptr && this->url_ != nullptr; };
    // commonSetting Field Functions 
    bool hasCommonSetting() const { return this->commonSetting_ != nullptr;};
    void deleteCommonSetting() { this->commonSetting_ = nullptr;};
    inline const Models::ListTimingSyntheticTasksResponseBodyDataItemsCommonSetting & commonSetting() const { DARABONBA_PTR_GET_CONST(commonSetting_, Models::ListTimingSyntheticTasksResponseBodyDataItemsCommonSetting) };
    inline Models::ListTimingSyntheticTasksResponseBodyDataItemsCommonSetting commonSetting() { DARABONBA_PTR_GET(commonSetting_, Models::ListTimingSyntheticTasksResponseBodyDataItemsCommonSetting) };
    inline ListTimingSyntheticTasksResponseBodyDataItems& setCommonSetting(const Models::ListTimingSyntheticTasksResponseBodyDataItemsCommonSetting & commonSetting) { DARABONBA_PTR_SET_VALUE(commonSetting_, commonSetting) };
    inline ListTimingSyntheticTasksResponseBodyDataItems& setCommonSetting(Models::ListTimingSyntheticTasksResponseBodyDataItemsCommonSetting && commonSetting) { DARABONBA_PTR_SET_RVALUE(commonSetting_, commonSetting) };


    // frequency Field Functions 
    bool hasFrequency() const { return this->frequency_ != nullptr;};
    void deleteFrequency() { this->frequency_ = nullptr;};
    inline string frequency() const { DARABONBA_PTR_GET_DEFAULT(frequency_, "") };
    inline ListTimingSyntheticTasksResponseBodyDataItems& setFrequency(string frequency) { DARABONBA_PTR_SET_VALUE(frequency_, frequency) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline ListTimingSyntheticTasksResponseBodyDataItems& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline ListTimingSyntheticTasksResponseBodyDataItems& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // monitorCategory Field Functions 
    bool hasMonitorCategory() const { return this->monitorCategory_ != nullptr;};
    void deleteMonitorCategory() { this->monitorCategory_ = nullptr;};
    inline int32_t monitorCategory() const { DARABONBA_PTR_GET_DEFAULT(monitorCategory_, 0) };
    inline ListTimingSyntheticTasksResponseBodyDataItems& setMonitorCategory(int32_t monitorCategory) { DARABONBA_PTR_SET_VALUE(monitorCategory_, monitorCategory) };


    // monitorNum Field Functions 
    bool hasMonitorNum() const { return this->monitorNum_ != nullptr;};
    void deleteMonitorNum() { this->monitorNum_ = nullptr;};
    inline string monitorNum() const { DARABONBA_PTR_GET_DEFAULT(monitorNum_, "") };
    inline ListTimingSyntheticTasksResponseBodyDataItems& setMonitorNum(string monitorNum) { DARABONBA_PTR_SET_VALUE(monitorNum_, monitorNum) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListTimingSyntheticTasksResponseBodyDataItems& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListTimingSyntheticTasksResponseBodyDataItems& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ListTimingSyntheticTasksResponseBodyDataItems& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListTimingSyntheticTasksResponseBodyDataItems& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Models::ListTimingSyntheticTasksResponseBodyDataItemsTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Models::ListTimingSyntheticTasksResponseBodyDataItemsTags>) };
    inline vector<Models::ListTimingSyntheticTasksResponseBodyDataItemsTags> tags() { DARABONBA_PTR_GET(tags_, vector<Models::ListTimingSyntheticTasksResponseBodyDataItemsTags>) };
    inline ListTimingSyntheticTasksResponseBodyDataItems& setTags(const vector<Models::ListTimingSyntheticTasksResponseBodyDataItemsTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline ListTimingSyntheticTasksResponseBodyDataItems& setTags(vector<Models::ListTimingSyntheticTasksResponseBodyDataItemsTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline ListTimingSyntheticTasksResponseBodyDataItems& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // taskType Field Functions 
    bool hasTaskType() const { return this->taskType_ != nullptr;};
    void deleteTaskType() { this->taskType_ = nullptr;};
    inline int32_t taskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, 0) };
    inline ListTimingSyntheticTasksResponseBodyDataItems& setTaskType(int32_t taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline ListTimingSyntheticTasksResponseBodyDataItems& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


  protected:
    // The general settings.
    std::shared_ptr<Models::ListTimingSyntheticTasksResponseBodyDataItemsCommonSetting> commonSetting_ = nullptr;
    // The detection frequency. Valid values: 1m, 5m, 10m, 15m, 20m, 30m, 1h, 2h, 3h, 4h, 6h, 8h, 12h, and 24h.
    std::shared_ptr<string> frequency_ = nullptr;
    // The time when the task was created.
    std::shared_ptr<string> gmtCreate_ = nullptr;
    // The time when the task was modified.
    std::shared_ptr<string> gmtModified_ = nullptr;
    // The detection point type. 1: PC. 2: mobile device.
    std::shared_ptr<int32_t> monitorCategory_ = nullptr;
    // The number of detection points.
    std::shared_ptr<string> monitorNum_ = nullptr;
    // The task name.
    std::shared_ptr<string> name_ = nullptr;
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the resource group.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The task status. CREATING: The task is being created. RUNNING: The task is running. PARTIAL_RUNNING: The task is partially running. STOP: The task is stopped. LIMIT_STOP: The task is stopped due to quota limit. EXCEPTION: The task is abnormal. DELETE: The task is deleted. DELETE_EXCEPTION: An exception occurs while deleting the task.
    std::shared_ptr<string> status_ = nullptr;
    // The tags.
    std::shared_ptr<vector<Models::ListTimingSyntheticTasksResponseBodyDataItemsTags>> tags_ = nullptr;
    // The ID of the synthetic monitoring task.
    std::shared_ptr<string> taskId_ = nullptr;
    // The type of the task. Valid values:
    // 
    // 1: ICMP. 2: TCP. 3: DNS. 4: HTTP. 5: website speed. 6: file download.
    std::shared_ptr<int32_t> taskType_ = nullptr;
    // The URL for synthetic monitoring.
    std::shared_ptr<string> url_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
