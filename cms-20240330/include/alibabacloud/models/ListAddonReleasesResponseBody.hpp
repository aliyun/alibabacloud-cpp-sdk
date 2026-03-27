// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTADDONRELEASESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTADDONRELEASESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/EntityGroupBase.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class ListAddonReleasesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAddonReleasesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(releases, releases_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(total, total_);
    };
    friend void from_json(const Darabonba::Json& j, ListAddonReleasesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(releases, releases_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(total, total_);
    };
    ListAddonReleasesResponseBody() = default ;
    ListAddonReleasesResponseBody(const ListAddonReleasesResponseBody &) = default ;
    ListAddonReleasesResponseBody(ListAddonReleasesResponseBody &&) = default ;
    ListAddonReleasesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAddonReleasesResponseBody() = default ;
    ListAddonReleasesResponseBody& operator=(const ListAddonReleasesResponseBody &) = default ;
    ListAddonReleasesResponseBody& operator=(ListAddonReleasesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Releases : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Releases& obj) { 
        DARABONBA_PTR_TO_JSON(addonName, addonName_);
        DARABONBA_PTR_TO_JSON(alertRuleCount, alertRuleCount_);
        DARABONBA_PTR_TO_JSON(apiVersion, apiVersion_);
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
        DARABONBA_PTR_TO_JSON(nextVersion, nextVersion_);
        DARABONBA_PTR_TO_JSON(parentAddonReleaseId, parentAddonReleaseId_);
        DARABONBA_PTR_TO_JSON(policyId, policyId_);
        DARABONBA_PTR_TO_JSON(regionId, regionId_);
        DARABONBA_PTR_TO_JSON(releaseId, releaseId_);
        DARABONBA_PTR_TO_JSON(releaseName, releaseName_);
        DARABONBA_PTR_TO_JSON(scene, scene_);
        DARABONBA_PTR_TO_JSON(status, status_);
        DARABONBA_PTR_TO_JSON(subAddonRelease, subAddonRelease_);
        DARABONBA_PTR_TO_JSON(updateTime, updateTime_);
        DARABONBA_PTR_TO_JSON(userId, userId_);
        DARABONBA_PTR_TO_JSON(version, version_);
        DARABONBA_PTR_TO_JSON(workspace, workspace_);
      };
      friend void from_json(const Darabonba::Json& j, Releases& obj) { 
        DARABONBA_PTR_FROM_JSON(addonName, addonName_);
        DARABONBA_PTR_FROM_JSON(alertRuleCount, alertRuleCount_);
        DARABONBA_PTR_FROM_JSON(apiVersion, apiVersion_);
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
        DARABONBA_PTR_FROM_JSON(nextVersion, nextVersion_);
        DARABONBA_PTR_FROM_JSON(parentAddonReleaseId, parentAddonReleaseId_);
        DARABONBA_PTR_FROM_JSON(policyId, policyId_);
        DARABONBA_PTR_FROM_JSON(regionId, regionId_);
        DARABONBA_PTR_FROM_JSON(releaseId, releaseId_);
        DARABONBA_PTR_FROM_JSON(releaseName, releaseName_);
        DARABONBA_PTR_FROM_JSON(scene, scene_);
        DARABONBA_PTR_FROM_JSON(status, status_);
        DARABONBA_PTR_FROM_JSON(subAddonRelease, subAddonRelease_);
        DARABONBA_PTR_FROM_JSON(updateTime, updateTime_);
        DARABONBA_PTR_FROM_JSON(userId, userId_);
        DARABONBA_PTR_FROM_JSON(version, version_);
        DARABONBA_PTR_FROM_JSON(workspace, workspace_);
      };
      Releases() = default ;
      Releases(const Releases &) = default ;
      Releases(Releases &&) = default ;
      Releases(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Releases() = default ;
      Releases& operator=(const Releases &) = default ;
      Releases& operator=(Releases &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class SubAddonRelease : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SubAddonRelease& obj) { 
          DARABONBA_PTR_TO_JSON(ready, ready_);
          DARABONBA_PTR_TO_JSON(total, total_);
        };
        friend void from_json(const Darabonba::Json& j, SubAddonRelease& obj) { 
          DARABONBA_PTR_FROM_JSON(ready, ready_);
          DARABONBA_PTR_FROM_JSON(total, total_);
        };
        SubAddonRelease() = default ;
        SubAddonRelease(const SubAddonRelease &) = default ;
        SubAddonRelease(SubAddonRelease &&) = default ;
        SubAddonRelease(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SubAddonRelease() = default ;
        SubAddonRelease& operator=(const SubAddonRelease &) = default ;
        SubAddonRelease& operator=(SubAddonRelease &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->ready_ == nullptr
        && this->total_ == nullptr; };
        // ready Field Functions 
        bool hasReady() const { return this->ready_ != nullptr;};
        void deleteReady() { this->ready_ = nullptr;};
        inline int32_t getReady() const { DARABONBA_PTR_GET_DEFAULT(ready_, 0) };
        inline SubAddonRelease& setReady(int32_t ready) { DARABONBA_PTR_SET_VALUE(ready_, ready) };


        // total Field Functions 
        bool hasTotal() const { return this->total_ != nullptr;};
        void deleteTotal() { this->total_ = nullptr;};
        inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
        inline SubAddonRelease& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


      protected:
        // Number of ready sub-Releases.
        shared_ptr<int32_t> ready_ {};
        // Number of sub-Releases.
        shared_ptr<int32_t> total_ {};
      };

      class Conditions : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Conditions& obj) { 
          DARABONBA_PTR_TO_JSON(firstTransitionTime, firstTransitionTime_);
          DARABONBA_PTR_TO_JSON(lastTransitionTime, lastTransitionTime_);
          DARABONBA_PTR_TO_JSON(message, message_);
          DARABONBA_PTR_TO_JSON(status, status_);
          DARABONBA_PTR_TO_JSON(type, type_);
        };
        friend void from_json(const Darabonba::Json& j, Conditions& obj) { 
          DARABONBA_PTR_FROM_JSON(firstTransitionTime, firstTransitionTime_);
          DARABONBA_PTR_FROM_JSON(lastTransitionTime, lastTransitionTime_);
          DARABONBA_PTR_FROM_JSON(message, message_);
          DARABONBA_PTR_FROM_JSON(status, status_);
          DARABONBA_PTR_FROM_JSON(type, type_);
        };
        Conditions() = default ;
        Conditions(const Conditions &) = default ;
        Conditions(Conditions &&) = default ;
        Conditions(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Conditions() = default ;
        Conditions& operator=(const Conditions &) = default ;
        Conditions& operator=(Conditions &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->firstTransitionTime_ == nullptr
        && this->lastTransitionTime_ == nullptr && this->message_ == nullptr && this->status_ == nullptr && this->type_ == nullptr; };
        // firstTransitionTime Field Functions 
        bool hasFirstTransitionTime() const { return this->firstTransitionTime_ != nullptr;};
        void deleteFirstTransitionTime() { this->firstTransitionTime_ = nullptr;};
        inline string getFirstTransitionTime() const { DARABONBA_PTR_GET_DEFAULT(firstTransitionTime_, "") };
        inline Conditions& setFirstTransitionTime(string firstTransitionTime) { DARABONBA_PTR_SET_VALUE(firstTransitionTime_, firstTransitionTime) };


        // lastTransitionTime Field Functions 
        bool hasLastTransitionTime() const { return this->lastTransitionTime_ != nullptr;};
        void deleteLastTransitionTime() { this->lastTransitionTime_ = nullptr;};
        inline string getLastTransitionTime() const { DARABONBA_PTR_GET_DEFAULT(lastTransitionTime_, "") };
        inline Conditions& setLastTransitionTime(string lastTransitionTime) { DARABONBA_PTR_SET_VALUE(lastTransitionTime_, lastTransitionTime) };


        // message Field Functions 
        bool hasMessage() const { return this->message_ != nullptr;};
        void deleteMessage() { this->message_ = nullptr;};
        inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
        inline Conditions& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline Conditions& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline Conditions& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        // First transition time.
        shared_ptr<string> firstTransitionTime_ {};
        // Last transition time.
        shared_ptr<string> lastTransitionTime_ {};
        // Details.
        shared_ptr<string> message_ {};
        // Phase status.
        shared_ptr<string> status_ {};
        // Phase type.
        shared_ptr<string> type_ {};
      };

      virtual bool empty() const override { return this->addonName_ == nullptr
        && this->alertRuleCount_ == nullptr && this->apiVersion_ == nullptr && this->conditions_ == nullptr && this->config_ == nullptr && this->createTime_ == nullptr
        && this->dashboardCount_ == nullptr && this->entityRules_ == nullptr && this->envType_ == nullptr && this->environmentId_ == nullptr && this->exporterCount_ == nullptr
        && this->haveConfig_ == nullptr && this->installUserId_ == nullptr && this->language_ == nullptr && this->managed_ == nullptr && this->nextVersion_ == nullptr
        && this->parentAddonReleaseId_ == nullptr && this->policyId_ == nullptr && this->regionId_ == nullptr && this->releaseId_ == nullptr && this->releaseName_ == nullptr
        && this->scene_ == nullptr && this->status_ == nullptr && this->subAddonRelease_ == nullptr && this->updateTime_ == nullptr && this->userId_ == nullptr
        && this->version_ == nullptr && this->workspace_ == nullptr; };
      // addonName Field Functions 
      bool hasAddonName() const { return this->addonName_ != nullptr;};
      void deleteAddonName() { this->addonName_ = nullptr;};
      inline string getAddonName() const { DARABONBA_PTR_GET_DEFAULT(addonName_, "") };
      inline Releases& setAddonName(string addonName) { DARABONBA_PTR_SET_VALUE(addonName_, addonName) };


      // alertRuleCount Field Functions 
      bool hasAlertRuleCount() const { return this->alertRuleCount_ != nullptr;};
      void deleteAlertRuleCount() { this->alertRuleCount_ = nullptr;};
      inline int64_t getAlertRuleCount() const { DARABONBA_PTR_GET_DEFAULT(alertRuleCount_, 0L) };
      inline Releases& setAlertRuleCount(int64_t alertRuleCount) { DARABONBA_PTR_SET_VALUE(alertRuleCount_, alertRuleCount) };


      // apiVersion Field Functions 
      bool hasApiVersion() const { return this->apiVersion_ != nullptr;};
      void deleteApiVersion() { this->apiVersion_ = nullptr;};
      inline string getApiVersion() const { DARABONBA_PTR_GET_DEFAULT(apiVersion_, "") };
      inline Releases& setApiVersion(string apiVersion) { DARABONBA_PTR_SET_VALUE(apiVersion_, apiVersion) };


      // conditions Field Functions 
      bool hasConditions() const { return this->conditions_ != nullptr;};
      void deleteConditions() { this->conditions_ = nullptr;};
      inline const vector<Releases::Conditions> & getConditions() const { DARABONBA_PTR_GET_CONST(conditions_, vector<Releases::Conditions>) };
      inline vector<Releases::Conditions> getConditions() { DARABONBA_PTR_GET(conditions_, vector<Releases::Conditions>) };
      inline Releases& setConditions(const vector<Releases::Conditions> & conditions) { DARABONBA_PTR_SET_VALUE(conditions_, conditions) };
      inline Releases& setConditions(vector<Releases::Conditions> && conditions) { DARABONBA_PTR_SET_RVALUE(conditions_, conditions) };


      // config Field Functions 
      bool hasConfig() const { return this->config_ != nullptr;};
      void deleteConfig() { this->config_ = nullptr;};
      inline string getConfig() const { DARABONBA_PTR_GET_DEFAULT(config_, "") };
      inline Releases& setConfig(string config) { DARABONBA_PTR_SET_VALUE(config_, config) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Releases& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // dashboardCount Field Functions 
      bool hasDashboardCount() const { return this->dashboardCount_ != nullptr;};
      void deleteDashboardCount() { this->dashboardCount_ = nullptr;};
      inline int64_t getDashboardCount() const { DARABONBA_PTR_GET_DEFAULT(dashboardCount_, 0L) };
      inline Releases& setDashboardCount(int64_t dashboardCount) { DARABONBA_PTR_SET_VALUE(dashboardCount_, dashboardCount) };


      // entityRules Field Functions 
      bool hasEntityRules() const { return this->entityRules_ != nullptr;};
      void deleteEntityRules() { this->entityRules_ = nullptr;};
      inline const EntityGroupBase & getEntityRules() const { DARABONBA_PTR_GET_CONST(entityRules_, EntityGroupBase) };
      inline EntityGroupBase getEntityRules() { DARABONBA_PTR_GET(entityRules_, EntityGroupBase) };
      inline Releases& setEntityRules(const EntityGroupBase & entityRules) { DARABONBA_PTR_SET_VALUE(entityRules_, entityRules) };
      inline Releases& setEntityRules(EntityGroupBase && entityRules) { DARABONBA_PTR_SET_RVALUE(entityRules_, entityRules) };


      // envType Field Functions 
      bool hasEnvType() const { return this->envType_ != nullptr;};
      void deleteEnvType() { this->envType_ = nullptr;};
      inline string getEnvType() const { DARABONBA_PTR_GET_DEFAULT(envType_, "") };
      inline Releases& setEnvType(string envType) { DARABONBA_PTR_SET_VALUE(envType_, envType) };


      // environmentId Field Functions 
      bool hasEnvironmentId() const { return this->environmentId_ != nullptr;};
      void deleteEnvironmentId() { this->environmentId_ = nullptr;};
      inline string getEnvironmentId() const { DARABONBA_PTR_GET_DEFAULT(environmentId_, "") };
      inline Releases& setEnvironmentId(string environmentId) { DARABONBA_PTR_SET_VALUE(environmentId_, environmentId) };


      // exporterCount Field Functions 
      bool hasExporterCount() const { return this->exporterCount_ != nullptr;};
      void deleteExporterCount() { this->exporterCount_ = nullptr;};
      inline int64_t getExporterCount() const { DARABONBA_PTR_GET_DEFAULT(exporterCount_, 0L) };
      inline Releases& setExporterCount(int64_t exporterCount) { DARABONBA_PTR_SET_VALUE(exporterCount_, exporterCount) };


      // haveConfig Field Functions 
      bool hasHaveConfig() const { return this->haveConfig_ != nullptr;};
      void deleteHaveConfig() { this->haveConfig_ = nullptr;};
      inline bool getHaveConfig() const { DARABONBA_PTR_GET_DEFAULT(haveConfig_, false) };
      inline Releases& setHaveConfig(bool haveConfig) { DARABONBA_PTR_SET_VALUE(haveConfig_, haveConfig) };


      // installUserId Field Functions 
      bool hasInstallUserId() const { return this->installUserId_ != nullptr;};
      void deleteInstallUserId() { this->installUserId_ = nullptr;};
      inline string getInstallUserId() const { DARABONBA_PTR_GET_DEFAULT(installUserId_, "") };
      inline Releases& setInstallUserId(string installUserId) { DARABONBA_PTR_SET_VALUE(installUserId_, installUserId) };


      // language Field Functions 
      bool hasLanguage() const { return this->language_ != nullptr;};
      void deleteLanguage() { this->language_ = nullptr;};
      inline string getLanguage() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
      inline Releases& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


      // managed Field Functions 
      bool hasManaged() const { return this->managed_ != nullptr;};
      void deleteManaged() { this->managed_ = nullptr;};
      inline bool getManaged() const { DARABONBA_PTR_GET_DEFAULT(managed_, false) };
      inline Releases& setManaged(bool managed) { DARABONBA_PTR_SET_VALUE(managed_, managed) };


      // nextVersion Field Functions 
      bool hasNextVersion() const { return this->nextVersion_ != nullptr;};
      void deleteNextVersion() { this->nextVersion_ = nullptr;};
      inline string getNextVersion() const { DARABONBA_PTR_GET_DEFAULT(nextVersion_, "") };
      inline Releases& setNextVersion(string nextVersion) { DARABONBA_PTR_SET_VALUE(nextVersion_, nextVersion) };


      // parentAddonReleaseId Field Functions 
      bool hasParentAddonReleaseId() const { return this->parentAddonReleaseId_ != nullptr;};
      void deleteParentAddonReleaseId() { this->parentAddonReleaseId_ = nullptr;};
      inline string getParentAddonReleaseId() const { DARABONBA_PTR_GET_DEFAULT(parentAddonReleaseId_, "") };
      inline Releases& setParentAddonReleaseId(string parentAddonReleaseId) { DARABONBA_PTR_SET_VALUE(parentAddonReleaseId_, parentAddonReleaseId) };


      // policyId Field Functions 
      bool hasPolicyId() const { return this->policyId_ != nullptr;};
      void deletePolicyId() { this->policyId_ = nullptr;};
      inline string getPolicyId() const { DARABONBA_PTR_GET_DEFAULT(policyId_, "") };
      inline Releases& setPolicyId(string policyId) { DARABONBA_PTR_SET_VALUE(policyId_, policyId) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline Releases& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // releaseId Field Functions 
      bool hasReleaseId() const { return this->releaseId_ != nullptr;};
      void deleteReleaseId() { this->releaseId_ = nullptr;};
      inline string getReleaseId() const { DARABONBA_PTR_GET_DEFAULT(releaseId_, "") };
      inline Releases& setReleaseId(string releaseId) { DARABONBA_PTR_SET_VALUE(releaseId_, releaseId) };


      // releaseName Field Functions 
      bool hasReleaseName() const { return this->releaseName_ != nullptr;};
      void deleteReleaseName() { this->releaseName_ = nullptr;};
      inline string getReleaseName() const { DARABONBA_PTR_GET_DEFAULT(releaseName_, "") };
      inline Releases& setReleaseName(string releaseName) { DARABONBA_PTR_SET_VALUE(releaseName_, releaseName) };


      // scene Field Functions 
      bool hasScene() const { return this->scene_ != nullptr;};
      void deleteScene() { this->scene_ = nullptr;};
      inline string getScene() const { DARABONBA_PTR_GET_DEFAULT(scene_, "") };
      inline Releases& setScene(string scene) { DARABONBA_PTR_SET_VALUE(scene_, scene) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Releases& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // subAddonRelease Field Functions 
      bool hasSubAddonRelease() const { return this->subAddonRelease_ != nullptr;};
      void deleteSubAddonRelease() { this->subAddonRelease_ = nullptr;};
      inline const Releases::SubAddonRelease & getSubAddonRelease() const { DARABONBA_PTR_GET_CONST(subAddonRelease_, Releases::SubAddonRelease) };
      inline Releases::SubAddonRelease getSubAddonRelease() { DARABONBA_PTR_GET(subAddonRelease_, Releases::SubAddonRelease) };
      inline Releases& setSubAddonRelease(const Releases::SubAddonRelease & subAddonRelease) { DARABONBA_PTR_SET_VALUE(subAddonRelease_, subAddonRelease) };
      inline Releases& setSubAddonRelease(Releases::SubAddonRelease && subAddonRelease) { DARABONBA_PTR_SET_RVALUE(subAddonRelease_, subAddonRelease) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
      inline Releases& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
      inline Releases& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


      // version Field Functions 
      bool hasVersion() const { return this->version_ != nullptr;};
      void deleteVersion() { this->version_ = nullptr;};
      inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
      inline Releases& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


      // workspace Field Functions 
      bool hasWorkspace() const { return this->workspace_ != nullptr;};
      void deleteWorkspace() { this->workspace_ = nullptr;};
      inline string getWorkspace() const { DARABONBA_PTR_GET_DEFAULT(workspace_, "") };
      inline Releases& setWorkspace(string workspace) { DARABONBA_PTR_SET_VALUE(workspace_, workspace) };


    protected:
      // Addon name.
      shared_ptr<string> addonName_ {};
      // Number of alert rules.
      shared_ptr<int64_t> alertRuleCount_ {};
      // API version.
      shared_ptr<string> apiVersion_ {};
      // Installation phase information.
      shared_ptr<vector<Releases::Conditions>> conditions_ {};
      // Component configuration information.
      shared_ptr<string> config_ {};
      // Access time.
      shared_ptr<string> createTime_ {};
      // Number of dashboards.
      shared_ptr<int64_t> dashboardCount_ {};
      // Entity details.
      shared_ptr<EntityGroupBase> entityRules_ {};
      // Environment type.
      shared_ptr<string> envType_ {};
      // Environment ID.
      shared_ptr<string> environmentId_ {};
      // Number of plugins.
      shared_ptr<int64_t> exporterCount_ {};
      // Whether there is a configuration.
      shared_ptr<bool> haveConfig_ {};
      // Access user ID.
      shared_ptr<string> installUserId_ {};
      // Language.
      shared_ptr<string> language_ {};
      // Whether it is a managed component.
      shared_ptr<bool> managed_ {};
      // Starting version number for the remaining list.
      shared_ptr<string> nextVersion_ {};
      // Parent AddonReleaseId.
      shared_ptr<string> parentAddonReleaseId_ {};
      // Policy ID.
      shared_ptr<string> policyId_ {};
      // Region ID.
      shared_ptr<string> regionId_ {};
      // Release ID.
      shared_ptr<string> releaseId_ {};
      // Release name.
      shared_ptr<string> releaseName_ {};
      // Component scenario.
      shared_ptr<string> scene_ {};
      // Status.
      shared_ptr<string> status_ {};
      // Sub-AddonRelease statistics.
      shared_ptr<Releases::SubAddonRelease> subAddonRelease_ {};
      // Update time.
      shared_ptr<string> updateTime_ {};
      // Owner user ID.
      shared_ptr<string> userId_ {};
      // Component version.
      shared_ptr<string> version_ {};
      // Workspace.
      shared_ptr<string> workspace_ {};
    };

    virtual bool empty() const override { return this->releases_ == nullptr
        && this->requestId_ == nullptr && this->total_ == nullptr; };
    // releases Field Functions 
    bool hasReleases() const { return this->releases_ != nullptr;};
    void deleteReleases() { this->releases_ = nullptr;};
    inline const vector<ListAddonReleasesResponseBody::Releases> & getReleases() const { DARABONBA_PTR_GET_CONST(releases_, vector<ListAddonReleasesResponseBody::Releases>) };
    inline vector<ListAddonReleasesResponseBody::Releases> getReleases() { DARABONBA_PTR_GET(releases_, vector<ListAddonReleasesResponseBody::Releases>) };
    inline ListAddonReleasesResponseBody& setReleases(const vector<ListAddonReleasesResponseBody::Releases> & releases) { DARABONBA_PTR_SET_VALUE(releases_, releases) };
    inline ListAddonReleasesResponseBody& setReleases(vector<ListAddonReleasesResponseBody::Releases> && releases) { DARABONBA_PTR_SET_RVALUE(releases_, releases) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAddonReleasesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int64_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
    inline ListAddonReleasesResponseBody& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // Set of add-on component information.
    shared_ptr<vector<ListAddonReleasesResponseBody::Releases>> releases_ {};
    // Request ID.
    shared_ptr<string> requestId_ {};
    // Number of components.
    shared_ptr<int64_t> total_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
