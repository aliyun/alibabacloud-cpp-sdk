// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UNBINDDBRESOURCEGROUPWITHROLESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UNBINDDBRESOURCEGROUPWITHROLESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class UnbindDBResourceGroupWithRoleShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UnbindDBResourceGroupWithRoleShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupName, resourceGroupName_);
      DARABONBA_PTR_TO_JSON(RoleList, roleListShrink_);
    };
    friend void from_json(const Darabonba::Json& j, UnbindDBResourceGroupWithRoleShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupName, resourceGroupName_);
      DARABONBA_PTR_FROM_JSON(RoleList, roleListShrink_);
    };
    UnbindDBResourceGroupWithRoleShrinkRequest() = default ;
    UnbindDBResourceGroupWithRoleShrinkRequest(const UnbindDBResourceGroupWithRoleShrinkRequest &) = default ;
    UnbindDBResourceGroupWithRoleShrinkRequest(UnbindDBResourceGroupWithRoleShrinkRequest &&) = default ;
    UnbindDBResourceGroupWithRoleShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UnbindDBResourceGroupWithRoleShrinkRequest() = default ;
    UnbindDBResourceGroupWithRoleShrinkRequest& operator=(const UnbindDBResourceGroupWithRoleShrinkRequest &) = default ;
    UnbindDBResourceGroupWithRoleShrinkRequest& operator=(UnbindDBResourceGroupWithRoleShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBInstanceId_ == nullptr
        && return this->ownerId_ == nullptr && return this->resourceGroupName_ == nullptr && return this->roleListShrink_ == nullptr; };
    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string DBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline UnbindDBResourceGroupWithRoleShrinkRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline UnbindDBResourceGroupWithRoleShrinkRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceGroupName Field Functions 
    bool hasResourceGroupName() const { return this->resourceGroupName_ != nullptr;};
    void deleteResourceGroupName() { this->resourceGroupName_ = nullptr;};
    inline string resourceGroupName() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupName_, "") };
    inline UnbindDBResourceGroupWithRoleShrinkRequest& setResourceGroupName(string resourceGroupName) { DARABONBA_PTR_SET_VALUE(resourceGroupName_, resourceGroupName) };


    // roleListShrink Field Functions 
    bool hasRoleListShrink() const { return this->roleListShrink_ != nullptr;};
    void deleteRoleListShrink() { this->roleListShrink_ = nullptr;};
    inline string roleListShrink() const { DARABONBA_PTR_GET_DEFAULT(roleListShrink_, "") };
    inline UnbindDBResourceGroupWithRoleShrinkRequest& setRoleListShrink(string roleListShrink) { DARABONBA_PTR_SET_VALUE(roleListShrink_, roleListShrink) };


  protected:
    // The instance ID.
    // 
    // >  You can call the [DescribeDBInstances](https://help.aliyun.com/document_detail/86911.html) operation to query the information about all AnalyticDB for PostgreSQL instances within a region, including instance IDs.
    // 
    // This parameter is required.
    std::shared_ptr<string> DBInstanceId_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The name of the resource group.
    // 
    // This parameter is required.
    std::shared_ptr<string> resourceGroupName_ = nullptr;
    // The roles.
    // 
    // This parameter is required.
    std::shared_ptr<string> roleListShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
