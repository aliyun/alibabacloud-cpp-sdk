// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTVIRUSSCANTASKSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTVIRUSSCANTASKSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class ListVirusScanTasksRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListVirusScanTasksRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(PerformanceModes, performanceModes_);
      DARABONBA_PTR_TO_JSON(ScanModes, scanModes_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TaskIds, taskIds_);
      DARABONBA_PTR_TO_JSON(UserGroupId, userGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, ListVirusScanTasksRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(PerformanceModes, performanceModes_);
      DARABONBA_PTR_FROM_JSON(ScanModes, scanModes_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TaskIds, taskIds_);
      DARABONBA_PTR_FROM_JSON(UserGroupId, userGroupId_);
    };
    ListVirusScanTasksRequest() = default ;
    ListVirusScanTasksRequest(const ListVirusScanTasksRequest &) = default ;
    ListVirusScanTasksRequest(ListVirusScanTasksRequest &&) = default ;
    ListVirusScanTasksRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListVirusScanTasksRequest() = default ;
    ListVirusScanTasksRequest& operator=(const ListVirusScanTasksRequest &) = default ;
    ListVirusScanTasksRequest& operator=(ListVirusScanTasksRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->endTime_ == nullptr && this->pageSize_ == nullptr && this->performanceModes_ == nullptr && this->scanModes_ == nullptr && this->startTime_ == nullptr
        && this->status_ == nullptr && this->taskIds_ == nullptr && this->userGroupId_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int64_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0L) };
    inline ListVirusScanTasksRequest& setCurrentPage(int64_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline ListVirusScanTasksRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListVirusScanTasksRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // performanceModes Field Functions 
    bool hasPerformanceModes() const { return this->performanceModes_ != nullptr;};
    void deletePerformanceModes() { this->performanceModes_ = nullptr;};
    inline const vector<string> & getPerformanceModes() const { DARABONBA_PTR_GET_CONST(performanceModes_, vector<string>) };
    inline vector<string> getPerformanceModes() { DARABONBA_PTR_GET(performanceModes_, vector<string>) };
    inline ListVirusScanTasksRequest& setPerformanceModes(const vector<string> & performanceModes) { DARABONBA_PTR_SET_VALUE(performanceModes_, performanceModes) };
    inline ListVirusScanTasksRequest& setPerformanceModes(vector<string> && performanceModes) { DARABONBA_PTR_SET_RVALUE(performanceModes_, performanceModes) };


    // scanModes Field Functions 
    bool hasScanModes() const { return this->scanModes_ != nullptr;};
    void deleteScanModes() { this->scanModes_ = nullptr;};
    inline const vector<string> & getScanModes() const { DARABONBA_PTR_GET_CONST(scanModes_, vector<string>) };
    inline vector<string> getScanModes() { DARABONBA_PTR_GET(scanModes_, vector<string>) };
    inline ListVirusScanTasksRequest& setScanModes(const vector<string> & scanModes) { DARABONBA_PTR_SET_VALUE(scanModes_, scanModes) };
    inline ListVirusScanTasksRequest& setScanModes(vector<string> && scanModes) { DARABONBA_PTR_SET_RVALUE(scanModes_, scanModes) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline ListVirusScanTasksRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline ListVirusScanTasksRequest& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // taskIds Field Functions 
    bool hasTaskIds() const { return this->taskIds_ != nullptr;};
    void deleteTaskIds() { this->taskIds_ = nullptr;};
    inline const vector<string> & getTaskIds() const { DARABONBA_PTR_GET_CONST(taskIds_, vector<string>) };
    inline vector<string> getTaskIds() { DARABONBA_PTR_GET(taskIds_, vector<string>) };
    inline ListVirusScanTasksRequest& setTaskIds(const vector<string> & taskIds) { DARABONBA_PTR_SET_VALUE(taskIds_, taskIds) };
    inline ListVirusScanTasksRequest& setTaskIds(vector<string> && taskIds) { DARABONBA_PTR_SET_RVALUE(taskIds_, taskIds) };


    // userGroupId Field Functions 
    bool hasUserGroupId() const { return this->userGroupId_ != nullptr;};
    void deleteUserGroupId() { this->userGroupId_ = nullptr;};
    inline string getUserGroupId() const { DARABONBA_PTR_GET_DEFAULT(userGroupId_, "") };
    inline ListVirusScanTasksRequest& setUserGroupId(string userGroupId) { DARABONBA_PTR_SET_VALUE(userGroupId_, userGroupId) };


  protected:
    // This parameter is required.
    shared_ptr<int64_t> currentPage_ {};
    shared_ptr<int64_t> endTime_ {};
    // This parameter is required.
    shared_ptr<int64_t> pageSize_ {};
    shared_ptr<vector<string>> performanceModes_ {};
    shared_ptr<vector<string>> scanModes_ {};
    shared_ptr<int64_t> startTime_ {};
    shared_ptr<int32_t> status_ {};
    shared_ptr<vector<string>> taskIds_ {};
    shared_ptr<string> userGroupId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
