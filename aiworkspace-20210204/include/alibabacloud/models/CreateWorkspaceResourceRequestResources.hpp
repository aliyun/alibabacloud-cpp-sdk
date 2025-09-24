// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEWORKSPACERESOURCEREQUESTRESOURCES_HPP_
#define ALIBABACLOUD_MODELS_CREATEWORKSPACERESOURCEREQUESTRESOURCES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateWorkspaceResourceRequestResourcesLabels.hpp>
#include <alibabacloud/models/CreateWorkspaceResourceRequestResourcesQuotas.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIWorkSpace20210204
{
namespace Models
{
  class CreateWorkspaceResourceRequestResources : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateWorkspaceResourceRequestResources& obj) { 
      DARABONBA_PTR_TO_JSON(EnvType, envType_);
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
      DARABONBA_PTR_TO_JSON(IsDefault, isDefault_);
      DARABONBA_PTR_TO_JSON(Labels, labels_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(ProductType, productType_);
      DARABONBA_PTR_TO_JSON(Quotas, quotas_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_ANY_TO_JSON(Spec, spec_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateWorkspaceResourceRequestResources& obj) { 
      DARABONBA_PTR_FROM_JSON(EnvType, envType_);
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
      DARABONBA_PTR_FROM_JSON(IsDefault, isDefault_);
      DARABONBA_PTR_FROM_JSON(Labels, labels_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(ProductType, productType_);
      DARABONBA_PTR_FROM_JSON(Quotas, quotas_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_ANY_FROM_JSON(Spec, spec_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    CreateWorkspaceResourceRequestResources() = default ;
    CreateWorkspaceResourceRequestResources(const CreateWorkspaceResourceRequestResources &) = default ;
    CreateWorkspaceResourceRequestResources(CreateWorkspaceResourceRequestResources &&) = default ;
    CreateWorkspaceResourceRequestResources(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateWorkspaceResourceRequestResources() = default ;
    CreateWorkspaceResourceRequestResources& operator=(const CreateWorkspaceResourceRequestResources &) = default ;
    CreateWorkspaceResourceRequestResources& operator=(CreateWorkspaceResourceRequestResources &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->envType_ != nullptr
        && this->groupName_ != nullptr && this->isDefault_ != nullptr && this->labels_ != nullptr && this->name_ != nullptr && this->productType_ != nullptr
        && this->quotas_ != nullptr && this->resourceType_ != nullptr && this->spec_ != nullptr && this->workspaceId_ != nullptr; };
    // envType Field Functions 
    bool hasEnvType() const { return this->envType_ != nullptr;};
    void deleteEnvType() { this->envType_ = nullptr;};
    inline string envType() const { DARABONBA_PTR_GET_DEFAULT(envType_, "") };
    inline CreateWorkspaceResourceRequestResources& setEnvType(string envType) { DARABONBA_PTR_SET_VALUE(envType_, envType) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string groupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline CreateWorkspaceResourceRequestResources& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // isDefault Field Functions 
    bool hasIsDefault() const { return this->isDefault_ != nullptr;};
    void deleteIsDefault() { this->isDefault_ = nullptr;};
    inline bool isDefault() const { DARABONBA_PTR_GET_DEFAULT(isDefault_, false) };
    inline CreateWorkspaceResourceRequestResources& setIsDefault(bool isDefault) { DARABONBA_PTR_SET_VALUE(isDefault_, isDefault) };


    // labels Field Functions 
    bool hasLabels() const { return this->labels_ != nullptr;};
    void deleteLabels() { this->labels_ = nullptr;};
    inline const vector<Models::CreateWorkspaceResourceRequestResourcesLabels> & labels() const { DARABONBA_PTR_GET_CONST(labels_, vector<Models::CreateWorkspaceResourceRequestResourcesLabels>) };
    inline vector<Models::CreateWorkspaceResourceRequestResourcesLabels> labels() { DARABONBA_PTR_GET(labels_, vector<Models::CreateWorkspaceResourceRequestResourcesLabels>) };
    inline CreateWorkspaceResourceRequestResources& setLabels(const vector<Models::CreateWorkspaceResourceRequestResourcesLabels> & labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };
    inline CreateWorkspaceResourceRequestResources& setLabels(vector<Models::CreateWorkspaceResourceRequestResourcesLabels> && labels) { DARABONBA_PTR_SET_RVALUE(labels_, labels) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateWorkspaceResourceRequestResources& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // productType Field Functions 
    bool hasProductType() const { return this->productType_ != nullptr;};
    void deleteProductType() { this->productType_ = nullptr;};
    inline string productType() const { DARABONBA_PTR_GET_DEFAULT(productType_, "") };
    inline CreateWorkspaceResourceRequestResources& setProductType(string productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


    // quotas Field Functions 
    bool hasQuotas() const { return this->quotas_ != nullptr;};
    void deleteQuotas() { this->quotas_ = nullptr;};
    inline const vector<Models::CreateWorkspaceResourceRequestResourcesQuotas> & quotas() const { DARABONBA_PTR_GET_CONST(quotas_, vector<Models::CreateWorkspaceResourceRequestResourcesQuotas>) };
    inline vector<Models::CreateWorkspaceResourceRequestResourcesQuotas> quotas() { DARABONBA_PTR_GET(quotas_, vector<Models::CreateWorkspaceResourceRequestResourcesQuotas>) };
    inline CreateWorkspaceResourceRequestResources& setQuotas(const vector<Models::CreateWorkspaceResourceRequestResourcesQuotas> & quotas) { DARABONBA_PTR_SET_VALUE(quotas_, quotas) };
    inline CreateWorkspaceResourceRequestResources& setQuotas(vector<Models::CreateWorkspaceResourceRequestResourcesQuotas> && quotas) { DARABONBA_PTR_SET_RVALUE(quotas_, quotas) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline CreateWorkspaceResourceRequestResources& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // spec Field Functions 
    bool hasSpec() const { return this->spec_ != nullptr;};
    void deleteSpec() { this->spec_ = nullptr;};
    inline     const Darabonba::Json & spec() const { DARABONBA_GET(spec_) };
    Darabonba::Json & spec() { DARABONBA_GET(spec_) };
    inline CreateWorkspaceResourceRequestResources& setSpec(const Darabonba::Json & spec) { DARABONBA_SET_VALUE(spec_, spec) };
    inline CreateWorkspaceResourceRequestResources& setSpec(Darabonba::Json & spec) { DARABONBA_SET_RVALUE(spec_, spec) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline CreateWorkspaceResourceRequestResources& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // The environment type. Valid values:
    // 
    // *   dev: development environment
    // *   prod: production environment
    // 
    // This parameter is required.
    std::shared_ptr<string> envType_ = nullptr;
    // The name of the resource group, which is unique within your Alibaba Cloud account. This parameter is required for MaxCompute, Elastic Compute Service (ECS), Lingjun, Alibaba Cloud Container Compute Service (ACS), and Realtime Compute for Apache Flink resources.
    std::shared_ptr<string> groupName_ = nullptr;
    // Specifies whether the resource is the default resource. Each type of resources has a default resource. Valid values:
    // 
    // *   false (default)
    // *   true
    std::shared_ptr<bool> isDefault_ = nullptr;
    // The labels added to the resource.
    std::shared_ptr<vector<Models::CreateWorkspaceResourceRequestResourcesLabels>> labels_ = nullptr;
    // The resource name. The name must meet the following requirements:
    // 
    // *   The name must be 3 to 28 characters in length, and can contain only letters, digits, and underscores (_). The name must start with a letter.
    // *   The name must be unique in the region.
    // 
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    // **This parameter is no longer used and will be removed. Use the ResourceType parameter instead.
    std::shared_ptr<string> productType_ = nullptr;
    // The quotas. Only MaxCompute quotas are available.
    std::shared_ptr<vector<Models::CreateWorkspaceResourceRequestResourcesQuotas>> quotas_ = nullptr;
    // The resource types. Valid values:
    // 
    // *   MaxCompute
    // *   ECS
    // *   Lingjun
    // *   ACS
    // *   FLINK
    std::shared_ptr<string> resourceType_ = nullptr;
    // The resource specifications in the JSON format.
    Darabonba::Json spec_ = nullptr;
    // The workspace ID. You can call [ListWorkspaces](https://help.aliyun.com/document_detail/449124.html) to obtain the workspace ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIWorkSpace20210204
#endif
