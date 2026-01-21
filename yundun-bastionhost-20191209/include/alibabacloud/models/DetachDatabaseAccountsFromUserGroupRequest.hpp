// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DETACHDATABASEACCOUNTSFROMUSERGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DETACHDATABASEACCOUNTSFROMUSERGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    class Databases : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Databases& obj) { 
        DARABONBA_PTR_TO_JSON(DatabaseAccountIds, databaseAccountIds_);
        DARABONBA_PTR_TO_JSON(DatabaseId, databaseId_);
      };
      friend void from_json(const Darabonba::Json& j, Databases& obj) { 
        DARABONBA_PTR_FROM_JSON(DatabaseAccountIds, databaseAccountIds_);
        DARABONBA_PTR_FROM_JSON(DatabaseId, databaseId_);
      };
      Databases() = default ;
      Databases(const Databases &) = default ;
      Databases(Databases &&) = default ;
      Databases(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Databases() = default ;
      Databases& operator=(const Databases &) = default ;
      Databases& operator=(Databases &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->databaseAccountIds_ == nullptr
        && this->databaseId_ == nullptr; };
      // databaseAccountIds Field Functions 
      bool hasDatabaseAccountIds() const { return this->databaseAccountIds_ != nullptr;};
      void deleteDatabaseAccountIds() { this->databaseAccountIds_ = nullptr;};
      inline const vector<string> & getDatabaseAccountIds() const { DARABONBA_PTR_GET_CONST(databaseAccountIds_, vector<string>) };
      inline vector<string> getDatabaseAccountIds() { DARABONBA_PTR_GET(databaseAccountIds_, vector<string>) };
      inline Databases& setDatabaseAccountIds(const vector<string> & databaseAccountIds) { DARABONBA_PTR_SET_VALUE(databaseAccountIds_, databaseAccountIds) };
      inline Databases& setDatabaseAccountIds(vector<string> && databaseAccountIds) { DARABONBA_PTR_SET_RVALUE(databaseAccountIds_, databaseAccountIds) };


      // databaseId Field Functions 
      bool hasDatabaseId() const { return this->databaseId_ != nullptr;};
      void deleteDatabaseId() { this->databaseId_ = nullptr;};
      inline string getDatabaseId() const { DARABONBA_PTR_GET_DEFAULT(databaseId_, "") };
      inline Databases& setDatabaseId(string databaseId) { DARABONBA_PTR_SET_VALUE(databaseId_, databaseId) };


    protected:
      // An array that consists of database account IDs.
      shared_ptr<vector<string>> databaseAccountIds_ {};
      // The ID of the database on which the permissions are to be revoked.
      shared_ptr<string> databaseId_ {};
    };

    virtual bool empty() const override { return this->databases_ == nullptr
        && this->instanceId_ == nullptr && this->regionId_ == nullptr && this->userGroupId_ == nullptr; };
    // databases Field Functions 
    bool hasDatabases() const { return this->databases_ != nullptr;};
    void deleteDatabases() { this->databases_ = nullptr;};
    inline const vector<DetachDatabaseAccountsFromUserGroupRequest::Databases> & getDatabases() const { DARABONBA_PTR_GET_CONST(databases_, vector<DetachDatabaseAccountsFromUserGroupRequest::Databases>) };
    inline vector<DetachDatabaseAccountsFromUserGroupRequest::Databases> getDatabases() { DARABONBA_PTR_GET(databases_, vector<DetachDatabaseAccountsFromUserGroupRequest::Databases>) };
    inline DetachDatabaseAccountsFromUserGroupRequest& setDatabases(const vector<DetachDatabaseAccountsFromUserGroupRequest::Databases> & databases) { DARABONBA_PTR_SET_VALUE(databases_, databases) };
    inline DetachDatabaseAccountsFromUserGroupRequest& setDatabases(vector<DetachDatabaseAccountsFromUserGroupRequest::Databases> && databases) { DARABONBA_PTR_SET_RVALUE(databases_, databases) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DetachDatabaseAccountsFromUserGroupRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DetachDatabaseAccountsFromUserGroupRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // userGroupId Field Functions 
    bool hasUserGroupId() const { return this->userGroupId_ != nullptr;};
    void deleteUserGroupId() { this->userGroupId_ = nullptr;};
    inline string getUserGroupId() const { DARABONBA_PTR_GET_DEFAULT(userGroupId_, "") };
    inline DetachDatabaseAccountsFromUserGroupRequest& setUserGroupId(string userGroupId) { DARABONBA_PTR_SET_VALUE(userGroupId_, userGroupId) };


  protected:
    // The information about the database.
    shared_ptr<vector<DetachDatabaseAccountsFromUserGroupRequest::Databases>> databases_ {};
    // The bastion host ID.
    // 
    // > You can call the [DescribeInstances](https://help.aliyun.com/document_detail/153281.html) operation to query the bastion host ID.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The region ID of the bastion host.
    // 
    // > For more information about the mapping between region IDs and region names, see [Regions and zones](https://help.aliyun.com/document_detail/40654.html).
    shared_ptr<string> regionId_ {};
    // The ID of the user group from which you want to revoke permissions on databases and database accounts.
    // 
    // > You can call the [ListUserGroups](https://help.aliyun.com/document_detail/204509.html) operation to query the ID of the user group.
    // 
    // This parameter is required.
    shared_ptr<string> userGroupId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
