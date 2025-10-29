// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTASKSRESPONSEBODYTASKS_HPP_
#define ALIBABACLOUD_MODELS_LISTTASKSRESPONSEBODYTASKS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListTasksResponseBodyTasksGroupInfo.hpp>
#include <vector>
#include <alibabacloud/models/ListTasksResponseBodyTasksTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IaCService20210806
{
namespace Models
{
  class ListTasksResponseBodyTasks : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTasksResponseBodyTasks& obj) { 
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
    friend void from_json(const Darabonba::Json& j, ListTasksResponseBodyTasks& obj) { 
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
    ListTasksResponseBodyTasks() = default ;
    ListTasksResponseBodyTasks(const ListTasksResponseBodyTasks &) = default ;
    ListTasksResponseBodyTasks(ListTasksResponseBodyTasks &&) = default ;
    ListTasksResponseBodyTasks(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTasksResponseBodyTasks() = default ;
    ListTasksResponseBodyTasks& operator=(const ListTasksResponseBodyTasks &) = default ;
    ListTasksResponseBodyTasks& operator=(ListTasksResponseBodyTasks &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoApply_ == nullptr
        && return this->createTime_ == nullptr && return this->currentJobId_ == nullptr && return this->currentJobStatus_ == nullptr && return this->deletionProtection_ == nullptr && return this->groupInfo_ == nullptr
        && return this->latestModuleVersion_ == nullptr && return this->moduleId_ == nullptr && return this->moduleName_ == nullptr && return this->moduleVersion_ == nullptr && return this->name_ == nullptr
        && return this->status_ == nullptr && return this->tags_ == nullptr && return this->taskId_ == nullptr; };
    // autoApply Field Functions 
    bool hasAutoApply() const { return this->autoApply_ != nullptr;};
    void deleteAutoApply() { this->autoApply_ = nullptr;};
    inline bool autoApply() const { DARABONBA_PTR_GET_DEFAULT(autoApply_, false) };
    inline ListTasksResponseBodyTasks& setAutoApply(bool autoApply) { DARABONBA_PTR_SET_VALUE(autoApply_, autoApply) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListTasksResponseBodyTasks& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // currentJobId Field Functions 
    bool hasCurrentJobId() const { return this->currentJobId_ != nullptr;};
    void deleteCurrentJobId() { this->currentJobId_ = nullptr;};
    inline string currentJobId() const { DARABONBA_PTR_GET_DEFAULT(currentJobId_, "") };
    inline ListTasksResponseBodyTasks& setCurrentJobId(string currentJobId) { DARABONBA_PTR_SET_VALUE(currentJobId_, currentJobId) };


    // currentJobStatus Field Functions 
    bool hasCurrentJobStatus() const { return this->currentJobStatus_ != nullptr;};
    void deleteCurrentJobStatus() { this->currentJobStatus_ = nullptr;};
    inline string currentJobStatus() const { DARABONBA_PTR_GET_DEFAULT(currentJobStatus_, "") };
    inline ListTasksResponseBodyTasks& setCurrentJobStatus(string currentJobStatus) { DARABONBA_PTR_SET_VALUE(currentJobStatus_, currentJobStatus) };


    // deletionProtection Field Functions 
    bool hasDeletionProtection() const { return this->deletionProtection_ != nullptr;};
    void deleteDeletionProtection() { this->deletionProtection_ = nullptr;};
    inline bool deletionProtection() const { DARABONBA_PTR_GET_DEFAULT(deletionProtection_, false) };
    inline ListTasksResponseBodyTasks& setDeletionProtection(bool deletionProtection) { DARABONBA_PTR_SET_VALUE(deletionProtection_, deletionProtection) };


    // groupInfo Field Functions 
    bool hasGroupInfo() const { return this->groupInfo_ != nullptr;};
    void deleteGroupInfo() { this->groupInfo_ = nullptr;};
    inline const Models::ListTasksResponseBodyTasksGroupInfo & groupInfo() const { DARABONBA_PTR_GET_CONST(groupInfo_, Models::ListTasksResponseBodyTasksGroupInfo) };
    inline Models::ListTasksResponseBodyTasksGroupInfo groupInfo() { DARABONBA_PTR_GET(groupInfo_, Models::ListTasksResponseBodyTasksGroupInfo) };
    inline ListTasksResponseBodyTasks& setGroupInfo(const Models::ListTasksResponseBodyTasksGroupInfo & groupInfo) { DARABONBA_PTR_SET_VALUE(groupInfo_, groupInfo) };
    inline ListTasksResponseBodyTasks& setGroupInfo(Models::ListTasksResponseBodyTasksGroupInfo && groupInfo) { DARABONBA_PTR_SET_RVALUE(groupInfo_, groupInfo) };


    // latestModuleVersion Field Functions 
    bool hasLatestModuleVersion() const { return this->latestModuleVersion_ != nullptr;};
    void deleteLatestModuleVersion() { this->latestModuleVersion_ = nullptr;};
    inline string latestModuleVersion() const { DARABONBA_PTR_GET_DEFAULT(latestModuleVersion_, "") };
    inline ListTasksResponseBodyTasks& setLatestModuleVersion(string latestModuleVersion) { DARABONBA_PTR_SET_VALUE(latestModuleVersion_, latestModuleVersion) };


    // moduleId Field Functions 
    bool hasModuleId() const { return this->moduleId_ != nullptr;};
    void deleteModuleId() { this->moduleId_ = nullptr;};
    inline string moduleId() const { DARABONBA_PTR_GET_DEFAULT(moduleId_, "") };
    inline ListTasksResponseBodyTasks& setModuleId(string moduleId) { DARABONBA_PTR_SET_VALUE(moduleId_, moduleId) };


    // moduleName Field Functions 
    bool hasModuleName() const { return this->moduleName_ != nullptr;};
    void deleteModuleName() { this->moduleName_ = nullptr;};
    inline string moduleName() const { DARABONBA_PTR_GET_DEFAULT(moduleName_, "") };
    inline ListTasksResponseBodyTasks& setModuleName(string moduleName) { DARABONBA_PTR_SET_VALUE(moduleName_, moduleName) };


    // moduleVersion Field Functions 
    bool hasModuleVersion() const { return this->moduleVersion_ != nullptr;};
    void deleteModuleVersion() { this->moduleVersion_ = nullptr;};
    inline string moduleVersion() const { DARABONBA_PTR_GET_DEFAULT(moduleVersion_, "") };
    inline ListTasksResponseBodyTasks& setModuleVersion(string moduleVersion) { DARABONBA_PTR_SET_VALUE(moduleVersion_, moduleVersion) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListTasksResponseBodyTasks& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListTasksResponseBodyTasks& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Models::ListTasksResponseBodyTasksTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Models::ListTasksResponseBodyTasksTags>) };
    inline vector<Models::ListTasksResponseBodyTasksTags> tags() { DARABONBA_PTR_GET(tags_, vector<Models::ListTasksResponseBodyTasksTags>) };
    inline ListTasksResponseBodyTasks& setTags(const vector<Models::ListTasksResponseBodyTasksTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline ListTasksResponseBodyTasks& setTags(vector<Models::ListTasksResponseBodyTasksTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline ListTasksResponseBodyTasks& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    std::shared_ptr<bool> autoApply_ = nullptr;
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<string> currentJobId_ = nullptr;
    std::shared_ptr<string> currentJobStatus_ = nullptr;
    std::shared_ptr<bool> deletionProtection_ = nullptr;
    std::shared_ptr<Models::ListTasksResponseBodyTasksGroupInfo> groupInfo_ = nullptr;
    std::shared_ptr<string> latestModuleVersion_ = nullptr;
    std::shared_ptr<string> moduleId_ = nullptr;
    std::shared_ptr<string> moduleName_ = nullptr;
    std::shared_ptr<string> moduleVersion_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<vector<Models::ListTasksResponseBodyTasksTags>> tags_ = nullptr;
    std::shared_ptr<string> taskId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IaCService20210806
#endif
