// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINTEGRATIONPOLICYSTORAGEREQUIREMENTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTINTEGRATIONPOLICYSTORAGEREQUIREMENTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class ListIntegrationPolicyStorageRequirementsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListIntegrationPolicyStorageRequirementsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(storageRequirements, storageRequirements_);
    };
    friend void from_json(const Darabonba::Json& j, ListIntegrationPolicyStorageRequirementsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(storageRequirements, storageRequirements_);
    };
    ListIntegrationPolicyStorageRequirementsResponseBody() = default ;
    ListIntegrationPolicyStorageRequirementsResponseBody(const ListIntegrationPolicyStorageRequirementsResponseBody &) = default ;
    ListIntegrationPolicyStorageRequirementsResponseBody(ListIntegrationPolicyStorageRequirementsResponseBody &&) = default ;
    ListIntegrationPolicyStorageRequirementsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListIntegrationPolicyStorageRequirementsResponseBody() = default ;
    ListIntegrationPolicyStorageRequirementsResponseBody& operator=(const ListIntegrationPolicyStorageRequirementsResponseBody &) = default ;
    ListIntegrationPolicyStorageRequirementsResponseBody& operator=(ListIntegrationPolicyStorageRequirementsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class StorageRequirements : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const StorageRequirements& obj) { 
        DARABONBA_PTR_TO_JSON(addonReleaseNames, addonReleaseNames_);
        DARABONBA_PTR_TO_JSON(apiVersion, apiVersion_);
        DARABONBA_PTR_TO_JSON(kind, kind_);
        DARABONBA_PTR_TO_JSON(metadata, metadata_);
        DARABONBA_PTR_TO_JSON(spec, spec_);
        DARABONBA_PTR_TO_JSON(status, status_);
      };
      friend void from_json(const Darabonba::Json& j, StorageRequirements& obj) { 
        DARABONBA_PTR_FROM_JSON(addonReleaseNames, addonReleaseNames_);
        DARABONBA_PTR_FROM_JSON(apiVersion, apiVersion_);
        DARABONBA_PTR_FROM_JSON(kind, kind_);
        DARABONBA_PTR_FROM_JSON(metadata, metadata_);
        DARABONBA_PTR_FROM_JSON(spec, spec_);
        DARABONBA_PTR_FROM_JSON(status, status_);
      };
      StorageRequirements() = default ;
      StorageRequirements(const StorageRequirements &) = default ;
      StorageRequirements(StorageRequirements &&) = default ;
      StorageRequirements(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~StorageRequirements() = default ;
      StorageRequirements& operator=(const StorageRequirements &) = default ;
      StorageRequirements& operator=(StorageRequirements &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Status : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Status& obj) { 
          DARABONBA_PTR_TO_JSON(instanceId, instanceId_);
          DARABONBA_PTR_TO_JSON(interUrl, interUrl_);
          DARABONBA_PTR_TO_JSON(intraUrl, intraUrl_);
          DARABONBA_PTR_TO_JSON(name, name_);
          DARABONBA_PTR_TO_JSON(project, project_);
          DARABONBA_PTR_TO_JSON(promMetricStore, promMetricStore_);
          DARABONBA_PTR_TO_JSON(region, region_);
          DARABONBA_PTR_TO_JSON(storageType, storageType_);
          DARABONBA_PTR_TO_JSON(workspace, workspace_);
        };
        friend void from_json(const Darabonba::Json& j, Status& obj) { 
          DARABONBA_PTR_FROM_JSON(instanceId, instanceId_);
          DARABONBA_PTR_FROM_JSON(interUrl, interUrl_);
          DARABONBA_PTR_FROM_JSON(intraUrl, intraUrl_);
          DARABONBA_PTR_FROM_JSON(name, name_);
          DARABONBA_PTR_FROM_JSON(project, project_);
          DARABONBA_PTR_FROM_JSON(promMetricStore, promMetricStore_);
          DARABONBA_PTR_FROM_JSON(region, region_);
          DARABONBA_PTR_FROM_JSON(storageType, storageType_);
          DARABONBA_PTR_FROM_JSON(workspace, workspace_);
        };
        Status() = default ;
        Status(const Status &) = default ;
        Status(Status &&) = default ;
        Status(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Status() = default ;
        Status& operator=(const Status &) = default ;
        Status& operator=(Status &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->interUrl_ == nullptr && this->intraUrl_ == nullptr && this->name_ == nullptr && this->project_ == nullptr && this->promMetricStore_ == nullptr
        && this->region_ == nullptr && this->storageType_ == nullptr && this->workspace_ == nullptr; };
        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline Status& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // interUrl Field Functions 
        bool hasInterUrl() const { return this->interUrl_ != nullptr;};
        void deleteInterUrl() { this->interUrl_ = nullptr;};
        inline string getInterUrl() const { DARABONBA_PTR_GET_DEFAULT(interUrl_, "") };
        inline Status& setInterUrl(string interUrl) { DARABONBA_PTR_SET_VALUE(interUrl_, interUrl) };


        // intraUrl Field Functions 
        bool hasIntraUrl() const { return this->intraUrl_ != nullptr;};
        void deleteIntraUrl() { this->intraUrl_ = nullptr;};
        inline string getIntraUrl() const { DARABONBA_PTR_GET_DEFAULT(intraUrl_, "") };
        inline Status& setIntraUrl(string intraUrl) { DARABONBA_PTR_SET_VALUE(intraUrl_, intraUrl) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Status& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // project Field Functions 
        bool hasProject() const { return this->project_ != nullptr;};
        void deleteProject() { this->project_ = nullptr;};
        inline string getProject() const { DARABONBA_PTR_GET_DEFAULT(project_, "") };
        inline Status& setProject(string project) { DARABONBA_PTR_SET_VALUE(project_, project) };


        // promMetricStore Field Functions 
        bool hasPromMetricStore() const { return this->promMetricStore_ != nullptr;};
        void deletePromMetricStore() { this->promMetricStore_ = nullptr;};
        inline string getPromMetricStore() const { DARABONBA_PTR_GET_DEFAULT(promMetricStore_, "") };
        inline Status& setPromMetricStore(string promMetricStore) { DARABONBA_PTR_SET_VALUE(promMetricStore_, promMetricStore) };


        // region Field Functions 
        bool hasRegion() const { return this->region_ != nullptr;};
        void deleteRegion() { this->region_ = nullptr;};
        inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
        inline Status& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


        // storageType Field Functions 
        bool hasStorageType() const { return this->storageType_ != nullptr;};
        void deleteStorageType() { this->storageType_ = nullptr;};
        inline string getStorageType() const { DARABONBA_PTR_GET_DEFAULT(storageType_, "") };
        inline Status& setStorageType(string storageType) { DARABONBA_PTR_SET_VALUE(storageType_, storageType) };


        // workspace Field Functions 
        bool hasWorkspace() const { return this->workspace_ != nullptr;};
        void deleteWorkspace() { this->workspace_ = nullptr;};
        inline string getWorkspace() const { DARABONBA_PTR_GET_DEFAULT(workspace_, "") };
        inline Status& setWorkspace(string workspace) { DARABONBA_PTR_SET_VALUE(workspace_, workspace) };


      protected:
        // Instance ID
        shared_ptr<string> instanceId_ {};
        // Internal URL
        shared_ptr<string> interUrl_ {};
        // External URL
        shared_ptr<string> intraUrl_ {};
        // 存储需求名称
        shared_ptr<string> name_ {};
        // 存储需求项目
        shared_ptr<string> project_ {};
        // Prom\\"s metric center
        shared_ptr<string> promMetricStore_ {};
        // Region
        shared_ptr<string> region_ {};
        // Instance storage type
        shared_ptr<string> storageType_ {};
        // Workspace.
        shared_ptr<string> workspace_ {};
      };

      class Spec : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Spec& obj) { 
          DARABONBA_PTR_TO_JSON(entityId, entityId_);
          DARABONBA_PTR_TO_JSON(instance, instance_);
          DARABONBA_PTR_TO_JSON(instanceName, instanceName_);
          DARABONBA_PTR_TO_JSON(project, project_);
          DARABONBA_PTR_TO_JSON(region, region_);
          DARABONBA_PTR_TO_JSON(shareScope, shareScope_);
          DARABONBA_PTR_TO_JSON(storageType, storageType_);
          DARABONBA_PTR_TO_JSON(systemTags, systemTags_);
          DARABONBA_PTR_TO_JSON(tags, tags_);
          DARABONBA_PTR_TO_JSON(userId, userId_);
          DARABONBA_PTR_TO_JSON(workspace, workspace_);
        };
        friend void from_json(const Darabonba::Json& j, Spec& obj) { 
          DARABONBA_PTR_FROM_JSON(entityId, entityId_);
          DARABONBA_PTR_FROM_JSON(instance, instance_);
          DARABONBA_PTR_FROM_JSON(instanceName, instanceName_);
          DARABONBA_PTR_FROM_JSON(project, project_);
          DARABONBA_PTR_FROM_JSON(region, region_);
          DARABONBA_PTR_FROM_JSON(shareScope, shareScope_);
          DARABONBA_PTR_FROM_JSON(storageType, storageType_);
          DARABONBA_PTR_FROM_JSON(systemTags, systemTags_);
          DARABONBA_PTR_FROM_JSON(tags, tags_);
          DARABONBA_PTR_FROM_JSON(userId, userId_);
          DARABONBA_PTR_FROM_JSON(workspace, workspace_);
        };
        Spec() = default ;
        Spec(const Spec &) = default ;
        Spec(Spec &&) = default ;
        Spec(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Spec() = default ;
        Spec& operator=(const Spec &) = default ;
        Spec& operator=(Spec &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->entityId_ == nullptr
        && this->instance_ == nullptr && this->instanceName_ == nullptr && this->project_ == nullptr && this->region_ == nullptr && this->shareScope_ == nullptr
        && this->storageType_ == nullptr && this->systemTags_ == nullptr && this->tags_ == nullptr && this->userId_ == nullptr && this->workspace_ == nullptr; };
        // entityId Field Functions 
        bool hasEntityId() const { return this->entityId_ != nullptr;};
        void deleteEntityId() { this->entityId_ = nullptr;};
        inline string getEntityId() const { DARABONBA_PTR_GET_DEFAULT(entityId_, "") };
        inline Spec& setEntityId(string entityId) { DARABONBA_PTR_SET_VALUE(entityId_, entityId) };


        // instance Field Functions 
        bool hasInstance() const { return this->instance_ != nullptr;};
        void deleteInstance() { this->instance_ = nullptr;};
        inline string getInstance() const { DARABONBA_PTR_GET_DEFAULT(instance_, "") };
        inline Spec& setInstance(string instance) { DARABONBA_PTR_SET_VALUE(instance_, instance) };


        // instanceName Field Functions 
        bool hasInstanceName() const { return this->instanceName_ != nullptr;};
        void deleteInstanceName() { this->instanceName_ = nullptr;};
        inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
        inline Spec& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


        // project Field Functions 
        bool hasProject() const { return this->project_ != nullptr;};
        void deleteProject() { this->project_ = nullptr;};
        inline string getProject() const { DARABONBA_PTR_GET_DEFAULT(project_, "") };
        inline Spec& setProject(string project) { DARABONBA_PTR_SET_VALUE(project_, project) };


        // region Field Functions 
        bool hasRegion() const { return this->region_ != nullptr;};
        void deleteRegion() { this->region_ = nullptr;};
        inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
        inline Spec& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


        // shareScope Field Functions 
        bool hasShareScope() const { return this->shareScope_ != nullptr;};
        void deleteShareScope() { this->shareScope_ = nullptr;};
        inline string getShareScope() const { DARABONBA_PTR_GET_DEFAULT(shareScope_, "") };
        inline Spec& setShareScope(string shareScope) { DARABONBA_PTR_SET_VALUE(shareScope_, shareScope) };


        // storageType Field Functions 
        bool hasStorageType() const { return this->storageType_ != nullptr;};
        void deleteStorageType() { this->storageType_ = nullptr;};
        inline string getStorageType() const { DARABONBA_PTR_GET_DEFAULT(storageType_, "") };
        inline Spec& setStorageType(string storageType) { DARABONBA_PTR_SET_VALUE(storageType_, storageType) };


        // systemTags Field Functions 
        bool hasSystemTags() const { return this->systemTags_ != nullptr;};
        void deleteSystemTags() { this->systemTags_ = nullptr;};
        inline const map<string, string> & getSystemTags() const { DARABONBA_PTR_GET_CONST(systemTags_, map<string, string>) };
        inline map<string, string> getSystemTags() { DARABONBA_PTR_GET(systemTags_, map<string, string>) };
        inline Spec& setSystemTags(const map<string, string> & systemTags) { DARABONBA_PTR_SET_VALUE(systemTags_, systemTags) };
        inline Spec& setSystemTags(map<string, string> && systemTags) { DARABONBA_PTR_SET_RVALUE(systemTags_, systemTags) };


        // tags Field Functions 
        bool hasTags() const { return this->tags_ != nullptr;};
        void deleteTags() { this->tags_ = nullptr;};
        inline const map<string, string> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, map<string, string>) };
        inline map<string, string> getTags() { DARABONBA_PTR_GET(tags_, map<string, string>) };
        inline Spec& setTags(const map<string, string> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
        inline Spec& setTags(map<string, string> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


        // userId Field Functions 
        bool hasUserId() const { return this->userId_ != nullptr;};
        void deleteUserId() { this->userId_ = nullptr;};
        inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
        inline Spec& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


        // workspace Field Functions 
        bool hasWorkspace() const { return this->workspace_ != nullptr;};
        void deleteWorkspace() { this->workspace_ = nullptr;};
        inline string getWorkspace() const { DARABONBA_PTR_GET_DEFAULT(workspace_, "") };
        inline Spec& setWorkspace(string workspace) { DARABONBA_PTR_SET_VALUE(workspace_, workspace) };


      protected:
        // Instance ID, which can be specified if you need to pinpoint to the instance level. It depends on the data in EntityStore.
        shared_ptr<string> entityId_ {};
        // Prom Instance ID.
        shared_ptr<string> instance_ {};
        // Prom instance name
        shared_ptr<string> instanceName_ {};
        // Optional parameter, determined based on the current environment type
        shared_ptr<string> project_ {};
        // Region
        shared_ptr<string> region_ {};
        // Storage sharing scope: Environment | Region | Workspace | Custom
        shared_ptr<string> shareScope_ {};
        // Instance storage type
        shared_ptr<string> storageType_ {};
        // Tags to be applied to the target storage (injected as system tags)
        shared_ptr<map<string, string>> systemTags_ {};
        // Tags to be applied to the target storage (injected as regular tags)
        shared_ptr<map<string, string>> tags_ {};
        // User ID
        shared_ptr<string> userId_ {};
        // Workspace
        shared_ptr<string> workspace_ {};
      };

      class Metadata : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Metadata& obj) { 
          DARABONBA_PTR_TO_JSON(annotations, annotations_);
          DARABONBA_PTR_TO_JSON(labels, labels_);
          DARABONBA_PTR_TO_JSON(name, name_);
          DARABONBA_PTR_TO_JSON(namespace, namespace_);
        };
        friend void from_json(const Darabonba::Json& j, Metadata& obj) { 
          DARABONBA_PTR_FROM_JSON(annotations, annotations_);
          DARABONBA_PTR_FROM_JSON(labels, labels_);
          DARABONBA_PTR_FROM_JSON(name, name_);
          DARABONBA_PTR_FROM_JSON(namespace, namespace_);
        };
        Metadata() = default ;
        Metadata(const Metadata &) = default ;
        Metadata(Metadata &&) = default ;
        Metadata(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Metadata() = default ;
        Metadata& operator=(const Metadata &) = default ;
        Metadata& operator=(Metadata &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->annotations_ == nullptr
        && this->labels_ == nullptr && this->name_ == nullptr && this->namespace_ == nullptr; };
        // annotations Field Functions 
        bool hasAnnotations() const { return this->annotations_ != nullptr;};
        void deleteAnnotations() { this->annotations_ = nullptr;};
        inline const map<string, string> & getAnnotations() const { DARABONBA_PTR_GET_CONST(annotations_, map<string, string>) };
        inline map<string, string> getAnnotations() { DARABONBA_PTR_GET(annotations_, map<string, string>) };
        inline Metadata& setAnnotations(const map<string, string> & annotations) { DARABONBA_PTR_SET_VALUE(annotations_, annotations) };
        inline Metadata& setAnnotations(map<string, string> && annotations) { DARABONBA_PTR_SET_RVALUE(annotations_, annotations) };


        // labels Field Functions 
        bool hasLabels() const { return this->labels_ != nullptr;};
        void deleteLabels() { this->labels_ = nullptr;};
        inline const map<string, string> & getLabels() const { DARABONBA_PTR_GET_CONST(labels_, map<string, string>) };
        inline map<string, string> getLabels() { DARABONBA_PTR_GET(labels_, map<string, string>) };
        inline Metadata& setLabels(const map<string, string> & labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };
        inline Metadata& setLabels(map<string, string> && labels) { DARABONBA_PTR_SET_RVALUE(labels_, labels) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Metadata& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // namespace Field Functions 
        bool hasNamespace() const { return this->namespace_ != nullptr;};
        void deleteNamespace() { this->namespace_ = nullptr;};
        inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
        inline Metadata& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


      protected:
        // Annotations
        shared_ptr<map<string, string>> annotations_ {};
        // Resource labels
        shared_ptr<map<string, string>> labels_ {};
        // Resource name
        shared_ptr<string> name_ {};
        // Namespace
        shared_ptr<string> namespace_ {};
      };

      virtual bool empty() const override { return this->addonReleaseNames_ == nullptr
        && this->apiVersion_ == nullptr && this->kind_ == nullptr && this->metadata_ == nullptr && this->spec_ == nullptr && this->status_ == nullptr; };
      // addonReleaseNames Field Functions 
      bool hasAddonReleaseNames() const { return this->addonReleaseNames_ != nullptr;};
      void deleteAddonReleaseNames() { this->addonReleaseNames_ = nullptr;};
      inline const vector<string> & getAddonReleaseNames() const { DARABONBA_PTR_GET_CONST(addonReleaseNames_, vector<string>) };
      inline vector<string> getAddonReleaseNames() { DARABONBA_PTR_GET(addonReleaseNames_, vector<string>) };
      inline StorageRequirements& setAddonReleaseNames(const vector<string> & addonReleaseNames) { DARABONBA_PTR_SET_VALUE(addonReleaseNames_, addonReleaseNames) };
      inline StorageRequirements& setAddonReleaseNames(vector<string> && addonReleaseNames) { DARABONBA_PTR_SET_RVALUE(addonReleaseNames_, addonReleaseNames) };


      // apiVersion Field Functions 
      bool hasApiVersion() const { return this->apiVersion_ != nullptr;};
      void deleteApiVersion() { this->apiVersion_ = nullptr;};
      inline string getApiVersion() const { DARABONBA_PTR_GET_DEFAULT(apiVersion_, "") };
      inline StorageRequirements& setApiVersion(string apiVersion) { DARABONBA_PTR_SET_VALUE(apiVersion_, apiVersion) };


      // kind Field Functions 
      bool hasKind() const { return this->kind_ != nullptr;};
      void deleteKind() { this->kind_ = nullptr;};
      inline string getKind() const { DARABONBA_PTR_GET_DEFAULT(kind_, "") };
      inline StorageRequirements& setKind(string kind) { DARABONBA_PTR_SET_VALUE(kind_, kind) };


      // metadata Field Functions 
      bool hasMetadata() const { return this->metadata_ != nullptr;};
      void deleteMetadata() { this->metadata_ = nullptr;};
      inline const StorageRequirements::Metadata & getMetadata() const { DARABONBA_PTR_GET_CONST(metadata_, StorageRequirements::Metadata) };
      inline StorageRequirements::Metadata getMetadata() { DARABONBA_PTR_GET(metadata_, StorageRequirements::Metadata) };
      inline StorageRequirements& setMetadata(const StorageRequirements::Metadata & metadata) { DARABONBA_PTR_SET_VALUE(metadata_, metadata) };
      inline StorageRequirements& setMetadata(StorageRequirements::Metadata && metadata) { DARABONBA_PTR_SET_RVALUE(metadata_, metadata) };


      // spec Field Functions 
      bool hasSpec() const { return this->spec_ != nullptr;};
      void deleteSpec() { this->spec_ = nullptr;};
      inline const StorageRequirements::Spec & getSpec() const { DARABONBA_PTR_GET_CONST(spec_, StorageRequirements::Spec) };
      inline StorageRequirements::Spec getSpec() { DARABONBA_PTR_GET(spec_, StorageRequirements::Spec) };
      inline StorageRequirements& setSpec(const StorageRequirements::Spec & spec) { DARABONBA_PTR_SET_VALUE(spec_, spec) };
      inline StorageRequirements& setSpec(StorageRequirements::Spec && spec) { DARABONBA_PTR_SET_RVALUE(spec_, spec) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline const StorageRequirements::Status & getStatus() const { DARABONBA_PTR_GET_CONST(status_, StorageRequirements::Status) };
      inline StorageRequirements::Status getStatus() { DARABONBA_PTR_GET(status_, StorageRequirements::Status) };
      inline StorageRequirements& setStatus(const StorageRequirements::Status & status) { DARABONBA_PTR_SET_VALUE(status_, status) };
      inline StorageRequirements& setStatus(StorageRequirements::Status && status) { DARABONBA_PTR_SET_RVALUE(status_, status) };


    protected:
      // Collection of AddonReleases.
      shared_ptr<vector<string>> addonReleaseNames_ {};
      // API Version
      shared_ptr<string> apiVersion_ {};
      // Resource kind
      shared_ptr<string> kind_ {};
      // Metadata
      shared_ptr<StorageRequirements::Metadata> metadata_ {};
      // Resource spec
      shared_ptr<StorageRequirements::Spec> spec_ {};
      // Storage requirement status
      shared_ptr<StorageRequirements::Status> status_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->storageRequirements_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListIntegrationPolicyStorageRequirementsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // storageRequirements Field Functions 
    bool hasStorageRequirements() const { return this->storageRequirements_ != nullptr;};
    void deleteStorageRequirements() { this->storageRequirements_ = nullptr;};
    inline const vector<ListIntegrationPolicyStorageRequirementsResponseBody::StorageRequirements> & getStorageRequirements() const { DARABONBA_PTR_GET_CONST(storageRequirements_, vector<ListIntegrationPolicyStorageRequirementsResponseBody::StorageRequirements>) };
    inline vector<ListIntegrationPolicyStorageRequirementsResponseBody::StorageRequirements> getStorageRequirements() { DARABONBA_PTR_GET(storageRequirements_, vector<ListIntegrationPolicyStorageRequirementsResponseBody::StorageRequirements>) };
    inline ListIntegrationPolicyStorageRequirementsResponseBody& setStorageRequirements(const vector<ListIntegrationPolicyStorageRequirementsResponseBody::StorageRequirements> & storageRequirements) { DARABONBA_PTR_SET_VALUE(storageRequirements_, storageRequirements) };
    inline ListIntegrationPolicyStorageRequirementsResponseBody& setStorageRequirements(vector<ListIntegrationPolicyStorageRequirementsResponseBody::StorageRequirements> && storageRequirements) { DARABONBA_PTR_SET_RVALUE(storageRequirements_, storageRequirements) };


  protected:
    // ID of the request
    shared_ptr<string> requestId_ {};
    // List of storage requirements
    shared_ptr<vector<ListIntegrationPolicyStorageRequirementsResponseBody::StorageRequirements>> storageRequirements_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
