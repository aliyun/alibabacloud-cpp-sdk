// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYDEFENSERESOURCEGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYDEFENSERESOURCEGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class ModifyDefenseResourceGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyDefenseResourceGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AddList, addList_);
      DARABONBA_PTR_TO_JSON(DeleteList, deleteList_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyDefenseResourceGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AddList, addList_);
      DARABONBA_PTR_FROM_JSON(DeleteList, deleteList_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
    };
    ModifyDefenseResourceGroupRequest() = default ;
    ModifyDefenseResourceGroupRequest(const ModifyDefenseResourceGroupRequest &) = default ;
    ModifyDefenseResourceGroupRequest(ModifyDefenseResourceGroupRequest &&) = default ;
    ModifyDefenseResourceGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyDefenseResourceGroupRequest() = default ;
    ModifyDefenseResourceGroupRequest& operator=(const ModifyDefenseResourceGroupRequest &) = default ;
    ModifyDefenseResourceGroupRequest& operator=(ModifyDefenseResourceGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->addList_ != nullptr
        && this->deleteList_ != nullptr && this->description_ != nullptr && this->groupName_ != nullptr && this->instanceId_ != nullptr && this->regionId_ != nullptr
        && this->resourceManagerResourceGroupId_ != nullptr; };
    // addList Field Functions 
    bool hasAddList() const { return this->addList_ != nullptr;};
    void deleteAddList() { this->addList_ = nullptr;};
    inline string addList() const { DARABONBA_PTR_GET_DEFAULT(addList_, "") };
    inline ModifyDefenseResourceGroupRequest& setAddList(string addList) { DARABONBA_PTR_SET_VALUE(addList_, addList) };


    // deleteList Field Functions 
    bool hasDeleteList() const { return this->deleteList_ != nullptr;};
    void deleteDeleteList() { this->deleteList_ = nullptr;};
    inline string deleteList() const { DARABONBA_PTR_GET_DEFAULT(deleteList_, "") };
    inline ModifyDefenseResourceGroupRequest& setDeleteList(string deleteList) { DARABONBA_PTR_SET_VALUE(deleteList_, deleteList) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ModifyDefenseResourceGroupRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string groupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline ModifyDefenseResourceGroupRequest& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ModifyDefenseResourceGroupRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyDefenseResourceGroupRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceManagerResourceGroupId Field Functions 
    bool hasResourceManagerResourceGroupId() const { return this->resourceManagerResourceGroupId_ != nullptr;};
    void deleteResourceManagerResourceGroupId() { this->resourceManagerResourceGroupId_ = nullptr;};
    inline string resourceManagerResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceManagerResourceGroupId_, "") };
    inline ModifyDefenseResourceGroupRequest& setResourceManagerResourceGroupId(string resourceManagerResourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceManagerResourceGroupId_, resourceManagerResourceGroupId) };


  protected:
    // The protected objects that you want to add to the protected object group. Separate the protected objects with commas (,). If you leave this parameter empty, no protected objects are added to the protected object group.
    std::shared_ptr<string> addList_ = nullptr;
    // The protected objects that you want to remove from the protected object group. Separate the protected objects with commas (,). If you leave this parameter empty, no protected objects are removed from the protected object group.
    std::shared_ptr<string> deleteList_ = nullptr;
    // The description of the protected object group.
    std::shared_ptr<string> description_ = nullptr;
    // The name of the protected object group whose configurations you want to modify.
    // 
    // This parameter is required.
    std::shared_ptr<string> groupName_ = nullptr;
    // The ID of the Web Application Firewall (WAF) instance.
    // 
    // >  You can call the [DescribeInstance](https://help.aliyun.com/document_detail/433756.html) operation to obtain the ID of the WAF instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The region where the WAF instance resides. Valid values:
    // 
    // *   **cn-hangzhou:** the Chinese mainland.
    // *   **ap-southeast-1:** outside the Chinese mainland.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the resource group.
    std::shared_ptr<string> resourceManagerResourceGroupId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
