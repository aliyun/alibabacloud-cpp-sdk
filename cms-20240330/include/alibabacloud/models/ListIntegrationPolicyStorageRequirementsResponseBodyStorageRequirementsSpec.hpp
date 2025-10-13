// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINTEGRATIONPOLICYSTORAGEREQUIREMENTSRESPONSEBODYSTORAGEREQUIREMENTSSPEC_HPP_
#define ALIBABACLOUD_MODELS_LISTINTEGRATIONPOLICYSTORAGEREQUIREMENTSRESPONSEBODYSTORAGEREQUIREMENTSSPEC_HPP_
#include <darabonba/Core.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class ListIntegrationPolicyStorageRequirementsResponseBodyStorageRequirementsSpec : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListIntegrationPolicyStorageRequirementsResponseBodyStorageRequirementsSpec& obj) { 
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
    friend void from_json(const Darabonba::Json& j, ListIntegrationPolicyStorageRequirementsResponseBodyStorageRequirementsSpec& obj) { 
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
    ListIntegrationPolicyStorageRequirementsResponseBodyStorageRequirementsSpec() = default ;
    ListIntegrationPolicyStorageRequirementsResponseBodyStorageRequirementsSpec(const ListIntegrationPolicyStorageRequirementsResponseBodyStorageRequirementsSpec &) = default ;
    ListIntegrationPolicyStorageRequirementsResponseBodyStorageRequirementsSpec(ListIntegrationPolicyStorageRequirementsResponseBodyStorageRequirementsSpec &&) = default ;
    ListIntegrationPolicyStorageRequirementsResponseBodyStorageRequirementsSpec(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListIntegrationPolicyStorageRequirementsResponseBodyStorageRequirementsSpec() = default ;
    ListIntegrationPolicyStorageRequirementsResponseBodyStorageRequirementsSpec& operator=(const ListIntegrationPolicyStorageRequirementsResponseBodyStorageRequirementsSpec &) = default ;
    ListIntegrationPolicyStorageRequirementsResponseBodyStorageRequirementsSpec& operator=(ListIntegrationPolicyStorageRequirementsResponseBodyStorageRequirementsSpec &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->entityId_ == nullptr
        && return this->instance_ == nullptr && return this->instanceName_ == nullptr && return this->project_ == nullptr && return this->region_ == nullptr && return this->shareScope_ == nullptr
        && return this->storageType_ == nullptr && return this->systemTags_ == nullptr && return this->tags_ == nullptr && return this->userId_ == nullptr && return this->workspace_ == nullptr; };
    // entityId Field Functions 
    bool hasEntityId() const { return this->entityId_ != nullptr;};
    void deleteEntityId() { this->entityId_ = nullptr;};
    inline string entityId() const { DARABONBA_PTR_GET_DEFAULT(entityId_, "") };
    inline ListIntegrationPolicyStorageRequirementsResponseBodyStorageRequirementsSpec& setEntityId(string entityId) { DARABONBA_PTR_SET_VALUE(entityId_, entityId) };


    // instance Field Functions 
    bool hasInstance() const { return this->instance_ != nullptr;};
    void deleteInstance() { this->instance_ = nullptr;};
    inline string instance() const { DARABONBA_PTR_GET_DEFAULT(instance_, "") };
    inline ListIntegrationPolicyStorageRequirementsResponseBodyStorageRequirementsSpec& setInstance(string instance) { DARABONBA_PTR_SET_VALUE(instance_, instance) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string instanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline ListIntegrationPolicyStorageRequirementsResponseBodyStorageRequirementsSpec& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // project Field Functions 
    bool hasProject() const { return this->project_ != nullptr;};
    void deleteProject() { this->project_ = nullptr;};
    inline string project() const { DARABONBA_PTR_GET_DEFAULT(project_, "") };
    inline ListIntegrationPolicyStorageRequirementsResponseBodyStorageRequirementsSpec& setProject(string project) { DARABONBA_PTR_SET_VALUE(project_, project) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline ListIntegrationPolicyStorageRequirementsResponseBodyStorageRequirementsSpec& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // shareScope Field Functions 
    bool hasShareScope() const { return this->shareScope_ != nullptr;};
    void deleteShareScope() { this->shareScope_ = nullptr;};
    inline string shareScope() const { DARABONBA_PTR_GET_DEFAULT(shareScope_, "") };
    inline ListIntegrationPolicyStorageRequirementsResponseBodyStorageRequirementsSpec& setShareScope(string shareScope) { DARABONBA_PTR_SET_VALUE(shareScope_, shareScope) };


    // storageType Field Functions 
    bool hasStorageType() const { return this->storageType_ != nullptr;};
    void deleteStorageType() { this->storageType_ = nullptr;};
    inline string storageType() const { DARABONBA_PTR_GET_DEFAULT(storageType_, "") };
    inline ListIntegrationPolicyStorageRequirementsResponseBodyStorageRequirementsSpec& setStorageType(string storageType) { DARABONBA_PTR_SET_VALUE(storageType_, storageType) };


    // systemTags Field Functions 
    bool hasSystemTags() const { return this->systemTags_ != nullptr;};
    void deleteSystemTags() { this->systemTags_ = nullptr;};
    inline const map<string, string> & systemTags() const { DARABONBA_PTR_GET_CONST(systemTags_, map<string, string>) };
    inline map<string, string> systemTags() { DARABONBA_PTR_GET(systemTags_, map<string, string>) };
    inline ListIntegrationPolicyStorageRequirementsResponseBodyStorageRequirementsSpec& setSystemTags(const map<string, string> & systemTags) { DARABONBA_PTR_SET_VALUE(systemTags_, systemTags) };
    inline ListIntegrationPolicyStorageRequirementsResponseBodyStorageRequirementsSpec& setSystemTags(map<string, string> && systemTags) { DARABONBA_PTR_SET_RVALUE(systemTags_, systemTags) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const map<string, string> & tags() const { DARABONBA_PTR_GET_CONST(tags_, map<string, string>) };
    inline map<string, string> tags() { DARABONBA_PTR_GET(tags_, map<string, string>) };
    inline ListIntegrationPolicyStorageRequirementsResponseBodyStorageRequirementsSpec& setTags(const map<string, string> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline ListIntegrationPolicyStorageRequirementsResponseBodyStorageRequirementsSpec& setTags(map<string, string> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline ListIntegrationPolicyStorageRequirementsResponseBodyStorageRequirementsSpec& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // workspace Field Functions 
    bool hasWorkspace() const { return this->workspace_ != nullptr;};
    void deleteWorkspace() { this->workspace_ = nullptr;};
    inline string workspace() const { DARABONBA_PTR_GET_DEFAULT(workspace_, "") };
    inline ListIntegrationPolicyStorageRequirementsResponseBodyStorageRequirementsSpec& setWorkspace(string workspace) { DARABONBA_PTR_SET_VALUE(workspace_, workspace) };


  protected:
    std::shared_ptr<string> entityId_ = nullptr;
    std::shared_ptr<string> instance_ = nullptr;
    std::shared_ptr<string> instanceName_ = nullptr;
    std::shared_ptr<string> project_ = nullptr;
    std::shared_ptr<string> region_ = nullptr;
    std::shared_ptr<string> shareScope_ = nullptr;
    std::shared_ptr<string> storageType_ = nullptr;
    std::shared_ptr<map<string, string>> systemTags_ = nullptr;
    std::shared_ptr<map<string, string>> tags_ = nullptr;
    std::shared_ptr<string> userId_ = nullptr;
    std::shared_ptr<string> workspace_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
