// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTVIRUSSCANTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTVIRUSSCANTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListVirusScanTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListVirusScanTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(InternetIp, internetIp_);
      DARABONBA_PTR_TO_JSON(IntranetIp, intranetIp_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(MachineName, machineName_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RootTask, rootTask_);
      DARABONBA_PTR_TO_JSON(RootTaskId, rootTaskId_);
      DARABONBA_PTR_TO_JSON(ScanType, scanType_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(StatusList, statusList_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, ListVirusScanTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(InternetIp, internetIp_);
      DARABONBA_PTR_FROM_JSON(IntranetIp, intranetIp_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(MachineName, machineName_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RootTask, rootTask_);
      DARABONBA_PTR_FROM_JSON(RootTaskId, rootTaskId_);
      DARABONBA_PTR_FROM_JSON(ScanType, scanType_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(StatusList, statusList_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    ListVirusScanTaskRequest() = default ;
    ListVirusScanTaskRequest(const ListVirusScanTaskRequest &) = default ;
    ListVirusScanTaskRequest(ListVirusScanTaskRequest &&) = default ;
    ListVirusScanTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListVirusScanTaskRequest() = default ;
    ListVirusScanTaskRequest& operator=(const ListVirusScanTaskRequest &) = default ;
    ListVirusScanTaskRequest& operator=(ListVirusScanTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->endTime_ == nullptr && this->internetIp_ == nullptr && this->intranetIp_ == nullptr && this->lang_ == nullptr && this->machineName_ == nullptr
        && this->pageSize_ == nullptr && this->rootTask_ == nullptr && this->rootTaskId_ == nullptr && this->scanType_ == nullptr && this->startTime_ == nullptr
        && this->status_ == nullptr && this->statusList_ == nullptr && this->taskId_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline ListVirusScanTaskRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline ListVirusScanTaskRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // internetIp Field Functions 
    bool hasInternetIp() const { return this->internetIp_ != nullptr;};
    void deleteInternetIp() { this->internetIp_ = nullptr;};
    inline string getInternetIp() const { DARABONBA_PTR_GET_DEFAULT(internetIp_, "") };
    inline ListVirusScanTaskRequest& setInternetIp(string internetIp) { DARABONBA_PTR_SET_VALUE(internetIp_, internetIp) };


    // intranetIp Field Functions 
    bool hasIntranetIp() const { return this->intranetIp_ != nullptr;};
    void deleteIntranetIp() { this->intranetIp_ = nullptr;};
    inline string getIntranetIp() const { DARABONBA_PTR_GET_DEFAULT(intranetIp_, "") };
    inline ListVirusScanTaskRequest& setIntranetIp(string intranetIp) { DARABONBA_PTR_SET_VALUE(intranetIp_, intranetIp) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline ListVirusScanTaskRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // machineName Field Functions 
    bool hasMachineName() const { return this->machineName_ != nullptr;};
    void deleteMachineName() { this->machineName_ = nullptr;};
    inline string getMachineName() const { DARABONBA_PTR_GET_DEFAULT(machineName_, "") };
    inline ListVirusScanTaskRequest& setMachineName(string machineName) { DARABONBA_PTR_SET_VALUE(machineName_, machineName) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListVirusScanTaskRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // rootTask Field Functions 
    bool hasRootTask() const { return this->rootTask_ != nullptr;};
    void deleteRootTask() { this->rootTask_ = nullptr;};
    inline bool getRootTask() const { DARABONBA_PTR_GET_DEFAULT(rootTask_, false) };
    inline ListVirusScanTaskRequest& setRootTask(bool rootTask) { DARABONBA_PTR_SET_VALUE(rootTask_, rootTask) };


    // rootTaskId Field Functions 
    bool hasRootTaskId() const { return this->rootTaskId_ != nullptr;};
    void deleteRootTaskId() { this->rootTaskId_ = nullptr;};
    inline string getRootTaskId() const { DARABONBA_PTR_GET_DEFAULT(rootTaskId_, "") };
    inline ListVirusScanTaskRequest& setRootTaskId(string rootTaskId) { DARABONBA_PTR_SET_VALUE(rootTaskId_, rootTaskId) };


    // scanType Field Functions 
    bool hasScanType() const { return this->scanType_ != nullptr;};
    void deleteScanType() { this->scanType_ = nullptr;};
    inline string getScanType() const { DARABONBA_PTR_GET_DEFAULT(scanType_, "") };
    inline ListVirusScanTaskRequest& setScanType(string scanType) { DARABONBA_PTR_SET_VALUE(scanType_, scanType) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline ListVirusScanTaskRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline ListVirusScanTaskRequest& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // statusList Field Functions 
    bool hasStatusList() const { return this->statusList_ != nullptr;};
    void deleteStatusList() { this->statusList_ = nullptr;};
    inline const vector<int32_t> & getStatusList() const { DARABONBA_PTR_GET_CONST(statusList_, vector<int32_t>) };
    inline vector<int32_t> getStatusList() { DARABONBA_PTR_GET(statusList_, vector<int32_t>) };
    inline ListVirusScanTaskRequest& setStatusList(const vector<int32_t> & statusList) { DARABONBA_PTR_SET_VALUE(statusList_, statusList) };
    inline ListVirusScanTaskRequest& setStatusList(vector<int32_t> && statusList) { DARABONBA_PTR_SET_RVALUE(statusList_, statusList) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline ListVirusScanTaskRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    // The page number. Default value: **1**.
    shared_ptr<int32_t> currentPage_ {};
    // The timestamp when the virus scan task ended. Unit: milliseconds.
    shared_ptr<int64_t> endTime_ {};
    // The public IP address of the server.
    shared_ptr<string> internetIp_ {};
    // The private IP address of the server.
    shared_ptr<string> intranetIp_ {};
    // The language of the content within the request and response. Default value: **zh**. Valid values:
    // 
    // *   **zh**: Chinese
    // *   **en**: English
    shared_ptr<string> lang_ {};
    // The name of the server.
    shared_ptr<string> machineName_ {};
    // The number of entries per page. Default value: **20**.
    shared_ptr<int32_t> pageSize_ {};
    // Specifies whether the virus scan task is the root task.
    shared_ptr<bool> rootTask_ {};
    // The ID of the root task.
    // 
    // >  You can call the [GetVirusScanLatestTaskStatistic](~~GetVirusScanLatestTaskStatistic~~) operation to query the ID.
    shared_ptr<string> rootTaskId_ {};
    // The type of the virus scan task. Valid values:
    // 
    // *   **system**: automatic scan task
    // *   **user**: custom scan task
    shared_ptr<string> scanType_ {};
    // The timestamp when the virus scan task started. Unit: milliseconds.
    shared_ptr<int64_t> startTime_ {};
    // The status of the virus scan task. Valid values:
    // 
    // *   **1**: running
    // *   **2**: complete
    // *   **3**: failed
    // *   **4**: timed out
    shared_ptr<int32_t> status_ {};
    // The statuses of virus scan tasks.
    shared_ptr<vector<int32_t>> statusList_ {};
    // The ID of the virus scan task.
    // 
    // >  You can call the [ListVirusScanTask](~~ListVirusScanTask~~) operation to query the ID.
    shared_ptr<string> taskId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
