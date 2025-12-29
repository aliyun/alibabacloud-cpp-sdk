// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEADDONRELEASERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEADDONRELEASERESPONSEBODY_HPP_
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
  class CreateAddonReleaseResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAddonReleaseResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(release, release_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAddonReleaseResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(release, release_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    CreateAddonReleaseResponseBody() = default ;
    CreateAddonReleaseResponseBody(const CreateAddonReleaseResponseBody &) = default ;
    CreateAddonReleaseResponseBody(CreateAddonReleaseResponseBody &&) = default ;
    CreateAddonReleaseResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAddonReleaseResponseBody() = default ;
    CreateAddonReleaseResponseBody& operator=(const CreateAddonReleaseResponseBody &) = default ;
    CreateAddonReleaseResponseBody& operator=(CreateAddonReleaseResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Release : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Release& obj) { 
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
      friend void from_json(const Darabonba::Json& j, Release& obj) { 
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
      Release() = default ;
      Release(const Release &) = default ;
      Release(Release &&) = default ;
      Release(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Release() = default ;
      Release& operator=(const Release &) = default ;
      Release& operator=(Release &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
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
        // Detailed information.
        shared_ptr<string> message_ {};
        // Phase status.
        shared_ptr<string> status_ {};
        // Phase type.
        shared_ptr<string> type_ {};
      };

      virtual bool empty() const override { return this->addonName_ == nullptr
        && this->alertRuleCount_ == nullptr && this->conditions_ == nullptr && this->config_ == nullptr && this->createTime_ == nullptr && this->dashboardCount_ == nullptr
        && this->entityRules_ == nullptr && this->envType_ == nullptr && this->environmentId_ == nullptr && this->exporterCount_ == nullptr && this->haveConfig_ == nullptr
        && this->installUserId_ == nullptr && this->language_ == nullptr && this->managed_ == nullptr && this->parentAddonReleaseId_ == nullptr && this->policyId_ == nullptr
        && this->regionId_ == nullptr && this->releaseId_ == nullptr && this->releaseName_ == nullptr && this->scene_ == nullptr && this->status_ == nullptr
        && this->updateTime_ == nullptr && this->userId_ == nullptr && this->version_ == nullptr && this->workspace_ == nullptr; };
      // addonName Field Functions 
      bool hasAddonName() const { return this->addonName_ != nullptr;};
      void deleteAddonName() { this->addonName_ = nullptr;};
      inline string getAddonName() const { DARABONBA_PTR_GET_DEFAULT(addonName_, "") };
      inline Release& setAddonName(string addonName) { DARABONBA_PTR_SET_VALUE(addonName_, addonName) };


      // alertRuleCount Field Functions 
      bool hasAlertRuleCount() const { return this->alertRuleCount_ != nullptr;};
      void deleteAlertRuleCount() { this->alertRuleCount_ = nullptr;};
      inline int64_t getAlertRuleCount() const { DARABONBA_PTR_GET_DEFAULT(alertRuleCount_, 0L) };
      inline Release& setAlertRuleCount(int64_t alertRuleCount) { DARABONBA_PTR_SET_VALUE(alertRuleCount_, alertRuleCount) };


      // conditions Field Functions 
      bool hasConditions() const { return this->conditions_ != nullptr;};
      void deleteConditions() { this->conditions_ = nullptr;};
      inline const vector<Release::Conditions> & getConditions() const { DARABONBA_PTR_GET_CONST(conditions_, vector<Release::Conditions>) };
      inline vector<Release::Conditions> getConditions() { DARABONBA_PTR_GET(conditions_, vector<Release::Conditions>) };
      inline Release& setConditions(const vector<Release::Conditions> & conditions) { DARABONBA_PTR_SET_VALUE(conditions_, conditions) };
      inline Release& setConditions(vector<Release::Conditions> && conditions) { DARABONBA_PTR_SET_RVALUE(conditions_, conditions) };


      // config Field Functions 
      bool hasConfig() const { return this->config_ != nullptr;};
      void deleteConfig() { this->config_ = nullptr;};
      inline string getConfig() const { DARABONBA_PTR_GET_DEFAULT(config_, "") };
      inline Release& setConfig(string config) { DARABONBA_PTR_SET_VALUE(config_, config) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Release& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // dashboardCount Field Functions 
      bool hasDashboardCount() const { return this->dashboardCount_ != nullptr;};
      void deleteDashboardCount() { this->dashboardCount_ = nullptr;};
      inline int64_t getDashboardCount() const { DARABONBA_PTR_GET_DEFAULT(dashboardCount_, 0L) };
      inline Release& setDashboardCount(int64_t dashboardCount) { DARABONBA_PTR_SET_VALUE(dashboardCount_, dashboardCount) };


      // entityRules Field Functions 
      bool hasEntityRules() const { return this->entityRules_ != nullptr;};
      void deleteEntityRules() { this->entityRules_ = nullptr;};
      inline const EntityGroupBase & getEntityRules() const { DARABONBA_PTR_GET_CONST(entityRules_, EntityGroupBase) };
      inline EntityGroupBase getEntityRules() { DARABONBA_PTR_GET(entityRules_, EntityGroupBase) };
      inline Release& setEntityRules(const EntityGroupBase & entityRules) { DARABONBA_PTR_SET_VALUE(entityRules_, entityRules) };
      inline Release& setEntityRules(EntityGroupBase && entityRules) { DARABONBA_PTR_SET_RVALUE(entityRules_, entityRules) };


      // envType Field Functions 
      bool hasEnvType() const { return this->envType_ != nullptr;};
      void deleteEnvType() { this->envType_ = nullptr;};
      inline string getEnvType() const { DARABONBA_PTR_GET_DEFAULT(envType_, "") };
      inline Release& setEnvType(string envType) { DARABONBA_PTR_SET_VALUE(envType_, envType) };


      // environmentId Field Functions 
      bool hasEnvironmentId() const { return this->environmentId_ != nullptr;};
      void deleteEnvironmentId() { this->environmentId_ = nullptr;};
      inline string getEnvironmentId() const { DARABONBA_PTR_GET_DEFAULT(environmentId_, "") };
      inline Release& setEnvironmentId(string environmentId) { DARABONBA_PTR_SET_VALUE(environmentId_, environmentId) };


      // exporterCount Field Functions 
      bool hasExporterCount() const { return this->exporterCount_ != nullptr;};
      void deleteExporterCount() { this->exporterCount_ = nullptr;};
      inline int64_t getExporterCount() const { DARABONBA_PTR_GET_DEFAULT(exporterCount_, 0L) };
      inline Release& setExporterCount(int64_t exporterCount) { DARABONBA_PTR_SET_VALUE(exporterCount_, exporterCount) };


      // haveConfig Field Functions 
      bool hasHaveConfig() const { return this->haveConfig_ != nullptr;};
      void deleteHaveConfig() { this->haveConfig_ = nullptr;};
      inline bool getHaveConfig() const { DARABONBA_PTR_GET_DEFAULT(haveConfig_, false) };
      inline Release& setHaveConfig(bool haveConfig) { DARABONBA_PTR_SET_VALUE(haveConfig_, haveConfig) };


      // installUserId Field Functions 
      bool hasInstallUserId() const { return this->installUserId_ != nullptr;};
      void deleteInstallUserId() { this->installUserId_ = nullptr;};
      inline string getInstallUserId() const { DARABONBA_PTR_GET_DEFAULT(installUserId_, "") };
      inline Release& setInstallUserId(string installUserId) { DARABONBA_PTR_SET_VALUE(installUserId_, installUserId) };


      // language Field Functions 
      bool hasLanguage() const { return this->language_ != nullptr;};
      void deleteLanguage() { this->language_ = nullptr;};
      inline string getLanguage() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
      inline Release& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


      // managed Field Functions 
      bool hasManaged() const { return this->managed_ != nullptr;};
      void deleteManaged() { this->managed_ = nullptr;};
      inline bool getManaged() const { DARABONBA_PTR_GET_DEFAULT(managed_, false) };
      inline Release& setManaged(bool managed) { DARABONBA_PTR_SET_VALUE(managed_, managed) };


      // parentAddonReleaseId Field Functions 
      bool hasParentAddonReleaseId() const { return this->parentAddonReleaseId_ != nullptr;};
      void deleteParentAddonReleaseId() { this->parentAddonReleaseId_ = nullptr;};
      inline string getParentAddonReleaseId() const { DARABONBA_PTR_GET_DEFAULT(parentAddonReleaseId_, "") };
      inline Release& setParentAddonReleaseId(string parentAddonReleaseId) { DARABONBA_PTR_SET_VALUE(parentAddonReleaseId_, parentAddonReleaseId) };


      // policyId Field Functions 
      bool hasPolicyId() const { return this->policyId_ != nullptr;};
      void deletePolicyId() { this->policyId_ = nullptr;};
      inline string getPolicyId() const { DARABONBA_PTR_GET_DEFAULT(policyId_, "") };
      inline Release& setPolicyId(string policyId) { DARABONBA_PTR_SET_VALUE(policyId_, policyId) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline Release& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // releaseId Field Functions 
      bool hasReleaseId() const { return this->releaseId_ != nullptr;};
      void deleteReleaseId() { this->releaseId_ = nullptr;};
      inline string getReleaseId() const { DARABONBA_PTR_GET_DEFAULT(releaseId_, "") };
      inline Release& setReleaseId(string releaseId) { DARABONBA_PTR_SET_VALUE(releaseId_, releaseId) };


      // releaseName Field Functions 
      bool hasReleaseName() const { return this->releaseName_ != nullptr;};
      void deleteReleaseName() { this->releaseName_ = nullptr;};
      inline string getReleaseName() const { DARABONBA_PTR_GET_DEFAULT(releaseName_, "") };
      inline Release& setReleaseName(string releaseName) { DARABONBA_PTR_SET_VALUE(releaseName_, releaseName) };


      // scene Field Functions 
      bool hasScene() const { return this->scene_ != nullptr;};
      void deleteScene() { this->scene_ = nullptr;};
      inline string getScene() const { DARABONBA_PTR_GET_DEFAULT(scene_, "") };
      inline Release& setScene(string scene) { DARABONBA_PTR_SET_VALUE(scene_, scene) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Release& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
      inline Release& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
      inline Release& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


      // version Field Functions 
      bool hasVersion() const { return this->version_ != nullptr;};
      void deleteVersion() { this->version_ = nullptr;};
      inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
      inline Release& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


      // workspace Field Functions 
      bool hasWorkspace() const { return this->workspace_ != nullptr;};
      void deleteWorkspace() { this->workspace_ = nullptr;};
      inline string getWorkspace() const { DARABONBA_PTR_GET_DEFAULT(workspace_, "") };
      inline Release& setWorkspace(string workspace) { DARABONBA_PTR_SET_VALUE(workspace_, workspace) };


    protected:
      // The Addon name of the component being monitored.
      shared_ptr<string> addonName_ {};
      // Number of alert groups.
      shared_ptr<int64_t> alertRuleCount_ {};
      // Component installation phase information.
      shared_ptr<vector<Release::Conditions>> conditions_ {};
      // Component configuration.
      shared_ptr<string> config_ {};
      // Connection time.
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
      // Whether it has configuration.
      shared_ptr<bool> haveConfig_ {};
      // ID of the user who installed it.
      shared_ptr<string> installUserId_ {};
      // Language.
      shared_ptr<string> language_ {};
      // Whether it is a managed component.
      shared_ptr<bool> managed_ {};
      // Parent AddonReleaseId.
      shared_ptr<string> parentAddonReleaseId_ {};
      // Policy environment ID.
      shared_ptr<string> policyId_ {};
      // Region ID.
      shared_ptr<string> regionId_ {};
      // ReleaseID after installation.
      shared_ptr<string> releaseId_ {};
      // Name of the Release.
      shared_ptr<string> releaseName_ {};
      // Component scenario.
      shared_ptr<string> scene_ {};
      // Component status.
      shared_ptr<string> status_ {};
      // Update time.
      shared_ptr<string> updateTime_ {};
      // ID of the owner user.
      shared_ptr<string> userId_ {};
      // Component version.
      shared_ptr<string> version_ {};
      // Workspace.
      shared_ptr<string> workspace_ {};
    };

    virtual bool empty() const override { return this->release_ == nullptr
        && this->requestId_ == nullptr; };
    // release Field Functions 
    bool hasRelease() const { return this->release_ != nullptr;};
    void deleteRelease() { this->release_ = nullptr;};
    inline const CreateAddonReleaseResponseBody::Release & getRelease() const { DARABONBA_PTR_GET_CONST(release_, CreateAddonReleaseResponseBody::Release) };
    inline CreateAddonReleaseResponseBody::Release getRelease() { DARABONBA_PTR_GET(release_, CreateAddonReleaseResponseBody::Release) };
    inline CreateAddonReleaseResponseBody& setRelease(const CreateAddonReleaseResponseBody::Release & release) { DARABONBA_PTR_SET_VALUE(release_, release) };
    inline CreateAddonReleaseResponseBody& setRelease(CreateAddonReleaseResponseBody::Release && release) { DARABONBA_PTR_SET_RVALUE(release_, release) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateAddonReleaseResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Accessed component information.
    shared_ptr<CreateAddonReleaseResponseBody::Release> release_ {};
    // Request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
