// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYPARAMETERGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYPARAMETERGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class ModifyParameterGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyParameterGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ModifyMode, modifyMode_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ParameterGroupDesc, parameterGroupDesc_);
      DARABONBA_PTR_TO_JSON(ParameterGroupId, parameterGroupId_);
      DARABONBA_PTR_TO_JSON(ParameterGroupName, parameterGroupName_);
      DARABONBA_PTR_TO_JSON(Parameters, parameters_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyParameterGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ModifyMode, modifyMode_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ParameterGroupDesc, parameterGroupDesc_);
      DARABONBA_PTR_FROM_JSON(ParameterGroupId, parameterGroupId_);
      DARABONBA_PTR_FROM_JSON(ParameterGroupName, parameterGroupName_);
      DARABONBA_PTR_FROM_JSON(Parameters, parameters_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    ModifyParameterGroupRequest() = default ;
    ModifyParameterGroupRequest(const ModifyParameterGroupRequest &) = default ;
    ModifyParameterGroupRequest(ModifyParameterGroupRequest &&) = default ;
    ModifyParameterGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyParameterGroupRequest() = default ;
    ModifyParameterGroupRequest& operator=(const ModifyParameterGroupRequest &) = default ;
    ModifyParameterGroupRequest& operator=(ModifyParameterGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->modifyMode_ == nullptr
        && this->ownerId_ == nullptr && this->parameterGroupDesc_ == nullptr && this->parameterGroupId_ == nullptr && this->parameterGroupName_ == nullptr && this->parameters_ == nullptr
        && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr; };
    // modifyMode Field Functions 
    bool hasModifyMode() const { return this->modifyMode_ != nullptr;};
    void deleteModifyMode() { this->modifyMode_ = nullptr;};
    inline string getModifyMode() const { DARABONBA_PTR_GET_DEFAULT(modifyMode_, "") };
    inline ModifyParameterGroupRequest& setModifyMode(string modifyMode) { DARABONBA_PTR_SET_VALUE(modifyMode_, modifyMode) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ModifyParameterGroupRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // parameterGroupDesc Field Functions 
    bool hasParameterGroupDesc() const { return this->parameterGroupDesc_ != nullptr;};
    void deleteParameterGroupDesc() { this->parameterGroupDesc_ = nullptr;};
    inline string getParameterGroupDesc() const { DARABONBA_PTR_GET_DEFAULT(parameterGroupDesc_, "") };
    inline ModifyParameterGroupRequest& setParameterGroupDesc(string parameterGroupDesc) { DARABONBA_PTR_SET_VALUE(parameterGroupDesc_, parameterGroupDesc) };


    // parameterGroupId Field Functions 
    bool hasParameterGroupId() const { return this->parameterGroupId_ != nullptr;};
    void deleteParameterGroupId() { this->parameterGroupId_ = nullptr;};
    inline string getParameterGroupId() const { DARABONBA_PTR_GET_DEFAULT(parameterGroupId_, "") };
    inline ModifyParameterGroupRequest& setParameterGroupId(string parameterGroupId) { DARABONBA_PTR_SET_VALUE(parameterGroupId_, parameterGroupId) };


    // parameterGroupName Field Functions 
    bool hasParameterGroupName() const { return this->parameterGroupName_ != nullptr;};
    void deleteParameterGroupName() { this->parameterGroupName_ = nullptr;};
    inline string getParameterGroupName() const { DARABONBA_PTR_GET_DEFAULT(parameterGroupName_, "") };
    inline ModifyParameterGroupRequest& setParameterGroupName(string parameterGroupName) { DARABONBA_PTR_SET_VALUE(parameterGroupName_, parameterGroupName) };


    // parameters Field Functions 
    bool hasParameters() const { return this->parameters_ != nullptr;};
    void deleteParameters() { this->parameters_ = nullptr;};
    inline string getParameters() const { DARABONBA_PTR_GET_DEFAULT(parameters_, "") };
    inline ModifyParameterGroupRequest& setParameters(string parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyParameterGroupRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ModifyParameterGroupRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ModifyParameterGroupRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ModifyParameterGroupRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    // The modification mode of the parameter template. Valid values:
    // * **Collectivity**: adds or modifies parameters. This is the default value.
    // >The parameters specified in the **Parameters** parameter are added to the current parameter template, or the existing parameters in the current parameter template are modified. Other parameters in the current parameter template remain unaffected.
    // 
    // * **Individual**: overwrites parameters.
    // >The content in the current parameter template is replaced with the content specified in the **Parameters** parameter.
    shared_ptr<string> modifyMode_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The description of the parameter template. The description must be 0 to 200 characters in length.
    // >If you do not specify this parameter, the original description of the parameter template is retained.
    shared_ptr<string> parameterGroupDesc_ {};
    // The ID of the parameter template. You can call the DescribeParameterGroups operation to query the ID of the parameter template.
    // 
    // This parameter is required.
    shared_ptr<string> parameterGroupId_ {};
    // The name of the parameter template.
    // * The name must start with a letter and can contain letters, digits, periods (.), and underscores (_).
    // * The name must be 8 to 64 characters in length.
    // 
    // >If you do not specify this parameter, the original name of the parameter template is retained.
    shared_ptr<string> parameterGroupName_ {};
    // The JSON string of parameters and values. Format: {"Parameter 1":"Value 1","Parameter 2":"Value 2"...}. For more information about the parameters that can be modified, see [Set the parameters of an ApsaraDB RDS for MySQL instance](https://help.aliyun.com/document_detail/96063.html) or [Set the parameters of an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/96751.html).
    // 
    // > * If the **ModifyMode** parameter is set to **Individual**, the specified parameters overwrite the original parameters in the parameter template.
    // > * If the **ModifyMode** parameter is set to **Collectivity**, the specified parameters are added to or modified in the original parameter template.
    // > * If you do not specify this parameter, the original parameters are retained.
    shared_ptr<string> parameters_ {};
    // The region ID. You can call the DescribeRegions operation to query the region ID.
    // >The region of a parameter template cannot be modified. You can call the CloneParameterGroup operation to copy the parameter template to another region.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The ID of the resource group. You can call the DescribeDBInstanceAttribute operation to query the ID of the resource group.
    shared_ptr<string> resourceGroupId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
