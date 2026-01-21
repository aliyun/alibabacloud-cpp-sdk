// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ATTACHDATABASEACCOUNTSTOUSERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ATTACHDATABASEACCOUNTSTOUSERREQUEST_HPP_
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
  class AttachDatabaseAccountsToUserRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AttachDatabaseAccountsToUserRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Databases, databases_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, AttachDatabaseAccountsToUserRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Databases, databases_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    AttachDatabaseAccountsToUserRequest() = default ;
    AttachDatabaseAccountsToUserRequest(const AttachDatabaseAccountsToUserRequest &) = default ;
    AttachDatabaseAccountsToUserRequest(AttachDatabaseAccountsToUserRequest &&) = default ;
    AttachDatabaseAccountsToUserRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AttachDatabaseAccountsToUserRequest() = default ;
    AttachDatabaseAccountsToUserRequest& operator=(const AttachDatabaseAccountsToUserRequest &) = default ;
    AttachDatabaseAccountsToUserRequest& operator=(AttachDatabaseAccountsToUserRequest &&) = default ;
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
      // The ID of the database that you want to authorize the user to manage.
      shared_ptr<string> databaseId_ {};
    };

    virtual bool empty() const override { return this->databases_ == nullptr
        && this->instanceId_ == nullptr && this->regionId_ == nullptr && this->userId_ == nullptr; };
    // databases Field Functions 
    bool hasDatabases() const { return this->databases_ != nullptr;};
    void deleteDatabases() { this->databases_ = nullptr;};
    inline const vector<AttachDatabaseAccountsToUserRequest::Databases> & getDatabases() const { DARABONBA_PTR_GET_CONST(databases_, vector<AttachDatabaseAccountsToUserRequest::Databases>) };
    inline vector<AttachDatabaseAccountsToUserRequest::Databases> getDatabases() { DARABONBA_PTR_GET(databases_, vector<AttachDatabaseAccountsToUserRequest::Databases>) };
    inline AttachDatabaseAccountsToUserRequest& setDatabases(const vector<AttachDatabaseAccountsToUserRequest::Databases> & databases) { DARABONBA_PTR_SET_VALUE(databases_, databases) };
    inline AttachDatabaseAccountsToUserRequest& setDatabases(vector<AttachDatabaseAccountsToUserRequest::Databases> && databases) { DARABONBA_PTR_SET_RVALUE(databases_, databases) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline AttachDatabaseAccountsToUserRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline AttachDatabaseAccountsToUserRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline AttachDatabaseAccountsToUserRequest& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // An array that consists of database objects.
    // 
    // >  You can specify up to 10 databases and 10 database accounts. The database accounts are not required. If you do not specify a database account, the user is authorized to manage only the databases.
    shared_ptr<vector<AttachDatabaseAccountsToUserRequest::Databases>> databases_ {};
    // The ID of the bastion host whose user you want to grant permissions.
    // 
    // >  You can call the [DescribeInstances](https://help.aliyun.com/document_detail/153281.html) operation to query the ID of the bastion host.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The region ID of the bastion host.
    // 
    // >  For more information about the mapping between region IDs and region names, see [Regions and zones](https://help.aliyun.com/document_detail/40654.html).
    shared_ptr<string> regionId_ {};
    // The ID of the user to be authorized.
    // 
    // >  You can call the [ListUsers](https://help.aliyun.com/document_detail/204522.html) operation to query the user ID.
    // 
    // This parameter is required.
    shared_ptr<string> userId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
