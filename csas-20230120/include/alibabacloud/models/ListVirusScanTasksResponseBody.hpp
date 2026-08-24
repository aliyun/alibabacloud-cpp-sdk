// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTVIRUSSCANTASKSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTVIRUSSCANTASKSRESPONSEBODY_HPP_
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
  class ListVirusScanTasksResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListVirusScanTasksResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Tasks, tasks_);
      DARABONBA_PTR_TO_JSON(TotalNum, totalNum_);
    };
    friend void from_json(const Darabonba::Json& j, ListVirusScanTasksResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Tasks, tasks_);
      DARABONBA_PTR_FROM_JSON(TotalNum, totalNum_);
    };
    ListVirusScanTasksResponseBody() = default ;
    ListVirusScanTasksResponseBody(const ListVirusScanTasksResponseBody &) = default ;
    ListVirusScanTasksResponseBody(ListVirusScanTasksResponseBody &&) = default ;
    ListVirusScanTasksResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListVirusScanTasksResponseBody() = default ;
    ListVirusScanTasksResponseBody& operator=(const ListVirusScanTasksResponseBody &) = default ;
    ListVirusScanTasksResponseBody& operator=(ListVirusScanTasksResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Tasks : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tasks& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(CustomMatchGroup, customMatchGroup_);
        DARABONBA_PTR_TO_JSON(EndTime, endTime_);
        DARABONBA_PTR_TO_JSON(HighRiskOperation, highRiskOperation_);
        DARABONBA_PTR_TO_JSON(LowRiskOperation, lowRiskOperation_);
        DARABONBA_PTR_TO_JSON(MatchMode, matchMode_);
        DARABONBA_PTR_TO_JSON(MatchTargetInfos, matchTargetInfos_);
        DARABONBA_PTR_TO_JSON(MaxCpuUsage, maxCpuUsage_);
        DARABONBA_PTR_TO_JSON(MidRiskOperation, midRiskOperation_);
        DARABONBA_PTR_TO_JSON(PerformanceMode, performanceMode_);
        DARABONBA_PTR_TO_JSON(ScanMode, scanMode_);
        DARABONBA_PTR_TO_JSON(ScanPath, scanPath_);
        DARABONBA_PTR_TO_JSON(ScanTargets, scanTargets_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(TaskDescription, taskDescription_);
        DARABONBA_PTR_TO_JSON(TaskId, taskId_);
        DARABONBA_PTR_TO_JSON(Whitelist, whitelist_);
      };
      friend void from_json(const Darabonba::Json& j, Tasks& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(CustomMatchGroup, customMatchGroup_);
        DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
        DARABONBA_PTR_FROM_JSON(HighRiskOperation, highRiskOperation_);
        DARABONBA_PTR_FROM_JSON(LowRiskOperation, lowRiskOperation_);
        DARABONBA_PTR_FROM_JSON(MatchMode, matchMode_);
        DARABONBA_PTR_FROM_JSON(MatchTargetInfos, matchTargetInfos_);
        DARABONBA_PTR_FROM_JSON(MaxCpuUsage, maxCpuUsage_);
        DARABONBA_PTR_FROM_JSON(MidRiskOperation, midRiskOperation_);
        DARABONBA_PTR_FROM_JSON(PerformanceMode, performanceMode_);
        DARABONBA_PTR_FROM_JSON(ScanMode, scanMode_);
        DARABONBA_PTR_FROM_JSON(ScanPath, scanPath_);
        DARABONBA_PTR_FROM_JSON(ScanTargets, scanTargets_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(TaskDescription, taskDescription_);
        DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
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
      class MatchTargetInfos : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const MatchTargetInfos& obj) { 
          DARABONBA_PTR_TO_JSON(TargetId, targetId_);
          DARABONBA_PTR_TO_JSON(TargetName, targetName_);
        };
        friend void from_json(const Darabonba::Json& j, MatchTargetInfos& obj) { 
          DARABONBA_PTR_FROM_JSON(TargetId, targetId_);
          DARABONBA_PTR_FROM_JSON(TargetName, targetName_);
        };
        MatchTargetInfos() = default ;
        MatchTargetInfos(const MatchTargetInfos &) = default ;
        MatchTargetInfos(MatchTargetInfos &&) = default ;
        MatchTargetInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~MatchTargetInfos() = default ;
        MatchTargetInfos& operator=(const MatchTargetInfos &) = default ;
        MatchTargetInfos& operator=(MatchTargetInfos &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->targetId_ == nullptr
        && this->targetName_ == nullptr; };
        // targetId Field Functions 
        bool hasTargetId() const { return this->targetId_ != nullptr;};
        void deleteTargetId() { this->targetId_ = nullptr;};
        inline string getTargetId() const { DARABONBA_PTR_GET_DEFAULT(targetId_, "") };
        inline MatchTargetInfos& setTargetId(string targetId) { DARABONBA_PTR_SET_VALUE(targetId_, targetId) };


        // targetName Field Functions 
        bool hasTargetName() const { return this->targetName_ != nullptr;};
        void deleteTargetName() { this->targetName_ = nullptr;};
        inline string getTargetName() const { DARABONBA_PTR_GET_DEFAULT(targetName_, "") };
        inline MatchTargetInfos& setTargetName(string targetName) { DARABONBA_PTR_SET_VALUE(targetName_, targetName) };


      protected:
        shared_ptr<string> targetId_ {};
        shared_ptr<string> targetName_ {};
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
        shared_ptr<vector<string>> group_ {};
        shared_ptr<string> idpId_ {};
      };

      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->customMatchGroup_ == nullptr && this->endTime_ == nullptr && this->highRiskOperation_ == nullptr && this->lowRiskOperation_ == nullptr && this->matchMode_ == nullptr
        && this->matchTargetInfos_ == nullptr && this->maxCpuUsage_ == nullptr && this->midRiskOperation_ == nullptr && this->performanceMode_ == nullptr && this->scanMode_ == nullptr
        && this->scanPath_ == nullptr && this->scanTargets_ == nullptr && this->status_ == nullptr && this->taskDescription_ == nullptr && this->taskId_ == nullptr
        && this->whitelist_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Tasks& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // customMatchGroup Field Functions 
      bool hasCustomMatchGroup() const { return this->customMatchGroup_ != nullptr;};
      void deleteCustomMatchGroup() { this->customMatchGroup_ = nullptr;};
      inline const vector<Tasks::CustomMatchGroup> & getCustomMatchGroup() const { DARABONBA_PTR_GET_CONST(customMatchGroup_, vector<Tasks::CustomMatchGroup>) };
      inline vector<Tasks::CustomMatchGroup> getCustomMatchGroup() { DARABONBA_PTR_GET(customMatchGroup_, vector<Tasks::CustomMatchGroup>) };
      inline Tasks& setCustomMatchGroup(const vector<Tasks::CustomMatchGroup> & customMatchGroup) { DARABONBA_PTR_SET_VALUE(customMatchGroup_, customMatchGroup) };
      inline Tasks& setCustomMatchGroup(vector<Tasks::CustomMatchGroup> && customMatchGroup) { DARABONBA_PTR_SET_RVALUE(customMatchGroup_, customMatchGroup) };


      // endTime Field Functions 
      bool hasEndTime() const { return this->endTime_ != nullptr;};
      void deleteEndTime() { this->endTime_ = nullptr;};
      inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
      inline Tasks& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


      // highRiskOperation Field Functions 
      bool hasHighRiskOperation() const { return this->highRiskOperation_ != nullptr;};
      void deleteHighRiskOperation() { this->highRiskOperation_ = nullptr;};
      inline string getHighRiskOperation() const { DARABONBA_PTR_GET_DEFAULT(highRiskOperation_, "") };
      inline Tasks& setHighRiskOperation(string highRiskOperation) { DARABONBA_PTR_SET_VALUE(highRiskOperation_, highRiskOperation) };


      // lowRiskOperation Field Functions 
      bool hasLowRiskOperation() const { return this->lowRiskOperation_ != nullptr;};
      void deleteLowRiskOperation() { this->lowRiskOperation_ = nullptr;};
      inline string getLowRiskOperation() const { DARABONBA_PTR_GET_DEFAULT(lowRiskOperation_, "") };
      inline Tasks& setLowRiskOperation(string lowRiskOperation) { DARABONBA_PTR_SET_VALUE(lowRiskOperation_, lowRiskOperation) };


      // matchMode Field Functions 
      bool hasMatchMode() const { return this->matchMode_ != nullptr;};
      void deleteMatchMode() { this->matchMode_ = nullptr;};
      inline string getMatchMode() const { DARABONBA_PTR_GET_DEFAULT(matchMode_, "") };
      inline Tasks& setMatchMode(string matchMode) { DARABONBA_PTR_SET_VALUE(matchMode_, matchMode) };


      // matchTargetInfos Field Functions 
      bool hasMatchTargetInfos() const { return this->matchTargetInfos_ != nullptr;};
      void deleteMatchTargetInfos() { this->matchTargetInfos_ = nullptr;};
      inline const vector<Tasks::MatchTargetInfos> & getMatchTargetInfos() const { DARABONBA_PTR_GET_CONST(matchTargetInfos_, vector<Tasks::MatchTargetInfos>) };
      inline vector<Tasks::MatchTargetInfos> getMatchTargetInfos() { DARABONBA_PTR_GET(matchTargetInfos_, vector<Tasks::MatchTargetInfos>) };
      inline Tasks& setMatchTargetInfos(const vector<Tasks::MatchTargetInfos> & matchTargetInfos) { DARABONBA_PTR_SET_VALUE(matchTargetInfos_, matchTargetInfos) };
      inline Tasks& setMatchTargetInfos(vector<Tasks::MatchTargetInfos> && matchTargetInfos) { DARABONBA_PTR_SET_RVALUE(matchTargetInfos_, matchTargetInfos) };


      // maxCpuUsage Field Functions 
      bool hasMaxCpuUsage() const { return this->maxCpuUsage_ != nullptr;};
      void deleteMaxCpuUsage() { this->maxCpuUsage_ = nullptr;};
      inline int64_t getMaxCpuUsage() const { DARABONBA_PTR_GET_DEFAULT(maxCpuUsage_, 0L) };
      inline Tasks& setMaxCpuUsage(int64_t maxCpuUsage) { DARABONBA_PTR_SET_VALUE(maxCpuUsage_, maxCpuUsage) };


      // midRiskOperation Field Functions 
      bool hasMidRiskOperation() const { return this->midRiskOperation_ != nullptr;};
      void deleteMidRiskOperation() { this->midRiskOperation_ = nullptr;};
      inline string getMidRiskOperation() const { DARABONBA_PTR_GET_DEFAULT(midRiskOperation_, "") };
      inline Tasks& setMidRiskOperation(string midRiskOperation) { DARABONBA_PTR_SET_VALUE(midRiskOperation_, midRiskOperation) };


      // performanceMode Field Functions 
      bool hasPerformanceMode() const { return this->performanceMode_ != nullptr;};
      void deletePerformanceMode() { this->performanceMode_ = nullptr;};
      inline string getPerformanceMode() const { DARABONBA_PTR_GET_DEFAULT(performanceMode_, "") };
      inline Tasks& setPerformanceMode(string performanceMode) { DARABONBA_PTR_SET_VALUE(performanceMode_, performanceMode) };


      // scanMode Field Functions 
      bool hasScanMode() const { return this->scanMode_ != nullptr;};
      void deleteScanMode() { this->scanMode_ = nullptr;};
      inline string getScanMode() const { DARABONBA_PTR_GET_DEFAULT(scanMode_, "") };
      inline Tasks& setScanMode(string scanMode) { DARABONBA_PTR_SET_VALUE(scanMode_, scanMode) };


      // scanPath Field Functions 
      bool hasScanPath() const { return this->scanPath_ != nullptr;};
      void deleteScanPath() { this->scanPath_ = nullptr;};
      inline const vector<string> & getScanPath() const { DARABONBA_PTR_GET_CONST(scanPath_, vector<string>) };
      inline vector<string> getScanPath() { DARABONBA_PTR_GET(scanPath_, vector<string>) };
      inline Tasks& setScanPath(const vector<string> & scanPath) { DARABONBA_PTR_SET_VALUE(scanPath_, scanPath) };
      inline Tasks& setScanPath(vector<string> && scanPath) { DARABONBA_PTR_SET_RVALUE(scanPath_, scanPath) };


      // scanTargets Field Functions 
      bool hasScanTargets() const { return this->scanTargets_ != nullptr;};
      void deleteScanTargets() { this->scanTargets_ = nullptr;};
      inline const vector<string> & getScanTargets() const { DARABONBA_PTR_GET_CONST(scanTargets_, vector<string>) };
      inline vector<string> getScanTargets() { DARABONBA_PTR_GET(scanTargets_, vector<string>) };
      inline Tasks& setScanTargets(const vector<string> & scanTargets) { DARABONBA_PTR_SET_VALUE(scanTargets_, scanTargets) };
      inline Tasks& setScanTargets(vector<string> && scanTargets) { DARABONBA_PTR_SET_RVALUE(scanTargets_, scanTargets) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
      inline Tasks& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


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


      // whitelist Field Functions 
      bool hasWhitelist() const { return this->whitelist_ != nullptr;};
      void deleteWhitelist() { this->whitelist_ = nullptr;};
      inline const vector<string> & getWhitelist() const { DARABONBA_PTR_GET_CONST(whitelist_, vector<string>) };
      inline vector<string> getWhitelist() { DARABONBA_PTR_GET(whitelist_, vector<string>) };
      inline Tasks& setWhitelist(const vector<string> & whitelist) { DARABONBA_PTR_SET_VALUE(whitelist_, whitelist) };
      inline Tasks& setWhitelist(vector<string> && whitelist) { DARABONBA_PTR_SET_RVALUE(whitelist_, whitelist) };


    protected:
      shared_ptr<string> createTime_ {};
      shared_ptr<vector<Tasks::CustomMatchGroup>> customMatchGroup_ {};
      shared_ptr<int64_t> endTime_ {};
      shared_ptr<string> highRiskOperation_ {};
      shared_ptr<string> lowRiskOperation_ {};
      shared_ptr<string> matchMode_ {};
      shared_ptr<vector<Tasks::MatchTargetInfos>> matchTargetInfos_ {};
      shared_ptr<int64_t> maxCpuUsage_ {};
      shared_ptr<string> midRiskOperation_ {};
      shared_ptr<string> performanceMode_ {};
      shared_ptr<string> scanMode_ {};
      shared_ptr<vector<string>> scanPath_ {};
      shared_ptr<vector<string>> scanTargets_ {};
      shared_ptr<int32_t> status_ {};
      shared_ptr<string> taskDescription_ {};
      shared_ptr<string> taskId_ {};
      shared_ptr<vector<string>> whitelist_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->tasks_ == nullptr && this->totalNum_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListVirusScanTasksResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // tasks Field Functions 
    bool hasTasks() const { return this->tasks_ != nullptr;};
    void deleteTasks() { this->tasks_ = nullptr;};
    inline const vector<ListVirusScanTasksResponseBody::Tasks> & getTasks() const { DARABONBA_PTR_GET_CONST(tasks_, vector<ListVirusScanTasksResponseBody::Tasks>) };
    inline vector<ListVirusScanTasksResponseBody::Tasks> getTasks() { DARABONBA_PTR_GET(tasks_, vector<ListVirusScanTasksResponseBody::Tasks>) };
    inline ListVirusScanTasksResponseBody& setTasks(const vector<ListVirusScanTasksResponseBody::Tasks> & tasks) { DARABONBA_PTR_SET_VALUE(tasks_, tasks) };
    inline ListVirusScanTasksResponseBody& setTasks(vector<ListVirusScanTasksResponseBody::Tasks> && tasks) { DARABONBA_PTR_SET_RVALUE(tasks_, tasks) };


    // totalNum Field Functions 
    bool hasTotalNum() const { return this->totalNum_ != nullptr;};
    void deleteTotalNum() { this->totalNum_ = nullptr;};
    inline int32_t getTotalNum() const { DARABONBA_PTR_GET_DEFAULT(totalNum_, 0) };
    inline ListVirusScanTasksResponseBody& setTotalNum(int32_t totalNum) { DARABONBA_PTR_SET_VALUE(totalNum_, totalNum) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<ListVirusScanTasksResponseBody::Tasks>> tasks_ {};
    shared_ptr<int32_t> totalNum_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
