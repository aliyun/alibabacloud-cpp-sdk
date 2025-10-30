// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINTEGRATIONPOLICYSTORAGEREQUIREMENTSRESPONSEBODYSTORAGEREQUIREMENTSSTATUS_HPP_
#define ALIBABACLOUD_MODELS_LISTINTEGRATIONPOLICYSTORAGEREQUIREMENTSRESPONSEBODYSTORAGEREQUIREMENTSSTATUS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class ListIntegrationPolicyStorageRequirementsResponseBodyStorageRequirementsStatus : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListIntegrationPolicyStorageRequirementsResponseBodyStorageRequirementsStatus& obj) { 
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
    friend void from_json(const Darabonba::Json& j, ListIntegrationPolicyStorageRequirementsResponseBodyStorageRequirementsStatus& obj) { 
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
    ListIntegrationPolicyStorageRequirementsResponseBodyStorageRequirementsStatus() = default ;
    ListIntegrationPolicyStorageRequirementsResponseBodyStorageRequirementsStatus(const ListIntegrationPolicyStorageRequirementsResponseBodyStorageRequirementsStatus &) = default ;
    ListIntegrationPolicyStorageRequirementsResponseBodyStorageRequirementsStatus(ListIntegrationPolicyStorageRequirementsResponseBodyStorageRequirementsStatus &&) = default ;
    ListIntegrationPolicyStorageRequirementsResponseBodyStorageRequirementsStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListIntegrationPolicyStorageRequirementsResponseBodyStorageRequirementsStatus() = default ;
    ListIntegrationPolicyStorageRequirementsResponseBodyStorageRequirementsStatus& operator=(const ListIntegrationPolicyStorageRequirementsResponseBodyStorageRequirementsStatus &) = default ;
    ListIntegrationPolicyStorageRequirementsResponseBodyStorageRequirementsStatus& operator=(ListIntegrationPolicyStorageRequirementsResponseBodyStorageRequirementsStatus &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && return this->interUrl_ == nullptr && return this->intraUrl_ == nullptr && return this->name_ == nullptr && return this->project_ == nullptr && return this->promMetricStore_ == nullptr
        && return this->region_ == nullptr && return this->storageType_ == nullptr && return this->workspace_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListIntegrationPolicyStorageRequirementsResponseBodyStorageRequirementsStatus& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // interUrl Field Functions 
    bool hasInterUrl() const { return this->interUrl_ != nullptr;};
    void deleteInterUrl() { this->interUrl_ = nullptr;};
    inline string interUrl() const { DARABONBA_PTR_GET_DEFAULT(interUrl_, "") };
    inline ListIntegrationPolicyStorageRequirementsResponseBodyStorageRequirementsStatus& setInterUrl(string interUrl) { DARABONBA_PTR_SET_VALUE(interUrl_, interUrl) };


    // intraUrl Field Functions 
    bool hasIntraUrl() const { return this->intraUrl_ != nullptr;};
    void deleteIntraUrl() { this->intraUrl_ = nullptr;};
    inline string intraUrl() const { DARABONBA_PTR_GET_DEFAULT(intraUrl_, "") };
    inline ListIntegrationPolicyStorageRequirementsResponseBodyStorageRequirementsStatus& setIntraUrl(string intraUrl) { DARABONBA_PTR_SET_VALUE(intraUrl_, intraUrl) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListIntegrationPolicyStorageRequirementsResponseBodyStorageRequirementsStatus& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // project Field Functions 
    bool hasProject() const { return this->project_ != nullptr;};
    void deleteProject() { this->project_ = nullptr;};
    inline string project() const { DARABONBA_PTR_GET_DEFAULT(project_, "") };
    inline ListIntegrationPolicyStorageRequirementsResponseBodyStorageRequirementsStatus& setProject(string project) { DARABONBA_PTR_SET_VALUE(project_, project) };


    // promMetricStore Field Functions 
    bool hasPromMetricStore() const { return this->promMetricStore_ != nullptr;};
    void deletePromMetricStore() { this->promMetricStore_ = nullptr;};
    inline string promMetricStore() const { DARABONBA_PTR_GET_DEFAULT(promMetricStore_, "") };
    inline ListIntegrationPolicyStorageRequirementsResponseBodyStorageRequirementsStatus& setPromMetricStore(string promMetricStore) { DARABONBA_PTR_SET_VALUE(promMetricStore_, promMetricStore) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline ListIntegrationPolicyStorageRequirementsResponseBodyStorageRequirementsStatus& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // storageType Field Functions 
    bool hasStorageType() const { return this->storageType_ != nullptr;};
    void deleteStorageType() { this->storageType_ = nullptr;};
    inline string storageType() const { DARABONBA_PTR_GET_DEFAULT(storageType_, "") };
    inline ListIntegrationPolicyStorageRequirementsResponseBodyStorageRequirementsStatus& setStorageType(string storageType) { DARABONBA_PTR_SET_VALUE(storageType_, storageType) };


    // workspace Field Functions 
    bool hasWorkspace() const { return this->workspace_ != nullptr;};
    void deleteWorkspace() { this->workspace_ = nullptr;};
    inline string workspace() const { DARABONBA_PTR_GET_DEFAULT(workspace_, "") };
    inline ListIntegrationPolicyStorageRequirementsResponseBodyStorageRequirementsStatus& setWorkspace(string workspace) { DARABONBA_PTR_SET_VALUE(workspace_, workspace) };


  protected:
    // Instance ID
    std::shared_ptr<string> instanceId_ = nullptr;
    // Internal URL
    std::shared_ptr<string> interUrl_ = nullptr;
    // External URL
    std::shared_ptr<string> intraUrl_ = nullptr;
    // 存储需求名称
    std::shared_ptr<string> name_ = nullptr;
    // 存储需求项目
    std::shared_ptr<string> project_ = nullptr;
    // Prom\\"s metric center
    std::shared_ptr<string> promMetricStore_ = nullptr;
    // Region
    std::shared_ptr<string> region_ = nullptr;
    // Instance storage type
    std::shared_ptr<string> storageType_ = nullptr;
    // Workspace.
    std::shared_ptr<string> workspace_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
