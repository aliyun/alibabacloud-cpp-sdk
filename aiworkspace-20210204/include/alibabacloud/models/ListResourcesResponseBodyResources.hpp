// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRESOURCESRESPONSEBODYRESOURCES_HPP_
#define ALIBABACLOUD_MODELS_LISTRESOURCESRESPONSEBODYRESOURCES_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListResourcesResponseBodyResourcesEncryption.hpp>
#include <alibabacloud/models/ListResourcesResponseBodyResourcesExecutor.hpp>
#include <vector>
#include <alibabacloud/models/ListResourcesResponseBodyResourcesLabels.hpp>
#include <alibabacloud/models/ListResourcesResponseBodyResourcesQuotas.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIWorkSpace20210204
{
namespace Models
{
  class ListResourcesResponseBodyResources : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListResourcesResponseBodyResources& obj) { 
      DARABONBA_PTR_TO_JSON(Encryption, encryption_);
      DARABONBA_PTR_TO_JSON(EnvType, envType_);
      DARABONBA_PTR_TO_JSON(Executor, executor_);
      DARABONBA_PTR_TO_JSON(GmtCreateTime, gmtCreateTime_);
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(IsDefault, isDefault_);
      DARABONBA_PTR_TO_JSON(Labels, labels_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(ProductType, productType_);
      DARABONBA_PTR_TO_JSON(Quotas, quotas_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_ANY_TO_JSON(Spec, spec_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, ListResourcesResponseBodyResources& obj) { 
      DARABONBA_PTR_FROM_JSON(Encryption, encryption_);
      DARABONBA_PTR_FROM_JSON(EnvType, envType_);
      DARABONBA_PTR_FROM_JSON(Executor, executor_);
      DARABONBA_PTR_FROM_JSON(GmtCreateTime, gmtCreateTime_);
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(IsDefault, isDefault_);
      DARABONBA_PTR_FROM_JSON(Labels, labels_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(ProductType, productType_);
      DARABONBA_PTR_FROM_JSON(Quotas, quotas_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_ANY_FROM_JSON(Spec, spec_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    ListResourcesResponseBodyResources() = default ;
    ListResourcesResponseBodyResources(const ListResourcesResponseBodyResources &) = default ;
    ListResourcesResponseBodyResources(ListResourcesResponseBodyResources &&) = default ;
    ListResourcesResponseBodyResources(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListResourcesResponseBodyResources() = default ;
    ListResourcesResponseBodyResources& operator=(const ListResourcesResponseBodyResources &) = default ;
    ListResourcesResponseBodyResources& operator=(ListResourcesResponseBodyResources &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->encryption_ != nullptr
        && this->envType_ != nullptr && this->executor_ != nullptr && this->gmtCreateTime_ != nullptr && this->groupName_ != nullptr && this->id_ != nullptr
        && this->isDefault_ != nullptr && this->labels_ != nullptr && this->name_ != nullptr && this->productType_ != nullptr && this->quotas_ != nullptr
        && this->resourceType_ != nullptr && this->spec_ != nullptr && this->workspaceId_ != nullptr; };
    // encryption Field Functions 
    bool hasEncryption() const { return this->encryption_ != nullptr;};
    void deleteEncryption() { this->encryption_ = nullptr;};
    inline const Models::ListResourcesResponseBodyResourcesEncryption & encryption() const { DARABONBA_PTR_GET_CONST(encryption_, Models::ListResourcesResponseBodyResourcesEncryption) };
    inline Models::ListResourcesResponseBodyResourcesEncryption encryption() { DARABONBA_PTR_GET(encryption_, Models::ListResourcesResponseBodyResourcesEncryption) };
    inline ListResourcesResponseBodyResources& setEncryption(const Models::ListResourcesResponseBodyResourcesEncryption & encryption) { DARABONBA_PTR_SET_VALUE(encryption_, encryption) };
    inline ListResourcesResponseBodyResources& setEncryption(Models::ListResourcesResponseBodyResourcesEncryption && encryption) { DARABONBA_PTR_SET_RVALUE(encryption_, encryption) };


    // envType Field Functions 
    bool hasEnvType() const { return this->envType_ != nullptr;};
    void deleteEnvType() { this->envType_ = nullptr;};
    inline string envType() const { DARABONBA_PTR_GET_DEFAULT(envType_, "") };
    inline ListResourcesResponseBodyResources& setEnvType(string envType) { DARABONBA_PTR_SET_VALUE(envType_, envType) };


    // executor Field Functions 
    bool hasExecutor() const { return this->executor_ != nullptr;};
    void deleteExecutor() { this->executor_ = nullptr;};
    inline const Models::ListResourcesResponseBodyResourcesExecutor & executor() const { DARABONBA_PTR_GET_CONST(executor_, Models::ListResourcesResponseBodyResourcesExecutor) };
    inline Models::ListResourcesResponseBodyResourcesExecutor executor() { DARABONBA_PTR_GET(executor_, Models::ListResourcesResponseBodyResourcesExecutor) };
    inline ListResourcesResponseBodyResources& setExecutor(const Models::ListResourcesResponseBodyResourcesExecutor & executor) { DARABONBA_PTR_SET_VALUE(executor_, executor) };
    inline ListResourcesResponseBodyResources& setExecutor(Models::ListResourcesResponseBodyResourcesExecutor && executor) { DARABONBA_PTR_SET_RVALUE(executor_, executor) };


    // gmtCreateTime Field Functions 
    bool hasGmtCreateTime() const { return this->gmtCreateTime_ != nullptr;};
    void deleteGmtCreateTime() { this->gmtCreateTime_ = nullptr;};
    inline string gmtCreateTime() const { DARABONBA_PTR_GET_DEFAULT(gmtCreateTime_, "") };
    inline ListResourcesResponseBodyResources& setGmtCreateTime(string gmtCreateTime) { DARABONBA_PTR_SET_VALUE(gmtCreateTime_, gmtCreateTime) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string groupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline ListResourcesResponseBodyResources& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline ListResourcesResponseBodyResources& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // isDefault Field Functions 
    bool hasIsDefault() const { return this->isDefault_ != nullptr;};
    void deleteIsDefault() { this->isDefault_ = nullptr;};
    inline bool isDefault() const { DARABONBA_PTR_GET_DEFAULT(isDefault_, false) };
    inline ListResourcesResponseBodyResources& setIsDefault(bool isDefault) { DARABONBA_PTR_SET_VALUE(isDefault_, isDefault) };


    // labels Field Functions 
    bool hasLabels() const { return this->labels_ != nullptr;};
    void deleteLabels() { this->labels_ = nullptr;};
    inline const vector<Models::ListResourcesResponseBodyResourcesLabels> & labels() const { DARABONBA_PTR_GET_CONST(labels_, vector<Models::ListResourcesResponseBodyResourcesLabels>) };
    inline vector<Models::ListResourcesResponseBodyResourcesLabels> labels() { DARABONBA_PTR_GET(labels_, vector<Models::ListResourcesResponseBodyResourcesLabels>) };
    inline ListResourcesResponseBodyResources& setLabels(const vector<Models::ListResourcesResponseBodyResourcesLabels> & labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };
    inline ListResourcesResponseBodyResources& setLabels(vector<Models::ListResourcesResponseBodyResourcesLabels> && labels) { DARABONBA_PTR_SET_RVALUE(labels_, labels) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListResourcesResponseBodyResources& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // productType Field Functions 
    bool hasProductType() const { return this->productType_ != nullptr;};
    void deleteProductType() { this->productType_ = nullptr;};
    inline string productType() const { DARABONBA_PTR_GET_DEFAULT(productType_, "") };
    inline ListResourcesResponseBodyResources& setProductType(string productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


    // quotas Field Functions 
    bool hasQuotas() const { return this->quotas_ != nullptr;};
    void deleteQuotas() { this->quotas_ = nullptr;};
    inline const vector<Models::ListResourcesResponseBodyResourcesQuotas> & quotas() const { DARABONBA_PTR_GET_CONST(quotas_, vector<Models::ListResourcesResponseBodyResourcesQuotas>) };
    inline vector<Models::ListResourcesResponseBodyResourcesQuotas> quotas() { DARABONBA_PTR_GET(quotas_, vector<Models::ListResourcesResponseBodyResourcesQuotas>) };
    inline ListResourcesResponseBodyResources& setQuotas(const vector<Models::ListResourcesResponseBodyResourcesQuotas> & quotas) { DARABONBA_PTR_SET_VALUE(quotas_, quotas) };
    inline ListResourcesResponseBodyResources& setQuotas(vector<Models::ListResourcesResponseBodyResourcesQuotas> && quotas) { DARABONBA_PTR_SET_RVALUE(quotas_, quotas) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline ListResourcesResponseBodyResources& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // spec Field Functions 
    bool hasSpec() const { return this->spec_ != nullptr;};
    void deleteSpec() { this->spec_ = nullptr;};
    inline     const Darabonba::Json & spec() const { DARABONBA_GET(spec_) };
    Darabonba::Json & spec() { DARABONBA_GET(spec_) };
    inline ListResourcesResponseBodyResources& setSpec(const Darabonba::Json & spec) { DARABONBA_SET_VALUE(spec_, spec) };
    inline ListResourcesResponseBodyResources& setSpec(Darabonba::Json & spec) { DARABONBA_SET_RVALUE(spec_, spec) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline ListResourcesResponseBodyResources& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // The encryption information, which is valid only for MaxCompute resources.
    std::shared_ptr<Models::ListResourcesResponseBodyResourcesEncryption> encryption_ = nullptr;
    // The environment type. Valid values:
    // 
    // *   dev: development environment
    // *   prod: production environment
    std::shared_ptr<string> envType_ = nullptr;
    // This parameter is invalid and deprecated.
    std::shared_ptr<Models::ListResourcesResponseBodyResourcesExecutor> executor_ = nullptr;
    // The time when the resource group is created, in UTC. The time follows the ISO 8601 standard.
    std::shared_ptr<string> gmtCreateTime_ = nullptr;
    // The name of the resource group, which is unique within the Alibaba Cloud account.
    std::shared_ptr<string> groupName_ = nullptr;
    // The resource ID.
    std::shared_ptr<string> id_ = nullptr;
    // Indicates whether the resource is the default resource. Each type of resources has a default resource. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> isDefault_ = nullptr;
    // The tags.
    std::shared_ptr<vector<Models::ListResourcesResponseBodyResourcesLabels>> labels_ = nullptr;
    // The resource name.
    std::shared_ptr<string> name_ = nullptr;
    // **This field is no longer used and will be removed. Use the ResourceType field.
    std::shared_ptr<string> productType_ = nullptr;
    // The quotas.
    std::shared_ptr<vector<Models::ListResourcesResponseBodyResourcesQuotas>> quotas_ = nullptr;
    // The resource type. Valid values:
    // 
    // *   MaxCompute
    // *   DLC
    // *   FLINK
    std::shared_ptr<string> resourceType_ = nullptr;
    // The resource specification.
    Darabonba::Json spec_ = nullptr;
    // The workspace ID.
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIWorkSpace20210204
#endif
