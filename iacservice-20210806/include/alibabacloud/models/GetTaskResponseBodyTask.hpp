// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTASKRESPONSEBODYTASK_HPP_
#define ALIBABACLOUD_MODELS_GETTASKRESPONSEBODYTASK_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetTaskResponseBodyTaskGroupInfo.hpp>
#include <vector>
#include <alibabacloud/models/GetTaskResponseBodyTaskTags.hpp>
#include <alibabacloud/models/GetTaskResponseBodyTaskTaskBackend.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IaCService20210806
{
namespace Models
{
  class GetTaskResponseBodyTask : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTaskResponseBodyTask& obj) { 
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
    friend void from_json(const Darabonba::Json& j, GetTaskResponseBodyTask& obj) { 
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
    GetTaskResponseBodyTask() = default ;
    GetTaskResponseBodyTask(const GetTaskResponseBodyTask &) = default ;
    GetTaskResponseBodyTask(GetTaskResponseBodyTask &&) = default ;
    GetTaskResponseBodyTask(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTaskResponseBodyTask() = default ;
    GetTaskResponseBodyTask& operator=(const GetTaskResponseBodyTask &) = default ;
    GetTaskResponseBodyTask& operator=(GetTaskResponseBodyTask &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoApply_ == nullptr
        && return this->autoDestroy_ == nullptr && return this->createTime_ == nullptr && return this->currentJobId_ == nullptr && return this->currentJobStatus_ == nullptr && return this->deletionProtection_ == nullptr
        && return this->description_ == nullptr && return this->groupInfo_ == nullptr && return this->initModuleState_ == nullptr && return this->latestModuleVersion_ == nullptr && return this->moduleId_ == nullptr
        && return this->moduleName_ == nullptr && return this->moduleVersion_ == nullptr && return this->name_ == nullptr && return this->protectionStrategy_ == nullptr && return this->ramRole_ == nullptr
        && return this->skipPropertyValidation_ == nullptr && return this->status_ == nullptr && return this->tags_ == nullptr && return this->taskBackend_ == nullptr && return this->taskId_ == nullptr
        && return this->taskOutputPath_ == nullptr && return this->terraformVersion_ == nullptr && return this->triggerStrategy_ == nullptr; };
    // autoApply Field Functions 
    bool hasAutoApply() const { return this->autoApply_ != nullptr;};
    void deleteAutoApply() { this->autoApply_ = nullptr;};
    inline bool autoApply() const { DARABONBA_PTR_GET_DEFAULT(autoApply_, false) };
    inline GetTaskResponseBodyTask& setAutoApply(bool autoApply) { DARABONBA_PTR_SET_VALUE(autoApply_, autoApply) };


    // autoDestroy Field Functions 
    bool hasAutoDestroy() const { return this->autoDestroy_ != nullptr;};
    void deleteAutoDestroy() { this->autoDestroy_ = nullptr;};
    inline bool autoDestroy() const { DARABONBA_PTR_GET_DEFAULT(autoDestroy_, false) };
    inline GetTaskResponseBodyTask& setAutoDestroy(bool autoDestroy) { DARABONBA_PTR_SET_VALUE(autoDestroy_, autoDestroy) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline GetTaskResponseBodyTask& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // currentJobId Field Functions 
    bool hasCurrentJobId() const { return this->currentJobId_ != nullptr;};
    void deleteCurrentJobId() { this->currentJobId_ = nullptr;};
    inline string currentJobId() const { DARABONBA_PTR_GET_DEFAULT(currentJobId_, "") };
    inline GetTaskResponseBodyTask& setCurrentJobId(string currentJobId) { DARABONBA_PTR_SET_VALUE(currentJobId_, currentJobId) };


    // currentJobStatus Field Functions 
    bool hasCurrentJobStatus() const { return this->currentJobStatus_ != nullptr;};
    void deleteCurrentJobStatus() { this->currentJobStatus_ = nullptr;};
    inline string currentJobStatus() const { DARABONBA_PTR_GET_DEFAULT(currentJobStatus_, "") };
    inline GetTaskResponseBodyTask& setCurrentJobStatus(string currentJobStatus) { DARABONBA_PTR_SET_VALUE(currentJobStatus_, currentJobStatus) };


    // deletionProtection Field Functions 
    bool hasDeletionProtection() const { return this->deletionProtection_ != nullptr;};
    void deleteDeletionProtection() { this->deletionProtection_ = nullptr;};
    inline bool deletionProtection() const { DARABONBA_PTR_GET_DEFAULT(deletionProtection_, false) };
    inline GetTaskResponseBodyTask& setDeletionProtection(bool deletionProtection) { DARABONBA_PTR_SET_VALUE(deletionProtection_, deletionProtection) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetTaskResponseBodyTask& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // groupInfo Field Functions 
    bool hasGroupInfo() const { return this->groupInfo_ != nullptr;};
    void deleteGroupInfo() { this->groupInfo_ = nullptr;};
    inline const Models::GetTaskResponseBodyTaskGroupInfo & groupInfo() const { DARABONBA_PTR_GET_CONST(groupInfo_, Models::GetTaskResponseBodyTaskGroupInfo) };
    inline Models::GetTaskResponseBodyTaskGroupInfo groupInfo() { DARABONBA_PTR_GET(groupInfo_, Models::GetTaskResponseBodyTaskGroupInfo) };
    inline GetTaskResponseBodyTask& setGroupInfo(const Models::GetTaskResponseBodyTaskGroupInfo & groupInfo) { DARABONBA_PTR_SET_VALUE(groupInfo_, groupInfo) };
    inline GetTaskResponseBodyTask& setGroupInfo(Models::GetTaskResponseBodyTaskGroupInfo && groupInfo) { DARABONBA_PTR_SET_RVALUE(groupInfo_, groupInfo) };


    // initModuleState Field Functions 
    bool hasInitModuleState() const { return this->initModuleState_ != nullptr;};
    void deleteInitModuleState() { this->initModuleState_ = nullptr;};
    inline bool initModuleState() const { DARABONBA_PTR_GET_DEFAULT(initModuleState_, false) };
    inline GetTaskResponseBodyTask& setInitModuleState(bool initModuleState) { DARABONBA_PTR_SET_VALUE(initModuleState_, initModuleState) };


    // latestModuleVersion Field Functions 
    bool hasLatestModuleVersion() const { return this->latestModuleVersion_ != nullptr;};
    void deleteLatestModuleVersion() { this->latestModuleVersion_ = nullptr;};
    inline string latestModuleVersion() const { DARABONBA_PTR_GET_DEFAULT(latestModuleVersion_, "") };
    inline GetTaskResponseBodyTask& setLatestModuleVersion(string latestModuleVersion) { DARABONBA_PTR_SET_VALUE(latestModuleVersion_, latestModuleVersion) };


    // moduleId Field Functions 
    bool hasModuleId() const { return this->moduleId_ != nullptr;};
    void deleteModuleId() { this->moduleId_ = nullptr;};
    inline string moduleId() const { DARABONBA_PTR_GET_DEFAULT(moduleId_, "") };
    inline GetTaskResponseBodyTask& setModuleId(string moduleId) { DARABONBA_PTR_SET_VALUE(moduleId_, moduleId) };


    // moduleName Field Functions 
    bool hasModuleName() const { return this->moduleName_ != nullptr;};
    void deleteModuleName() { this->moduleName_ = nullptr;};
    inline string moduleName() const { DARABONBA_PTR_GET_DEFAULT(moduleName_, "") };
    inline GetTaskResponseBodyTask& setModuleName(string moduleName) { DARABONBA_PTR_SET_VALUE(moduleName_, moduleName) };


    // moduleVersion Field Functions 
    bool hasModuleVersion() const { return this->moduleVersion_ != nullptr;};
    void deleteModuleVersion() { this->moduleVersion_ = nullptr;};
    inline string moduleVersion() const { DARABONBA_PTR_GET_DEFAULT(moduleVersion_, "") };
    inline GetTaskResponseBodyTask& setModuleVersion(string moduleVersion) { DARABONBA_PTR_SET_VALUE(moduleVersion_, moduleVersion) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetTaskResponseBodyTask& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // protectionStrategy Field Functions 
    bool hasProtectionStrategy() const { return this->protectionStrategy_ != nullptr;};
    void deleteProtectionStrategy() { this->protectionStrategy_ = nullptr;};
    inline const vector<string> & protectionStrategy() const { DARABONBA_PTR_GET_CONST(protectionStrategy_, vector<string>) };
    inline vector<string> protectionStrategy() { DARABONBA_PTR_GET(protectionStrategy_, vector<string>) };
    inline GetTaskResponseBodyTask& setProtectionStrategy(const vector<string> & protectionStrategy) { DARABONBA_PTR_SET_VALUE(protectionStrategy_, protectionStrategy) };
    inline GetTaskResponseBodyTask& setProtectionStrategy(vector<string> && protectionStrategy) { DARABONBA_PTR_SET_RVALUE(protectionStrategy_, protectionStrategy) };


    // ramRole Field Functions 
    bool hasRamRole() const { return this->ramRole_ != nullptr;};
    void deleteRamRole() { this->ramRole_ = nullptr;};
    inline string ramRole() const { DARABONBA_PTR_GET_DEFAULT(ramRole_, "") };
    inline GetTaskResponseBodyTask& setRamRole(string ramRole) { DARABONBA_PTR_SET_VALUE(ramRole_, ramRole) };


    // skipPropertyValidation Field Functions 
    bool hasSkipPropertyValidation() const { return this->skipPropertyValidation_ != nullptr;};
    void deleteSkipPropertyValidation() { this->skipPropertyValidation_ = nullptr;};
    inline bool skipPropertyValidation() const { DARABONBA_PTR_GET_DEFAULT(skipPropertyValidation_, false) };
    inline GetTaskResponseBodyTask& setSkipPropertyValidation(bool skipPropertyValidation) { DARABONBA_PTR_SET_VALUE(skipPropertyValidation_, skipPropertyValidation) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetTaskResponseBodyTask& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Models::GetTaskResponseBodyTaskTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Models::GetTaskResponseBodyTaskTags>) };
    inline vector<Models::GetTaskResponseBodyTaskTags> tags() { DARABONBA_PTR_GET(tags_, vector<Models::GetTaskResponseBodyTaskTags>) };
    inline GetTaskResponseBodyTask& setTags(const vector<Models::GetTaskResponseBodyTaskTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline GetTaskResponseBodyTask& setTags(vector<Models::GetTaskResponseBodyTaskTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // taskBackend Field Functions 
    bool hasTaskBackend() const { return this->taskBackend_ != nullptr;};
    void deleteTaskBackend() { this->taskBackend_ = nullptr;};
    inline const Models::GetTaskResponseBodyTaskTaskBackend & taskBackend() const { DARABONBA_PTR_GET_CONST(taskBackend_, Models::GetTaskResponseBodyTaskTaskBackend) };
    inline Models::GetTaskResponseBodyTaskTaskBackend taskBackend() { DARABONBA_PTR_GET(taskBackend_, Models::GetTaskResponseBodyTaskTaskBackend) };
    inline GetTaskResponseBodyTask& setTaskBackend(const Models::GetTaskResponseBodyTaskTaskBackend & taskBackend) { DARABONBA_PTR_SET_VALUE(taskBackend_, taskBackend) };
    inline GetTaskResponseBodyTask& setTaskBackend(Models::GetTaskResponseBodyTaskTaskBackend && taskBackend) { DARABONBA_PTR_SET_RVALUE(taskBackend_, taskBackend) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline GetTaskResponseBodyTask& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // taskOutputPath Field Functions 
    bool hasTaskOutputPath() const { return this->taskOutputPath_ != nullptr;};
    void deleteTaskOutputPath() { this->taskOutputPath_ = nullptr;};
    inline string taskOutputPath() const { DARABONBA_PTR_GET_DEFAULT(taskOutputPath_, "") };
    inline GetTaskResponseBodyTask& setTaskOutputPath(string taskOutputPath) { DARABONBA_PTR_SET_VALUE(taskOutputPath_, taskOutputPath) };


    // terraformVersion Field Functions 
    bool hasTerraformVersion() const { return this->terraformVersion_ != nullptr;};
    void deleteTerraformVersion() { this->terraformVersion_ = nullptr;};
    inline string terraformVersion() const { DARABONBA_PTR_GET_DEFAULT(terraformVersion_, "") };
    inline GetTaskResponseBodyTask& setTerraformVersion(string terraformVersion) { DARABONBA_PTR_SET_VALUE(terraformVersion_, terraformVersion) };


    // triggerStrategy Field Functions 
    bool hasTriggerStrategy() const { return this->triggerStrategy_ != nullptr;};
    void deleteTriggerStrategy() { this->triggerStrategy_ = nullptr;};
    inline string triggerStrategy() const { DARABONBA_PTR_GET_DEFAULT(triggerStrategy_, "") };
    inline GetTaskResponseBodyTask& setTriggerStrategy(string triggerStrategy) { DARABONBA_PTR_SET_VALUE(triggerStrategy_, triggerStrategy) };


  protected:
    std::shared_ptr<bool> autoApply_ = nullptr;
    std::shared_ptr<bool> autoDestroy_ = nullptr;
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<string> currentJobId_ = nullptr;
    std::shared_ptr<string> currentJobStatus_ = nullptr;
    std::shared_ptr<bool> deletionProtection_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<Models::GetTaskResponseBodyTaskGroupInfo> groupInfo_ = nullptr;
    std::shared_ptr<bool> initModuleState_ = nullptr;
    std::shared_ptr<string> latestModuleVersion_ = nullptr;
    std::shared_ptr<string> moduleId_ = nullptr;
    std::shared_ptr<string> moduleName_ = nullptr;
    std::shared_ptr<string> moduleVersion_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<vector<string>> protectionStrategy_ = nullptr;
    std::shared_ptr<string> ramRole_ = nullptr;
    std::shared_ptr<bool> skipPropertyValidation_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<vector<Models::GetTaskResponseBodyTaskTags>> tags_ = nullptr;
    std::shared_ptr<Models::GetTaskResponseBodyTaskTaskBackend> taskBackend_ = nullptr;
    std::shared_ptr<string> taskId_ = nullptr;
    std::shared_ptr<string> taskOutputPath_ = nullptr;
    std::shared_ptr<string> terraformVersion_ = nullptr;
    std::shared_ptr<string> triggerStrategy_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IaCService20210806
#endif
