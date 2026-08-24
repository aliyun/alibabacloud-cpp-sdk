// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTVULSCANTASKSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTVULSCANTASKSREQUEST_HPP_
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
  class ListVulScanTasksRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListVulScanTasksRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(MatchMode, matchMode_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ScheduledStrategyId, scheduledStrategyId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TaskIds, taskIds_);
      DARABONBA_PTR_TO_JSON(TaskName, taskName_);
      DARABONBA_PTR_TO_JSON(TaskType, taskType_);
      DARABONBA_PTR_TO_JSON(UserGroupId, userGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, ListVulScanTasksRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(MatchMode, matchMode_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ScheduledStrategyId, scheduledStrategyId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TaskIds, taskIds_);
      DARABONBA_PTR_FROM_JSON(TaskName, taskName_);
      DARABONBA_PTR_FROM_JSON(TaskType, taskType_);
      DARABONBA_PTR_FROM_JSON(UserGroupId, userGroupId_);
    };
    ListVulScanTasksRequest() = default ;
    ListVulScanTasksRequest(const ListVulScanTasksRequest &) = default ;
    ListVulScanTasksRequest(ListVulScanTasksRequest &&) = default ;
    ListVulScanTasksRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListVulScanTasksRequest() = default ;
    ListVulScanTasksRequest& operator=(const ListVulScanTasksRequest &) = default ;
    ListVulScanTasksRequest& operator=(ListVulScanTasksRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->matchMode_ == nullptr && this->pageSize_ == nullptr && this->scheduledStrategyId_ == nullptr && this->status_ == nullptr && this->taskIds_ == nullptr
        && this->taskName_ == nullptr && this->taskType_ == nullptr && this->userGroupId_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int64_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0L) };
    inline ListVulScanTasksRequest& setCurrentPage(int64_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // matchMode Field Functions 
    bool hasMatchMode() const { return this->matchMode_ != nullptr;};
    void deleteMatchMode() { this->matchMode_ = nullptr;};
    inline string getMatchMode() const { DARABONBA_PTR_GET_DEFAULT(matchMode_, "") };
    inline ListVulScanTasksRequest& setMatchMode(string matchMode) { DARABONBA_PTR_SET_VALUE(matchMode_, matchMode) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListVulScanTasksRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // scheduledStrategyId Field Functions 
    bool hasScheduledStrategyId() const { return this->scheduledStrategyId_ != nullptr;};
    void deleteScheduledStrategyId() { this->scheduledStrategyId_ = nullptr;};
    inline string getScheduledStrategyId() const { DARABONBA_PTR_GET_DEFAULT(scheduledStrategyId_, "") };
    inline ListVulScanTasksRequest& setScheduledStrategyId(string scheduledStrategyId) { DARABONBA_PTR_SET_VALUE(scheduledStrategyId_, scheduledStrategyId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListVulScanTasksRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // taskIds Field Functions 
    bool hasTaskIds() const { return this->taskIds_ != nullptr;};
    void deleteTaskIds() { this->taskIds_ = nullptr;};
    inline const vector<string> & getTaskIds() const { DARABONBA_PTR_GET_CONST(taskIds_, vector<string>) };
    inline vector<string> getTaskIds() { DARABONBA_PTR_GET(taskIds_, vector<string>) };
    inline ListVulScanTasksRequest& setTaskIds(const vector<string> & taskIds) { DARABONBA_PTR_SET_VALUE(taskIds_, taskIds) };
    inline ListVulScanTasksRequest& setTaskIds(vector<string> && taskIds) { DARABONBA_PTR_SET_RVALUE(taskIds_, taskIds) };


    // taskName Field Functions 
    bool hasTaskName() const { return this->taskName_ != nullptr;};
    void deleteTaskName() { this->taskName_ = nullptr;};
    inline string getTaskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
    inline ListVulScanTasksRequest& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


    // taskType Field Functions 
    bool hasTaskType() const { return this->taskType_ != nullptr;};
    void deleteTaskType() { this->taskType_ = nullptr;};
    inline string getTaskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
    inline ListVulScanTasksRequest& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


    // userGroupId Field Functions 
    bool hasUserGroupId() const { return this->userGroupId_ != nullptr;};
    void deleteUserGroupId() { this->userGroupId_ = nullptr;};
    inline string getUserGroupId() const { DARABONBA_PTR_GET_DEFAULT(userGroupId_, "") };
    inline ListVulScanTasksRequest& setUserGroupId(string userGroupId) { DARABONBA_PTR_SET_VALUE(userGroupId_, userGroupId) };


  protected:
    // The page number of the current page in a paged query. Valid values: 1 to 10000.
    // 
    // This parameter is required.
    shared_ptr<int64_t> currentPage_ {};
    // Filters by the matching mode of the effective scope. Valid values:
    // - **UserGroupAll**: applies to all users under the current Alibaba Cloud account.
    // - **UserGroupNormal**: applies only to users within specified user groups.
    shared_ptr<string> matchMode_ {};
    // The number of entries per page in a paged query. Valid values: 1 to 1000.
    // 
    // This parameter is required.
    shared_ptr<int64_t> pageSize_ {};
    // The ID of the vulnerability scheduled scan policy. This parameter is used to filter tasks triggered by the specified policy. Valid values are obtained from:
    // - [ListVulScanScheduledStrategies](~~ListVulScanScheduledStrategies~~): lists vulnerability scheduled scan policies.
    // - [CreateVulScanScheduledStrategy](~~CreateVulScanScheduledStrategy~~): creates a vulnerability scheduled scan policy.
    shared_ptr<string> scheduledStrategyId_ {};
    // Filters by task status. Valid values:
    // - **Running**: the task is in progress and still within the validity period.
    // - **Expired**: the task has expired and exceeded the validity period.
    // - **Canceled**: the task has been canceled.
    shared_ptr<string> status_ {};
    // The vulnerability scanning task IDs used for filtering. A maximum of 100 IDs can be specified. Duplicate IDs are not allowed.
    shared_ptr<vector<string>> taskIds_ {};
    // The task name. Fuzzy match is supported. The name can be up to 128 characters in length.
    shared_ptr<string> taskName_ {};
    // Filters by task type. Valid values:
    // - **Instant**: an instant task created by CreateVulScanTask.
    // - **Scheduled**: a scheduled task automatically created by a vulnerability scheduled scan policy on a periodic basis.
    shared_ptr<string> taskType_ {};
    // The user group ID. This parameter is used to filter records whose effective scope includes the specified user group. Valid values are obtained from:
    // - [ListUserGroups](~~ListUserGroups~~): lists user groups.
    shared_ptr<string> userGroupId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
