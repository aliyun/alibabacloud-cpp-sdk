// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETTASKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IaCService20210806
{
namespace Models
{
  class GetTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(task, task_);
    };
    friend void from_json(const Darabonba::Json& j, GetTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(task, task_);
    };
    GetTaskResponseBody() = default ;
    GetTaskResponseBody(const GetTaskResponseBody &) = default ;
    GetTaskResponseBody(GetTaskResponseBody &&) = default ;
    GetTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTaskResponseBody() = default ;
    GetTaskResponseBody& operator=(const GetTaskResponseBody &) = default ;
    GetTaskResponseBody& operator=(GetTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Task : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Task& obj) { 
        DARABONBA_PTR_TO_JSON(autoApply, autoApply_);
        DARABONBA_PTR_TO_JSON(autoDestroy, autoDestroy_);
        DARABONBA_PTR_TO_JSON(createTime, createTime_);
        DARABONBA_PTR_TO_JSON(currentJobId, currentJobId_);
        DARABONBA_PTR_TO_JSON(currentJobStatus, currentJobStatus_);
        DARABONBA_PTR_TO_JSON(deletionProtection, deletionProtection_);
        DARABONBA_PTR_TO_JSON(description, description_);
        DARABONBA_PTR_TO_JSON(groupInfo, groupInfo_);
        DARABONBA_PTR_TO_JSON(initModuleState, initModuleState_);
        DARABONBA_PTR_TO_JSON(latestModuleVersion, latestModuleVersion_);
        DARABONBA_PTR_TO_JSON(moduleId, moduleId_);
        DARABONBA_PTR_TO_JSON(moduleName, moduleName_);
        DARABONBA_PTR_TO_JSON(moduleVersion, moduleVersion_);
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(protectionStrategy, protectionStrategy_);
        DARABONBA_PTR_TO_JSON(ramRole, ramRole_);
        DARABONBA_PTR_TO_JSON(skipPropertyValidation, skipPropertyValidation_);
        DARABONBA_PTR_TO_JSON(status, status_);
        DARABONBA_PTR_TO_JSON(tags, tags_);
        DARABONBA_PTR_TO_JSON(taskBackend, taskBackend_);
        DARABONBA_PTR_TO_JSON(taskId, taskId_);
        DARABONBA_PTR_TO_JSON(taskOutputPath, taskOutputPath_);
        DARABONBA_PTR_TO_JSON(terraformVersion, terraformVersion_);
        DARABONBA_PTR_TO_JSON(triggerStrategy, triggerStrategy_);
      };
      friend void from_json(const Darabonba::Json& j, Task& obj) { 
        DARABONBA_PTR_FROM_JSON(autoApply, autoApply_);
        DARABONBA_PTR_FROM_JSON(autoDestroy, autoDestroy_);
        DARABONBA_PTR_FROM_JSON(createTime, createTime_);
        DARABONBA_PTR_FROM_JSON(currentJobId, currentJobId_);
        DARABONBA_PTR_FROM_JSON(currentJobStatus, currentJobStatus_);
        DARABONBA_PTR_FROM_JSON(deletionProtection, deletionProtection_);
        DARABONBA_PTR_FROM_JSON(description, description_);
        DARABONBA_PTR_FROM_JSON(groupInfo, groupInfo_);
        DARABONBA_PTR_FROM_JSON(initModuleState, initModuleState_);
        DARABONBA_PTR_FROM_JSON(latestModuleVersion, latestModuleVersion_);
        DARABONBA_PTR_FROM_JSON(moduleId, moduleId_);
        DARABONBA_PTR_FROM_JSON(moduleName, moduleName_);
        DARABONBA_PTR_FROM_JSON(moduleVersion, moduleVersion_);
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(protectionStrategy, protectionStrategy_);
        DARABONBA_PTR_FROM_JSON(ramRole, ramRole_);
        DARABONBA_PTR_FROM_JSON(skipPropertyValidation, skipPropertyValidation_);
        DARABONBA_PTR_FROM_JSON(status, status_);
        DARABONBA_PTR_FROM_JSON(tags, tags_);
        DARABONBA_PTR_FROM_JSON(taskBackend, taskBackend_);
        DARABONBA_PTR_FROM_JSON(taskId, taskId_);
        DARABONBA_PTR_FROM_JSON(taskOutputPath, taskOutputPath_);
        DARABONBA_PTR_FROM_JSON(terraformVersion, terraformVersion_);
        DARABONBA_PTR_FROM_JSON(triggerStrategy, triggerStrategy_);
      };
      Task() = default ;
      Task(const Task &) = default ;
      Task(Task &&) = default ;
      Task(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Task() = default ;
      Task& operator=(const Task &) = default ;
      Task& operator=(Task &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class TaskBackend : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const TaskBackend& obj) { 
          DARABONBA_PTR_TO_JSON(bucketEndpoint, bucketEndpoint_);
          DARABONBA_PTR_TO_JSON(bucketName, bucketName_);
          DARABONBA_PTR_TO_JSON(objectPath, objectPath_);
        };
        friend void from_json(const Darabonba::Json& j, TaskBackend& obj) { 
          DARABONBA_PTR_FROM_JSON(bucketEndpoint, bucketEndpoint_);
          DARABONBA_PTR_FROM_JSON(bucketName, bucketName_);
          DARABONBA_PTR_FROM_JSON(objectPath, objectPath_);
        };
        TaskBackend() = default ;
        TaskBackend(const TaskBackend &) = default ;
        TaskBackend(TaskBackend &&) = default ;
        TaskBackend(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~TaskBackend() = default ;
        TaskBackend& operator=(const TaskBackend &) = default ;
        TaskBackend& operator=(TaskBackend &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->bucketEndpoint_ == nullptr
        && this->bucketName_ == nullptr && this->objectPath_ == nullptr; };
        // bucketEndpoint Field Functions 
        bool hasBucketEndpoint() const { return this->bucketEndpoint_ != nullptr;};
        void deleteBucketEndpoint() { this->bucketEndpoint_ = nullptr;};
        inline string getBucketEndpoint() const { DARABONBA_PTR_GET_DEFAULT(bucketEndpoint_, "") };
        inline TaskBackend& setBucketEndpoint(string bucketEndpoint) { DARABONBA_PTR_SET_VALUE(bucketEndpoint_, bucketEndpoint) };


        // bucketName Field Functions 
        bool hasBucketName() const { return this->bucketName_ != nullptr;};
        void deleteBucketName() { this->bucketName_ = nullptr;};
        inline string getBucketName() const { DARABONBA_PTR_GET_DEFAULT(bucketName_, "") };
        inline TaskBackend& setBucketName(string bucketName) { DARABONBA_PTR_SET_VALUE(bucketName_, bucketName) };


        // objectPath Field Functions 
        bool hasObjectPath() const { return this->objectPath_ != nullptr;};
        void deleteObjectPath() { this->objectPath_ = nullptr;};
        inline string getObjectPath() const { DARABONBA_PTR_GET_DEFAULT(objectPath_, "") };
        inline TaskBackend& setObjectPath(string objectPath) { DARABONBA_PTR_SET_VALUE(objectPath_, objectPath) };


      protected:
        shared_ptr<string> bucketEndpoint_ {};
        shared_ptr<string> bucketName_ {};
        shared_ptr<string> objectPath_ {};
      };

      class Tags : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Tags& obj) { 
          DARABONBA_PTR_TO_JSON(tagKey, tagKey_);
          DARABONBA_PTR_TO_JSON(tagValue, tagValue_);
        };
        friend void from_json(const Darabonba::Json& j, Tags& obj) { 
          DARABONBA_PTR_FROM_JSON(tagKey, tagKey_);
          DARABONBA_PTR_FROM_JSON(tagValue, tagValue_);
        };
        Tags() = default ;
        Tags(const Tags &) = default ;
        Tags(Tags &&) = default ;
        Tags(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Tags() = default ;
        Tags& operator=(const Tags &) = default ;
        Tags& operator=(Tags &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->tagKey_ == nullptr
        && this->tagValue_ == nullptr; };
        // tagKey Field Functions 
        bool hasTagKey() const { return this->tagKey_ != nullptr;};
        void deleteTagKey() { this->tagKey_ = nullptr;};
        inline string getTagKey() const { DARABONBA_PTR_GET_DEFAULT(tagKey_, "") };
        inline Tags& setTagKey(string tagKey) { DARABONBA_PTR_SET_VALUE(tagKey_, tagKey) };


        // tagValue Field Functions 
        bool hasTagValue() const { return this->tagValue_ != nullptr;};
        void deleteTagValue() { this->tagValue_ = nullptr;};
        inline string getTagValue() const { DARABONBA_PTR_GET_DEFAULT(tagValue_, "") };
        inline Tags& setTagValue(string tagValue) { DARABONBA_PTR_SET_VALUE(tagValue_, tagValue) };


      protected:
        shared_ptr<string> tagKey_ {};
        shared_ptr<string> tagValue_ {};
      };

      class GroupInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const GroupInfo& obj) { 
          DARABONBA_PTR_TO_JSON(groupId, groupId_);
          DARABONBA_PTR_TO_JSON(groupName, groupName_);
          DARABONBA_PTR_TO_JSON(projectId, projectId_);
          DARABONBA_PTR_TO_JSON(projectName, projectName_);
        };
        friend void from_json(const Darabonba::Json& j, GroupInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(groupId, groupId_);
          DARABONBA_PTR_FROM_JSON(groupName, groupName_);
          DARABONBA_PTR_FROM_JSON(projectId, projectId_);
          DARABONBA_PTR_FROM_JSON(projectName, projectName_);
        };
        GroupInfo() = default ;
        GroupInfo(const GroupInfo &) = default ;
        GroupInfo(GroupInfo &&) = default ;
        GroupInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~GroupInfo() = default ;
        GroupInfo& operator=(const GroupInfo &) = default ;
        GroupInfo& operator=(GroupInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->groupId_ == nullptr
        && this->groupName_ == nullptr && this->projectId_ == nullptr && this->projectName_ == nullptr; };
        // groupId Field Functions 
        bool hasGroupId() const { return this->groupId_ != nullptr;};
        void deleteGroupId() { this->groupId_ = nullptr;};
        inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
        inline GroupInfo& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


        // groupName Field Functions 
        bool hasGroupName() const { return this->groupName_ != nullptr;};
        void deleteGroupName() { this->groupName_ = nullptr;};
        inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
        inline GroupInfo& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


        // projectId Field Functions 
        bool hasProjectId() const { return this->projectId_ != nullptr;};
        void deleteProjectId() { this->projectId_ = nullptr;};
        inline string getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, "") };
        inline GroupInfo& setProjectId(string projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


        // projectName Field Functions 
        bool hasProjectName() const { return this->projectName_ != nullptr;};
        void deleteProjectName() { this->projectName_ = nullptr;};
        inline string getProjectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
        inline GroupInfo& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


      protected:
        shared_ptr<string> groupId_ {};
        shared_ptr<string> groupName_ {};
        shared_ptr<string> projectId_ {};
        shared_ptr<string> projectName_ {};
      };

      virtual bool empty() const override { return this->autoApply_ == nullptr
        && this->autoDestroy_ == nullptr && this->createTime_ == nullptr && this->currentJobId_ == nullptr && this->currentJobStatus_ == nullptr && this->deletionProtection_ == nullptr
        && this->description_ == nullptr && this->groupInfo_ == nullptr && this->initModuleState_ == nullptr && this->latestModuleVersion_ == nullptr && this->moduleId_ == nullptr
        && this->moduleName_ == nullptr && this->moduleVersion_ == nullptr && this->name_ == nullptr && this->protectionStrategy_ == nullptr && this->ramRole_ == nullptr
        && this->skipPropertyValidation_ == nullptr && this->status_ == nullptr && this->tags_ == nullptr && this->taskBackend_ == nullptr && this->taskId_ == nullptr
        && this->taskOutputPath_ == nullptr && this->terraformVersion_ == nullptr && this->triggerStrategy_ == nullptr; };
      // autoApply Field Functions 
      bool hasAutoApply() const { return this->autoApply_ != nullptr;};
      void deleteAutoApply() { this->autoApply_ = nullptr;};
      inline bool getAutoApply() const { DARABONBA_PTR_GET_DEFAULT(autoApply_, false) };
      inline Task& setAutoApply(bool autoApply) { DARABONBA_PTR_SET_VALUE(autoApply_, autoApply) };


      // autoDestroy Field Functions 
      bool hasAutoDestroy() const { return this->autoDestroy_ != nullptr;};
      void deleteAutoDestroy() { this->autoDestroy_ = nullptr;};
      inline bool getAutoDestroy() const { DARABONBA_PTR_GET_DEFAULT(autoDestroy_, false) };
      inline Task& setAutoDestroy(bool autoDestroy) { DARABONBA_PTR_SET_VALUE(autoDestroy_, autoDestroy) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Task& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // currentJobId Field Functions 
      bool hasCurrentJobId() const { return this->currentJobId_ != nullptr;};
      void deleteCurrentJobId() { this->currentJobId_ = nullptr;};
      inline string getCurrentJobId() const { DARABONBA_PTR_GET_DEFAULT(currentJobId_, "") };
      inline Task& setCurrentJobId(string currentJobId) { DARABONBA_PTR_SET_VALUE(currentJobId_, currentJobId) };


      // currentJobStatus Field Functions 
      bool hasCurrentJobStatus() const { return this->currentJobStatus_ != nullptr;};
      void deleteCurrentJobStatus() { this->currentJobStatus_ = nullptr;};
      inline string getCurrentJobStatus() const { DARABONBA_PTR_GET_DEFAULT(currentJobStatus_, "") };
      inline Task& setCurrentJobStatus(string currentJobStatus) { DARABONBA_PTR_SET_VALUE(currentJobStatus_, currentJobStatus) };


      // deletionProtection Field Functions 
      bool hasDeletionProtection() const { return this->deletionProtection_ != nullptr;};
      void deleteDeletionProtection() { this->deletionProtection_ = nullptr;};
      inline bool getDeletionProtection() const { DARABONBA_PTR_GET_DEFAULT(deletionProtection_, false) };
      inline Task& setDeletionProtection(bool deletionProtection) { DARABONBA_PTR_SET_VALUE(deletionProtection_, deletionProtection) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Task& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // groupInfo Field Functions 
      bool hasGroupInfo() const { return this->groupInfo_ != nullptr;};
      void deleteGroupInfo() { this->groupInfo_ = nullptr;};
      inline const Task::GroupInfo & getGroupInfo() const { DARABONBA_PTR_GET_CONST(groupInfo_, Task::GroupInfo) };
      inline Task::GroupInfo getGroupInfo() { DARABONBA_PTR_GET(groupInfo_, Task::GroupInfo) };
      inline Task& setGroupInfo(const Task::GroupInfo & groupInfo) { DARABONBA_PTR_SET_VALUE(groupInfo_, groupInfo) };
      inline Task& setGroupInfo(Task::GroupInfo && groupInfo) { DARABONBA_PTR_SET_RVALUE(groupInfo_, groupInfo) };


      // initModuleState Field Functions 
      bool hasInitModuleState() const { return this->initModuleState_ != nullptr;};
      void deleteInitModuleState() { this->initModuleState_ = nullptr;};
      inline bool getInitModuleState() const { DARABONBA_PTR_GET_DEFAULT(initModuleState_, false) };
      inline Task& setInitModuleState(bool initModuleState) { DARABONBA_PTR_SET_VALUE(initModuleState_, initModuleState) };


      // latestModuleVersion Field Functions 
      bool hasLatestModuleVersion() const { return this->latestModuleVersion_ != nullptr;};
      void deleteLatestModuleVersion() { this->latestModuleVersion_ = nullptr;};
      inline string getLatestModuleVersion() const { DARABONBA_PTR_GET_DEFAULT(latestModuleVersion_, "") };
      inline Task& setLatestModuleVersion(string latestModuleVersion) { DARABONBA_PTR_SET_VALUE(latestModuleVersion_, latestModuleVersion) };


      // moduleId Field Functions 
      bool hasModuleId() const { return this->moduleId_ != nullptr;};
      void deleteModuleId() { this->moduleId_ = nullptr;};
      inline string getModuleId() const { DARABONBA_PTR_GET_DEFAULT(moduleId_, "") };
      inline Task& setModuleId(string moduleId) { DARABONBA_PTR_SET_VALUE(moduleId_, moduleId) };


      // moduleName Field Functions 
      bool hasModuleName() const { return this->moduleName_ != nullptr;};
      void deleteModuleName() { this->moduleName_ = nullptr;};
      inline string getModuleName() const { DARABONBA_PTR_GET_DEFAULT(moduleName_, "") };
      inline Task& setModuleName(string moduleName) { DARABONBA_PTR_SET_VALUE(moduleName_, moduleName) };


      // moduleVersion Field Functions 
      bool hasModuleVersion() const { return this->moduleVersion_ != nullptr;};
      void deleteModuleVersion() { this->moduleVersion_ = nullptr;};
      inline string getModuleVersion() const { DARABONBA_PTR_GET_DEFAULT(moduleVersion_, "") };
      inline Task& setModuleVersion(string moduleVersion) { DARABONBA_PTR_SET_VALUE(moduleVersion_, moduleVersion) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Task& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // protectionStrategy Field Functions 
      bool hasProtectionStrategy() const { return this->protectionStrategy_ != nullptr;};
      void deleteProtectionStrategy() { this->protectionStrategy_ = nullptr;};
      inline const vector<string> & getProtectionStrategy() const { DARABONBA_PTR_GET_CONST(protectionStrategy_, vector<string>) };
      inline vector<string> getProtectionStrategy() { DARABONBA_PTR_GET(protectionStrategy_, vector<string>) };
      inline Task& setProtectionStrategy(const vector<string> & protectionStrategy) { DARABONBA_PTR_SET_VALUE(protectionStrategy_, protectionStrategy) };
      inline Task& setProtectionStrategy(vector<string> && protectionStrategy) { DARABONBA_PTR_SET_RVALUE(protectionStrategy_, protectionStrategy) };


      // ramRole Field Functions 
      bool hasRamRole() const { return this->ramRole_ != nullptr;};
      void deleteRamRole() { this->ramRole_ = nullptr;};
      inline string getRamRole() const { DARABONBA_PTR_GET_DEFAULT(ramRole_, "") };
      inline Task& setRamRole(string ramRole) { DARABONBA_PTR_SET_VALUE(ramRole_, ramRole) };


      // skipPropertyValidation Field Functions 
      bool hasSkipPropertyValidation() const { return this->skipPropertyValidation_ != nullptr;};
      void deleteSkipPropertyValidation() { this->skipPropertyValidation_ = nullptr;};
      inline bool getSkipPropertyValidation() const { DARABONBA_PTR_GET_DEFAULT(skipPropertyValidation_, false) };
      inline Task& setSkipPropertyValidation(bool skipPropertyValidation) { DARABONBA_PTR_SET_VALUE(skipPropertyValidation_, skipPropertyValidation) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Task& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline const vector<Task::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Task::Tags>) };
      inline vector<Task::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<Task::Tags>) };
      inline Task& setTags(const vector<Task::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
      inline Task& setTags(vector<Task::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


      // taskBackend Field Functions 
      bool hasTaskBackend() const { return this->taskBackend_ != nullptr;};
      void deleteTaskBackend() { this->taskBackend_ = nullptr;};
      inline const Task::TaskBackend & getTaskBackend() const { DARABONBA_PTR_GET_CONST(taskBackend_, Task::TaskBackend) };
      inline Task::TaskBackend getTaskBackend() { DARABONBA_PTR_GET(taskBackend_, Task::TaskBackend) };
      inline Task& setTaskBackend(const Task::TaskBackend & taskBackend) { DARABONBA_PTR_SET_VALUE(taskBackend_, taskBackend) };
      inline Task& setTaskBackend(Task::TaskBackend && taskBackend) { DARABONBA_PTR_SET_RVALUE(taskBackend_, taskBackend) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
      inline Task& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


      // taskOutputPath Field Functions 
      bool hasTaskOutputPath() const { return this->taskOutputPath_ != nullptr;};
      void deleteTaskOutputPath() { this->taskOutputPath_ = nullptr;};
      inline string getTaskOutputPath() const { DARABONBA_PTR_GET_DEFAULT(taskOutputPath_, "") };
      inline Task& setTaskOutputPath(string taskOutputPath) { DARABONBA_PTR_SET_VALUE(taskOutputPath_, taskOutputPath) };


      // terraformVersion Field Functions 
      bool hasTerraformVersion() const { return this->terraformVersion_ != nullptr;};
      void deleteTerraformVersion() { this->terraformVersion_ = nullptr;};
      inline string getTerraformVersion() const { DARABONBA_PTR_GET_DEFAULT(terraformVersion_, "") };
      inline Task& setTerraformVersion(string terraformVersion) { DARABONBA_PTR_SET_VALUE(terraformVersion_, terraformVersion) };


      // triggerStrategy Field Functions 
      bool hasTriggerStrategy() const { return this->triggerStrategy_ != nullptr;};
      void deleteTriggerStrategy() { this->triggerStrategy_ = nullptr;};
      inline string getTriggerStrategy() const { DARABONBA_PTR_GET_DEFAULT(triggerStrategy_, "") };
      inline Task& setTriggerStrategy(string triggerStrategy) { DARABONBA_PTR_SET_VALUE(triggerStrategy_, triggerStrategy) };


    protected:
      shared_ptr<bool> autoApply_ {};
      shared_ptr<bool> autoDestroy_ {};
      shared_ptr<string> createTime_ {};
      shared_ptr<string> currentJobId_ {};
      shared_ptr<string> currentJobStatus_ {};
      shared_ptr<bool> deletionProtection_ {};
      shared_ptr<string> description_ {};
      shared_ptr<Task::GroupInfo> groupInfo_ {};
      shared_ptr<bool> initModuleState_ {};
      shared_ptr<string> latestModuleVersion_ {};
      shared_ptr<string> moduleId_ {};
      shared_ptr<string> moduleName_ {};
      shared_ptr<string> moduleVersion_ {};
      shared_ptr<string> name_ {};
      shared_ptr<vector<string>> protectionStrategy_ {};
      shared_ptr<string> ramRole_ {};
      shared_ptr<bool> skipPropertyValidation_ {};
      shared_ptr<string> status_ {};
      shared_ptr<vector<Task::Tags>> tags_ {};
      shared_ptr<Task::TaskBackend> taskBackend_ {};
      shared_ptr<string> taskId_ {};
      shared_ptr<string> taskOutputPath_ {};
      shared_ptr<string> terraformVersion_ {};
      shared_ptr<string> triggerStrategy_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->task_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // task Field Functions 
    bool hasTask() const { return this->task_ != nullptr;};
    void deleteTask() { this->task_ = nullptr;};
    inline const GetTaskResponseBody::Task & getTask() const { DARABONBA_PTR_GET_CONST(task_, GetTaskResponseBody::Task) };
    inline GetTaskResponseBody::Task getTask() { DARABONBA_PTR_GET(task_, GetTaskResponseBody::Task) };
    inline GetTaskResponseBody& setTask(const GetTaskResponseBody::Task & task) { DARABONBA_PTR_SET_VALUE(task_, task) };
    inline GetTaskResponseBody& setTask(GetTaskResponseBody::Task && task) { DARABONBA_PTR_SET_RVALUE(task_, task) };


  protected:
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<GetTaskResponseBody::Task> task_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IaCService20210806
#endif
