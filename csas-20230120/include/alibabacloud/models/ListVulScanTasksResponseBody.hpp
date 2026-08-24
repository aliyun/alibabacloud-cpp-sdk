// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTVULSCANTASKSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTVULSCANTASKSRESPONSEBODY_HPP_
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
  class ListVulScanTasksResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListVulScanTasksResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Tasks, tasks_);
      DARABONBA_PTR_TO_JSON(TotalNum, totalNum_);
    };
    friend void from_json(const Darabonba::Json& j, ListVulScanTasksResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Tasks, tasks_);
      DARABONBA_PTR_FROM_JSON(TotalNum, totalNum_);
    };
    ListVulScanTasksResponseBody() = default ;
    ListVulScanTasksResponseBody(const ListVulScanTasksResponseBody &) = default ;
    ListVulScanTasksResponseBody(ListVulScanTasksResponseBody &&) = default ;
    ListVulScanTasksResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListVulScanTasksResponseBody() = default ;
    ListVulScanTasksResponseBody& operator=(const ListVulScanTasksResponseBody &) = default ;
    ListVulScanTasksResponseBody& operator=(ListVulScanTasksResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Tasks : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tasks& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(CustomMatchGroup, customMatchGroup_);
        DARABONBA_PTR_TO_JSON(EndTimestamp, endTimestamp_);
        DARABONBA_PTR_TO_JSON(MatchMode, matchMode_);
        DARABONBA_PTR_TO_JSON(MatchTargetIds, matchTargetIds_);
        DARABONBA_PTR_TO_JSON(ScheduledStrategyId, scheduledStrategyId_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(TargetDeviceCount, targetDeviceCount_);
        DARABONBA_PTR_TO_JSON(TaskDescription, taskDescription_);
        DARABONBA_PTR_TO_JSON(TaskId, taskId_);
        DARABONBA_PTR_TO_JSON(TaskName, taskName_);
        DARABONBA_PTR_TO_JSON(TaskType, taskType_);
        DARABONBA_PTR_TO_JSON(VulCount, vulCount_);
        DARABONBA_PTR_TO_JSON(Whitelist, whitelist_);
      };
      friend void from_json(const Darabonba::Json& j, Tasks& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(CustomMatchGroup, customMatchGroup_);
        DARABONBA_PTR_FROM_JSON(EndTimestamp, endTimestamp_);
        DARABONBA_PTR_FROM_JSON(MatchMode, matchMode_);
        DARABONBA_PTR_FROM_JSON(MatchTargetIds, matchTargetIds_);
        DARABONBA_PTR_FROM_JSON(ScheduledStrategyId, scheduledStrategyId_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(TargetDeviceCount, targetDeviceCount_);
        DARABONBA_PTR_FROM_JSON(TaskDescription, taskDescription_);
        DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
        DARABONBA_PTR_FROM_JSON(TaskName, taskName_);
        DARABONBA_PTR_FROM_JSON(TaskType, taskType_);
        DARABONBA_PTR_FROM_JSON(VulCount, vulCount_);
        DARABONBA_PTR_FROM_JSON(Whitelist, whitelist_);
      };
      Tasks() = default ;
      Tasks(const Tasks &) = default ;
      Tasks(Tasks &&) = default ;
      Tasks(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Tasks() = default ;
      Tasks& operator=(const Tasks &) = default ;
      Tasks& operator=(Tasks &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class TargetDeviceCount : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const TargetDeviceCount& obj) { 
          DARABONBA_PTR_TO_JSON(AckCount, ackCount_);
          DARABONBA_PTR_TO_JSON(FailCount, failCount_);
          DARABONBA_PTR_TO_JSON(StartCount, startCount_);
          DARABONBA_PTR_TO_JSON(SuccessCount, successCount_);
        };
        friend void from_json(const Darabonba::Json& j, TargetDeviceCount& obj) { 
          DARABONBA_PTR_FROM_JSON(AckCount, ackCount_);
          DARABONBA_PTR_FROM_JSON(FailCount, failCount_);
          DARABONBA_PTR_FROM_JSON(StartCount, startCount_);
          DARABONBA_PTR_FROM_JSON(SuccessCount, successCount_);
        };
        TargetDeviceCount() = default ;
        TargetDeviceCount(const TargetDeviceCount &) = default ;
        TargetDeviceCount(TargetDeviceCount &&) = default ;
        TargetDeviceCount(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~TargetDeviceCount() = default ;
        TargetDeviceCount& operator=(const TargetDeviceCount &) = default ;
        TargetDeviceCount& operator=(TargetDeviceCount &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->ackCount_ == nullptr
        && this->failCount_ == nullptr && this->startCount_ == nullptr && this->successCount_ == nullptr; };
        // ackCount Field Functions 
        bool hasAckCount() const { return this->ackCount_ != nullptr;};
        void deleteAckCount() { this->ackCount_ = nullptr;};
        inline int64_t getAckCount() const { DARABONBA_PTR_GET_DEFAULT(ackCount_, 0L) };
        inline TargetDeviceCount& setAckCount(int64_t ackCount) { DARABONBA_PTR_SET_VALUE(ackCount_, ackCount) };


        // failCount Field Functions 
        bool hasFailCount() const { return this->failCount_ != nullptr;};
        void deleteFailCount() { this->failCount_ = nullptr;};
        inline int64_t getFailCount() const { DARABONBA_PTR_GET_DEFAULT(failCount_, 0L) };
        inline TargetDeviceCount& setFailCount(int64_t failCount) { DARABONBA_PTR_SET_VALUE(failCount_, failCount) };


        // startCount Field Functions 
        bool hasStartCount() const { return this->startCount_ != nullptr;};
        void deleteStartCount() { this->startCount_ = nullptr;};
        inline int64_t getStartCount() const { DARABONBA_PTR_GET_DEFAULT(startCount_, 0L) };
        inline TargetDeviceCount& setStartCount(int64_t startCount) { DARABONBA_PTR_SET_VALUE(startCount_, startCount) };


        // successCount Field Functions 
        bool hasSuccessCount() const { return this->successCount_ != nullptr;};
        void deleteSuccessCount() { this->successCount_ = nullptr;};
        inline int64_t getSuccessCount() const { DARABONBA_PTR_GET_DEFAULT(successCount_, 0L) };
        inline TargetDeviceCount& setSuccessCount(int64_t successCount) { DARABONBA_PTR_SET_VALUE(successCount_, successCount) };


      protected:
        // The number of user endpoint devices that have acknowledged receipt of this task.
        shared_ptr<int64_t> ackCount_ {};
        // The number of user endpoint devices on which the scan failed.
        shared_ptr<int64_t> failCount_ {};
        // The number of user endpoint devices currently executing the scan. This value is calculated by subtracting SuccessCount and FailCount from AckCount.
        shared_ptr<int64_t> startCount_ {};
        // The number of user endpoint devices on which the scan succeeded.
        shared_ptr<int64_t> successCount_ {};
      };

      class CustomMatchGroup : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CustomMatchGroup& obj) { 
          DARABONBA_PTR_TO_JSON(Group, group_);
          DARABONBA_PTR_TO_JSON(IdpId, idpId_);
        };
        friend void from_json(const Darabonba::Json& j, CustomMatchGroup& obj) { 
          DARABONBA_PTR_FROM_JSON(Group, group_);
          DARABONBA_PTR_FROM_JSON(IdpId, idpId_);
        };
        CustomMatchGroup() = default ;
        CustomMatchGroup(const CustomMatchGroup &) = default ;
        CustomMatchGroup(CustomMatchGroup &&) = default ;
        CustomMatchGroup(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~CustomMatchGroup() = default ;
        CustomMatchGroup& operator=(const CustomMatchGroup &) = default ;
        CustomMatchGroup& operator=(CustomMatchGroup &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->group_ == nullptr
        && this->idpId_ == nullptr; };
        // group Field Functions 
        bool hasGroup() const { return this->group_ != nullptr;};
        void deleteGroup() { this->group_ = nullptr;};
        inline const vector<string> & getGroup() const { DARABONBA_PTR_GET_CONST(group_, vector<string>) };
        inline vector<string> getGroup() { DARABONBA_PTR_GET(group_, vector<string>) };
        inline CustomMatchGroup& setGroup(const vector<string> & group) { DARABONBA_PTR_SET_VALUE(group_, group) };
        inline CustomMatchGroup& setGroup(vector<string> && group) { DARABONBA_PTR_SET_RVALUE(group_, group) };


        // idpId Field Functions 
        bool hasIdpId() const { return this->idpId_ != nullptr;};
        void deleteIdpId() { this->idpId_ = nullptr;};
        inline string getIdpId() const { DARABONBA_PTR_GET_DEFAULT(idpId_, "") };
        inline CustomMatchGroup& setIdpId(string idpId) { DARABONBA_PTR_SET_VALUE(idpId_, idpId) };


      protected:
        // The collection of organizational structure nodes.
        shared_ptr<vector<string>> group_ {};
        // The identity provider ID.
        shared_ptr<string> idpId_ {};
      };

      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->customMatchGroup_ == nullptr && this->endTimestamp_ == nullptr && this->matchMode_ == nullptr && this->matchTargetIds_ == nullptr && this->scheduledStrategyId_ == nullptr
        && this->status_ == nullptr && this->targetDeviceCount_ == nullptr && this->taskDescription_ == nullptr && this->taskId_ == nullptr && this->taskName_ == nullptr
        && this->taskType_ == nullptr && this->vulCount_ == nullptr && this->whitelist_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
      inline Tasks& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // customMatchGroup Field Functions 
      bool hasCustomMatchGroup() const { return this->customMatchGroup_ != nullptr;};
      void deleteCustomMatchGroup() { this->customMatchGroup_ = nullptr;};
      inline const vector<Tasks::CustomMatchGroup> & getCustomMatchGroup() const { DARABONBA_PTR_GET_CONST(customMatchGroup_, vector<Tasks::CustomMatchGroup>) };
      inline vector<Tasks::CustomMatchGroup> getCustomMatchGroup() { DARABONBA_PTR_GET(customMatchGroup_, vector<Tasks::CustomMatchGroup>) };
      inline Tasks& setCustomMatchGroup(const vector<Tasks::CustomMatchGroup> & customMatchGroup) { DARABONBA_PTR_SET_VALUE(customMatchGroup_, customMatchGroup) };
      inline Tasks& setCustomMatchGroup(vector<Tasks::CustomMatchGroup> && customMatchGroup) { DARABONBA_PTR_SET_RVALUE(customMatchGroup_, customMatchGroup) };


      // endTimestamp Field Functions 
      bool hasEndTimestamp() const { return this->endTimestamp_ != nullptr;};
      void deleteEndTimestamp() { this->endTimestamp_ = nullptr;};
      inline int64_t getEndTimestamp() const { DARABONBA_PTR_GET_DEFAULT(endTimestamp_, 0L) };
      inline Tasks& setEndTimestamp(int64_t endTimestamp) { DARABONBA_PTR_SET_VALUE(endTimestamp_, endTimestamp) };


      // matchMode Field Functions 
      bool hasMatchMode() const { return this->matchMode_ != nullptr;};
      void deleteMatchMode() { this->matchMode_ = nullptr;};
      inline string getMatchMode() const { DARABONBA_PTR_GET_DEFAULT(matchMode_, "") };
      inline Tasks& setMatchMode(string matchMode) { DARABONBA_PTR_SET_VALUE(matchMode_, matchMode) };


      // matchTargetIds Field Functions 
      bool hasMatchTargetIds() const { return this->matchTargetIds_ != nullptr;};
      void deleteMatchTargetIds() { this->matchTargetIds_ = nullptr;};
      inline const vector<string> & getMatchTargetIds() const { DARABONBA_PTR_GET_CONST(matchTargetIds_, vector<string>) };
      inline vector<string> getMatchTargetIds() { DARABONBA_PTR_GET(matchTargetIds_, vector<string>) };
      inline Tasks& setMatchTargetIds(const vector<string> & matchTargetIds) { DARABONBA_PTR_SET_VALUE(matchTargetIds_, matchTargetIds) };
      inline Tasks& setMatchTargetIds(vector<string> && matchTargetIds) { DARABONBA_PTR_SET_RVALUE(matchTargetIds_, matchTargetIds) };


      // scheduledStrategyId Field Functions 
      bool hasScheduledStrategyId() const { return this->scheduledStrategyId_ != nullptr;};
      void deleteScheduledStrategyId() { this->scheduledStrategyId_ = nullptr;};
      inline string getScheduledStrategyId() const { DARABONBA_PTR_GET_DEFAULT(scheduledStrategyId_, "") };
      inline Tasks& setScheduledStrategyId(string scheduledStrategyId) { DARABONBA_PTR_SET_VALUE(scheduledStrategyId_, scheduledStrategyId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Tasks& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // targetDeviceCount Field Functions 
      bool hasTargetDeviceCount() const { return this->targetDeviceCount_ != nullptr;};
      void deleteTargetDeviceCount() { this->targetDeviceCount_ = nullptr;};
      inline const Tasks::TargetDeviceCount & getTargetDeviceCount() const { DARABONBA_PTR_GET_CONST(targetDeviceCount_, Tasks::TargetDeviceCount) };
      inline Tasks::TargetDeviceCount getTargetDeviceCount() { DARABONBA_PTR_GET(targetDeviceCount_, Tasks::TargetDeviceCount) };
      inline Tasks& setTargetDeviceCount(const Tasks::TargetDeviceCount & targetDeviceCount) { DARABONBA_PTR_SET_VALUE(targetDeviceCount_, targetDeviceCount) };
      inline Tasks& setTargetDeviceCount(Tasks::TargetDeviceCount && targetDeviceCount) { DARABONBA_PTR_SET_RVALUE(targetDeviceCount_, targetDeviceCount) };


      // taskDescription Field Functions 
      bool hasTaskDescription() const { return this->taskDescription_ != nullptr;};
      void deleteTaskDescription() { this->taskDescription_ = nullptr;};
      inline string getTaskDescription() const { DARABONBA_PTR_GET_DEFAULT(taskDescription_, "") };
      inline Tasks& setTaskDescription(string taskDescription) { DARABONBA_PTR_SET_VALUE(taskDescription_, taskDescription) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
      inline Tasks& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


      // taskName Field Functions 
      bool hasTaskName() const { return this->taskName_ != nullptr;};
      void deleteTaskName() { this->taskName_ = nullptr;};
      inline string getTaskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
      inline Tasks& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


      // taskType Field Functions 
      bool hasTaskType() const { return this->taskType_ != nullptr;};
      void deleteTaskType() { this->taskType_ = nullptr;};
      inline string getTaskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
      inline Tasks& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


      // vulCount Field Functions 
      bool hasVulCount() const { return this->vulCount_ != nullptr;};
      void deleteVulCount() { this->vulCount_ = nullptr;};
      inline int64_t getVulCount() const { DARABONBA_PTR_GET_DEFAULT(vulCount_, 0L) };
      inline Tasks& setVulCount(int64_t vulCount) { DARABONBA_PTR_SET_VALUE(vulCount_, vulCount) };


      // whitelist Field Functions 
      bool hasWhitelist() const { return this->whitelist_ != nullptr;};
      void deleteWhitelist() { this->whitelist_ = nullptr;};
      inline const vector<string> & getWhitelist() const { DARABONBA_PTR_GET_CONST(whitelist_, vector<string>) };
      inline vector<string> getWhitelist() { DARABONBA_PTR_GET(whitelist_, vector<string>) };
      inline Tasks& setWhitelist(const vector<string> & whitelist) { DARABONBA_PTR_SET_VALUE(whitelist_, whitelist) };
      inline Tasks& setWhitelist(vector<string> && whitelist) { DARABONBA_PTR_SET_RVALUE(whitelist_, whitelist) };


    protected:
      // The task creation time, in seconds-level UNIX timestamp.
      shared_ptr<int64_t> createTime_ {};
      // The effective scope specified by organizational structure. An empty list is returned if no organizational structure is configured.
      shared_ptr<vector<Tasks::CustomMatchGroup>> customMatchGroup_ {};
      // The task expiration time, in seconds-level UNIX timestamp. After this time, endpoints no longer pull and execute this task.
      shared_ptr<int64_t> endTimestamp_ {};
      // The matching mode of the effective scope. Valid values:
      // - **UserGroupAll**: applies to all users under the current Alibaba Cloud account.
      // - **UserGroupNormal**: applies only to users within specified user groups.
      shared_ptr<string> matchMode_ {};
      // The collection of effective user group IDs. An empty list is returned when MatchMode is UserGroupAll.
      shared_ptr<vector<string>> matchTargetIds_ {};
      // The ID of the vulnerability scheduled scan policy that triggered this task. An empty string is returned when TaskType is Instant.
      shared_ptr<string> scheduledStrategyId_ {};
      // The task status. Valid values:
      // - **Running**: the task is in progress and still within the validity period.
      // - **Expired**: the task has expired and exceeded the validity period.
      // - **Canceled**: the task has been canceled.
      shared_ptr<string> status_ {};
      // The execution statistics of this task on user endpoint devices within the effective scope.
      shared_ptr<Tasks::TargetDeviceCount> targetDeviceCount_ {};
      // The task description. An empty string is returned if no description is specified.
      shared_ptr<string> taskDescription_ {};
      // The vulnerability scanning task ID.
      shared_ptr<string> taskId_ {};
      // The task name.
      shared_ptr<string> taskName_ {};
      // The task type. Valid values:
      // - **Instant**: an instant task created by CreateVulScanTask.
      // - **Scheduled**: a scheduled task automatically created by a vulnerability scheduled scan policy on a periodic basis.
      shared_ptr<string> taskType_ {};
      // The total number of vulnerabilities detected by this task.
      shared_ptr<int64_t> vulCount_ {};
      // The list of exempted users. Users in this list are excluded from the scan. An empty list is returned if no exemption is configured.
      shared_ptr<vector<string>> whitelist_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->tasks_ == nullptr && this->totalNum_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListVulScanTasksResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // tasks Field Functions 
    bool hasTasks() const { return this->tasks_ != nullptr;};
    void deleteTasks() { this->tasks_ = nullptr;};
    inline const vector<ListVulScanTasksResponseBody::Tasks> & getTasks() const { DARABONBA_PTR_GET_CONST(tasks_, vector<ListVulScanTasksResponseBody::Tasks>) };
    inline vector<ListVulScanTasksResponseBody::Tasks> getTasks() { DARABONBA_PTR_GET(tasks_, vector<ListVulScanTasksResponseBody::Tasks>) };
    inline ListVulScanTasksResponseBody& setTasks(const vector<ListVulScanTasksResponseBody::Tasks> & tasks) { DARABONBA_PTR_SET_VALUE(tasks_, tasks) };
    inline ListVulScanTasksResponseBody& setTasks(vector<ListVulScanTasksResponseBody::Tasks> && tasks) { DARABONBA_PTR_SET_RVALUE(tasks_, tasks) };


    // totalNum Field Functions 
    bool hasTotalNum() const { return this->totalNum_ != nullptr;};
    void deleteTotalNum() { this->totalNum_ = nullptr;};
    inline int64_t getTotalNum() const { DARABONBA_PTR_GET_DEFAULT(totalNum_, 0L) };
    inline ListVulScanTasksResponseBody& setTotalNum(int64_t totalNum) { DARABONBA_PTR_SET_VALUE(totalNum_, totalNum) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The list of vulnerability scanning tasks.
    shared_ptr<vector<ListVulScanTasksResponseBody::Tasks>> tasks_ {};
    // The total number of vulnerability scanning tasks that match the query conditions.
    shared_ptr<int64_t> totalNum_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
