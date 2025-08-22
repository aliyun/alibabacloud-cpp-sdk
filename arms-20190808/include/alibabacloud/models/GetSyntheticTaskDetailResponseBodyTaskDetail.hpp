// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSYNTHETICTASKDETAILRESPONSEBODYTASKDETAIL_HPP_
#define ALIBABACLOUD_MODELS_GETSYNTHETICTASKDETAILRESPONSEBODYTASKDETAIL_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetSyntheticTaskDetailResponseBodyTaskDetailCommonParam.hpp>
#include <alibabacloud/models/GetSyntheticTaskDetailResponseBodyTaskDetailDownload.hpp>
#include <alibabacloud/models/GetSyntheticTaskDetailResponseBodyTaskDetailExtendInterval.hpp>
#include <vector>
#include <alibabacloud/models/GetSyntheticTaskDetailResponseBodyTaskDetailMonitorList.hpp>
#include <alibabacloud/models/GetSyntheticTaskDetailResponseBodyTaskDetailNav.hpp>
#include <alibabacloud/models/GetSyntheticTaskDetailResponseBodyTaskDetailNet.hpp>
#include <alibabacloud/models/GetSyntheticTaskDetailResponseBodyTaskDetailProtocol.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class GetSyntheticTaskDetailResponseBodyTaskDetail : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSyntheticTaskDetailResponseBodyTaskDetail& obj) { 
      DARABONBA_PTR_TO_JSON(CommonParam, commonParam_);
      DARABONBA_PTR_TO_JSON(Download, download_);
      DARABONBA_PTR_TO_JSON(ExtendInterval, extendInterval_);
      DARABONBA_PTR_TO_JSON(IntervalTime, intervalTime_);
      DARABONBA_PTR_TO_JSON(IntervalType, intervalType_);
      DARABONBA_PTR_TO_JSON(IpType, ipType_);
      DARABONBA_PTR_TO_JSON(MonitorList, monitorList_);
      DARABONBA_PTR_TO_JSON(MonitorListString, monitorListString_);
      DARABONBA_PTR_TO_JSON(Nav, nav_);
      DARABONBA_PTR_TO_JSON(Net, net_);
      DARABONBA_PTR_TO_JSON(Protocol, protocol_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(TaskName, taskName_);
      DARABONBA_PTR_TO_JSON(TaskType, taskType_);
      DARABONBA_PTR_TO_JSON(Url, url_);
    };
    friend void from_json(const Darabonba::Json& j, GetSyntheticTaskDetailResponseBodyTaskDetail& obj) { 
      DARABONBA_PTR_FROM_JSON(CommonParam, commonParam_);
      DARABONBA_PTR_FROM_JSON(Download, download_);
      DARABONBA_PTR_FROM_JSON(ExtendInterval, extendInterval_);
      DARABONBA_PTR_FROM_JSON(IntervalTime, intervalTime_);
      DARABONBA_PTR_FROM_JSON(IntervalType, intervalType_);
      DARABONBA_PTR_FROM_JSON(IpType, ipType_);
      DARABONBA_PTR_FROM_JSON(MonitorList, monitorList_);
      DARABONBA_PTR_FROM_JSON(MonitorListString, monitorListString_);
      DARABONBA_PTR_FROM_JSON(Nav, nav_);
      DARABONBA_PTR_FROM_JSON(Net, net_);
      DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(TaskName, taskName_);
      DARABONBA_PTR_FROM_JSON(TaskType, taskType_);
      DARABONBA_PTR_FROM_JSON(Url, url_);
    };
    GetSyntheticTaskDetailResponseBodyTaskDetail() = default ;
    GetSyntheticTaskDetailResponseBodyTaskDetail(const GetSyntheticTaskDetailResponseBodyTaskDetail &) = default ;
    GetSyntheticTaskDetailResponseBodyTaskDetail(GetSyntheticTaskDetailResponseBodyTaskDetail &&) = default ;
    GetSyntheticTaskDetailResponseBodyTaskDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSyntheticTaskDetailResponseBodyTaskDetail() = default ;
    GetSyntheticTaskDetailResponseBodyTaskDetail& operator=(const GetSyntheticTaskDetailResponseBodyTaskDetail &) = default ;
    GetSyntheticTaskDetailResponseBodyTaskDetail& operator=(GetSyntheticTaskDetailResponseBodyTaskDetail &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->commonParam_ != nullptr
        && this->download_ != nullptr && this->extendInterval_ != nullptr && this->intervalTime_ != nullptr && this->intervalType_ != nullptr && this->ipType_ != nullptr
        && this->monitorList_ != nullptr && this->monitorListString_ != nullptr && this->nav_ != nullptr && this->net_ != nullptr && this->protocol_ != nullptr
        && this->taskId_ != nullptr && this->taskName_ != nullptr && this->taskType_ != nullptr && this->url_ != nullptr; };
    // commonParam Field Functions 
    bool hasCommonParam() const { return this->commonParam_ != nullptr;};
    void deleteCommonParam() { this->commonParam_ = nullptr;};
    inline const Models::GetSyntheticTaskDetailResponseBodyTaskDetailCommonParam & commonParam() const { DARABONBA_PTR_GET_CONST(commonParam_, Models::GetSyntheticTaskDetailResponseBodyTaskDetailCommonParam) };
    inline Models::GetSyntheticTaskDetailResponseBodyTaskDetailCommonParam commonParam() { DARABONBA_PTR_GET(commonParam_, Models::GetSyntheticTaskDetailResponseBodyTaskDetailCommonParam) };
    inline GetSyntheticTaskDetailResponseBodyTaskDetail& setCommonParam(const Models::GetSyntheticTaskDetailResponseBodyTaskDetailCommonParam & commonParam) { DARABONBA_PTR_SET_VALUE(commonParam_, commonParam) };
    inline GetSyntheticTaskDetailResponseBodyTaskDetail& setCommonParam(Models::GetSyntheticTaskDetailResponseBodyTaskDetailCommonParam && commonParam) { DARABONBA_PTR_SET_RVALUE(commonParam_, commonParam) };


    // download Field Functions 
    bool hasDownload() const { return this->download_ != nullptr;};
    void deleteDownload() { this->download_ = nullptr;};
    inline const Models::GetSyntheticTaskDetailResponseBodyTaskDetailDownload & download() const { DARABONBA_PTR_GET_CONST(download_, Models::GetSyntheticTaskDetailResponseBodyTaskDetailDownload) };
    inline Models::GetSyntheticTaskDetailResponseBodyTaskDetailDownload download() { DARABONBA_PTR_GET(download_, Models::GetSyntheticTaskDetailResponseBodyTaskDetailDownload) };
    inline GetSyntheticTaskDetailResponseBodyTaskDetail& setDownload(const Models::GetSyntheticTaskDetailResponseBodyTaskDetailDownload & download) { DARABONBA_PTR_SET_VALUE(download_, download) };
    inline GetSyntheticTaskDetailResponseBodyTaskDetail& setDownload(Models::GetSyntheticTaskDetailResponseBodyTaskDetailDownload && download) { DARABONBA_PTR_SET_RVALUE(download_, download) };


    // extendInterval Field Functions 
    bool hasExtendInterval() const { return this->extendInterval_ != nullptr;};
    void deleteExtendInterval() { this->extendInterval_ = nullptr;};
    inline const Models::GetSyntheticTaskDetailResponseBodyTaskDetailExtendInterval & extendInterval() const { DARABONBA_PTR_GET_CONST(extendInterval_, Models::GetSyntheticTaskDetailResponseBodyTaskDetailExtendInterval) };
    inline Models::GetSyntheticTaskDetailResponseBodyTaskDetailExtendInterval extendInterval() { DARABONBA_PTR_GET(extendInterval_, Models::GetSyntheticTaskDetailResponseBodyTaskDetailExtendInterval) };
    inline GetSyntheticTaskDetailResponseBodyTaskDetail& setExtendInterval(const Models::GetSyntheticTaskDetailResponseBodyTaskDetailExtendInterval & extendInterval) { DARABONBA_PTR_SET_VALUE(extendInterval_, extendInterval) };
    inline GetSyntheticTaskDetailResponseBodyTaskDetail& setExtendInterval(Models::GetSyntheticTaskDetailResponseBodyTaskDetailExtendInterval && extendInterval) { DARABONBA_PTR_SET_RVALUE(extendInterval_, extendInterval) };


    // intervalTime Field Functions 
    bool hasIntervalTime() const { return this->intervalTime_ != nullptr;};
    void deleteIntervalTime() { this->intervalTime_ = nullptr;};
    inline int64_t intervalTime() const { DARABONBA_PTR_GET_DEFAULT(intervalTime_, 0L) };
    inline GetSyntheticTaskDetailResponseBodyTaskDetail& setIntervalTime(int64_t intervalTime) { DARABONBA_PTR_SET_VALUE(intervalTime_, intervalTime) };


    // intervalType Field Functions 
    bool hasIntervalType() const { return this->intervalType_ != nullptr;};
    void deleteIntervalType() { this->intervalType_ = nullptr;};
    inline int64_t intervalType() const { DARABONBA_PTR_GET_DEFAULT(intervalType_, 0L) };
    inline GetSyntheticTaskDetailResponseBodyTaskDetail& setIntervalType(int64_t intervalType) { DARABONBA_PTR_SET_VALUE(intervalType_, intervalType) };


    // ipType Field Functions 
    bool hasIpType() const { return this->ipType_ != nullptr;};
    void deleteIpType() { this->ipType_ = nullptr;};
    inline int64_t ipType() const { DARABONBA_PTR_GET_DEFAULT(ipType_, 0L) };
    inline GetSyntheticTaskDetailResponseBodyTaskDetail& setIpType(int64_t ipType) { DARABONBA_PTR_SET_VALUE(ipType_, ipType) };


    // monitorList Field Functions 
    bool hasMonitorList() const { return this->monitorList_ != nullptr;};
    void deleteMonitorList() { this->monitorList_ = nullptr;};
    inline const vector<Models::GetSyntheticTaskDetailResponseBodyTaskDetailMonitorList> & monitorList() const { DARABONBA_PTR_GET_CONST(monitorList_, vector<Models::GetSyntheticTaskDetailResponseBodyTaskDetailMonitorList>) };
    inline vector<Models::GetSyntheticTaskDetailResponseBodyTaskDetailMonitorList> monitorList() { DARABONBA_PTR_GET(monitorList_, vector<Models::GetSyntheticTaskDetailResponseBodyTaskDetailMonitorList>) };
    inline GetSyntheticTaskDetailResponseBodyTaskDetail& setMonitorList(const vector<Models::GetSyntheticTaskDetailResponseBodyTaskDetailMonitorList> & monitorList) { DARABONBA_PTR_SET_VALUE(monitorList_, monitorList) };
    inline GetSyntheticTaskDetailResponseBodyTaskDetail& setMonitorList(vector<Models::GetSyntheticTaskDetailResponseBodyTaskDetailMonitorList> && monitorList) { DARABONBA_PTR_SET_RVALUE(monitorList_, monitorList) };


    // monitorListString Field Functions 
    bool hasMonitorListString() const { return this->monitorListString_ != nullptr;};
    void deleteMonitorListString() { this->monitorListString_ = nullptr;};
    inline string monitorListString() const { DARABONBA_PTR_GET_DEFAULT(monitorListString_, "") };
    inline GetSyntheticTaskDetailResponseBodyTaskDetail& setMonitorListString(string monitorListString) { DARABONBA_PTR_SET_VALUE(monitorListString_, monitorListString) };


    // nav Field Functions 
    bool hasNav() const { return this->nav_ != nullptr;};
    void deleteNav() { this->nav_ = nullptr;};
    inline const Models::GetSyntheticTaskDetailResponseBodyTaskDetailNav & nav() const { DARABONBA_PTR_GET_CONST(nav_, Models::GetSyntheticTaskDetailResponseBodyTaskDetailNav) };
    inline Models::GetSyntheticTaskDetailResponseBodyTaskDetailNav nav() { DARABONBA_PTR_GET(nav_, Models::GetSyntheticTaskDetailResponseBodyTaskDetailNav) };
    inline GetSyntheticTaskDetailResponseBodyTaskDetail& setNav(const Models::GetSyntheticTaskDetailResponseBodyTaskDetailNav & nav) { DARABONBA_PTR_SET_VALUE(nav_, nav) };
    inline GetSyntheticTaskDetailResponseBodyTaskDetail& setNav(Models::GetSyntheticTaskDetailResponseBodyTaskDetailNav && nav) { DARABONBA_PTR_SET_RVALUE(nav_, nav) };


    // net Field Functions 
    bool hasNet() const { return this->net_ != nullptr;};
    void deleteNet() { this->net_ = nullptr;};
    inline const Models::GetSyntheticTaskDetailResponseBodyTaskDetailNet & net() const { DARABONBA_PTR_GET_CONST(net_, Models::GetSyntheticTaskDetailResponseBodyTaskDetailNet) };
    inline Models::GetSyntheticTaskDetailResponseBodyTaskDetailNet net() { DARABONBA_PTR_GET(net_, Models::GetSyntheticTaskDetailResponseBodyTaskDetailNet) };
    inline GetSyntheticTaskDetailResponseBodyTaskDetail& setNet(const Models::GetSyntheticTaskDetailResponseBodyTaskDetailNet & net) { DARABONBA_PTR_SET_VALUE(net_, net) };
    inline GetSyntheticTaskDetailResponseBodyTaskDetail& setNet(Models::GetSyntheticTaskDetailResponseBodyTaskDetailNet && net) { DARABONBA_PTR_SET_RVALUE(net_, net) };


    // protocol Field Functions 
    bool hasProtocol() const { return this->protocol_ != nullptr;};
    void deleteProtocol() { this->protocol_ = nullptr;};
    inline const Models::GetSyntheticTaskDetailResponseBodyTaskDetailProtocol & protocol() const { DARABONBA_PTR_GET_CONST(protocol_, Models::GetSyntheticTaskDetailResponseBodyTaskDetailProtocol) };
    inline Models::GetSyntheticTaskDetailResponseBodyTaskDetailProtocol protocol() { DARABONBA_PTR_GET(protocol_, Models::GetSyntheticTaskDetailResponseBodyTaskDetailProtocol) };
    inline GetSyntheticTaskDetailResponseBodyTaskDetail& setProtocol(const Models::GetSyntheticTaskDetailResponseBodyTaskDetailProtocol & protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };
    inline GetSyntheticTaskDetailResponseBodyTaskDetail& setProtocol(Models::GetSyntheticTaskDetailResponseBodyTaskDetailProtocol && protocol) { DARABONBA_PTR_SET_RVALUE(protocol_, protocol) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline int64_t taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, 0L) };
    inline GetSyntheticTaskDetailResponseBodyTaskDetail& setTaskId(int64_t taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // taskName Field Functions 
    bool hasTaskName() const { return this->taskName_ != nullptr;};
    void deleteTaskName() { this->taskName_ = nullptr;};
    inline string taskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
    inline GetSyntheticTaskDetailResponseBodyTaskDetail& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


    // taskType Field Functions 
    bool hasTaskType() const { return this->taskType_ != nullptr;};
    void deleteTaskType() { this->taskType_ = nullptr;};
    inline int64_t taskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, 0L) };
    inline GetSyntheticTaskDetailResponseBodyTaskDetail& setTaskType(int64_t taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline GetSyntheticTaskDetailResponseBodyTaskDetail& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


  protected:
    // The list of common parameters.
    std::shared_ptr<Models::GetSyntheticTaskDetailResponseBodyTaskDetailCommonParam> commonParam_ = nullptr;
    // The file download task.
    std::shared_ptr<Models::GetSyntheticTaskDetailResponseBodyTaskDetailDownload> download_ = nullptr;
    // The frequency.
    std::shared_ptr<Models::GetSyntheticTaskDetailResponseBodyTaskDetailExtendInterval> extendInterval_ = nullptr;
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
    std::shared_ptr<int64_t> intervalTime_ = nullptr;
    // The interval type. Valid values:
    // 
    // *   0: daily
    // *   1: custom frequency
    std::shared_ptr<int64_t> intervalType_ = nullptr;
    // The IP version. Valid values:
    // 
    // *   0: A version is automatically selected.
    // *   1: IPv4.
    // *   2: IPv6.
    std::shared_ptr<int64_t> ipType_ = nullptr;
    // The detection points.
    std::shared_ptr<vector<Models::GetSyntheticTaskDetailResponseBodyTaskDetailMonitorList>> monitorList_ = nullptr;
    // The detection points.
    std::shared_ptr<string> monitorListString_ = nullptr;
    // The browser test task.
    std::shared_ptr<Models::GetSyntheticTaskDetailResponseBodyTaskDetailNav> nav_ = nullptr;
    // The network synthetic monitoring task.
    std::shared_ptr<Models::GetSyntheticTaskDetailResponseBodyTaskDetailNet> net_ = nullptr;
    // The synthetic monitoring task of the API performance type.
    std::shared_ptr<Models::GetSyntheticTaskDetailResponseBodyTaskDetailProtocol> protocol_ = nullptr;
    // The ID of the synthetic monitoring task.
    std::shared_ptr<int64_t> taskId_ = nullptr;
    // The name of the task.
    std::shared_ptr<string> taskName_ = nullptr;
    // The type of the task. Valid values:
    // 
    // 1.  3: web page performance - IE
    // 2.  34: web page performance - Chrome
    // 3.  0: network quality
    // 4.  40: file download
    // 5.  7: API performance
    std::shared_ptr<int64_t> taskType_ = nullptr;
    // The URL for synthetic monitoring.
    std::shared_ptr<string> url_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
