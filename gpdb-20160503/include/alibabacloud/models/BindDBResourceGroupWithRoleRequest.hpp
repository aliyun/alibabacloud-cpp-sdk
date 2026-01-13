// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BINDDBRESOURCEGROUPWITHROLEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BINDDBRESOURCEGROUPWITHROLEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class BindDBResourceGroupWithRoleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BindDBResourceGroupWithRoleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupName, resourceGroupName_);
      DARABONBA_PTR_TO_JSON(RoleList, roleList_);
    };
    friend void from_json(const Darabonba::Json& j, BindDBResourceGroupWithRoleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupName, resourceGroupName_);
      DARABONBA_PTR_FROM_JSON(RoleList, roleList_);
    };
    BindDBResourceGroupWithRoleRequest() = default ;
    BindDBResourceGroupWithRoleRequest(const BindDBResourceGroupWithRoleRequest &) = default ;
    BindDBResourceGroupWithRoleRequest(BindDBResourceGroupWithRoleRequest &&) = default ;
    BindDBResourceGroupWithRoleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BindDBResourceGroupWithRoleRequest() = default ;
    BindDBResourceGroupWithRoleRequest& operator=(const BindDBResourceGroupWithRoleRequest &) = default ;
    BindDBResourceGroupWithRoleRequest& operator=(BindDBResourceGroupWithRoleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBInstanceId_ == nullptr
        && this->ownerId_ == nullptr && this->resourceGroupName_ == nullptr && this->roleList_ == nullptr; };
    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline BindDBResourceGroupWithRoleRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline BindDBResourceGroupWithRoleRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceGroupName Field Functions 
    bool hasResourceGroupName() const { return this->resourceGroupName_ != nullptr;};
    void deleteResourceGroupName() { this->resourceGroupName_ = nullptr;};
    inline string getResourceGroupName() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupName_, "") };
    inline BindDBResourceGroupWithRoleRequest& setResourceGroupName(string resourceGroupName) { DARABONBA_PTR_SET_VALUE(resourceGroupName_, resourceGroupName) };


    // roleList Field Functions 
    bool hasRoleList() const { return this->roleList_ != nullptr;};
    void deleteRoleList() { this->roleList_ = nullptr;};
    inline const vector<string> & getRoleList() const { DARABONBA_PTR_GET_CONST(roleList_, vector<string>) };
    inline vector<string> getRoleList() { DARABONBA_PTR_GET(roleList_, vector<string>) };
    inline BindDBResourceGroupWithRoleRequest& setRoleList(const vector<string> & roleList) { DARABONBA_PTR_SET_VALUE(roleList_, roleList) };
    inline BindDBResourceGroupWithRoleRequest& setRoleList(vector<string> && roleList) { DARABONBA_PTR_SET_RVALUE(roleList_, roleList) };


  protected:
    // The instance ID.
    // 
    // >  You can call the [DescribeDBInstances](https://help.aliyun.com/document_detail/86911.html) operation to query the information about all AnalyticDB for PostgreSQL instances within a region, including instance IDs.
    // 
    // This parameter is required.
    shared_ptr<string> DBInstanceId_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The name of the resource group.
    // 
    // This parameter is required.
    shared_ptr<string> resourceGroupName_ {};
    // The roles.
    // 
    // This parameter is required.
    shared_ptr<vector<string>> roleList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
