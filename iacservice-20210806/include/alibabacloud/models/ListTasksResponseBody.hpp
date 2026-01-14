// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTASKSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTTASKSRESPONSEBODY_HPP_
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
  class ListTasksResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTasksResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(tasks, tasks_);
      DARABONBA_PTR_TO_JSON(totalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListTasksResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(tasks, tasks_);
      DARABONBA_PTR_FROM_JSON(totalCount, totalCount_);
    };
    ListTasksResponseBody() = default ;
    ListTasksResponseBody(const ListTasksResponseBody &) = default ;
    ListTasksResponseBody(ListTasksResponseBody &&) = default ;
    ListTasksResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTasksResponseBody() = default ;
    ListTasksResponseBody& operator=(const ListTasksResponseBody &) = default ;
    ListTasksResponseBody& operator=(ListTasksResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Tasks : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tasks& obj) { 
        DARABONBA_PTR_TO_JSON(autoApply, autoApply_);
        DARABONBA_PTR_TO_JSON(createTime, createTime_);
        DARABONBA_PTR_TO_JSON(currentJobId, currentJobId_);
        DARABONBA_PTR_TO_JSON(currentJobStatus, currentJobStatus_);
        DARABONBA_PTR_TO_JSON(deletionProtection, deletionProtection_);
        DARABONBA_PTR_TO_JSON(groupInfo, groupInfo_);
        DARABONBA_PTR_TO_JSON(latestModuleVersion, latestModuleVersion_);
        DARABONBA_PTR_TO_JSON(moduleId, moduleId_);
        DARABONBA_PTR_TO_JSON(moduleName, moduleName_);
        DARABONBA_PTR_TO_JSON(moduleVersion, moduleVersion_);
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(status, status_);
        DARABONBA_PTR_TO_JSON(tags, tags_);
        DARABONBA_PTR_TO_JSON(taskId, taskId_);
      };
      friend void from_json(const Darabonba::Json& j, Tasks& obj) { 
        DARABONBA_PTR_FROM_JSON(autoApply, autoApply_);
        DARABONBA_PTR_FROM_JSON(createTime, createTime_);
        DARABONBA_PTR_FROM_JSON(currentJobId, currentJobId_);
        DARABONBA_PTR_FROM_JSON(currentJobStatus, currentJobStatus_);
        DARABONBA_PTR_FROM_JSON(deletionProtection, deletionProtection_);
        DARABONBA_PTR_FROM_JSON(groupInfo, groupInfo_);
        DARABONBA_PTR_FROM_JSON(latestModuleVersion, latestModuleVersion_);
        DARABONBA_PTR_FROM_JSON(moduleId, moduleId_);
        DARABONBA_PTR_FROM_JSON(moduleName, moduleName_);
        DARABONBA_PTR_FROM_JSON(moduleVersion, moduleVersion_);
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(status, status_);
        DARABONBA_PTR_FROM_JSON(tags, tags_);
        DARABONBA_PTR_FROM_JSON(taskId, taskId_);
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
      class Tags : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Tags& obj) { 
          DARABONBA_PTR_TO_JSON(key, key_);
          DARABONBA_PTR_TO_JSON(tagKey, tagKey_);
          DARABONBA_PTR_TO_JSON(tagValue, tagValue_);
          DARABONBA_PTR_TO_JSON(value, value_);
        };
        friend void from_json(const Darabonba::Json& j, Tags& obj) { 
          DARABONBA_PTR_FROM_JSON(key, key_);
          DARABONBA_PTR_FROM_JSON(tagKey, tagKey_);
          DARABONBA_PTR_FROM_JSON(tagValue, tagValue_);
          DARABONBA_PTR_FROM_JSON(value, value_);
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
        virtual bool empty() const override { return this->key_ == nullptr
        && this->tagKey_ == nullptr && this->tagValue_ == nullptr && this->value_ == nullptr; };
        // key Field Functions 
        bool hasKey() const { return this->key_ != nullptr;};
        void deleteKey() { this->key_ = nullptr;};
        inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
        inline Tags& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


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


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline Tags& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        shared_ptr<string> key_ {};
        shared_ptr<string> tagKey_ {};
        shared_ptr<string> tagValue_ {};
        shared_ptr<string> value_ {};
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
        && this->createTime_ == nullptr && this->currentJobId_ == nullptr && this->currentJobStatus_ == nullptr && this->deletionProtection_ == nullptr && this->groupInfo_ == nullptr
        && this->latestModuleVersion_ == nullptr && this->moduleId_ == nullptr && this->moduleName_ == nullptr && this->moduleVersion_ == nullptr && this->name_ == nullptr
        && this->status_ == nullptr && this->tags_ == nullptr && this->taskId_ == nullptr; };
      // autoApply Field Functions 
      bool hasAutoApply() const { return this->autoApply_ != nullptr;};
      void deleteAutoApply() { this->autoApply_ = nullptr;};
      inline bool getAutoApply() const { DARABONBA_PTR_GET_DEFAULT(autoApply_, false) };
      inline Tasks& setAutoApply(bool autoApply) { DARABONBA_PTR_SET_VALUE(autoApply_, autoApply) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Tasks& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // currentJobId Field Functions 
      bool hasCurrentJobId() const { return this->currentJobId_ != nullptr;};
      void deleteCurrentJobId() { this->currentJobId_ = nullptr;};
      inline string getCurrentJobId() const { DARABONBA_PTR_GET_DEFAULT(currentJobId_, "") };
      inline Tasks& setCurrentJobId(string currentJobId) { DARABONBA_PTR_SET_VALUE(currentJobId_, currentJobId) };


      // currentJobStatus Field Functions 
      bool hasCurrentJobStatus() const { return this->currentJobStatus_ != nullptr;};
      void deleteCurrentJobStatus() { this->currentJobStatus_ = nullptr;};
      inline string getCurrentJobStatus() const { DARABONBA_PTR_GET_DEFAULT(currentJobStatus_, "") };
      inline Tasks& setCurrentJobStatus(string currentJobStatus) { DARABONBA_PTR_SET_VALUE(currentJobStatus_, currentJobStatus) };


      // deletionProtection Field Functions 
      bool hasDeletionProtection() const { return this->deletionProtection_ != nullptr;};
      void deleteDeletionProtection() { this->deletionProtection_ = nullptr;};
      inline bool getDeletionProtection() const { DARABONBA_PTR_GET_DEFAULT(deletionProtection_, false) };
      inline Tasks& setDeletionProtection(bool deletionProtection) { DARABONBA_PTR_SET_VALUE(deletionProtection_, deletionProtection) };


      // groupInfo Field Functions 
      bool hasGroupInfo() const { return this->groupInfo_ != nullptr;};
      void deleteGroupInfo() { this->groupInfo_ = nullptr;};
      inline const Tasks::GroupInfo & getGroupInfo() const { DARABONBA_PTR_GET_CONST(groupInfo_, Tasks::GroupInfo) };
      inline Tasks::GroupInfo getGroupInfo() { DARABONBA_PTR_GET(groupInfo_, Tasks::GroupInfo) };
      inline Tasks& setGroupInfo(const Tasks::GroupInfo & groupInfo) { DARABONBA_PTR_SET_VALUE(groupInfo_, groupInfo) };
      inline Tasks& setGroupInfo(Tasks::GroupInfo && groupInfo) { DARABONBA_PTR_SET_RVALUE(groupInfo_, groupInfo) };


      // latestModuleVersion Field Functions 
      bool hasLatestModuleVersion() const { return this->latestModuleVersion_ != nullptr;};
      void deleteLatestModuleVersion() { this->latestModuleVersion_ = nullptr;};
      inline string getLatestModuleVersion() const { DARABONBA_PTR_GET_DEFAULT(latestModuleVersion_, "") };
      inline Tasks& setLatestModuleVersion(string latestModuleVersion) { DARABONBA_PTR_SET_VALUE(latestModuleVersion_, latestModuleVersion) };


      // moduleId Field Functions 
      bool hasModuleId() const { return this->moduleId_ != nullptr;};
      void deleteModuleId() { this->moduleId_ = nullptr;};
      inline string getModuleId() const { DARABONBA_PTR_GET_DEFAULT(moduleId_, "") };
      inline Tasks& setModuleId(string moduleId) { DARABONBA_PTR_SET_VALUE(moduleId_, moduleId) };


      // moduleName Field Functions 
      bool hasModuleName() const { return this->moduleName_ != nullptr;};
      void deleteModuleName() { this->moduleName_ = nullptr;};
      inline string getModuleName() const { DARABONBA_PTR_GET_DEFAULT(moduleName_, "") };
      inline Tasks& setModuleName(string moduleName) { DARABONBA_PTR_SET_VALUE(moduleName_, moduleName) };


      // moduleVersion Field Functions 
      bool hasModuleVersion() const { return this->moduleVersion_ != nullptr;};
      void deleteModuleVersion() { this->moduleVersion_ = nullptr;};
      inline string getModuleVersion() const { DARABONBA_PTR_GET_DEFAULT(moduleVersion_, "") };
      inline Tasks& setModuleVersion(string moduleVersion) { DARABONBA_PTR_SET_VALUE(moduleVersion_, moduleVersion) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Tasks& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Tasks& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline const vector<Tasks::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Tasks::Tags>) };
      inline vector<Tasks::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<Tasks::Tags>) };
      inline Tasks& setTags(const vector<Tasks::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
      inline Tasks& setTags(vector<Tasks::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
      inline Tasks& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    protected:
      shared_ptr<bool> autoApply_ {};
      shared_ptr<string> createTime_ {};
      shared_ptr<string> currentJobId_ {};
      shared_ptr<string> currentJobStatus_ {};
      shared_ptr<bool> deletionProtection_ {};
      shared_ptr<Tasks::GroupInfo> groupInfo_ {};
      shared_ptr<string> latestModuleVersion_ {};
      shared_ptr<string> moduleId_ {};
      shared_ptr<string> moduleName_ {};
      shared_ptr<string> moduleVersion_ {};
      shared_ptr<string> name_ {};
      shared_ptr<string> status_ {};
      shared_ptr<vector<Tasks::Tags>> tags_ {};
      shared_ptr<string> taskId_ {};
    };

    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->tasks_ == nullptr && this->totalCount_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListTasksResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListTasksResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListTasksResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // tasks Field Functions 
    bool hasTasks() const { return this->tasks_ != nullptr;};
    void deleteTasks() { this->tasks_ = nullptr;};
    inline const vector<ListTasksResponseBody::Tasks> & getTasks() const { DARABONBA_PTR_GET_CONST(tasks_, vector<ListTasksResponseBody::Tasks>) };
    inline vector<ListTasksResponseBody::Tasks> getTasks() { DARABONBA_PTR_GET(tasks_, vector<ListTasksResponseBody::Tasks>) };
    inline ListTasksResponseBody& setTasks(const vector<ListTasksResponseBody::Tasks> & tasks) { DARABONBA_PTR_SET_VALUE(tasks_, tasks) };
    inline ListTasksResponseBody& setTasks(vector<ListTasksResponseBody::Tasks> && tasks) { DARABONBA_PTR_SET_RVALUE(tasks_, tasks) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListTasksResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<int32_t> pageNumber_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<ListTasksResponseBody::Tasks>> tasks_ {};
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IaCService20210806
#endif
