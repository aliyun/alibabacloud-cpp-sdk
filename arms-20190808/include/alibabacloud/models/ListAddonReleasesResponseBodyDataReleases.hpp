// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTADDONRELEASESRESPONSEBODYDATARELEASES_HPP_
#define ALIBABACLOUD_MODELS_LISTADDONRELEASESRESPONSEBODYDATARELEASES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListAddonReleasesResponseBodyDataReleasesConditions.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class ListAddonReleasesResponseBodyDataReleases : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAddonReleasesResponseBodyDataReleases& obj) { 
      DARABONBA_PTR_TO_JSON(AddonName, addonName_);
      DARABONBA_PTR_TO_JSON(AlertRuleCount, alertRuleCount_);
      DARABONBA_PTR_TO_JSON(Conditions, conditions_);
      DARABONBA_PTR_TO_JSON(Config, config_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(DashboardCount, dashboardCount_);
      DARABONBA_PTR_TO_JSON(EnvironmentId, environmentId_);
      DARABONBA_PTR_TO_JSON(ExporterCount, exporterCount_);
      DARABONBA_PTR_TO_JSON(HaveConfig, haveConfig_);
      DARABONBA_PTR_TO_JSON(InstallUserId, installUserId_);
      DARABONBA_PTR_TO_JSON(Language, language_);
      DARABONBA_PTR_TO_JSON(Managed, managed_);
      DARABONBA_PTR_TO_JSON(NextVersion, nextVersion_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ReleaseId, releaseId_);
      DARABONBA_PTR_TO_JSON(ReleaseName, releaseName_);
      DARABONBA_PTR_TO_JSON(Scene, scene_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
      DARABONBA_PTR_TO_JSON(Version, version_);
    };
    friend void from_json(const Darabonba::Json& j, ListAddonReleasesResponseBodyDataReleases& obj) { 
      DARABONBA_PTR_FROM_JSON(AddonName, addonName_);
      DARABONBA_PTR_FROM_JSON(AlertRuleCount, alertRuleCount_);
      DARABONBA_PTR_FROM_JSON(Conditions, conditions_);
      DARABONBA_PTR_FROM_JSON(Config, config_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(DashboardCount, dashboardCount_);
      DARABONBA_PTR_FROM_JSON(EnvironmentId, environmentId_);
      DARABONBA_PTR_FROM_JSON(ExporterCount, exporterCount_);
      DARABONBA_PTR_FROM_JSON(HaveConfig, haveConfig_);
      DARABONBA_PTR_FROM_JSON(InstallUserId, installUserId_);
      DARABONBA_PTR_FROM_JSON(Language, language_);
      DARABONBA_PTR_FROM_JSON(Managed, managed_);
      DARABONBA_PTR_FROM_JSON(NextVersion, nextVersion_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ReleaseId, releaseId_);
      DARABONBA_PTR_FROM_JSON(ReleaseName, releaseName_);
      DARABONBA_PTR_FROM_JSON(Scene, scene_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
    };
    ListAddonReleasesResponseBodyDataReleases() = default ;
    ListAddonReleasesResponseBodyDataReleases(const ListAddonReleasesResponseBodyDataReleases &) = default ;
    ListAddonReleasesResponseBodyDataReleases(ListAddonReleasesResponseBodyDataReleases &&) = default ;
    ListAddonReleasesResponseBodyDataReleases(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAddonReleasesResponseBodyDataReleases() = default ;
    ListAddonReleasesResponseBodyDataReleases& operator=(const ListAddonReleasesResponseBodyDataReleases &) = default ;
    ListAddonReleasesResponseBodyDataReleases& operator=(ListAddonReleasesResponseBodyDataReleases &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->addonName_ != nullptr
        && this->alertRuleCount_ != nullptr && this->conditions_ != nullptr && this->config_ != nullptr && this->createTime_ != nullptr && this->dashboardCount_ != nullptr
        && this->environmentId_ != nullptr && this->exporterCount_ != nullptr && this->haveConfig_ != nullptr && this->installUserId_ != nullptr && this->language_ != nullptr
        && this->managed_ != nullptr && this->nextVersion_ != nullptr && this->regionId_ != nullptr && this->releaseId_ != nullptr && this->releaseName_ != nullptr
        && this->scene_ != nullptr && this->status_ != nullptr && this->updateTime_ != nullptr && this->userId_ != nullptr && this->version_ != nullptr; };
    // addonName Field Functions 
    bool hasAddonName() const { return this->addonName_ != nullptr;};
    void deleteAddonName() { this->addonName_ = nullptr;};
    inline string addonName() const { DARABONBA_PTR_GET_DEFAULT(addonName_, "") };
    inline ListAddonReleasesResponseBodyDataReleases& setAddonName(string addonName) { DARABONBA_PTR_SET_VALUE(addonName_, addonName) };


    // alertRuleCount Field Functions 
    bool hasAlertRuleCount() const { return this->alertRuleCount_ != nullptr;};
    void deleteAlertRuleCount() { this->alertRuleCount_ = nullptr;};
    inline int64_t alertRuleCount() const { DARABONBA_PTR_GET_DEFAULT(alertRuleCount_, 0L) };
    inline ListAddonReleasesResponseBodyDataReleases& setAlertRuleCount(int64_t alertRuleCount) { DARABONBA_PTR_SET_VALUE(alertRuleCount_, alertRuleCount) };


    // conditions Field Functions 
    bool hasConditions() const { return this->conditions_ != nullptr;};
    void deleteConditions() { this->conditions_ = nullptr;};
    inline const vector<Models::ListAddonReleasesResponseBodyDataReleasesConditions> & conditions() const { DARABONBA_PTR_GET_CONST(conditions_, vector<Models::ListAddonReleasesResponseBodyDataReleasesConditions>) };
    inline vector<Models::ListAddonReleasesResponseBodyDataReleasesConditions> conditions() { DARABONBA_PTR_GET(conditions_, vector<Models::ListAddonReleasesResponseBodyDataReleasesConditions>) };
    inline ListAddonReleasesResponseBodyDataReleases& setConditions(const vector<Models::ListAddonReleasesResponseBodyDataReleasesConditions> & conditions) { DARABONBA_PTR_SET_VALUE(conditions_, conditions) };
    inline ListAddonReleasesResponseBodyDataReleases& setConditions(vector<Models::ListAddonReleasesResponseBodyDataReleasesConditions> && conditions) { DARABONBA_PTR_SET_RVALUE(conditions_, conditions) };


    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline string config() const { DARABONBA_PTR_GET_DEFAULT(config_, "") };
    inline ListAddonReleasesResponseBodyDataReleases& setConfig(string config) { DARABONBA_PTR_SET_VALUE(config_, config) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListAddonReleasesResponseBodyDataReleases& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // dashboardCount Field Functions 
    bool hasDashboardCount() const { return this->dashboardCount_ != nullptr;};
    void deleteDashboardCount() { this->dashboardCount_ = nullptr;};
    inline int64_t dashboardCount() const { DARABONBA_PTR_GET_DEFAULT(dashboardCount_, 0L) };
    inline ListAddonReleasesResponseBodyDataReleases& setDashboardCount(int64_t dashboardCount) { DARABONBA_PTR_SET_VALUE(dashboardCount_, dashboardCount) };


    // environmentId Field Functions 
    bool hasEnvironmentId() const { return this->environmentId_ != nullptr;};
    void deleteEnvironmentId() { this->environmentId_ = nullptr;};
    inline string environmentId() const { DARABONBA_PTR_GET_DEFAULT(environmentId_, "") };
    inline ListAddonReleasesResponseBodyDataReleases& setEnvironmentId(string environmentId) { DARABONBA_PTR_SET_VALUE(environmentId_, environmentId) };


    // exporterCount Field Functions 
    bool hasExporterCount() const { return this->exporterCount_ != nullptr;};
    void deleteExporterCount() { this->exporterCount_ = nullptr;};
    inline int64_t exporterCount() const { DARABONBA_PTR_GET_DEFAULT(exporterCount_, 0L) };
    inline ListAddonReleasesResponseBodyDataReleases& setExporterCount(int64_t exporterCount) { DARABONBA_PTR_SET_VALUE(exporterCount_, exporterCount) };


    // haveConfig Field Functions 
    bool hasHaveConfig() const { return this->haveConfig_ != nullptr;};
    void deleteHaveConfig() { this->haveConfig_ = nullptr;};
    inline bool haveConfig() const { DARABONBA_PTR_GET_DEFAULT(haveConfig_, false) };
    inline ListAddonReleasesResponseBodyDataReleases& setHaveConfig(bool haveConfig) { DARABONBA_PTR_SET_VALUE(haveConfig_, haveConfig) };


    // installUserId Field Functions 
    bool hasInstallUserId() const { return this->installUserId_ != nullptr;};
    void deleteInstallUserId() { this->installUserId_ = nullptr;};
    inline string installUserId() const { DARABONBA_PTR_GET_DEFAULT(installUserId_, "") };
    inline ListAddonReleasesResponseBodyDataReleases& setInstallUserId(string installUserId) { DARABONBA_PTR_SET_VALUE(installUserId_, installUserId) };


    // language Field Functions 
    bool hasLanguage() const { return this->language_ != nullptr;};
    void deleteLanguage() { this->language_ = nullptr;};
    inline string language() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
    inline ListAddonReleasesResponseBodyDataReleases& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


    // managed Field Functions 
    bool hasManaged() const { return this->managed_ != nullptr;};
    void deleteManaged() { this->managed_ = nullptr;};
    inline bool managed() const { DARABONBA_PTR_GET_DEFAULT(managed_, false) };
    inline ListAddonReleasesResponseBodyDataReleases& setManaged(bool managed) { DARABONBA_PTR_SET_VALUE(managed_, managed) };


    // nextVersion Field Functions 
    bool hasNextVersion() const { return this->nextVersion_ != nullptr;};
    void deleteNextVersion() { this->nextVersion_ = nullptr;};
    inline string nextVersion() const { DARABONBA_PTR_GET_DEFAULT(nextVersion_, "") };
    inline ListAddonReleasesResponseBodyDataReleases& setNextVersion(string nextVersion) { DARABONBA_PTR_SET_VALUE(nextVersion_, nextVersion) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListAddonReleasesResponseBodyDataReleases& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // releaseId Field Functions 
    bool hasReleaseId() const { return this->releaseId_ != nullptr;};
    void deleteReleaseId() { this->releaseId_ = nullptr;};
    inline string releaseId() const { DARABONBA_PTR_GET_DEFAULT(releaseId_, "") };
    inline ListAddonReleasesResponseBodyDataReleases& setReleaseId(string releaseId) { DARABONBA_PTR_SET_VALUE(releaseId_, releaseId) };


    // releaseName Field Functions 
    bool hasReleaseName() const { return this->releaseName_ != nullptr;};
    void deleteReleaseName() { this->releaseName_ = nullptr;};
    inline string releaseName() const { DARABONBA_PTR_GET_DEFAULT(releaseName_, "") };
    inline ListAddonReleasesResponseBodyDataReleases& setReleaseName(string releaseName) { DARABONBA_PTR_SET_VALUE(releaseName_, releaseName) };


    // scene Field Functions 
    bool hasScene() const { return this->scene_ != nullptr;};
    void deleteScene() { this->scene_ = nullptr;};
    inline string scene() const { DARABONBA_PTR_GET_DEFAULT(scene_, "") };
    inline ListAddonReleasesResponseBodyDataReleases& setScene(string scene) { DARABONBA_PTR_SET_VALUE(scene_, scene) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListAddonReleasesResponseBodyDataReleases& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline ListAddonReleasesResponseBodyDataReleases& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline ListAddonReleasesResponseBodyDataReleases& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string version() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline ListAddonReleasesResponseBodyDataReleases& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    // The name of the add-on.
    std::shared_ptr<string> addonName_ = nullptr;
    // The number of alert rules.
    std::shared_ptr<int64_t> alertRuleCount_ = nullptr;
    // The installation phase.
    std::shared_ptr<vector<Models::ListAddonReleasesResponseBodyDataReleasesConditions>> conditions_ = nullptr;
    // The configuration information of the add-on release.
    std::shared_ptr<string> config_ = nullptr;
    // The time when the add-on was created.
    std::shared_ptr<string> createTime_ = nullptr;
    // The number of dashboards.
    std::shared_ptr<int64_t> dashboardCount_ = nullptr;
    // The environment ID.
    std::shared_ptr<string> environmentId_ = nullptr;
    // The number of exporters.
    std::shared_ptr<int64_t> exporterCount_ = nullptr;
    // Indicates whether the configuration is available.
    std::shared_ptr<bool> haveConfig_ = nullptr;
    // The user ID.
    std::shared_ptr<string> installUserId_ = nullptr;
    // The language.
    std::shared_ptr<string> language_ = nullptr;
    // Indicates whether the component is fully managed.
    std::shared_ptr<bool> managed_ = nullptr;
    // The latest version.
    std::shared_ptr<string> nextVersion_ = nullptr;
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
    // The release ID after installation.
    std::shared_ptr<string> releaseId_ = nullptr;
    // The name of the release.
    std::shared_ptr<string> releaseName_ = nullptr;
    // The scenario.
    std::shared_ptr<string> scene_ = nullptr;
    // The status.
    std::shared_ptr<string> status_ = nullptr;
    // The time when the add-on was updated.
    std::shared_ptr<string> updateTime_ = nullptr;
    // The user ID.
    std::shared_ptr<string> userId_ = nullptr;
    // The version of the add-on.
    std::shared_ptr<string> version_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
