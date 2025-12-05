// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DETACHDATABASEACCOUNTSFROMUSERGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DETACHDATABASEACCOUNTSFROMUSERGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DetachDatabaseAccountsFromUserGroupRequestDatabases.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class DetachDatabaseAccountsFromUserGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DetachDatabaseAccountsFromUserGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Databases, databases_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(UserGroupId, userGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, DetachDatabaseAccountsFromUserGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Databases, databases_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(UserGroupId, userGroupId_);
    };
    DetachDatabaseAccountsFromUserGroupRequest() = default ;
    DetachDatabaseAccountsFromUserGroupRequest(const DetachDatabaseAccountsFromUserGroupRequest &) = default ;
    DetachDatabaseAccountsFromUserGroupRequest(DetachDatabaseAccountsFromUserGroupRequest &&) = default ;
    DetachDatabaseAccountsFromUserGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DetachDatabaseAccountsFromUserGroupRequest() = default ;
    DetachDatabaseAccountsFromUserGroupRequest& operator=(const DetachDatabaseAccountsFromUserGroupRequest &) = default ;
    DetachDatabaseAccountsFromUserGroupRequest& operator=(DetachDatabaseAccountsFromUserGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->databases_ == nullptr
        && return this->instanceId_ == nullptr && return this->regionId_ == nullptr && return this->userGroupId_ == nullptr; };
    // databases Field Functions 
    bool hasDatabases() const { return this->databases_ != nullptr;};
    void deleteDatabases() { this->databases_ = nullptr;};
    inline const vector<DetachDatabaseAccountsFromUserGroupRequestDatabases> & databases() const { DARABONBA_PTR_GET_CONST(databases_, vector<DetachDatabaseAccountsFromUserGroupRequestDatabases>) };
    inline vector<DetachDatabaseAccountsFromUserGroupRequestDatabases> databases() { DARABONBA_PTR_GET(databases_, vector<DetachDatabaseAccountsFromUserGroupRequestDatabases>) };
    inline DetachDatabaseAccountsFromUserGroupRequest& setDatabases(const vector<DetachDatabaseAccountsFromUserGroupRequestDatabases> & databases) { DARABONBA_PTR_SET_VALUE(databases_, databases) };
    inline DetachDatabaseAccountsFromUserGroupRequest& setDatabases(vector<DetachDatabaseAccountsFromUserGroupRequestDatabases> && databases) { DARABONBA_PTR_SET_RVALUE(databases_, databases) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DetachDatabaseAccountsFromUserGroupRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DetachDatabaseAccountsFromUserGroupRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // userGroupId Field Functions 
    bool hasUserGroupId() const { return this->userGroupId_ != nullptr;};
    void deleteUserGroupId() { this->userGroupId_ = nullptr;};
    inline string userGroupId() const { DARABONBA_PTR_GET_DEFAULT(userGroupId_, "") };
    inline DetachDatabaseAccountsFromUserGroupRequest& setUserGroupId(string userGroupId) { DARABONBA_PTR_SET_VALUE(userGroupId_, userGroupId) };


  protected:
    // The information about the database.
    std::shared_ptr<vector<DetachDatabaseAccountsFromUserGroupRequestDatabases>> databases_ = nullptr;
    // The bastion host ID.
    // 
    // > You can call the [DescribeInstances](https://help.aliyun.com/document_detail/153281.html) operation to query the bastion host ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The region ID of the bastion host.
    // 
    // > For more information about the mapping between region IDs and region names, see [Regions and zones](https://help.aliyun.com/document_detail/40654.html).
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the user group from which you want to revoke permissions on databases and database accounts.
    // 
    // > You can call the [ListUserGroups](https://help.aliyun.com/document_detail/204509.html) operation to query the ID of the user group.
    // 
    // This parameter is required.
    std::shared_ptr<string> userGroupId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
