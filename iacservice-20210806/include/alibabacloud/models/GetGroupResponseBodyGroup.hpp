// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETGROUPRESPONSEBODYGROUP_HPP_
#define ALIBABACLOUD_MODELS_GETGROUPRESPONSEBODYGROUP_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetGroupResponseBodyGroupNotifyConfig.hpp>
#include <alibabacloud/models/GetGroupResponseBodyGroupTriggerConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IaCService20210806
{
namespace Models
{
  class GetGroupResponseBodyGroup : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetGroupResponseBodyGroup& obj) { 
      DARABONBA_PTR_TO_JSON(autoDestroy, autoDestroy_);
      DARABONBA_PTR_TO_JSON(autoTrigger, autoTrigger_);
      DARABONBA_PTR_TO_JSON(createTime, createTime_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(forcedSetting, forcedSetting_);
      DARABONBA_PTR_TO_JSON(groupId, groupId_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(notifyConfig, notifyConfig_);
      DARABONBA_PTR_TO_JSON(notifyOperationTypes, notifyOperationTypes_);
      DARABONBA_PTR_TO_JSON(projectId, projectId_);
      DARABONBA_PTR_TO_JSON(ramRole, ramRole_);
      DARABONBA_PTR_TO_JSON(reportExportField, reportExportField_);
      DARABONBA_PTR_TO_JSON(reportExportPath, reportExportPath_);
      DARABONBA_PTR_TO_JSON(taskCnt, taskCnt_);
      DARABONBA_PTR_TO_JSON(terraformProviderVersion, terraformProviderVersion_);
      DARABONBA_PTR_TO_JSON(triggerConfig, triggerConfig_);
      DARABONBA_PTR_TO_JSON(triggerResourceType, triggerResourceType_);
    };
    friend void from_json(const Darabonba::Json& j, GetGroupResponseBodyGroup& obj) { 
      DARABONBA_PTR_FROM_JSON(autoDestroy, autoDestroy_);
      DARABONBA_PTR_FROM_JSON(autoTrigger, autoTrigger_);
      DARABONBA_PTR_FROM_JSON(createTime, createTime_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(forcedSetting, forcedSetting_);
      DARABONBA_PTR_FROM_JSON(groupId, groupId_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(notifyConfig, notifyConfig_);
      DARABONBA_PTR_FROM_JSON(notifyOperationTypes, notifyOperationTypes_);
      DARABONBA_PTR_FROM_JSON(projectId, projectId_);
      DARABONBA_PTR_FROM_JSON(ramRole, ramRole_);
      DARABONBA_PTR_FROM_JSON(reportExportField, reportExportField_);
      DARABONBA_PTR_FROM_JSON(reportExportPath, reportExportPath_);
      DARABONBA_PTR_FROM_JSON(taskCnt, taskCnt_);
      DARABONBA_PTR_FROM_JSON(terraformProviderVersion, terraformProviderVersion_);
      DARABONBA_PTR_FROM_JSON(triggerConfig, triggerConfig_);
      DARABONBA_PTR_FROM_JSON(triggerResourceType, triggerResourceType_);
    };
    GetGroupResponseBodyGroup() = default ;
    GetGroupResponseBodyGroup(const GetGroupResponseBodyGroup &) = default ;
    GetGroupResponseBodyGroup(GetGroupResponseBodyGroup &&) = default ;
    GetGroupResponseBodyGroup(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetGroupResponseBodyGroup() = default ;
    GetGroupResponseBodyGroup& operator=(const GetGroupResponseBodyGroup &) = default ;
    GetGroupResponseBodyGroup& operator=(GetGroupResponseBodyGroup &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->autoDestroy_ != nullptr
        && this->autoTrigger_ != nullptr && this->createTime_ != nullptr && this->description_ != nullptr && this->forcedSetting_ != nullptr && this->groupId_ != nullptr
        && this->name_ != nullptr && this->notifyConfig_ != nullptr && this->notifyOperationTypes_ != nullptr && this->projectId_ != nullptr && this->ramRole_ != nullptr
        && this->reportExportField_ != nullptr && this->reportExportPath_ != nullptr && this->taskCnt_ != nullptr && this->terraformProviderVersion_ != nullptr && this->triggerConfig_ != nullptr
        && this->triggerResourceType_ != nullptr; };
    // autoDestroy Field Functions 
    bool hasAutoDestroy() const { return this->autoDestroy_ != nullptr;};
    void deleteAutoDestroy() { this->autoDestroy_ = nullptr;};
    inline bool autoDestroy() const { DARABONBA_PTR_GET_DEFAULT(autoDestroy_, false) };
    inline GetGroupResponseBodyGroup& setAutoDestroy(bool autoDestroy) { DARABONBA_PTR_SET_VALUE(autoDestroy_, autoDestroy) };


    // autoTrigger Field Functions 
    bool hasAutoTrigger() const { return this->autoTrigger_ != nullptr;};
    void deleteAutoTrigger() { this->autoTrigger_ = nullptr;};
    inline bool autoTrigger() const { DARABONBA_PTR_GET_DEFAULT(autoTrigger_, false) };
    inline GetGroupResponseBodyGroup& setAutoTrigger(bool autoTrigger) { DARABONBA_PTR_SET_VALUE(autoTrigger_, autoTrigger) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline GetGroupResponseBodyGroup& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetGroupResponseBodyGroup& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // forcedSetting Field Functions 
    bool hasForcedSetting() const { return this->forcedSetting_ != nullptr;};
    void deleteForcedSetting() { this->forcedSetting_ = nullptr;};
    inline bool forcedSetting() const { DARABONBA_PTR_GET_DEFAULT(forcedSetting_, false) };
    inline GetGroupResponseBodyGroup& setForcedSetting(bool forcedSetting) { DARABONBA_PTR_SET_VALUE(forcedSetting_, forcedSetting) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline GetGroupResponseBodyGroup& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetGroupResponseBodyGroup& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // notifyConfig Field Functions 
    bool hasNotifyConfig() const { return this->notifyConfig_ != nullptr;};
    void deleteNotifyConfig() { this->notifyConfig_ = nullptr;};
    inline const vector<Models::GetGroupResponseBodyGroupNotifyConfig> & notifyConfig() const { DARABONBA_PTR_GET_CONST(notifyConfig_, vector<Models::GetGroupResponseBodyGroupNotifyConfig>) };
    inline vector<Models::GetGroupResponseBodyGroupNotifyConfig> notifyConfig() { DARABONBA_PTR_GET(notifyConfig_, vector<Models::GetGroupResponseBodyGroupNotifyConfig>) };
    inline GetGroupResponseBodyGroup& setNotifyConfig(const vector<Models::GetGroupResponseBodyGroupNotifyConfig> & notifyConfig) { DARABONBA_PTR_SET_VALUE(notifyConfig_, notifyConfig) };
    inline GetGroupResponseBodyGroup& setNotifyConfig(vector<Models::GetGroupResponseBodyGroupNotifyConfig> && notifyConfig) { DARABONBA_PTR_SET_RVALUE(notifyConfig_, notifyConfig) };


    // notifyOperationTypes Field Functions 
    bool hasNotifyOperationTypes() const { return this->notifyOperationTypes_ != nullptr;};
    void deleteNotifyOperationTypes() { this->notifyOperationTypes_ = nullptr;};
    inline const vector<string> & notifyOperationTypes() const { DARABONBA_PTR_GET_CONST(notifyOperationTypes_, vector<string>) };
    inline vector<string> notifyOperationTypes() { DARABONBA_PTR_GET(notifyOperationTypes_, vector<string>) };
    inline GetGroupResponseBodyGroup& setNotifyOperationTypes(const vector<string> & notifyOperationTypes) { DARABONBA_PTR_SET_VALUE(notifyOperationTypes_, notifyOperationTypes) };
    inline GetGroupResponseBodyGroup& setNotifyOperationTypes(vector<string> && notifyOperationTypes) { DARABONBA_PTR_SET_RVALUE(notifyOperationTypes_, notifyOperationTypes) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline string projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, "") };
    inline GetGroupResponseBodyGroup& setProjectId(string projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // ramRole Field Functions 
    bool hasRamRole() const { return this->ramRole_ != nullptr;};
    void deleteRamRole() { this->ramRole_ = nullptr;};
    inline string ramRole() const { DARABONBA_PTR_GET_DEFAULT(ramRole_, "") };
    inline GetGroupResponseBodyGroup& setRamRole(string ramRole) { DARABONBA_PTR_SET_VALUE(ramRole_, ramRole) };


    // reportExportField Field Functions 
    bool hasReportExportField() const { return this->reportExportField_ != nullptr;};
    void deleteReportExportField() { this->reportExportField_ = nullptr;};
    inline const vector<string> & reportExportField() const { DARABONBA_PTR_GET_CONST(reportExportField_, vector<string>) };
    inline vector<string> reportExportField() { DARABONBA_PTR_GET(reportExportField_, vector<string>) };
    inline GetGroupResponseBodyGroup& setReportExportField(const vector<string> & reportExportField) { DARABONBA_PTR_SET_VALUE(reportExportField_, reportExportField) };
    inline GetGroupResponseBodyGroup& setReportExportField(vector<string> && reportExportField) { DARABONBA_PTR_SET_RVALUE(reportExportField_, reportExportField) };


    // reportExportPath Field Functions 
    bool hasReportExportPath() const { return this->reportExportPath_ != nullptr;};
    void deleteReportExportPath() { this->reportExportPath_ = nullptr;};
    inline string reportExportPath() const { DARABONBA_PTR_GET_DEFAULT(reportExportPath_, "") };
    inline GetGroupResponseBodyGroup& setReportExportPath(string reportExportPath) { DARABONBA_PTR_SET_VALUE(reportExportPath_, reportExportPath) };


    // taskCnt Field Functions 
    bool hasTaskCnt() const { return this->taskCnt_ != nullptr;};
    void deleteTaskCnt() { this->taskCnt_ = nullptr;};
    inline int64_t taskCnt() const { DARABONBA_PTR_GET_DEFAULT(taskCnt_, 0L) };
    inline GetGroupResponseBodyGroup& setTaskCnt(int64_t taskCnt) { DARABONBA_PTR_SET_VALUE(taskCnt_, taskCnt) };


    // terraformProviderVersion Field Functions 
    bool hasTerraformProviderVersion() const { return this->terraformProviderVersion_ != nullptr;};
    void deleteTerraformProviderVersion() { this->terraformProviderVersion_ = nullptr;};
    inline string terraformProviderVersion() const { DARABONBA_PTR_GET_DEFAULT(terraformProviderVersion_, "") };
    inline GetGroupResponseBodyGroup& setTerraformProviderVersion(string terraformProviderVersion) { DARABONBA_PTR_SET_VALUE(terraformProviderVersion_, terraformProviderVersion) };


    // triggerConfig Field Functions 
    bool hasTriggerConfig() const { return this->triggerConfig_ != nullptr;};
    void deleteTriggerConfig() { this->triggerConfig_ = nullptr;};
    inline const vector<Models::GetGroupResponseBodyGroupTriggerConfig> & triggerConfig() const { DARABONBA_PTR_GET_CONST(triggerConfig_, vector<Models::GetGroupResponseBodyGroupTriggerConfig>) };
    inline vector<Models::GetGroupResponseBodyGroupTriggerConfig> triggerConfig() { DARABONBA_PTR_GET(triggerConfig_, vector<Models::GetGroupResponseBodyGroupTriggerConfig>) };
    inline GetGroupResponseBodyGroup& setTriggerConfig(const vector<Models::GetGroupResponseBodyGroupTriggerConfig> & triggerConfig) { DARABONBA_PTR_SET_VALUE(triggerConfig_, triggerConfig) };
    inline GetGroupResponseBodyGroup& setTriggerConfig(vector<Models::GetGroupResponseBodyGroupTriggerConfig> && triggerConfig) { DARABONBA_PTR_SET_RVALUE(triggerConfig_, triggerConfig) };


    // triggerResourceType Field Functions 
    bool hasTriggerResourceType() const { return this->triggerResourceType_ != nullptr;};
    void deleteTriggerResourceType() { this->triggerResourceType_ = nullptr;};
    inline const vector<string> & triggerResourceType() const { DARABONBA_PTR_GET_CONST(triggerResourceType_, vector<string>) };
    inline vector<string> triggerResourceType() { DARABONBA_PTR_GET(triggerResourceType_, vector<string>) };
    inline GetGroupResponseBodyGroup& setTriggerResourceType(const vector<string> & triggerResourceType) { DARABONBA_PTR_SET_VALUE(triggerResourceType_, triggerResourceType) };
    inline GetGroupResponseBodyGroup& setTriggerResourceType(vector<string> && triggerResourceType) { DARABONBA_PTR_SET_RVALUE(triggerResourceType_, triggerResourceType) };


  protected:
    std::shared_ptr<bool> autoDestroy_ = nullptr;
    std::shared_ptr<bool> autoTrigger_ = nullptr;
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<bool> forcedSetting_ = nullptr;
    std::shared_ptr<string> groupId_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<vector<Models::GetGroupResponseBodyGroupNotifyConfig>> notifyConfig_ = nullptr;
    std::shared_ptr<vector<string>> notifyOperationTypes_ = nullptr;
    std::shared_ptr<string> projectId_ = nullptr;
    std::shared_ptr<string> ramRole_ = nullptr;
    std::shared_ptr<vector<string>> reportExportField_ = nullptr;
    std::shared_ptr<string> reportExportPath_ = nullptr;
    std::shared_ptr<int64_t> taskCnt_ = nullptr;
    std::shared_ptr<string> terraformProviderVersion_ = nullptr;
    std::shared_ptr<vector<Models::GetGroupResponseBodyGroupTriggerConfig>> triggerConfig_ = nullptr;
    std::shared_ptr<vector<string>> triggerResourceType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IaCService20210806
#endif
