// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYCLUSTERNODEPOOLREQUESTNODEPOOLINFO_HPP_
#define ALIBABACLOUD_MODELS_MODIFYCLUSTERNODEPOOLREQUESTNODEPOOLINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class ModifyClusterNodePoolRequestNodepoolInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyClusterNodePoolRequestNodepoolInfo& obj) { 
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(resource_group_id, resourceGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyClusterNodePoolRequestNodepoolInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(resource_group_id, resourceGroupId_);
    };
    ModifyClusterNodePoolRequestNodepoolInfo() = default ;
    ModifyClusterNodePoolRequestNodepoolInfo(const ModifyClusterNodePoolRequestNodepoolInfo &) = default ;
    ModifyClusterNodePoolRequestNodepoolInfo(ModifyClusterNodePoolRequestNodepoolInfo &&) = default ;
    ModifyClusterNodePoolRequestNodepoolInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyClusterNodePoolRequestNodepoolInfo() = default ;
    ModifyClusterNodePoolRequestNodepoolInfo& operator=(const ModifyClusterNodePoolRequestNodepoolInfo &) = default ;
    ModifyClusterNodePoolRequestNodepoolInfo& operator=(ModifyClusterNodePoolRequestNodepoolInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->name_ != nullptr
        && this->resourceGroupId_ != nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ModifyClusterNodePoolRequestNodepoolInfo& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ModifyClusterNodePoolRequestNodepoolInfo& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


  protected:
    // The name of the node pool.
    // 
    // The name must be 1 to 63 characters in length, and can contain digits, letters, and hyphens (-). It cannot start with a hyphen (-).
    std::shared_ptr<string> name_ = nullptr;
    // The ID of the resource group to which the node pool belongs. Instances that are added to the node pool belong to this resource group.
    // 
    // Each resource can belong only to one resource group. You can regard a resource group as a project, an application, or an organization based on your business scenarios.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
