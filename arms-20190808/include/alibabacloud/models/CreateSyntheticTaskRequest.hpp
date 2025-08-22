// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESYNTHETICTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESYNTHETICTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateSyntheticTaskRequestCommonParam.hpp>
#include <alibabacloud/models/CreateSyntheticTaskRequestDownload.hpp>
#include <alibabacloud/models/CreateSyntheticTaskRequestExtendInterval.hpp>
#include <vector>
#include <alibabacloud/models/CreateSyntheticTaskRequestMonitorList.hpp>
#include <alibabacloud/models/CreateSyntheticTaskRequestNavigation.hpp>
#include <alibabacloud/models/CreateSyntheticTaskRequestNet.hpp>
#include <alibabacloud/models/CreateSyntheticTaskRequestProtocol.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class CreateSyntheticTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSyntheticTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CommonParam, commonParam_);
      DARABONBA_PTR_TO_JSON(Download, download_);
      DARABONBA_PTR_TO_JSON(ExtendInterval, extendInterval_);
      DARABONBA_PTR_TO_JSON(IntervalTime, intervalTime_);
      DARABONBA_PTR_TO_JSON(IntervalType, intervalType_);
      DARABONBA_PTR_TO_JSON(IpType, ipType_);
      DARABONBA_PTR_TO_JSON(MonitorList, monitorList_);
      DARABONBA_PTR_TO_JSON(Navigation, navigation_);
      DARABONBA_PTR_TO_JSON(Net, net_);
      DARABONBA_PTR_TO_JSON(Protocol, protocol_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(TaskName, taskName_);
      DARABONBA_PTR_TO_JSON(TaskType, taskType_);
      DARABONBA_PTR_TO_JSON(UpdateTask, updateTask_);
      DARABONBA_PTR_TO_JSON(Url, url_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSyntheticTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CommonParam, commonParam_);
      DARABONBA_PTR_FROM_JSON(Download, download_);
      DARABONBA_PTR_FROM_JSON(ExtendInterval, extendInterval_);
      DARABONBA_PTR_FROM_JSON(IntervalTime, intervalTime_);
      DARABONBA_PTR_FROM_JSON(IntervalType, intervalType_);
      DARABONBA_PTR_FROM_JSON(IpType, ipType_);
      DARABONBA_PTR_FROM_JSON(MonitorList, monitorList_);
      DARABONBA_PTR_FROM_JSON(Navigation, navigation_);
      DARABONBA_PTR_FROM_JSON(Net, net_);
      DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(TaskName, taskName_);
      DARABONBA_PTR_FROM_JSON(TaskType, taskType_);
      DARABONBA_PTR_FROM_JSON(UpdateTask, updateTask_);
      DARABONBA_PTR_FROM_JSON(Url, url_);
    };
    CreateSyntheticTaskRequest() = default ;
    CreateSyntheticTaskRequest(const CreateSyntheticTaskRequest &) = default ;
    CreateSyntheticTaskRequest(CreateSyntheticTaskRequest &&) = default ;
    CreateSyntheticTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSyntheticTaskRequest() = default ;
    CreateSyntheticTaskRequest& operator=(const CreateSyntheticTaskRequest &) = default ;
    CreateSyntheticTaskRequest& operator=(CreateSyntheticTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->commonParam_ != nullptr
        && this->download_ != nullptr && this->extendInterval_ != nullptr && this->intervalTime_ != nullptr && this->intervalType_ != nullptr && this->ipType_ != nullptr
        && this->monitorList_ != nullptr && this->navigation_ != nullptr && this->net_ != nullptr && this->protocol_ != nullptr && this->regionId_ != nullptr
        && this->taskName_ != nullptr && this->taskType_ != nullptr && this->updateTask_ != nullptr && this->url_ != nullptr; };
    // commonParam Field Functions 
    bool hasCommonParam() const { return this->commonParam_ != nullptr;};
    void deleteCommonParam() { this->commonParam_ = nullptr;};
    inline const CreateSyntheticTaskRequestCommonParam & commonParam() const { DARABONBA_PTR_GET_CONST(commonParam_, CreateSyntheticTaskRequestCommonParam) };
    inline CreateSyntheticTaskRequestCommonParam commonParam() { DARABONBA_PTR_GET(commonParam_, CreateSyntheticTaskRequestCommonParam) };
    inline CreateSyntheticTaskRequest& setCommonParam(const CreateSyntheticTaskRequestCommonParam & commonParam) { DARABONBA_PTR_SET_VALUE(commonParam_, commonParam) };
    inline CreateSyntheticTaskRequest& setCommonParam(CreateSyntheticTaskRequestCommonParam && commonParam) { DARABONBA_PTR_SET_RVALUE(commonParam_, commonParam) };


    // download Field Functions 
    bool hasDownload() const { return this->download_ != nullptr;};
    void deleteDownload() { this->download_ = nullptr;};
    inline const CreateSyntheticTaskRequestDownload & download() const { DARABONBA_PTR_GET_CONST(download_, CreateSyntheticTaskRequestDownload) };
    inline CreateSyntheticTaskRequestDownload download() { DARABONBA_PTR_GET(download_, CreateSyntheticTaskRequestDownload) };
    inline CreateSyntheticTaskRequest& setDownload(const CreateSyntheticTaskRequestDownload & download) { DARABONBA_PTR_SET_VALUE(download_, download) };
    inline CreateSyntheticTaskRequest& setDownload(CreateSyntheticTaskRequestDownload && download) { DARABONBA_PTR_SET_RVALUE(download_, download) };


    // extendInterval Field Functions 
    bool hasExtendInterval() const { return this->extendInterval_ != nullptr;};
    void deleteExtendInterval() { this->extendInterval_ = nullptr;};
    inline const CreateSyntheticTaskRequestExtendInterval & extendInterval() const { DARABONBA_PTR_GET_CONST(extendInterval_, CreateSyntheticTaskRequestExtendInterval) };
    inline CreateSyntheticTaskRequestExtendInterval extendInterval() { DARABONBA_PTR_GET(extendInterval_, CreateSyntheticTaskRequestExtendInterval) };
    inline CreateSyntheticTaskRequest& setExtendInterval(const CreateSyntheticTaskRequestExtendInterval & extendInterval) { DARABONBA_PTR_SET_VALUE(extendInterval_, extendInterval) };
    inline CreateSyntheticTaskRequest& setExtendInterval(CreateSyntheticTaskRequestExtendInterval && extendInterval) { DARABONBA_PTR_SET_RVALUE(extendInterval_, extendInterval) };


    // intervalTime Field Functions 
    bool hasIntervalTime() const { return this->intervalTime_ != nullptr;};
    void deleteIntervalTime() { this->intervalTime_ = nullptr;};
    inline string intervalTime() const { DARABONBA_PTR_GET_DEFAULT(intervalTime_, "") };
    inline CreateSyntheticTaskRequest& setIntervalTime(string intervalTime) { DARABONBA_PTR_SET_VALUE(intervalTime_, intervalTime) };


    // intervalType Field Functions 
    bool hasIntervalType() const { return this->intervalType_ != nullptr;};
    void deleteIntervalType() { this->intervalType_ = nullptr;};
    inline string intervalType() const { DARABONBA_PTR_GET_DEFAULT(intervalType_, "") };
    inline CreateSyntheticTaskRequest& setIntervalType(string intervalType) { DARABONBA_PTR_SET_VALUE(intervalType_, intervalType) };


    // ipType Field Functions 
    bool hasIpType() const { return this->ipType_ != nullptr;};
    void deleteIpType() { this->ipType_ = nullptr;};
    inline int64_t ipType() const { DARABONBA_PTR_GET_DEFAULT(ipType_, 0L) };
    inline CreateSyntheticTaskRequest& setIpType(int64_t ipType) { DARABONBA_PTR_SET_VALUE(ipType_, ipType) };


    // monitorList Field Functions 
    bool hasMonitorList() const { return this->monitorList_ != nullptr;};
    void deleteMonitorList() { this->monitorList_ = nullptr;};
    inline const vector<CreateSyntheticTaskRequestMonitorList> & monitorList() const { DARABONBA_PTR_GET_CONST(monitorList_, vector<CreateSyntheticTaskRequestMonitorList>) };
    inline vector<CreateSyntheticTaskRequestMonitorList> monitorList() { DARABONBA_PTR_GET(monitorList_, vector<CreateSyntheticTaskRequestMonitorList>) };
    inline CreateSyntheticTaskRequest& setMonitorList(const vector<CreateSyntheticTaskRequestMonitorList> & monitorList) { DARABONBA_PTR_SET_VALUE(monitorList_, monitorList) };
    inline CreateSyntheticTaskRequest& setMonitorList(vector<CreateSyntheticTaskRequestMonitorList> && monitorList) { DARABONBA_PTR_SET_RVALUE(monitorList_, monitorList) };


    // navigation Field Functions 
    bool hasNavigation() const { return this->navigation_ != nullptr;};
    void deleteNavigation() { this->navigation_ = nullptr;};
    inline const CreateSyntheticTaskRequestNavigation & navigation() const { DARABONBA_PTR_GET_CONST(navigation_, CreateSyntheticTaskRequestNavigation) };
    inline CreateSyntheticTaskRequestNavigation navigation() { DARABONBA_PTR_GET(navigation_, CreateSyntheticTaskRequestNavigation) };
    inline CreateSyntheticTaskRequest& setNavigation(const CreateSyntheticTaskRequestNavigation & navigation) { DARABONBA_PTR_SET_VALUE(navigation_, navigation) };
    inline CreateSyntheticTaskRequest& setNavigation(CreateSyntheticTaskRequestNavigation && navigation) { DARABONBA_PTR_SET_RVALUE(navigation_, navigation) };


    // net Field Functions 
    bool hasNet() const { return this->net_ != nullptr;};
    void deleteNet() { this->net_ = nullptr;};
    inline const CreateSyntheticTaskRequestNet & net() const { DARABONBA_PTR_GET_CONST(net_, CreateSyntheticTaskRequestNet) };
    inline CreateSyntheticTaskRequestNet net() { DARABONBA_PTR_GET(net_, CreateSyntheticTaskRequestNet) };
    inline CreateSyntheticTaskRequest& setNet(const CreateSyntheticTaskRequestNet & net) { DARABONBA_PTR_SET_VALUE(net_, net) };
    inline CreateSyntheticTaskRequest& setNet(CreateSyntheticTaskRequestNet && net) { DARABONBA_PTR_SET_RVALUE(net_, net) };


    // protocol Field Functions 
    bool hasProtocol() const { return this->protocol_ != nullptr;};
    void deleteProtocol() { this->protocol_ = nullptr;};
    inline const CreateSyntheticTaskRequestProtocol & protocol() const { DARABONBA_PTR_GET_CONST(protocol_, CreateSyntheticTaskRequestProtocol) };
    inline CreateSyntheticTaskRequestProtocol protocol() { DARABONBA_PTR_GET(protocol_, CreateSyntheticTaskRequestProtocol) };
    inline CreateSyntheticTaskRequest& setProtocol(const CreateSyntheticTaskRequestProtocol & protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };
    inline CreateSyntheticTaskRequest& setProtocol(CreateSyntheticTaskRequestProtocol && protocol) { DARABONBA_PTR_SET_RVALUE(protocol_, protocol) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateSyntheticTaskRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // taskName Field Functions 
    bool hasTaskName() const { return this->taskName_ != nullptr;};
    void deleteTaskName() { this->taskName_ = nullptr;};
    inline string taskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
    inline CreateSyntheticTaskRequest& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


    // taskType Field Functions 
    bool hasTaskType() const { return this->taskType_ != nullptr;};
    void deleteTaskType() { this->taskType_ = nullptr;};
    inline int64_t taskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, 0L) };
    inline CreateSyntheticTaskRequest& setTaskType(int64_t taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


    // updateTask Field Functions 
    bool hasUpdateTask() const { return this->updateTask_ != nullptr;};
    void deleteUpdateTask() { this->updateTask_ = nullptr;};
    inline bool updateTask() const { DARABONBA_PTR_GET_DEFAULT(updateTask_, false) };
    inline CreateSyntheticTaskRequest& setUpdateTask(bool updateTask) { DARABONBA_PTR_SET_VALUE(updateTask_, updateTask) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline CreateSyntheticTaskRequest& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


  protected:
    // The common parameters.
    std::shared_ptr<CreateSyntheticTaskRequestCommonParam> commonParam_ = nullptr;
    // The file download task.
    std::shared_ptr<CreateSyntheticTaskRequestDownload> download_ = nullptr;
    // The frequency.
    std::shared_ptr<CreateSyntheticTaskRequestExtendInterval> extendInterval_ = nullptr;
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
    std::shared_ptr<vector<CreateSyntheticTaskRequestMonitorList>> monitorList_ = nullptr;
    // The monitoring items that are associated with the browse tasks.
    std::shared_ptr<CreateSyntheticTaskRequestNavigation> navigation_ = nullptr;
    // The network synthetic monitoring task.
    std::shared_ptr<CreateSyntheticTaskRequestNet> net_ = nullptr;
    // The API performance synthetic monitoring task.
    std::shared_ptr<CreateSyntheticTaskRequestProtocol> protocol_ = nullptr;
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
