// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCHARTNAMESPACERESPONSEBODYNAMESPACES_HPP_
#define ALIBABACLOUD_MODELS_LISTCHARTNAMESPACERESPONSEBODYNAMESPACES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cr20181201
{
namespace Models
{
  class ListChartNamespaceResponseBodyNamespaces : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListChartNamespaceResponseBodyNamespaces& obj) { 
      DARABONBA_PTR_TO_JSON(AutoCreateRepo, autoCreateRepo_);
      DARABONBA_PTR_TO_JSON(DefaultRepoType, defaultRepoType_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(NamespaceId, namespaceId_);
      DARABONBA_PTR_TO_JSON(NamespaceName, namespaceName_);
      DARABONBA_PTR_TO_JSON(NamespaceStatus, namespaceStatus_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, ListChartNamespaceResponseBodyNamespaces& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoCreateRepo, autoCreateRepo_);
      DARABONBA_PTR_FROM_JSON(DefaultRepoType, defaultRepoType_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(NamespaceId, namespaceId_);
      DARABONBA_PTR_FROM_JSON(NamespaceName, namespaceName_);
      DARABONBA_PTR_FROM_JSON(NamespaceStatus, namespaceStatus_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
    };
    ListChartNamespaceResponseBodyNamespaces() = default ;
    ListChartNamespaceResponseBodyNamespaces(const ListChartNamespaceResponseBodyNamespaces &) = default ;
    ListChartNamespaceResponseBodyNamespaces(ListChartNamespaceResponseBodyNamespaces &&) = default ;
    ListChartNamespaceResponseBodyNamespaces(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListChartNamespaceResponseBodyNamespaces() = default ;
    ListChartNamespaceResponseBodyNamespaces& operator=(const ListChartNamespaceResponseBodyNamespaces &) = default ;
    ListChartNamespaceResponseBodyNamespaces& operator=(ListChartNamespaceResponseBodyNamespaces &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->autoCreateRepo_ != nullptr
        && this->defaultRepoType_ != nullptr && this->instanceId_ != nullptr && this->namespaceId_ != nullptr && this->namespaceName_ != nullptr && this->namespaceStatus_ != nullptr
        && this->resourceGroupId_ != nullptr; };
    // autoCreateRepo Field Functions 
    bool hasAutoCreateRepo() const { return this->autoCreateRepo_ != nullptr;};
    void deleteAutoCreateRepo() { this->autoCreateRepo_ = nullptr;};
    inline bool autoCreateRepo() const { DARABONBA_PTR_GET_DEFAULT(autoCreateRepo_, false) };
    inline ListChartNamespaceResponseBodyNamespaces& setAutoCreateRepo(bool autoCreateRepo) { DARABONBA_PTR_SET_VALUE(autoCreateRepo_, autoCreateRepo) };


    // defaultRepoType Field Functions 
    bool hasDefaultRepoType() const { return this->defaultRepoType_ != nullptr;};
    void deleteDefaultRepoType() { this->defaultRepoType_ = nullptr;};
    inline string defaultRepoType() const { DARABONBA_PTR_GET_DEFAULT(defaultRepoType_, "") };
    inline ListChartNamespaceResponseBodyNamespaces& setDefaultRepoType(string defaultRepoType) { DARABONBA_PTR_SET_VALUE(defaultRepoType_, defaultRepoType) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListChartNamespaceResponseBodyNamespaces& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // namespaceId Field Functions 
    bool hasNamespaceId() const { return this->namespaceId_ != nullptr;};
    void deleteNamespaceId() { this->namespaceId_ = nullptr;};
    inline string namespaceId() const { DARABONBA_PTR_GET_DEFAULT(namespaceId_, "") };
    inline ListChartNamespaceResponseBodyNamespaces& setNamespaceId(string namespaceId) { DARABONBA_PTR_SET_VALUE(namespaceId_, namespaceId) };


    // namespaceName Field Functions 
    bool hasNamespaceName() const { return this->namespaceName_ != nullptr;};
    void deleteNamespaceName() { this->namespaceName_ = nullptr;};
    inline string namespaceName() const { DARABONBA_PTR_GET_DEFAULT(namespaceName_, "") };
    inline ListChartNamespaceResponseBodyNamespaces& setNamespaceName(string namespaceName) { DARABONBA_PTR_SET_VALUE(namespaceName_, namespaceName) };


    // namespaceStatus Field Functions 
    bool hasNamespaceStatus() const { return this->namespaceStatus_ != nullptr;};
    void deleteNamespaceStatus() { this->namespaceStatus_ = nullptr;};
    inline string namespaceStatus() const { DARABONBA_PTR_GET_DEFAULT(namespaceStatus_, "") };
    inline ListChartNamespaceResponseBodyNamespaces& setNamespaceStatus(string namespaceStatus) { DARABONBA_PTR_SET_VALUE(namespaceStatus_, namespaceStatus) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ListChartNamespaceResponseBodyNamespaces& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


  protected:
    // Indicates whether a repository was automatically created when a chart is pushed to the namespace.
    std::shared_ptr<bool> autoCreateRepo_ = nullptr;
    // The default repository type. Valid values:
    // 
    // *   `PUBLIC`: a public repository
    // *   `PRIVATE`: a private repository
    std::shared_ptr<string> defaultRepoType_ = nullptr;
    // The ID of the instance.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The ID of the namespace.
    std::shared_ptr<string> namespaceId_ = nullptr;
    // The name of the namespace.
    std::shared_ptr<string> namespaceName_ = nullptr;
    // The status of the namespace. Valid values:
    // 
    // *   `NORMAL`: The namespace is normal.
    // *   `DELETING`: The namespace is being deleted.
    std::shared_ptr<string> namespaceStatus_ = nullptr;
    // The ID of the resource group to which the instance belongs.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cr20181201
#endif
