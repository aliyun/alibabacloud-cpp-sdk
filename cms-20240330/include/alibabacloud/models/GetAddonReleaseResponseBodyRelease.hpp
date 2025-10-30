// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETADDONRELEASERESPONSEBODYRELEASE_HPP_
#define ALIBABACLOUD_MODELS_GETADDONRELEASERESPONSEBODYRELEASE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetAddonReleaseResponseBodyReleaseConditions.hpp>
#include <alibabacloud/models/EntityGroupBase.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class GetAddonReleaseResponseBodyRelease : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAddonReleaseResponseBodyRelease& obj) { 
      DARABONBA_PTR_TO_JSON(addonName, addonName_);
      DARABONBA_PTR_TO_JSON(alertRuleCount, alertRuleCount_);
      DARABONBA_PTR_TO_JSON(conditions, conditions_);
      DARABONBA_PTR_TO_JSON(config, config_);
      DARABONBA_PTR_TO_JSON(createTime, createTime_);
      DARABONBA_PTR_TO_JSON(dashboardCount, dashboardCount_);
      DARABONBA_PTR_TO_JSON(entityRules, entityRules_);
      DARABONBA_PTR_TO_JSON(envType, envType_);
      DARABONBA_PTR_TO_JSON(environmentId, environmentId_);
      DARABONBA_PTR_TO_JSON(exporterCount, exporterCount_);
      DARABONBA_PTR_TO_JSON(haveConfig, haveConfig_);
      DARABONBA_PTR_TO_JSON(installUserId, installUserId_);
      DARABONBA_PTR_TO_JSON(language, language_);
      DARABONBA_PTR_TO_JSON(managed, managed_);
      DARABONBA_PTR_TO_JSON(parentAddonReleaseId, parentAddonReleaseId_);
      DARABONBA_PTR_TO_JSON(policyId, policyId_);
      DARABONBA_PTR_TO_JSON(regionId, regionId_);
      DARABONBA_PTR_TO_JSON(releaseId, releaseId_);
      DARABONBA_PTR_TO_JSON(releaseName, releaseName_);
      DARABONBA_PTR_TO_JSON(scene, scene_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(updateTime, updateTime_);
      DARABONBA_PTR_TO_JSON(userId, userId_);
      DARABONBA_PTR_TO_JSON(version, version_);
      DARABONBA_PTR_TO_JSON(workspace, workspace_);
    };
    friend void from_json(const Darabonba::Json& j, GetAddonReleaseResponseBodyRelease& obj) { 
      DARABONBA_PTR_FROM_JSON(addonName, addonName_);
      DARABONBA_PTR_FROM_JSON(alertRuleCount, alertRuleCount_);
      DARABONBA_PTR_FROM_JSON(conditions, conditions_);
      DARABONBA_PTR_FROM_JSON(config, config_);
      DARABONBA_PTR_FROM_JSON(createTime, createTime_);
      DARABONBA_PTR_FROM_JSON(dashboardCount, dashboardCount_);
      DARABONBA_PTR_FROM_JSON(entityRules, entityRules_);
      DARABONBA_PTR_FROM_JSON(envType, envType_);
      DARABONBA_PTR_FROM_JSON(environmentId, environmentId_);
      DARABONBA_PTR_FROM_JSON(exporterCount, exporterCount_);
      DARABONBA_PTR_FROM_JSON(haveConfig, haveConfig_);
      DARABONBA_PTR_FROM_JSON(installUserId, installUserId_);
      DARABONBA_PTR_FROM_JSON(language, language_);
      DARABONBA_PTR_FROM_JSON(managed, managed_);
      DARABONBA_PTR_FROM_JSON(parentAddonReleaseId, parentAddonReleaseId_);
      DARABONBA_PTR_FROM_JSON(policyId, policyId_);
      DARABONBA_PTR_FROM_JSON(regionId, regionId_);
      DARABONBA_PTR_FROM_JSON(releaseId, releaseId_);
      DARABONBA_PTR_FROM_JSON(releaseName, releaseName_);
      DARABONBA_PTR_FROM_JSON(scene, scene_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(updateTime, updateTime_);
      DARABONBA_PTR_FROM_JSON(userId, userId_);
      DARABONBA_PTR_FROM_JSON(version, version_);
      DARABONBA_PTR_FROM_JSON(workspace, workspace_);
    };
    GetAddonReleaseResponseBodyRelease() = default ;
    GetAddonReleaseResponseBodyRelease(const GetAddonReleaseResponseBodyRelease &) = default ;
    GetAddonReleaseResponseBodyRelease(GetAddonReleaseResponseBodyRelease &&) = default ;
    GetAddonReleaseResponseBodyRelease(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAddonReleaseResponseBodyRelease() = default ;
    GetAddonReleaseResponseBodyRelease& operator=(const GetAddonReleaseResponseBodyRelease &) = default ;
    GetAddonReleaseResponseBodyRelease& operator=(GetAddonReleaseResponseBodyRelease &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->addonName_ == nullptr
        && return this->alertRuleCount_ == nullptr && return this->conditions_ == nullptr && return this->config_ == nullptr && return this->createTime_ == nullptr && return this->dashboardCount_ == nullptr
        && return this->entityRules_ == nullptr && return this->envType_ == nullptr && return this->environmentId_ == nullptr && return this->exporterCount_ == nullptr && return this->haveConfig_ == nullptr
        && return this->installUserId_ == nullptr && return this->language_ == nullptr && return this->managed_ == nullptr && return this->parentAddonReleaseId_ == nullptr && return this->policyId_ == nullptr
        && return this->regionId_ == nullptr && return this->releaseId_ == nullptr && return this->releaseName_ == nullptr && return this->scene_ == nullptr && return this->status_ == nullptr
        && return this->updateTime_ == nullptr && return this->userId_ == nullptr && return this->version_ == nullptr && return this->workspace_ == nullptr; };
    // addonName Field Functions 
    bool hasAddonName() const { return this->addonName_ != nullptr;};
    void deleteAddonName() { this->addonName_ = nullptr;};
    inline string addonName() const { DARABONBA_PTR_GET_DEFAULT(addonName_, "") };
    inline GetAddonReleaseResponseBodyRelease& setAddonName(string addonName) { DARABONBA_PTR_SET_VALUE(addonName_, addonName) };


    // alertRuleCount Field Functions 
    bool hasAlertRuleCount() const { return this->alertRuleCount_ != nullptr;};
    void deleteAlertRuleCount() { this->alertRuleCount_ = nullptr;};
    inline int64_t alertRuleCount() const { DARABONBA_PTR_GET_DEFAULT(alertRuleCount_, 0L) };
    inline GetAddonReleaseResponseBodyRelease& setAlertRuleCount(int64_t alertRuleCount) { DARABONBA_PTR_SET_VALUE(alertRuleCount_, alertRuleCount) };


    // conditions Field Functions 
    bool hasConditions() const { return this->conditions_ != nullptr;};
    void deleteConditions() { this->conditions_ = nullptr;};
    inline const vector<Models::GetAddonReleaseResponseBodyReleaseConditions> & conditions() const { DARABONBA_PTR_GET_CONST(conditions_, vector<Models::GetAddonReleaseResponseBodyReleaseConditions>) };
    inline vector<Models::GetAddonReleaseResponseBodyReleaseConditions> conditions() { DARABONBA_PTR_GET(conditions_, vector<Models::GetAddonReleaseResponseBodyReleaseConditions>) };
    inline GetAddonReleaseResponseBodyRelease& setConditions(const vector<Models::GetAddonReleaseResponseBodyReleaseConditions> & conditions) { DARABONBA_PTR_SET_VALUE(conditions_, conditions) };
    inline GetAddonReleaseResponseBodyRelease& setConditions(vector<Models::GetAddonReleaseResponseBodyReleaseConditions> && conditions) { DARABONBA_PTR_SET_RVALUE(conditions_, conditions) };


    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline string config() const { DARABONBA_PTR_GET_DEFAULT(config_, "") };
    inline GetAddonReleaseResponseBodyRelease& setConfig(string config) { DARABONBA_PTR_SET_VALUE(config_, config) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline GetAddonReleaseResponseBodyRelease& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // dashboardCount Field Functions 
    bool hasDashboardCount() const { return this->dashboardCount_ != nullptr;};
    void deleteDashboardCount() { this->dashboardCount_ = nullptr;};
    inline int64_t dashboardCount() const { DARABONBA_PTR_GET_DEFAULT(dashboardCount_, 0L) };
    inline GetAddonReleaseResponseBodyRelease& setDashboardCount(int64_t dashboardCount) { DARABONBA_PTR_SET_VALUE(dashboardCount_, dashboardCount) };


    // entityRules Field Functions 
    bool hasEntityRules() const { return this->entityRules_ != nullptr;};
    void deleteEntityRules() { this->entityRules_ = nullptr;};
    inline const Models::EntityGroupBase & entityRules() const { DARABONBA_PTR_GET_CONST(entityRules_, Models::EntityGroupBase) };
    inline Models::EntityGroupBase entityRules() { DARABONBA_PTR_GET(entityRules_, Models::EntityGroupBase) };
    inline GetAddonReleaseResponseBodyRelease& setEntityRules(const Models::EntityGroupBase & entityRules) { DARABONBA_PTR_SET_VALUE(entityRules_, entityRules) };
    inline GetAddonReleaseResponseBodyRelease& setEntityRules(Models::EntityGroupBase && entityRules) { DARABONBA_PTR_SET_RVALUE(entityRules_, entityRules) };


    // envType Field Functions 
    bool hasEnvType() const { return this->envType_ != nullptr;};
    void deleteEnvType() { this->envType_ = nullptr;};
    inline string envType() const { DARABONBA_PTR_GET_DEFAULT(envType_, "") };
    inline GetAddonReleaseResponseBodyRelease& setEnvType(string envType) { DARABONBA_PTR_SET_VALUE(envType_, envType) };


    // environmentId Field Functions 
    bool hasEnvironmentId() const { return this->environmentId_ != nullptr;};
    void deleteEnvironmentId() { this->environmentId_ = nullptr;};
    inline string environmentId() const { DARABONBA_PTR_GET_DEFAULT(environmentId_, "") };
    inline GetAddonReleaseResponseBodyRelease& setEnvironmentId(string environmentId) { DARABONBA_PTR_SET_VALUE(environmentId_, environmentId) };


    // exporterCount Field Functions 
    bool hasExporterCount() const { return this->exporterCount_ != nullptr;};
    void deleteExporterCount() { this->exporterCount_ = nullptr;};
    inline int64_t exporterCount() const { DARABONBA_PTR_GET_DEFAULT(exporterCount_, 0L) };
    inline GetAddonReleaseResponseBodyRelease& setExporterCount(int64_t exporterCount) { DARABONBA_PTR_SET_VALUE(exporterCount_, exporterCount) };


    // haveConfig Field Functions 
    bool hasHaveConfig() const { return this->haveConfig_ != nullptr;};
    void deleteHaveConfig() { this->haveConfig_ = nullptr;};
    inline bool haveConfig() const { DARABONBA_PTR_GET_DEFAULT(haveConfig_, false) };
    inline GetAddonReleaseResponseBodyRelease& setHaveConfig(bool haveConfig) { DARABONBA_PTR_SET_VALUE(haveConfig_, haveConfig) };


    // installUserId Field Functions 
    bool hasInstallUserId() const { return this->installUserId_ != nullptr;};
    void deleteInstallUserId() { this->installUserId_ = nullptr;};
    inline string installUserId() const { DARABONBA_PTR_GET_DEFAULT(installUserId_, "") };
    inline GetAddonReleaseResponseBodyRelease& setInstallUserId(string installUserId) { DARABONBA_PTR_SET_VALUE(installUserId_, installUserId) };


    // language Field Functions 
    bool hasLanguage() const { return this->language_ != nullptr;};
    void deleteLanguage() { this->language_ = nullptr;};
    inline string language() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
    inline GetAddonReleaseResponseBodyRelease& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


    // managed Field Functions 
    bool hasManaged() const { return this->managed_ != nullptr;};
    void deleteManaged() { this->managed_ = nullptr;};
    inline bool managed() const { DARABONBA_PTR_GET_DEFAULT(managed_, false) };
    inline GetAddonReleaseResponseBodyRelease& setManaged(bool managed) { DARABONBA_PTR_SET_VALUE(managed_, managed) };


    // parentAddonReleaseId Field Functions 
    bool hasParentAddonReleaseId() const { return this->parentAddonReleaseId_ != nullptr;};
    void deleteParentAddonReleaseId() { this->parentAddonReleaseId_ = nullptr;};
    inline string parentAddonReleaseId() const { DARABONBA_PTR_GET_DEFAULT(parentAddonReleaseId_, "") };
    inline GetAddonReleaseResponseBodyRelease& setParentAddonReleaseId(string parentAddonReleaseId) { DARABONBA_PTR_SET_VALUE(parentAddonReleaseId_, parentAddonReleaseId) };


    // policyId Field Functions 
    bool hasPolicyId() const { return this->policyId_ != nullptr;};
    void deletePolicyId() { this->policyId_ = nullptr;};
    inline string policyId() const { DARABONBA_PTR_GET_DEFAULT(policyId_, "") };
    inline GetAddonReleaseResponseBodyRelease& setPolicyId(string policyId) { DARABONBA_PTR_SET_VALUE(policyId_, policyId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetAddonReleaseResponseBodyRelease& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // releaseId Field Functions 
    bool hasReleaseId() const { return this->releaseId_ != nullptr;};
    void deleteReleaseId() { this->releaseId_ = nullptr;};
    inline string releaseId() const { DARABONBA_PTR_GET_DEFAULT(releaseId_, "") };
    inline GetAddonReleaseResponseBodyRelease& setReleaseId(string releaseId) { DARABONBA_PTR_SET_VALUE(releaseId_, releaseId) };


    // releaseName Field Functions 
    bool hasReleaseName() const { return this->releaseName_ != nullptr;};
    void deleteReleaseName() { this->releaseName_ = nullptr;};
    inline string releaseName() const { DARABONBA_PTR_GET_DEFAULT(releaseName_, "") };
    inline GetAddonReleaseResponseBodyRelease& setReleaseName(string releaseName) { DARABONBA_PTR_SET_VALUE(releaseName_, releaseName) };


    // scene Field Functions 
    bool hasScene() const { return this->scene_ != nullptr;};
    void deleteScene() { this->scene_ = nullptr;};
    inline string scene() const { DARABONBA_PTR_GET_DEFAULT(scene_, "") };
    inline GetAddonReleaseResponseBodyRelease& setScene(string scene) { DARABONBA_PTR_SET_VALUE(scene_, scene) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetAddonReleaseResponseBodyRelease& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline GetAddonReleaseResponseBodyRelease& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline GetAddonReleaseResponseBodyRelease& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string version() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline GetAddonReleaseResponseBodyRelease& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    // workspace Field Functions 
    bool hasWorkspace() const { return this->workspace_ != nullptr;};
    void deleteWorkspace() { this->workspace_ = nullptr;};
    inline string workspace() const { DARABONBA_PTR_GET_DEFAULT(workspace_, "") };
    inline GetAddonReleaseResponseBodyRelease& setWorkspace(string workspace) { DARABONBA_PTR_SET_VALUE(workspace_, workspace) };


  protected:
    // Addon component name.
    std::shared_ptr<string> addonName_ = nullptr;
    // Number of alert rules.
    std::shared_ptr<int64_t> alertRuleCount_ = nullptr;
    // Installation phase information.
    std::shared_ptr<vector<Models::GetAddonReleaseResponseBodyReleaseConditions>> conditions_ = nullptr;
    // Component configuration information.
    std::shared_ptr<string> config_ = nullptr;
    // Connection time.
    std::shared_ptr<string> createTime_ = nullptr;
    // Number of dashboards.
    std::shared_ptr<int64_t> dashboardCount_ = nullptr;
    // Entity details.
    std::shared_ptr<Models::EntityGroupBase> entityRules_ = nullptr;
    // Environment type.
    std::shared_ptr<string> envType_ = nullptr;
    // Environment ID.
    std::shared_ptr<string> environmentId_ = nullptr;
    // Number of plugins.
    std::shared_ptr<int64_t> exporterCount_ = nullptr;
    // Whether there is a configuration.
    std::shared_ptr<bool> haveConfig_ = nullptr;
    // User ID for connection.
    std::shared_ptr<string> installUserId_ = nullptr;
    // Language.
    std::shared_ptr<string> language_ = nullptr;
    // Whether it is a managed component.
    std::shared_ptr<bool> managed_ = nullptr;
    // Parent AddonRelease ID.
    std::shared_ptr<string> parentAddonReleaseId_ = nullptr;
    // Policy ID.
    std::shared_ptr<string> policyId_ = nullptr;
    // Region ID.
    std::shared_ptr<string> regionId_ = nullptr;
    // Release ID.
    std::shared_ptr<string> releaseId_ = nullptr;
    // The name of the Release.
    std::shared_ptr<string> releaseName_ = nullptr;
    // Component scenario.
    std::shared_ptr<string> scene_ = nullptr;
    // Component status.
    std::shared_ptr<string> status_ = nullptr;
    // Update time.
    std::shared_ptr<string> updateTime_ = nullptr;
    // Owner user ID.
    std::shared_ptr<string> userId_ = nullptr;
    // Component version.
    std::shared_ptr<string> version_ = nullptr;
    // Workspace.
    std::shared_ptr<string> workspace_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
