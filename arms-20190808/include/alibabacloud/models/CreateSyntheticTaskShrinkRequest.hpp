// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESYNTHETICTASKSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESYNTHETICTASKSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class CreateSyntheticTaskShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSyntheticTaskShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CommonParam, commonParamShrink_);
      DARABONBA_PTR_TO_JSON(Download, downloadShrink_);
      DARABONBA_PTR_TO_JSON(ExtendInterval, extendIntervalShrink_);
      DARABONBA_PTR_TO_JSON(IntervalTime, intervalTime_);
      DARABONBA_PTR_TO_JSON(IntervalType, intervalType_);
      DARABONBA_PTR_TO_JSON(IpType, ipType_);
      DARABONBA_PTR_TO_JSON(MonitorList, monitorListShrink_);
      DARABONBA_PTR_TO_JSON(Navigation, navigationShrink_);
      DARABONBA_PTR_TO_JSON(Net, netShrink_);
      DARABONBA_PTR_TO_JSON(Protocol, protocolShrink_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(TaskName, taskName_);
      DARABONBA_PTR_TO_JSON(TaskType, taskType_);
      DARABONBA_PTR_TO_JSON(UpdateTask, updateTask_);
      DARABONBA_PTR_TO_JSON(Url, url_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSyntheticTaskShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CommonParam, commonParamShrink_);
      DARABONBA_PTR_FROM_JSON(Download, downloadShrink_);
      DARABONBA_PTR_FROM_JSON(ExtendInterval, extendIntervalShrink_);
      DARABONBA_PTR_FROM_JSON(IntervalTime, intervalTime_);
      DARABONBA_PTR_FROM_JSON(IntervalType, intervalType_);
      DARABONBA_PTR_FROM_JSON(IpType, ipType_);
      DARABONBA_PTR_FROM_JSON(MonitorList, monitorListShrink_);
      DARABONBA_PTR_FROM_JSON(Navigation, navigationShrink_);
      DARABONBA_PTR_FROM_JSON(Net, netShrink_);
      DARABONBA_PTR_FROM_JSON(Protocol, protocolShrink_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(TaskName, taskName_);
      DARABONBA_PTR_FROM_JSON(TaskType, taskType_);
      DARABONBA_PTR_FROM_JSON(UpdateTask, updateTask_);
      DARABONBA_PTR_FROM_JSON(Url, url_);
    };
    CreateSyntheticTaskShrinkRequest() = default ;
    CreateSyntheticTaskShrinkRequest(const CreateSyntheticTaskShrinkRequest &) = default ;
    CreateSyntheticTaskShrinkRequest(CreateSyntheticTaskShrinkRequest &&) = default ;
    CreateSyntheticTaskShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSyntheticTaskShrinkRequest() = default ;
    CreateSyntheticTaskShrinkRequest& operator=(const CreateSyntheticTaskShrinkRequest &) = default ;
    CreateSyntheticTaskShrinkRequest& operator=(CreateSyntheticTaskShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->commonParamShrink_ != nullptr
        && this->downloadShrink_ != nullptr && this->extendIntervalShrink_ != nullptr && this->intervalTime_ != nullptr && this->intervalType_ != nullptr && this->ipType_ != nullptr
        && this->monitorListShrink_ != nullptr && this->navigationShrink_ != nullptr && this->netShrink_ != nullptr && this->protocolShrink_ != nullptr && this->regionId_ != nullptr
        && this->taskName_ != nullptr && this->taskType_ != nullptr && this->updateTask_ != nullptr && this->url_ != nullptr; };
    // commonParamShrink Field Functions 
    bool hasCommonParamShrink() const { return this->commonParamShrink_ != nullptr;};
    void deleteCommonParamShrink() { this->commonParamShrink_ = nullptr;};
    inline string commonParamShrink() const { DARABONBA_PTR_GET_DEFAULT(commonParamShrink_, "") };
    inline CreateSyntheticTaskShrinkRequest& setCommonParamShrink(string commonParamShrink) { DARABONBA_PTR_SET_VALUE(commonParamShrink_, commonParamShrink) };


    // downloadShrink Field Functions 
    bool hasDownloadShrink() const { return this->downloadShrink_ != nullptr;};
    void deleteDownloadShrink() { this->downloadShrink_ = nullptr;};
    inline string downloadShrink() const { DARABONBA_PTR_GET_DEFAULT(downloadShrink_, "") };
    inline CreateSyntheticTaskShrinkRequest& setDownloadShrink(string downloadShrink) { DARABONBA_PTR_SET_VALUE(downloadShrink_, downloadShrink) };


    // extendIntervalShrink Field Functions 
    bool hasExtendIntervalShrink() const { return this->extendIntervalShrink_ != nullptr;};
    void deleteExtendIntervalShrink() { this->extendIntervalShrink_ = nullptr;};
    inline string extendIntervalShrink() const { DARABONBA_PTR_GET_DEFAULT(extendIntervalShrink_, "") };
    inline CreateSyntheticTaskShrinkRequest& setExtendIntervalShrink(string extendIntervalShrink) { DARABONBA_PTR_SET_VALUE(extendIntervalShrink_, extendIntervalShrink) };


    // intervalTime Field Functions 
    bool hasIntervalTime() const { return this->intervalTime_ != nullptr;};
    void deleteIntervalTime() { this->intervalTime_ = nullptr;};
    inline string intervalTime() const { DARABONBA_PTR_GET_DEFAULT(intervalTime_, "") };
    inline CreateSyntheticTaskShrinkRequest& setIntervalTime(string intervalTime) { DARABONBA_PTR_SET_VALUE(intervalTime_, intervalTime) };


    // intervalType Field Functions 
    bool hasIntervalType() const { return this->intervalType_ != nullptr;};
    void deleteIntervalType() { this->intervalType_ = nullptr;};
    inline string intervalType() const { DARABONBA_PTR_GET_DEFAULT(intervalType_, "") };
    inline CreateSyntheticTaskShrinkRequest& setIntervalType(string intervalType) { DARABONBA_PTR_SET_VALUE(intervalType_, intervalType) };


    // ipType Field Functions 
    bool hasIpType() const { return this->ipType_ != nullptr;};
    void deleteIpType() { this->ipType_ = nullptr;};
    inline int64_t ipType() const { DARABONBA_PTR_GET_DEFAULT(ipType_, 0L) };
    inline CreateSyntheticTaskShrinkRequest& setIpType(int64_t ipType) { DARABONBA_PTR_SET_VALUE(ipType_, ipType) };


    // monitorListShrink Field Functions 
    bool hasMonitorListShrink() const { return this->monitorListShrink_ != nullptr;};
    void deleteMonitorListShrink() { this->monitorListShrink_ = nullptr;};
    inline string monitorListShrink() const { DARABONBA_PTR_GET_DEFAULT(monitorListShrink_, "") };
    inline CreateSyntheticTaskShrinkRequest& setMonitorListShrink(string monitorListShrink) { DARABONBA_PTR_SET_VALUE(monitorListShrink_, monitorListShrink) };


    // navigationShrink Field Functions 
    bool hasNavigationShrink() const { return this->navigationShrink_ != nullptr;};
    void deleteNavigationShrink() { this->navigationShrink_ = nullptr;};
    inline string navigationShrink() const { DARABONBA_PTR_GET_DEFAULT(navigationShrink_, "") };
    inline CreateSyntheticTaskShrinkRequest& setNavigationShrink(string navigationShrink) { DARABONBA_PTR_SET_VALUE(navigationShrink_, navigationShrink) };


    // netShrink Field Functions 
    bool hasNetShrink() const { return this->netShrink_ != nullptr;};
    void deleteNetShrink() { this->netShrink_ = nullptr;};
    inline string netShrink() const { DARABONBA_PTR_GET_DEFAULT(netShrink_, "") };
    inline CreateSyntheticTaskShrinkRequest& setNetShrink(string netShrink) { DARABONBA_PTR_SET_VALUE(netShrink_, netShrink) };


    // protocolShrink Field Functions 
    bool hasProtocolShrink() const { return this->protocolShrink_ != nullptr;};
    void deleteProtocolShrink() { this->protocolShrink_ = nullptr;};
    inline string protocolShrink() const { DARABONBA_PTR_GET_DEFAULT(protocolShrink_, "") };
    inline CreateSyntheticTaskShrinkRequest& setProtocolShrink(string protocolShrink) { DARABONBA_PTR_SET_VALUE(protocolShrink_, protocolShrink) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateSyntheticTaskShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // taskName Field Functions 
    bool hasTaskName() const { return this->taskName_ != nullptr;};
    void deleteTaskName() { this->taskName_ = nullptr;};
    inline string taskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
    inline CreateSyntheticTaskShrinkRequest& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


    // taskType Field Functions 
    bool hasTaskType() const { return this->taskType_ != nullptr;};
    void deleteTaskType() { this->taskType_ = nullptr;};
    inline int64_t taskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, 0L) };
    inline CreateSyntheticTaskShrinkRequest& setTaskType(int64_t taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


    // updateTask Field Functions 
    bool hasUpdateTask() const { return this->updateTask_ != nullptr;};
    void deleteUpdateTask() { this->updateTask_ = nullptr;};
    inline bool updateTask() const { DARABONBA_PTR_GET_DEFAULT(updateTask_, false) };
    inline CreateSyntheticTaskShrinkRequest& setUpdateTask(bool updateTask) { DARABONBA_PTR_SET_VALUE(updateTask_, updateTask) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline CreateSyntheticTaskShrinkRequest& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


  protected:
    // The common parameters.
    std::shared_ptr<string> commonParamShrink_ = nullptr;
    // The file download task.
    std::shared_ptr<string> downloadShrink_ = nullptr;
    // The frequency.
    std::shared_ptr<string> extendIntervalShrink_ = nullptr;
    // The interval at which synthetic monitoring is performed. Unit: minutes. Valid values:
    // 
    // *   1
    // *   5
    // *   10
    // *   15
    // *   20
    // *   30
    // *   60
    // *   120
    // *   180
    // *   240
    // *   360
    // *   480
    // *   720
    // *   1440
    // 
    // This parameter is required.
    std::shared_ptr<string> intervalTime_ = nullptr;
    // The interval type.
    // 
    // *   0: daily
    // *   1: custom frequency
    // 
    // This parameter is required.
    std::shared_ptr<string> intervalType_ = nullptr;
    // The IP address type:
    // 
    // *   0: an automatic IP address
    // *   1: IPv4
    // *   2: IPv6
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> ipType_ = nullptr;
    // The list of monitoring points.
    // 
    // This parameter is required.
    std::shared_ptr<string> monitorListShrink_ = nullptr;
    // The monitoring items that are associated with the browse tasks.
    std::shared_ptr<string> navigationShrink_ = nullptr;
    // The network synthetic monitoring task.
    std::shared_ptr<string> netShrink_ = nullptr;
    // The API performance synthetic monitoring task.
    std::shared_ptr<string> protocolShrink_ = nullptr;
    // The ID of the region in which the application is located.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The name of the task. To update a synthetic monitoring task, enter the task name and set the **UpdateTask** parameter to **true**.
    // 
    // This parameter is required.
    std::shared_ptr<string> taskName_ = nullptr;
    // The type of the monitoring task. Valid values:
    // 
    // 1.  3: web page performance - IE
    // 2.  34: web Page Performance - Chrome
    // 3.  0: network quality
    // 4.  40: file download
    // 5.  7:API performance
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> taskType_ = nullptr;
    // Specifies whether to update existing synthetic monitoring tasks.
    // 
    // *   true: updates existing synthetic monitoring tasks.
    // *   false: creates new synthetic monitoring tasks.
    std::shared_ptr<bool> updateTask_ = nullptr;
    // The URL for synthetic monitoring.
    // 
    // This parameter is required.
    std::shared_ptr<string> url_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
